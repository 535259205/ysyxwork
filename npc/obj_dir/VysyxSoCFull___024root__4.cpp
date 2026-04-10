// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull___024root___act_comb__TOP__410(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__410\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__OUT1 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_22___05Freg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__411(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__411\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_2___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_2___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)))))) 
                         | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_2___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_2___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_2___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_2___05Freg_p__DOT__n0))))))) 
                           | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_2___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_2___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                 & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_2___05Freg_p__DOT__n0)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05Freg_p__DOT__n0)))))))) 
                    & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_150)))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_2___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_2___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171)))))) 
                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_2___05Freg_p__DOT__n0)) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_2___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_2___05Freg_p__DOT__n0) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0))) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv)) 
                                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05Freg_p__DOT__n0)) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))))))) 
                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_2___05Freg_p__DOT__n0)) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y)))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_2___05Freg_p__DOT__n0)))) 
                             | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_2___05Freg_p__DOT__n0)) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_2___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_2___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__412(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__412\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_7___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_7___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_7___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413)))) 
                             & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_7___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_7___05Freg_p__DOT__n0))))))) 
                         | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_7___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))))))) 
                        | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_7___05FMUX2X0P5H7L_B_Y) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_7___05FMUX2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax))) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_7___05FNAND2X0P5H7L_A_1_Y_AND2X1H7L_A__DOT__B) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_7___05Freg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_150))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_7___05Freg_p__DOT__n0)))))))))) 
                    & (~ (((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_7___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428)))))) 
                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_7___05Freg_p__DOT__n0)) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_7___05Freg_p__DOT__n0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_7___05Freg_p__DOT__n0))))) 
                          | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FNAND3BX0P5H7L_C_Y_OAI211X1P4H7L_C0_B0_NAND3X0P5H7L_Y__DOT__B) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_7___05FMUX2X0P5H7L_A_Y) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_7___05Freg_p__DOT__n0))))))) 
                             | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y_B) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y__DOT__Ax))) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_AND2X1H7L_A__DOT__A) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_7___05Freg_p__DOT__n0)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__413(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__413\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_5___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_5___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_5___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_5___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_5___05Freg_p__DOT__n0))))))) 
                         | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_5___05Freg_p__DOT__n0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_5___05FAO222X0P5H7L_B1__DOT__OUT1) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_5___05FAO222X0P5H7L_B1__DOT__OUT2)))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_5___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_5___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_5___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_5___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402)))))) 
                           | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_5___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368))) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_5___05Freg_p__DOT__n0)))) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_5___05Freg_p__DOT__n0))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_5___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))))))) 
                    & (~ (((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_5___05Freg_p__DOT__n0)) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_5___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_5___05Freg_p__DOT__n0)))) 
                           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_5___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_5___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_5___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_5___05Freg_p__DOT__n0)))))) 
                          | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_231)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_5___05FMUX2X0P5H7L_B_Y)))) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_5___05FNAND2X0P5H7L_A_1_Y_AND2X1H7L_B__DOT__A) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)) 
                                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_5___05Freg_p__DOT__n0)))))) 
                             | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_5___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_5___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_5___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_5___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__414(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__414\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxjlBu4B3QhsIMcWRng2g5z9SQzAJphxKgZzoLyjq__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_14___05Freg_p__DOT__n0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code_4___05FOR2X1P4H7L_A_Y_INVX0P5H7L_A__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_INVX0P5H7L_A__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__OUT0 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y)) 
               | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y)))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__A0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwCy6jZu7AGojsJde1Yr8WIJstWeErOEooYk6nWAP__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__A 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z__DOT__Ax)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__B0) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__OUT0));
}

void VysyxSoCFull___024root___act_comb__TOP__415(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__415\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_mret_INVX0P5H7L_Y__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z__DOT__Ax)) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y)) 
                       | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_A_NAND2X0P5H7L_Y__DOT__B) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_INVX0P5H7L_A__DOT__A))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z__DOT__Ax)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_NAND2X0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax))) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_mret_INVX0P5H7L_Y__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_mret_INVX0P5H7L_Y__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_mret_INVX0P5H7L_Y__DOT__Y)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_1_Z_ICGX0P5H7L_E__DOT__E 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_NAND2X0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_Z_ICGX0P5H7L_E__DOT__E 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_NAND2X0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_2__DOT__Y)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_Y_ICGX0P5H7L_E__DOT__E 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_NAND2X0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y)) 
                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_ICGX0P5H7L_E__DOT__E 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_NAND2X0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_vaild_reg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1) 
                    | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_C_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X6H7L_B_A_INVX0P5H7L_A__DOT__Y)) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X0P5H7L_A_Y_NAND2X0P5H7L_B_A_INVX0P5H7L_Y__DOT__Y)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_0___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_1___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_27___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_27___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_27___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_2___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_2___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_2___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_12___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_12___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_12___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_19___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_19___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_19___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_3___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_3___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_3___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_4___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_10___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_10___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_10___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_6___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_13___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_13___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_13___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_8___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_8___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_8___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_11___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_11___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_11___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_23___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_23___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_23___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_24___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_24___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_24___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_26___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_26___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_26___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_30___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_30___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_30___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_14___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_14___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_14___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_15___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_15___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_15___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_17___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_17___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_25___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_25___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_25___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_28___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_28___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_28___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_29___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_29___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_29___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_22___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_22___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_22___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_9___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_9___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_7___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_7___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_7___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_21___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_21___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_18___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_18___05Freg_p__DOT__n0))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_18___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_31___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_31___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_31___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_20___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_20___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_20___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_16___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05FNAND2X0P5H7L_A_B_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_16___05Freg_p__DOT__n0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_16___05Freg_p__DOT__n0))))));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_1_Z_ICGX0P5H7L_E__DOT__E) 
         & (~ (IData)(vlSelfRef.clock)))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_1_Z_ICGX0P5H7L_E__DOT__P0001 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_1_Z_ICGX0P5H7L_E__DOT__E)) 
               & (~ (IData)(vlSelfRef.clock))))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_1_Z_ICGX0P5H7L_E__DOT__P0001 = 0U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_Z_ICGX0P5H7L_E__DOT__E) 
         & (~ (IData)(vlSelfRef.clock)))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_Z_ICGX0P5H7L_E__DOT__P0001 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_Z_ICGX0P5H7L_E__DOT__E)) 
               & (~ (IData)(vlSelfRef.clock))))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_Z_ICGX0P5H7L_E__DOT__P0001 = 0U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_Y_ICGX0P5H7L_E__DOT__E) 
         & (~ (IData)(vlSelfRef.clock)))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_Y_ICGX0P5H7L_E__DOT__P0001 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_Y_ICGX0P5H7L_E__DOT__E)) 
               & (~ (IData)(vlSelfRef.clock))))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_Y_ICGX0P5H7L_E__DOT__P0001 = 0U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_ICGX0P5H7L_E__DOT__E) 
         & (~ (IData)(vlSelfRef.clock)))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_ICGX0P5H7L_E__DOT__P0001 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_ICGX0P5H7L_E__DOT__E)) 
               & (~ (IData)(vlSelfRef.clock))))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_ICGX0P5H7L_E__DOT__P0001 = 0U;
    }
}

void VysyxSoCFull___024root___act_comb__TOP__416(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__416\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_44 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_C_NOR2X0P5H7L_Y_A_INVX0P5H7L_A__DOT__Y)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code_4___05FOR2X1P4H7L_A_Y_INVX0P5H7L_A__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshj5Ur0BpdOHVePWZaLlfg6GyfAeEAJod6qSBBLtBe__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_C_NOR2X0P5H7L_Y_A_INVX0P5H7L_A__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh20jFoa0E2k0GHiIA4H4OaDk4xlm2ePPIXgDBKHAs__DOT__Y));
    vlSelfRef.__VdfgRegularize_he50b618e_0_476 = (1U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y)) 
                                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh20jFoa0E2k0GHiIA4H4OaDk4xlm2ePPIXgDBKHAs__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__417(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__417\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_C_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_C_NOR2X0P5H7L_Y_A_INVX0P5H7L_A__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_AND2X1H7L_Y__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_C_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshBr1cIe0F6SjMAkYklUfaDLv3PvXXe8EgFcaH3Btd__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshj5Ur0BpdOHVePWZaLlfg6GyfAeEAJod6qSBBLtBe__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshFXmmKmei8u7ncOWxaEa4uYzBm70wxNBMpeD8Y44l__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshBr1cIe0F6SjMAkYklUfaDLv3PvXXe8EgFcaH3Btd__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__418(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__418\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ar_size_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_NAND2X0P5H7L_A__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__419(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__419\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshizxP7VhtCdUnygTSeAJu8RhlvpzxczLwvtBTkb0x__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh2BtrE9NIbuwXyrVWYKVVwoQCGKnXB1O0HQAa9Ki8__DOT__Y) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX2P5H7L_Y__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__420(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__420\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshyXVvIsgYIOmF2B9l0cnAv3BK5e0AnNwo1WDqhvNy__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshbVzjf50nlApRGAeFzxploBWCWxpPIIWBwEOqBBKn__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0)));
}

void VysyxSoCFull___024root___act_comb__TOP__421(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__421\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__422(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__422\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1 
        = (1U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_14___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)) 
                     | ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_14___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_14___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)))) 
                             & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_14___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05FAOI33X0P5H7L_A0__DOT__A2)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_14___05Freg_p__DOT__n0)))))) 
                            & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_14___05Freg_p__DOT__n0)))) 
                               & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_14___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_14___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))))))) 
                        | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_14___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_14___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_14___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_14___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A))))) 
                           | (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_14___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_14___05Freg_p__DOT__n0))))) 
                                 & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_14___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_14___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))))))))) 
                 & ((((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_14___05Freg_p__DOT__n0))) 
                      & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_14___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_14___05Freg_p__DOT__n0))))) 
                     & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_14___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_14___05Freg_p__DOT__n0)))) 
                        & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_14___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))) 
                           & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_14___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)))))) 
                    & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X0P5H7L_C0__DOT__outA) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X0P5H7L_C0__DOT__outB)))) 
                       & (~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_14___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))) 
                             | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_14___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_14___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__423(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__423\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_210 = (1U 
                                                  & (((~ 
                                                       (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_13___05Freg_p__DOT__n0)) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                                           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_13___05Freg_p__DOT__n0)) 
                                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_13___05FAO221X0P5H7L_A0__DOT__OUT0) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_13___05FAO221X0P5H7L_A0__DOT__OUT1))) 
                                                     | ((~ 
                                                         (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_13___05Freg_p__DOT__n0)) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_13___05Freg_p__DOT__n0)))))) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_13___05FAO221X0P5H7L_A0__DOT__OUT0) 
                                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_13___05FAO221X0P5H7L_A0__DOT__OUT1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__424(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__424\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1 
        = (1U & ((~ ((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_2___05Freg_p__DOT__n0)) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX0P5H7L_Y__DOT__Y) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_2___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))) 
                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_2___05FNAND3X0P5H7L_B_Y_NOR2BX1H7L_AN__DOT__Ax)) 
                            & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                               & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_2___05Freg_p__DOT__n0))))))))) 
                     | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_2___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__C0_inv)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_2___05Freg_p__DOT__n0))))) 
                            & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_2___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_2___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05FAOI22X0P5H7L_B1_Y_NOR4BBX4H7L_AN__DOT__Bx) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05FAOI22X0P5H7L_B1_Y_NOR4BBX4H7L_AN__DOT__Ax))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_2___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & (~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_2___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)))) 
                               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_2___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05Freg_p__DOT__n0)))))) 
                              & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05FAOI33X0P5H7L_B2__DOT__B0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_2___05Freg_p__DOT__n0))) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_2___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)))) 
                                 & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_2___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05FAOI33X0P5H7L_B2__DOT__B0) 
                                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05Freg_p__DOT__n0)))))))) 
                          | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_2___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_2___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)))))) 
                             | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_2___05Freg_p__DOT__n0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_2___05FAO222X0P5H7L_B1__DOT__OUT1) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_2___05FAO222X0P5H7L_B1__DOT__OUT2)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__425(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__425\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_3___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                  & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_3___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))) 
                          | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_3___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_3___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)))))) 
                         | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_3___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_3___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)))) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_3___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_3___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))))) 
                     & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_3___05FMUXI2X0P5H7L_A__DOT__YN))))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FAOI221X1H7L_A0__DOT__outA) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FAOI221X1H7L_A0__DOT__outB)))) 
                        & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_3___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_3___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_3___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))))))) 
                 & (((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_3___05Freg_p__DOT__n0)) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAOI222X0P7H7L_B1__DOT__outB) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAOI222X0P7H7L_B1__DOT__outC)))) 
                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_3___05Freg_p__DOT__n0)))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_3___05Freg_p__DOT__n0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_3___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))))) 
                    & (((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_3___05Freg_p__DOT__n0))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_3___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_3___05Freg_p__DOT__n0))))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_3___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_3___05Freg_p__DOT__n0)))) 
                          & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_3___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_3___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__426(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__426\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_16___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                  & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_16___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_16___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))) 
                          | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_16___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138))))) 
                         | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_16___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_16___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_16___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_16___05Freg_p__DOT__n0))))))))) 
                     & (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_16___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                         & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_16___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_16___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))))) 
                        & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_16___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_16___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_16___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_16___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)))))))) 
                 & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_16___05FAOI222X0P5H7L_A0__DOT__outA) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_16___05FAOI222X0P5H7L_A0__DOT__outB) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_16___05Freg_p__DOT__n0))))) 
                     & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_16___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_16___05Freg_p__DOT__n0)))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_16___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_16___05Freg_p__DOT__n0)))))) 
                    & (((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_16___05Freg_p__DOT__n0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_16___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))) 
                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_16___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_16___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_16___05Freg_p__DOT__n0)))) 
                          & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_16___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_16___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__427(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__427\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAOI33X1H7L_A0_Y_OAI211X0P7H7L_C0_Y_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_10___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
           & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05Freg_p__DOT__n0) 
                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_10___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_10___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__428(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__428\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_10___05FINVX0P5H7L_A_Y_OAI211X0P7H7L_A0_Y_INVX0P5H7L_A__DOT__Y 
        = ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_10___05Freg_p__DOT__n0) 
                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_10___05Freg_p__DOT__n0) 
                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109)))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_10___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_10___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__429(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__429\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_7___05FAO222X0P5H7L_C1_Y_NOR4X6H7L_D_A_INVX0P5H7L_A__DOT__Y)) 
                     | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_7___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                            & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_7___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)))) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_7___05Freg_p__DOT__n0)))))) 
                        | (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_7___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_7___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A))))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_7___05Freg_p__DOT__n0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_7___05FAO222X0P5H7L_C1__DOT__OUT1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_7___05FAO222X0P5H7L_C1__DOT__OUT2))))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_7___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & ((~ ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_7___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)))) 
                               & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_7___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)))))) 
                           | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_7___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))) 
                                 & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_7___05Freg_p__DOT__n0))))))))) 
                       & (((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_7___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_7___05Freg_p__DOT__n0)))) 
                           & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_7___05Freg_p__DOT__n0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_7___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))))) 
                          & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_7___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_7___05Freg_p__DOT__n0)))) 
                             & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_7___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_7___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__430(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__430\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv 
        = (1U & ((~ (((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_24___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_24___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)))) 
                          & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_24___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05Freg_p__DOT__n0))))))) 
                      | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_24___05Freg_p__DOT__n0)) 
                         | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_24___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_24___05Freg_p__DOT__n0))))) 
                     | (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_24___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_24___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)))) 
                         | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_24___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_24___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A))))) 
                        | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_24___05Freg_p__DOT__n0)) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_24___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_24___05Freg_p__DOT__n0))))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_24___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & (((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_24___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_24___05Freg_p__DOT__n0)))))) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_24___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_24___05Freg_p__DOT__n0))))) 
                        & (~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_24___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_24___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_24___05FAOI221X1P4H7L_A0__DOT__outA) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_24___05FAOI221X1P4H7L_A0__DOT__outB))))) 
                       & (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_24___05Freg_p__DOT__n0))))) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_24___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_24___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))))) 
                          & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_24___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_24___05Freg_p__DOT__n0))))) 
                             & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_24___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__431(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__431\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_6___05Freg_p__DOT__n0) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                     & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_6___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)))) 
                             | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_6___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_6___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A))))) 
                            | ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_6___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_A2_NAND4BBX0P5H7L_Y__DOT__Y))) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)))) 
                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_6___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_6___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))))) 
                        & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_6___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FAOI33X0P5H7L_B2__DOT__A1)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_6___05Freg_p__DOT__n0)))))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AOI221X4H7L_C0__DOT__outA) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AOI221X4H7L_C0__DOT__outB)))) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_235)) 
                                 | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_6___05Freg_p__DOT__n0)) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_6___05Freg_p__DOT__n0))))))))) 
                 | ((~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_6___05Freg_p__DOT__n0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FAOI222X1P4H7L_C0__DOT__outB) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FAOI222X1P4H7L_C0__DOT__outC)))) 
                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_6___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_6___05Freg_p__DOT__n0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_6___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))))))) 
                    | ((~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_6___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_6___05Freg_p__DOT__n0)))) 
                           & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_6___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_6___05Freg_p__DOT__n0)))))) 
                       | (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_6___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_6___05Freg_p__DOT__n0)))) 
                             & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_6___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_6___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__432(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__432\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1 
        = (1U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_22___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)) 
                     | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_22___05FMUX2X0P5H7L_A_Y))))) 
                            & ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_22___05Freg_p__DOT__n0)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370)) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)) 
                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_22___05Freg_p__DOT__n0)))) 
                                     & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_22___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))))))) 
                        | (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_22___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT1))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_22___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_22___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_22___05FAO221X0P5H7L_B1__DOT__OUT0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_22___05FAO221X0P5H7L_B1__DOT__OUT1))))))) 
                 & (~ ((((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_22___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_A2_NAND4BBX0P5H7L_Y__DOT__Y) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_22___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FAO221X0P5H7L_A0__DOT__OUT0) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FAO221X0P5H7L_A0__DOT__OUT1))) 
                        | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_22___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_22___05FAO222X0P5H7L_B1__DOT__OUT1) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_22___05FAO222X0P5H7L_B1__DOT__OUT2)))) 
                       | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_22___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__C0_inv)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_22___05Freg_p__DOT__n0))))) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_22___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_98))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_22___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81))))) 
                          | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_22___05Freg_p__DOT__n0)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_22___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_22___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__433(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__433\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv 
        = (1U & ((~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_11___05Freg_p__DOT__n0) 
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
                                  | ((~ (IData)(((0U 
                                                  != 
                                                  (6U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_101)))) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_11___05Freg_p__DOT__n0)))))))) 
                     | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_11___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_11___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_11___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_11___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))))) 
                        | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_11___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                                  | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_11___05Freg_p__DOT__n0)))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAO221X0P5H7L_B1__DOT__OUT0) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAO221X0P5H7L_B1__DOT__OUT1)))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_11___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & ((~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_11___05FMUX2X0P5H7L_A_Y) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_97))) 
                               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_11___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_11___05Freg_p__DOT__n0)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_11___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_11___05Freg_p__DOT__n0)))))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_11___05FAO221X0P5H7L_A0__DOT__OUT0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_11___05FAO221X0P5H7L_A0__DOT__OUT1))))) 
                       & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_11___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05Freg_p__DOT__n0)))))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_11___05FAOI221X1H7L_A0__DOT__outA) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_11___05FAOI221X1H7L_A0__DOT__outB)))) 
                          & (~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_11___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_11___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)))) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_11___05FAOI221X1P4H7L_B1__DOT__outA) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_11___05FAOI221X1P4H7L_B1__DOT__outB)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__434(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__434\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1_Y_NOR2X1P4H7L_A_Y_NOR3BX0P5H7L_AN__DOT__AN_bar 
        = (1U & (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_1___05Freg_p__DOT__n0)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_1___05Freg_p__DOT__n0)) 
                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_341)))) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_1___05FAO221X0P5H7L_A0__DOT__OUT0) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_1___05FAO221X0P5H7L_A0__DOT__OUT1))) 
                 | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05Freg_p__DOT__n0)) 
                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                              | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_1___05Freg_p__DOT__n0)))))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__OUT0) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__OUT1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__435(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__435\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1 
        = ((~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05Freg_p__DOT__n0) 
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
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))))))) 
               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_26___05Freg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FAO222X0P5H7L_C1__DOT__OUT1) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FAO222X0P5H7L_C1__DOT__OUT2))) 
                  | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_26___05Freg_p__DOT__n0)) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_26___05FAO222X0P5H7L_C0__DOT__OUT1) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_26___05FAO222X0P5H7L_C0__DOT__OUT2)))))) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_26___05Freg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_26___05FAOI221X1H7L_B1_Y_AND2X1H7L_A__DOT__A) 
                 & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_26___05Freg_p__DOT__n0) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                        | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_26___05Freg_p__DOT__n0)))) 
                    & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_26___05Freg_p__DOT__n0)) 
                           | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_26___05Freg_p__DOT__n0)))) 
                       & (~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_26___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_26___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))) 
                              | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_26___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_A2_NAND4BBX0P5H7L_Y__DOT__Y) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_26___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))) 
                             | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_26___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_341)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                          | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_26___05Freg_p__DOT__n0)))))) 
                                | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_26___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                         | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_26___05Freg_p__DOT__n0))))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__436(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__436\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax 
        = (1U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_23___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)) 
                     | ((((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_23___05Freg_p__DOT__n0)) 
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
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_23___05Freg_p__DOT__n0)))))))) 
                        | ((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05Freg_p__DOT__n0)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                                | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__C0_inv))) 
                               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_23___05Freg_p__DOT__n0)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_23___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_23___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05FAO221X0P5H7L_B1__DOT__OUT0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05FAO221X0P5H7L_B1__DOT__OUT1))))))) 
                 & (~ (((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_23___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_23___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_23___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))))) 
                        | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_23___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_23___05Freg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B)))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_23___05FAO221X0P5H7L_A0__DOT__OUT0) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_23___05FAO221X0P5H7L_A0__DOT__OUT1)))) 
                       | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_23___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))) 
                              & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_23___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05Freg_p__DOT__n0))))))) 
                          | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_23___05Freg_p__DOT__n0)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_23___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_23___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__437(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__437\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                  & (~ ((((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_29___05Freg_p__DOT__n0)) 
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
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))))) 
                        | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_B__DOT__A) 
                               & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_29___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_29___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A))))) 
                           | (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_29___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_29___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)))) 
                                 & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_29___05Freg_p__DOT__n0)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y_B0_AND3X1H7L_Y__DOT__Y))) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y_B0_AND3X1H7L_Y__DOT__Y)) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B))))))))))) 
                 & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0__DOT__OUT0) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0__DOT__OUT1) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_29___05Freg_p__DOT__n0)))) 
                        | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_29___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__OUT1) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__OUT2))))) 
                    & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_29___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_29___05Freg_p__DOT__n0)))))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_29___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_29___05Freg_p__DOT__n0))))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_29___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_29___05Freg_p__DOT__n0)))) 
                          & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_29___05Freg_p__DOT__n0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_29___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__438(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__438\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax 
        = (1U & ((((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_15___05Freg_p__DOT__n0)) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_15___05Freg_p__DOT__n0)))) 
                   & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_15___05Freg_p__DOT__n0)) 
                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_15___05Freg_p__DOT__n0))))) 
                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_15___05Freg_p__DOT__n0) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                     & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_15___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_15___05Freg_p__DOT__n0)))))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_15___05FAOI221X1P4H7L_A0__DOT__outA) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_15___05FAOI221X1P4H7L_A0__DOT__outB)))) 
                        & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_15___05Freg_p__DOT__n0)))) 
                           & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_15___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_15___05Freg_p__DOT__n0)))))))) 
                 & (((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_15___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_15___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))) 
                         | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_15___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_15___05Freg_p__DOT__n0))))) 
                     & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_15___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_15___05Freg_p__DOT__n0)))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_15___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_15___05Freg_p__DOT__n0)))))) 
                    & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_15___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_15___05FAOI222X0P5H7L_A0__DOT__outB) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_15___05FAOI222X0P5H7L_A0__DOT__outC)))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05Freg_p__DOT__n0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05FAOI222X1H7L_A0__DOT__outB) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05FAOI222X1H7L_A0__DOT__outC)))) 
                          & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_15___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_15___05Freg_p__DOT__n0)))) 
                             & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_15___05Freg_p__DOT__n0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_15___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__439(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__439\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax 
        = (1U & ((~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_4___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_4___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)))) 
                          & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_4___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_4___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))))) 
                         & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_4___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_4___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_4___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FAOI33X0P5H7L_A0__DOT__B0) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05Freg_p__DOT__n0)))))))) 
                     | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_4___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_4___05Freg_p__DOT__n0))))) 
                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_4___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))) 
                               & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_4___05Freg_p__DOT__n0))))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05FAOI22X0P5H7L_B1_Y_NOR4BBX3H7L_AN__DOT__Ax) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05FAOI22X0P5H7L_B1_Y_NOR4BBX3H7L_AN__DOT__Bx))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_4___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_4___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_4___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_4___05Freg_p__DOT__n0))))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_4___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_4___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))) 
                              | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_4___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_4___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A))))))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_4___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_4___05Freg_p__DOT__n0)))) 
                          & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_4___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_4___05Freg_p__DOT__n0)))) 
                             & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_4___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_4___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__440(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__440\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv 
        = (1U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_9___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)) 
                     | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_9___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_98))) 
                             & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_9___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_9___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))))) 
                            & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_9___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_9___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))) 
                               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_9___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_9___05Freg_p__DOT__n0)))))))) 
                        | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_9___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_9___05Freg_p__DOT__n0))))) 
                               & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_9___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))))) 
                           | (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_9___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_9___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_9___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_9___05Freg_p__DOT__n0))))))))))) 
                 & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_9___05FNAND2X0P5H7L_A_Y_AND2X1H7L_B__DOT__A) 
                            & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_9___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_9___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_9___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A))))) 
                        | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_9___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                              & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_9___05Freg_p__DOT__n0))))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_9___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A))))))) 
                    & (((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_9___05Freg_p__DOT__n0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_9___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_9___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_9___05Freg_p__DOT__n0))))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_9___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_9___05Freg_p__DOT__n0)))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_9___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_9___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__441(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__441\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1 
        = (1U & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_18___05FAO222X0P5H7L_B1_Y_NOR4X2H7L_A_C_INVX0P5H7L_A__DOT__Y)) 
                      | (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_18___05FNAND2X0P5H7L_A_Y_OR2X1P4H7L_B_A_NAND4X1P4H7L_Y__DOT__Y) 
                             | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_18___05Freg_p__DOT__n0)))) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_18___05FAOI33X1P4H7L_B2_Y_NAND2X0P5H7L_A_Y_INVX0P5H7L_A__DOT__Y)))) 
                     | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_18___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))) 
                            & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_18___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_18___05Freg_p__DOT__n0))))) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_18___05FNAND3X0P5H7L_A_Y_AND2X1H7L_B__DOT__B) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_18___05FAO222X0P5H7L_B1__DOT__OUT0) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_18___05FAO222X0P5H7L_B1__DOT__OUT1) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_18___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))))))) 
                 & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__Y) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_18___05FAO222X0P5H7L_A0__DOT__OUT0) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_18___05FAO222X0P5H7L_A0__DOT__OUT1) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_18___05Freg_p__DOT__n0))))) 
                       | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_18___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_18___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)))) 
                              & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_18___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_18___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)))))) 
                          | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_18___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05Freg_p__DOT__n0)))))) 
                             | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_18___05Freg_p__DOT__n0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_18___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__442(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__442\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0 
        = (1U & (~ ((~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_0___05Freg_p__DOT__n0) 
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
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))))))) 
                        | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_0___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                               & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_0___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_0___05Freg_p__DOT__n0))))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_0___05Freg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_0___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_0___05Freg_p__DOT__n0)))))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_0___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                       & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_0___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_0___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)))) 
                               | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_0___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_0___05Freg_p__DOT__n0))))))) 
                              | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_0___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_0___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))) 
                                 | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_0___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408))))))) 
                          & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_0___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_0___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_0___05FAOI221X1P4H7L_A0__DOT__outA) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_0___05FAOI221X1P4H7L_A0__DOT__outB)))) 
                             & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_0___05Freg_p__DOT__n0)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_0___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)))) 
                                & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_0___05Freg_p__DOT__n0)) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05Freg_p__DOT__n0)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__443(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__443\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_13___05FINVX0P5H7L_A_Y_OAI211X1P4H7L_A0_Y_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__A) 
           & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05Freg_p__DOT__n0) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_13___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)))) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_13___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__444(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__444\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_27___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                  & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_27___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_INVX0P5H7L_A__DOT__Y)) 
                         | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_27___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_INVX0P5H7L_A__DOT__Y)) 
                            | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_27___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_27___05Freg_p__DOT__n0)))))) 
                               | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_27___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_27___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118))))))) 
                        | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_27___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__A) 
                               & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_27___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_27___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_27___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_27___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_27___05Freg_p__DOT__n0)))))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_27___05FAO221X0P5H7L_A0__DOT__OUT0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_27___05FAO221X0P5H7L_A0__DOT__OUT1))))))) 
                 & ((~ ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_27___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_27___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_27___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_27___05FAO222X0P5H7L_A0__DOT__OUT0) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_27___05FAO222X0P5H7L_A0__DOT__OUT1) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_27___05Freg_p__DOT__n0)))))) 
                    & (((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_27___05Freg_p__DOT__n0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_27___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_27___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_27___05Freg_p__DOT__n0))))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_27___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_27___05Freg_p__DOT__n0)))) 
                          & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_27___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_27___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__445(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__445\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_12___05FAOI222X1H7L_C0_Y_NOR4BBX4H7L_AN__DOT__Bx) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_12___05FAOI222X1H7L_C0_Y_NOR4BBX4H7L_AN__DOT__Ax) 
                        | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_12___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_12___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)))) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_12___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_12___05Freg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_12___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_12___05Freg_p__DOT__n0)))))) 
                              | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_12___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                          | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_12___05Freg_p__DOT__n0))))))))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_12___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & (((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_12___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X1P4H7L_C0__DOT__outA) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X1P4H7L_C0__DOT__outB)))) 
                        & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_12___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_12___05Freg_p__DOT__n0)))) 
                           & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_12___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_12___05Freg_p__DOT__n0)))))) 
                       & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_12___05FMUX2X0P5H7L_A_Y) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_417)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_12___05FMUX2X0P5H7L_A_Y) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_235)))) 
                          & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_12___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_12___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))) 
                             & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_12___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_12___05Freg_p__DOT__n0)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__446(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__446\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0_Y_AND3X1P4H7L_C__DOT__Y 
        = (1U & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_28___05Freg_p__DOT__n0)) 
                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_28___05Freg_p__DOT__n0)) 
                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0__DOT__outA) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0__DOT__outB)))) 
                 & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_28___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_28___05Freg_p__DOT__n0)))) 
                    & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_28___05Freg_p__DOT__n0)) 
                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_28___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__447(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__447\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__Y 
        = (1U & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_8___05Freg_p__DOT__n0)) 
                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05Freg_p__DOT__n0)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT0) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT1))));
}

void VysyxSoCFull___024root___act_comb__TOP__448(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__448\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_NOR2X1P4H7L_A_Y_NOR3BX1P4H7L_AN__DOT__AN_bar 
        = (1U & ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_19___05Freg_p__DOT__n0) 
                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)))) 
                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))) 
                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109)))))) 
                 | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_19___05Freg_p__DOT__n0)) 
                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                              | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_19___05Freg_p__DOT__n0)))))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__OUT0) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__OUT1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__449(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__449\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_20___05Freg_p__DOT__n0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                  & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_20___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_20___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)))) 
                          | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_20___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_20___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A))))) 
                         | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_20___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_20___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_20___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_20___05Freg_p__DOT__n0))))))))) 
                     & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_20___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_20___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_20___05Freg_p__DOT__n0)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_20___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))))) 
                        & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_20___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_20___05Freg_p__DOT__n0)))) 
                           & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_20___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_20___05Freg_p__DOT__n0)))))))) 
                 & ((~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_20___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_20___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_20___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FAO222X1P4H7L_B1__DOT__OUT0) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FAO222X1P4H7L_B1__DOT__OUT1) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_20___05Freg_p__DOT__n0)))))) 
                    & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_20___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_20___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_AOI221X1H7L_C0__DOT__outA) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_20___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_AOI221X1H7L_C0__DOT__outB)))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_20___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_20___05Freg_p__DOT__n0)))) 
                          & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_20___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_20___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__450(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__450\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax 
        = (1U & (((~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_30___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs2_sel_BUFX7H7L_A_1_Y_OR3X8H7L_C_Y_BUFX16H7L_A__DOT__Y)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_30___05Freg_p__DOT__n0))))) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_30___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                                    & (0x0cU == (0x0cU 
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
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))))))) 
                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__OUT1) 
                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__OUT0) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_30___05Freg_p__DOT__n0) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y))) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_30___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05FAOI33X0P5H7L_A0__DOT__A1)))))) 
                         | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_30___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_30___05Freg_p__DOT__n0)))))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_30___05FAO221X0P5H7L_B1__DOT__OUT0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_30___05FAO221X0P5H7L_B1__DOT__OUT1)))))) 
                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_30___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)))) 
                 & (((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_30___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_30___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_30___05FAOI221X1P4H7L_A0__DOT__outA) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_30___05FAOI221X1P4H7L_A0__DOT__outB)))) 
                     & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_30___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_30___05Freg_p__DOT__n0)))) 
                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_30___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_30___05Freg_p__DOT__n0)))))) 
                    & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_30___05Freg_p__DOT__n0) 
                               & ((~ (0U != (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel) 
                                                   >> 2U)))) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1))))) 
                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05Freg_p__DOT__n0)) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A))) 
                       & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))) 
                           & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_30___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)))) 
                          & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_30___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_10___05FMUX2X0P5H7L_A_Y_NAND3X0P5H7L_C__DOT__B)) 
                                 & (0x0cU == (0x0cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_30___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__451(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__451\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax 
        = (1U & ((~ ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FAOI33X0P5H7L_A0__DOT__B0) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_25___05Freg_p__DOT__n0))))) 
                         & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_25___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_25___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))))) 
                     | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_25___05FNAND3X0P5H7L_A_Y_NOR2BX1H7L_AN__DOT__Ax)) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_25___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_INVX0P5H7L_A__DOT__Y) 
                               & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_25___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)))) 
                                  & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_25___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_25___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137))))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05FAOI22X1P4H7L_B1_Y_NOR4BBX4H7L_BN__DOT__Ax) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05FAOI22X1P4H7L_B1_Y_NOR4BBX4H7L_BN__DOT__Bx))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_25___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_25___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_25___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_25___05FAO221X0P5H7L_B1__DOT__OUT0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_25___05FAO221X0P5H7L_B1__DOT__OUT1))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_25___05Freg_p__DOT__n0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_25___05FAO222X0P5H7L_B1__DOT__OUT1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_25___05FAO222X0P5H7L_B1__DOT__OUT2))))) 
                       & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_25___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_25___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_25___05FAOI221X1H7L_A0__DOT__outA) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_25___05FAOI221X1H7L_A0__DOT__outB)))) 
                          & (~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_25___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                          | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_25___05Freg_p__DOT__n0)))))) 
                                | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_25___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_25___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__452(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__452\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax 
        = (1U & ((~ (((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_31___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_31___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_31___05Freg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_13___05FMUX2X0P5H7L_A_Y_NAND3X0P5H7L_C__DOT__B) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1))))) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_31___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A))))) 
                      | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_31___05FMUXI2X0P5H7L_A__DOT__YN))))) 
                         | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_31___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_31___05Freg_p__DOT__n0))))) 
                     | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_31___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_31___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))) 
                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_31___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_22___05FINVX0P5H7L_A_Y_OR3X1H7L_A_C_INVX0P5H7L_A__DOT__Y)) 
                                  | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05FAOI33X0P5H7L_A0__DOT__A1))))))) 
                        | (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)) 
                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_31___05Freg_p__DOT__n0)))) 
                                     & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))))) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_31___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91))) 
                                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_31___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))))))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_31___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_31___05FAOI33X0P5H7L_B2_Y_AND2X1H7L_A__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_31___05FAOI33X0P5H7L_A0_Y_AND2X1H7L_B__DOT__Y)) 
                             | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                       | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_31___05Freg_p__DOT__n0)) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0))) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_31___05Freg_p__DOT__n0))))))) 
                                | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_31___05Freg_p__DOT__n0) 
                                           & ((~ (0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel) 
                                                      >> 2U)))) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0)))) 
                                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_31___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_417))))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_31___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))) 
                                         & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_31___05Freg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__453(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__453\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0_Y_AND2X1H7L_A__DOT__Y)) 
                     | (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_21___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_21___05Freg_p__DOT__n0)))))) 
                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_21___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_21___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))) 
                        | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_21___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                               & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_21___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_21___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_21___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A))))) 
                           | (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_21___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_21___05Freg_p__DOT__n0))))) 
                                 & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_21___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_21___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)))))))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_21___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_21___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_21___05Freg_p__DOT__n0)))))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX0P5H7L_Y__DOT__Y) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_21___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_21___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_21___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))) 
                              | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_21___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_21___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))))) 
                       & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_21___05Freg_p__DOT__n0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_21___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)))) 
                          & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_21___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_21___05Freg_p__DOT__n0)))) 
                             & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_21___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_21___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__454(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__454\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_17___05FAOI33X1H7L_A0_Y_AND2X1H7L_B__DOT__Y)) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_17___05FAOI33X0P5H7L_B2_Y_AND2X1H7L_B__DOT__Y)) 
                        | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_17___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_17___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_17___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_17___05Freg_p__DOT__n0)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_17___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_17___05Freg_p__DOT__n0)))))) 
                              | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_17___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_17___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A))))))))) 
                 & ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_17___05FNAND2X0P5H7L_A_Y_AND2X1H7L_B__DOT__A) 
                             & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_17___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_17___05Freg_p__DOT__n0))))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05FAOI33X0P5H7L_A0__DOT__A2)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_17___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05FAOI33X0P5H7L_A0__DOT__A1))))))) 
                         | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_17___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_17___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__OUT0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__OUT1)))) 
                        | (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_17___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_17___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_17___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_17___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136))))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_17___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_17___05Freg_p__DOT__n0)))))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_17___05Freg_p__DOT__n0) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))))));
}

void VysyxSoCFull___024root___act_comb__TOP__455(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__455\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__B 
        = (1U & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_161)))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))) 
                         & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_1___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_1___05Freg_p__DOT__n0))))))) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__OUT0) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__OUT1) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_1___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))))) 
                    | ((((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_1___05Freg_p__DOT__n0)) 
                             | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421))) 
                         | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y))))) 
                        | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_1___05Freg_p__DOT__n0))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_1___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)))) 
                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_1___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)) 
                             | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_1___05Freg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))) 
                                | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_1___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__456(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__456\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__Y 
        = (1U & ((~ ((~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_29___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_29___05Freg_p__DOT__n0))))) 
                          & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_29___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)))) 
                         & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_29___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_29___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_29___05Freg_p__DOT__n0)))))))) 
                     | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_29___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_29___05Freg_p__DOT__n0))))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_29___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_29___05Freg_p__DOT__n0))))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_NAND4BX1P4H7L_AN_Y_NOR4BBX4H7L_D__DOT__Ax) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_NAND4BX1P4H7L_AN_Y_NOR4BBX4H7L_D__DOT__Bx))))) 
                 & (~ ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_29___05Freg_p__DOT__n0))) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_29___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)))) 
                            & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184)))) 
                           & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_29___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FNAND3X0P5H7L_A_Y_NAND3X1P4H7L_B_Y_NOR3BX6H7L_B_AN_AND4X1P4H7L_Y_D_AOI33X0P5H7L_Y__DOT__A2) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_29___05Freg_p__DOT__n0))))) 
                              & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_29___05Freg_p__DOT__n0)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_C_OAO211X0P5H7L_Y_B0_NAND3BX0P5H7L_Y__DOT__Y)) 
                                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_C_OAO211X0P5H7L_Y_B0_NAND3BX0P5H7L_Y__DOT__Y)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_A_AO222X0P5H7L_Y_B0_NOR2X1P4H7L_Y__DOT__A)))))) 
                       | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_187)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FNAND3X0P5H7L_B_Y_NAND2X0P5H7L_B_A_NAND3X0P5H7L_Y_C)))))) 
                          | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y__DOT__Ax)) 
                                 | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_29___05Freg_p__DOT__n0))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_29___05Freg_p__DOT__n0)))))) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_29___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_29___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__457(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__457\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_30___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_30___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_30___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05Freg_p__DOT__n0)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_30___05Freg_p__DOT__n0))))))) 
                         | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_30___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_30___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_30___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_30___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94)))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_30___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_30___05Freg_p__DOT__n0))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_30___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176)))))) 
                           | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_30___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_30___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_30___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_30___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))))))) 
                    & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0__DOT__outA) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_30___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0__DOT__outC)))) 
                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0_Y_AND2X1H7L_B_A_AOI222X1P4H7L_Y__DOT__outA) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0_Y_AND2X1H7L_B_A_AOI222X1P4H7L_Y__DOT__outB) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_30___05Freg_p__DOT__n0)))))) 
                       & ((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_30___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171)))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_30___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_174))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)))) 
                          & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_30___05Freg_p__DOT__n0)) 
                              | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAND3X1P4H7L_A_Y_NOR4X6H7L_A_Y_NOR4BX4H7L_AN_C_AO221X0P5H7L_Y_C0_AND3X1H7L_Y__DOT__A) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0_Y_AND4X1P4H7L_B_D_OA221X0P5H7L_Y_C0_NAND3X0P5H7L_Y_C)))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_30___05Freg_p__DOT__n0))) 
                                   | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_196))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__458(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__458\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_31___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_31___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_31___05Freg_p__DOT__n0))))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_31___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_161)))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_31___05Freg_p__DOT__n0))))))) 
                         | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_31___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05Freg_p__DOT__n0)))) 
                            | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_31___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_31___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_31___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_31___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_31___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_31___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171)))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_31___05FAO222X3H7L_C1__DOT__OUT0) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_31___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_31___05FAO222X3H7L_C1__DOT__OUT2)))))) 
                    & (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05FNAND3X1H7L_B_Y_AND4X0P5H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05Freg_p__DOT__n0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05FAOI222X1P4H7L_A0__DOT__outB) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05FAOI222X1P4H7L_A0__DOT__outC)))) 
                        & (~ ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_31___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_31___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_31___05Freg_p__DOT__n0))))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_31___05Freg_p__DOT__n0))))))) 
                       & ((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_31___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_31___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax))))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_31___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_31___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))))) 
                          & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_31___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_31___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_31___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_31___05Freg_p__DOT__n0)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__459(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__459\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_25___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__A 
        = (1U & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_25___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_161)))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_25___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))) 
                         & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_25___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_25___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)))))) 
                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_25___05Freg_p__DOT__n0)) 
                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05FNAND3X1H7L_B_Y_AND4X0P5H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_25___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_25___05Freg_p__DOT__n0))))) 
                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__OUT0) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__OUT1) 
                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_25___05Freg_p__DOT__n0) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_25___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0__DOT__A1_inv)))))) 
                       | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_25___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                           | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_25___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421)))) 
                          | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_25___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_173))) 
                             | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__460(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__460\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_26___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_26___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__A) 
                             & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_231)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_26___05FNAND3X0P5H7L_A_Y_OAI211X1H7L_B0_C0_NAND3BX0P5H7L_Y_C)))) 
                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_223)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_26___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y))))))) 
                         | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_26___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_26___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_26___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))))))) 
                        | ((~ ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_175)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FNAND3BX0P5H7L_C_Y_OAI211X1P4H7L_C0_B0_NAND3X0P5H7L_Y__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FNAND3BX0P5H7L_C_Y_OAI211X1P4H7L_C0_B0_NAND3X0P5H7L_Y_C)))) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FNAND3BX0P5H7L_C_Y_AND2X1H7L_B__DOT__B) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_26___05Freg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_26___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_26___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_26___05Freg_p__DOT__n0)))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_26___05Freg_p__DOT__n0)))))))))) 
                    & (~ (((~ ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_175)) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_26___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_A_NAND3X0P5H7L_Y_C)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_26___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_26___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402)))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_26___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_26___05Freg_p__DOT__n0)))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_26___05Freg_p__DOT__n0)))))))) 
                          | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_26___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_26___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_26___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167))))) 
                             | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_26___05Freg_p__DOT__n0)) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_26___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_26___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__461(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__461\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_24___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_24___05Freg_p__DOT__n0)))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_24___05Freg_p__DOT__n0))))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_24___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350)))))) 
                         | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_24___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_161)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))))))) 
                        | ((((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_24___05Freg_p__DOT__n0)) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_24___05Freg_p__DOT__n0)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_24___05Freg_p__DOT__n0)))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05FNAND3X0P5H7L_A_Y_NAND4X0P7H7L_D_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT0) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05FNAND3X0P5H7L_A_Y_NAND4X0P7H7L_D_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT1) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_24___05Freg_p__DOT__n0))))))) 
                    & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_24___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_150)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_24___05Freg_p__DOT__n0))))))) 
                           | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_7___05FMUX2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                                  | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_24___05Freg_p__DOT__n0))) 
                                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_24___05Freg_p__DOT__n0)))))) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_24___05Freg_p__DOT__n0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__B0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_24___05Freg_p__DOT__n0))))) 
                          | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_24___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_24___05Freg_p__DOT__n0))))) 
                                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_24___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_24___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413)))))) 
                             | (~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_24___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_24___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_24___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__462(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__462\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_13___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_13___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_13___05Freg_p__DOT__n0))))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_13___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_150))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_13___05Freg_p__DOT__n0))))))) 
                         | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_7___05FMUX2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                                | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_13___05Freg_p__DOT__n0))) 
                                   & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_13___05Freg_p__DOT__n0)))))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__OUT0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__OUT1)))) 
                        | ((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05Freg_p__DOT__n0)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_13___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_13___05Freg_p__DOT__n0)))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_13___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_13___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_13___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_13___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))))))))) 
                    & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_13___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_13___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_13___05Freg_p__DOT__n0))))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_13___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_161)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_13___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_13___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_13___05Freg_p__DOT__n0)))))))) 
                          | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_13___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_13___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_13___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428)))))) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__OUT0) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_13___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__OUT2)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__463(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__463\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_3___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__A) 
                             & ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_3___05Freg_p__DOT__n0)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_223)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_3___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y))))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_3___05FNAND3X1H7L_A_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_B_AO222X1P4H7L_Y__DOT__OUT0) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_3___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_3___05FNAND3X1H7L_A_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_B_AO222X1P4H7L_Y__DOT__OUT2)))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_3___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_3___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_3___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_3___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_3___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_3___05Freg_p__DOT__n0))))) 
                                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_3___05Freg_p__DOT__n0)))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_3___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))))))))) 
                    & (~ (((((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_3___05Freg_p__DOT__n0)) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_3___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_3___05Freg_p__DOT__n0)))) 
                           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_3___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))) 
                              | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y)))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))))) 
                          | ((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_3___05Freg_p__DOT__n0)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FNAND3X0P5H7L_B_Y_NAND3X1P4H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                  | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FNAND3X0P5H7L_B_Y_NAND3X1P4H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05Freg_p__DOT__n0)))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_3___05Freg_p__DOT__n0))))))) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAND3X1P4H7L_A_Y_NOR4X6H7L_A_Y_NOR4BX4H7L_AN_C_AO221X0P5H7L_Y_C0_AND3X1H7L_Y__DOT__A) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAND3X1P4H7L_A_Y_NOR4X6H7L_A_Y_NOR4BX4H7L_AN_C_AO221X0P5H7L_Y_C0_AND3X1H7L_Y_C) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_3___05Freg_p__DOT__n0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_3___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__464(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__464\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_16___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_16___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_16___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_16___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_16___05Freg_p__DOT__n0))))))) 
                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05FNAND3X1H7L_B_Y_AND4X0P5H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_16___05Freg_p__DOT__n0)) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_16___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_16___05Freg_p__DOT__n0))))) 
                        | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_16___05FNAND3BX0P5H7L_C_Y_AND2X1H7L_A__DOT__A) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_16___05FNAND3BX0P5H7L_C_Y_AND2X1H7L_A__DOT__B) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_16___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_16___05Freg_p__DOT__n0)))))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_16___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_16___05Freg_p__DOT__n0))))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_16___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05Freg_p__DOT__n0)))))))))) 
                    & (~ (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05Freg_p__DOT__n0)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_16___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_16___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_16___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176)))))) 
                           | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_16___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_224))) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_16___05Freg_p__DOT__n0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_16___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))))) 
                          | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_16___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_16___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_161))))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_16___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171))) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_16___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))))) 
                             | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_16___05Freg_p__DOT__n0)))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_16___05Freg_p__DOT__n0))))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_16___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_16___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__465(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__465\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_Y_AND2X1H7L_B__DOT__Y 
        = (1U & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_18___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                           & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_18___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_18___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_18___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176)))))) 
                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT0) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT1) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_18___05Freg_p__DOT__n0))))) 
                     | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_18___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_18___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)))) 
                            & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_18___05Freg_p__DOT__n0)))) 
                               & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_18___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))))) 
                        | (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_18___05Freg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv)) 
                               | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv))) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_18___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))))))))) 
                 & (~ (((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_18___05Freg_p__DOT__n0)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_18___05FAOAI211X1H7L_A0__DOT__B0_inv)) 
                             | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_18___05FAOAI211X1H7L_A0__DOT__B0_inv)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                               & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_18___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))))) 
                        | (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05Freg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05FINVX0P5H7L_A_Y_OAO211X0P5H7L_A0_B0_NAND2X0P5H7L_Y__DOT__Y)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05FAOI33X1H7L_B2_Y_AND3X1P4H7L_B_C_AOI33X1H7L_Y_B2_NAND2BX0P5H7L_B__DOT__Ax)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05FINVX0P5H7L_A_Y_OAO211X0P5H7L_A0_B0_NAND2X0P5H7L_Y__DOT__Y) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FNAND3X0P5H7L_A_Y_AND2X1H7L_B__DOT__B) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_18___05Freg_p__DOT__n0))))))) 
                       | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1_C0_NOR4BX0P5H7L_Y_C_MUXI2X0P5H7L_Y__DOT__YN)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__OUT0) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__OUT1))) 
                          | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_18___05Freg_p__DOT__n0)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_18___05Freg_p__DOT__n0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_18___05Freg_p__DOT__n0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__466(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__466\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FAO221X0P5H7L_A0_Y_NOR4X6H7L_B_Y_AND2X1H7L_A__DOT__Y 
        = (1U & ((~ (((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_19___05Freg_p__DOT__n0))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413)))) 
                          & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_19___05Freg_p__DOT__n0)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                             | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv))))) 
                      | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_19___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_19___05Freg_p__DOT__n0)))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FAO221X0P5H7L_A0__DOT__OUT0) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FAO221X0P5H7L_A0__DOT__OUT1)))) 
                     | ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_19___05Freg_p__DOT__n0))) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_A_AO222X0P5H7L_Y_B0_NOR2X1P4H7L_Y__DOT__A)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_19___05Freg_p__DOT__n0))))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_19___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)) 
                                  | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_186)))) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_19___05Freg_p__DOT__n0))))))) 
                        | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_19___05Freg_p__DOT__n0)) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_19___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_19___05Freg_p__DOT__n0))))))) 
                 & (((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_19___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_19___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_19___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X2H7L_C0__DOT__outA) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_19___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X2H7L_C0__DOT__outB)))) 
                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_19___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_19___05Freg_p__DOT__n0)))) 
                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_19___05Freg_p__DOT__n0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_19___05Freg_p__DOT__n0)))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_187)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05FAOI33X1H7L_B2_Y_AND3X1P4H7L_B_C_AOI33X1H7L_Y_B2)) 
                              & (0x18U == (0x18U & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel)))))) 
                       & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_19___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407)))) 
                          & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_19___05Freg_p__DOT__n0))) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_19___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__467(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__467\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_21___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05Freg_p__DOT__n0)))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_21___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_21___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_21___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))))) 
                         | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_21___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_21___05Freg_p__DOT__n0))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_21___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_21___05Freg_p__DOT__n0)))))))) 
                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_21___05FAND3X1P4H7L_A_Y_NOR4X1P4H7L_C_Y_NOR4BX4H7L_AN_B_AO222X0P5H7L_Y__DOT__OUT0) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_21___05FAND3X1P4H7L_A_Y_NOR4X1P4H7L_C_Y_NOR4BX4H7L_AN_B_AO222X0P5H7L_Y__DOT__OUT1) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_21___05Freg_p__DOT__n0)))) 
                           | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_21___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_21___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_21___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))) 
                                 | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_21___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368)))))))) 
                    & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FNAND3X1H7L_A_Y_AND4X1H7L_D_Y_AND4X3H7L_A_D_AOI222X1P4H7L_Y__DOT__outA) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_21___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FNAND3X1H7L_A_Y_AND4X1H7L_D_Y_AND4X3H7L_A_D_AOI222X1P4H7L_Y__DOT__outC)))) 
                        & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_21___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_21___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_21___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_21___05Freg_p__DOT__n0))))))) 
                       & ((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_21___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_21___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)))) 
                           & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_21___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))))) 
                          & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_21___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_21___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))) 
                             & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_21___05Freg_p__DOT__n0)))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_21___05Freg_p__DOT__n0)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__468(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__468\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_14___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_14___05FMUXI2X0P5H7L_A_Y_NOR2X0P5H7L_B_Y_AOI21X0P5H7L_B0__DOT__OUT0) 
                         | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_7___05FMUX2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_14___05FMUXI2X0P5H7L_A__DOT__YN)))) 
                            | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_14___05Freg_p__DOT__n0)))) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_14___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421)))) 
                               | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_14___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184)))))))) 
                     & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_14___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_14___05Freg_p__DOT__n0)))))) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_14___05Freg_p__DOT__n0)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_14___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))))) 
                        & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_14___05Freg_p__DOT__n0)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_14___05Freg_p__DOT__n0)))) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_14___05Freg_p__DOT__n0)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_14___05Freg_p__DOT__n0))))))) 
                    & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_14___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_129)) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_14___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)))) 
                            | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_14___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_224)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_14___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_14___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_14___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)))) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_14___05Freg_p__DOT__n0))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_14___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_14___05FAOI222X0P7H7L_B1__DOT__outA) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_14___05FAOI222X0P7H7L_B1__DOT__outB) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_14___05Freg_p__DOT__n0))))) 
                          & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_14___05Freg_p__DOT__n0)) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_14___05Freg_p__DOT__n0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_14___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__469(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__469\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_17___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_17___05Freg_p__DOT__n0)))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_17___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_17___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_17___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_150)))))) 
                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_17___05Freg_p__DOT__n0)) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_17___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_17___05Freg_p__DOT__n0))))) 
                        | ((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_17___05Freg_p__DOT__n0)))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_17___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_17___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_17___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_17___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_17___05Freg_p__DOT__n0))))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_17___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_17___05Freg_p__DOT__n0)))))))))) 
                    & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_17___05FAOI222X1P4H7L_A0__DOT__outA) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_17___05FAOI222X1P4H7L_A0__DOT__outB) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_17___05Freg_p__DOT__n0))))) 
                        & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_17___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_17___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_17___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_17___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)))))) 
                       & ((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_17___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_17___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_17___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))))) 
                          & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_17___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_17___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_17___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_17___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__470(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__470\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_4___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_4___05Freg_p__DOT__n0))))) 
                             & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_4___05Freg_p__DOT__n0)))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_4___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))))) 
                         | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_7___05FMUX2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                                | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_4___05Freg_p__DOT__n0))) 
                                   & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_4___05Freg_p__DOT__n0)))))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_4___05FAO221X0P5H7L_A0__DOT__OUT0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_4___05FAO221X0P5H7L_A0__DOT__OUT1)))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_4___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_4___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_4___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_4___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)))))) 
                           | (~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_4___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_4___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_4___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_4___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))))))))) 
                    & (~ (((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_4___05Freg_p__DOT__n0)) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_4___05Freg_p__DOT__n0)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_4___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT0) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT1) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_4___05Freg_p__DOT__n0))))) 
                          | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_4___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_4___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_4___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05Freg_p__DOT__n0))))))) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT1) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT0) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05Freg_p__DOT__n0) 
                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y__DOT__Ax))) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_4___05Freg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__471(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__471\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_23___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_23___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_23___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_23___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05Freg_p__DOT__n0))))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X1P4H7L_Y__DOT__OUT0) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X1P4H7L_Y__DOT__OUT1) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_23___05Freg_p__DOT__n0))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_23___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_23___05Freg_p__DOT__n0))))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_23___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_23___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)))))) 
                           | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05Freg_p__DOT__n0))))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167))) 
                                 | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_23___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)))))))) 
                    & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_23___05Freg_p__DOT__n0)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_23___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197)))))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_23___05Freg_p__DOT__n0)) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_23___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_23___05Freg_p__DOT__n0))))) 
                          | ((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_23___05Freg_p__DOT__n0)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_23___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                  | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_23___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_23___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_23___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))))) 
                             | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05FAOI33X1H7L_B2_Y_AND3X1P4H7L_B_C_AOI33X1H7L_Y_B2_NAND2BX0P5H7L_B__DOT__Ax)) 
                                    | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_23___05Freg_p__DOT__n0))) 
                                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_23___05Freg_p__DOT__n0)))))) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_23___05Freg_p__DOT__n0)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_23___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__472(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__472\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_9___05FAO222X0P5H7L_A0_Y_NOR4X6H7L_B_Y_AND2X1H7L_A__DOT__Y 
        = (1U & ((~ (((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_9___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_9___05Freg_p__DOT__n0))))))) 
                      | (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_9___05Freg_p__DOT__n0)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_9___05FNAND2X0P5H7L_A__DOT__Y)) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05FAOI33X1H7L_B2_Y_AND3X1P4H7L_B_C_AOI33X1H7L_Y_B2_NAND2BX0P5H7L_B__DOT__Ax)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_9___05FNAND2X0P5H7L_A__DOT__Y) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))) 
                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_9___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                               & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_9___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))))))) 
                     | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_9___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))) 
                             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_9___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0)))) 
                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_9___05Freg_p__DOT__n0)))) 
                               & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_9___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)))))) 
                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_9___05Freg_p__DOT__n0)) 
                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_9___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_9___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))) 
                                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_9___05Freg_p__DOT__n0)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)))))))) 
                 & (~ ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_9___05FAO222X0P7H7L_A0__DOT__OUT0) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_9___05FAO222X0P7H7L_A0__DOT__OUT1) 
                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_9___05Freg_p__DOT__n0)))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_9___05FAO222X0P5H7L_A0__DOT__OUT0) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_9___05FAO222X0P5H7L_A0__DOT__OUT1) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_9___05Freg_p__DOT__n0))))) 
                       | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_9___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                               & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_9___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402)))) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_9___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171))) 
                                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_9___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)))))) 
                          | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_9___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__A) 
                                & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0))) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_31___05FAND3X1P4H7L_A__DOT__C) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_9___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_NAND3X0P5H7L_Y_C)))) 
                                   & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_9___05Freg_p__DOT__n0))) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__473(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__473\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_11___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_11___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_11___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_11___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_11___05Freg_p__DOT__n0))))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__OUT0) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__OUT1) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_11___05Freg_p__DOT__n0))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_11___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_11___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_11___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_11___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_11___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_11___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_11___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))))))))) 
                    & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_11___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_11___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_11___05Freg_p__DOT__n0))))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT0) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_11___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT2)))) 
                          | ((~ ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_187)) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FNAND3BX0P5H7L_C_Y_OAI211X1P4H7L_C0_B0_NAND3X0P5H7L_Y__DOT__B) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_11___05FNAND3BX0P5H7L_C_Y_NAND3X0P5H7L_B_A_NAND3X0P5H7L_Y_C)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_11___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_11___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))))) 
                             | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_11___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_11___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222))) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05Freg_p__DOT__n0)))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__474(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__474\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_25___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__B 
        = (1U & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_25___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)))) 
                         & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05Freg_p__DOT__n0)))) 
                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_25___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197)))))) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_C_D_AO222X1P4H7L_Y__DOT__OUT0) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_C_D_AO222X1P4H7L_Y__DOT__OUT1) 
                           | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_25___05Freg_p__DOT__n0))))) 
                    | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_25___05FNAND3X0P5H7L_B_Y_AND2X1H7L_A__DOT__A) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_25___05FNAND3X0P5H7L_B_Y_AND2X1H7L_A__DOT__B) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_25___05Freg_p__DOT__n0)))) 
                                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_25___05Freg_p__DOT__n0)))))))) 
                       | (~ ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_414)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_26___05FNAND3BX0P5H7L_C_Y_OAI211X1P4H7L_C0_B0_NAND3X0P5H7L_Y__DOT__B) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_25___05FINVX0P5H7L_A_Y_OAI211X1P4H7L_A0_B0_NAND3X0P5H7L_Y_C)))) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_25___05FNAND3X1H7L_A_Y_AND2X1H7L_A__DOT__A) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_25___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__475(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__475\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_12___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_12___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_12___05Freg_p__DOT__n0))))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_12___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_171))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_12___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)))))) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y__DOT__OUT0) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y__DOT__OUT1) 
                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_12___05Freg_p__DOT__n0) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv))) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_12___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y))))))) 
                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1__DOT__OUT0) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_12___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1__DOT__OUT2))) 
                           | (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_12___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_173))) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_12___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_12___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127))) 
                                 | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_12___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368)))))))) 
                    & (~ (((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_12___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_12___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_12___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_12___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_12___05Freg_p__DOT__n0))))) 
                                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_12___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_12___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))))))) 
                          | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05FNAND3X1H7L_A_Y_AND2X1H7L_B__DOT__A) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_12___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__A) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_12___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05FNAND3X1H7L_A_Y_AND2X1H7L_B__DOT__B))))) 
                             | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_12___05FNAND3X0P5H7L_B_Y_AND2X1H7L_A__DOT__A) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_12___05FNAND3X0P5H7L_B_Y_AND2X1H7L_A__DOT__B) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_12___05Freg_p__DOT__n0)))) 
                                         & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_12___05Freg_p__DOT__n0))))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__476(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__476\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_AND2X1H7L_A__DOT__B 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FNAND3X0P5H7L_A_Y_AND2X1H7L_A__DOT__Y) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_8___05FAOI33X1P4H7L_B2_Y_AND2X1H7L_B__DOT__B) 
                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_8___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAND3X1P4H7L_A_Y_NOR4X6H7L_A_Y_NOR4BX4H7L_AN_C_AO221X0P5H7L_Y_C0_AND3X1H7L_Y__DOT__A) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FNAND3X0P5H7L_A_Y_NAND4X2H7L_A_D_AOI33X0P5H7L_Y_B1) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y)))))))) 
                    | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_8___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_8___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_8___05Freg_p__DOT__n0)))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350)))))) 
                       | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_8___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_196)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0__DOT__A1_inv)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_8___05Freg_p__DOT__n0)))))) 
                          | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_8___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_8___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__477(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__477\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_28___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_28___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_28___05Freg_p__DOT__n0))))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05Freg_p__DOT__n0))))))) 
                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_28___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1)) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_28___05Freg_p__DOT__n0)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_28___05Freg_p__DOT__n0))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_28___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_174))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_28___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_28___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_28___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)))))) 
                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_28___05Freg_p__DOT__n0)) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_28___05Freg_p__DOT__n0)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_28___05Freg_p__DOT__n0) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0))) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_28___05Freg_p__DOT__n0)) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))))))))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_28___05FAND3X1P4H7L_A_Y_NOR4X3H7L_A_Y_NOR4BBX4H7L_BN__DOT__Ax) 
                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_28___05FAND3X1P4H7L_A_Y_NOR4X3H7L_A_Y_NOR4BBX4H7L_BN__DOT__Bx) 
                             | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_28___05FNAND3BX0P5H7L_C_Y_AND2X1H7L_B__DOT__A) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_28___05FNAND3BX0P5H7L_C_Y_AND2X1H7L_B__DOT__B) 
                                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_28___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FNAND3BX0P5H7L_C__DOT__Ax)))) 
                                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_28___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))))))) 
                                | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_28___05Freg_p__DOT__n0)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_28___05Freg_p__DOT__n0)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__A1) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_28___05Freg_p__DOT__n0)))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__478(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__478\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_AND2X1H7L_A__DOT__A 
        = (1U & (~ ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_8___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))) 
                         & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_8___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_8___05Freg_p__DOT__n0)))))) 
                        & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_8___05Freg_p__DOT__n0))) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_A_AO222X0P5H7L_Y_B0_NOR2X1P4H7L_Y__DOT__A)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_8___05Freg_p__DOT__n0))))) 
                           & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_8___05Freg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05FNOR2BX1H7L_AN_Z_AOA211X1P4H7L_B0_C0_AOAI211X1P4H7L_C0__DOT__B0_inv)) 
                              | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05FNOR2BX1H7L_AN_Z_AOA211X1P4H7L_B0_C0_AOAI211X1P4H7L_C0__DOT__B0_inv)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv)))))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_Y_OR2X1P4H7L_A_Y_INVX0P5H7L_A__DOT__A) 
                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_NOR4BBX3H7L_Y__DOT__Ax) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_NOR4BBX3H7L_Y__DOT__Bx))))));
}

void VysyxSoCFull___024root___act_comb__TOP__479(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__479\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTkRBTP0G0BDxFu2GRBjf8KoLIvPq3mBs1fcE3JTK__DOT__A1_inv 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__480(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__480\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_10___05Freg_p__DOT__n0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_10___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_AND2X1H7L_A__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__481(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__481\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_0___05Freg_p__DOT__n0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_0___05FNAND2X0P5H7L_A_1_Y_NAND3BX0P7H7L_B_C_NOR2BX1P4H7L_AN__DOT__Ax)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_0___05FNAND2X0P5H7L_A_1_Y_NAND3BX0P7H7L_B_AN_INVX0P5H7L_A__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__482(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__482\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh8EiSm5JvMBqqRx9gloTundAVSnspYGvAHjRsJUxt__DOT__C0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh8I9Vty1RtLNO6Avuu8WqFRNUrn2G8G61Lq8v7JjL__DOT__OUT0)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)));
}

void VysyxSoCFull___024root___act_comb__TOP__483(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__483\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_22___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
                 & ((~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_22___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_22___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_22___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_22___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93))))) 
                         | (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_22___05Freg_p__DOT__n0)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FNAND3X0P5H7L_B_Y_NAND3X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FNAND3X0P5H7L_B_Y_NAND3X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_22___05Freg_p__DOT__n0)))))))) 
                        | ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_22___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_22___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_22___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_22___05Freg_p__DOT__n0))))))) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_22___05Freg_p__DOT__n0)) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_22___05Freg_p__DOT__n0)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_22___05Freg_p__DOT__n0))))))) 
                    & (~ (((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_22___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_22___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)))) 
                               & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_22___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_22___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)))))) 
                           | (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_22___05Freg_p__DOT__n0))))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_22___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))))))) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__OUT0) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__OUT1) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_22___05Freg_p__DOT__n0) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0))) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_22___05Freg_p__DOT__n0)) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0))))))) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__A1) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_22___05Freg_p__DOT__n0)) 
                                | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_22___05Freg_p__DOT__n0)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_22___05Freg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__484(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__484\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshcBebEGS4GOgHcyDWiF4TqZJ9hv0eKEX1lhGHvA15__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshhRJkufGfxKWz3UdZyBGHdfPQkrCOLObBml61VSwo__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__485(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__485\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhshk97bt6ZDkk72KiABtHOvlUnNJYCCXAalsr7kSGOj__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__486(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__486\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwHEsVl76rMdewFoPAbaVBIOZEoGWVXxkOikB5wzu__DOT__B0_bar 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshdlB6dZ47XLUEgJrwwVal0OtnlgnJQw1BB2UMOMd3__DOT__B0_bar 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_57 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwHEsVl76rMdewFoPAbaVBIOZEoGWVXxkOikB5wzu__DOT__B0_bar)) 
                                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshdlB6dZ47XLUEgJrwwVal0OtnlgnJQw1BB2UMOMd3__DOT__B0_bar))));
}

void VysyxSoCFull___024root___act_comb__TOP__487(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__487\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshO3ec8NKIH12GJZbzTOBmzWfdJBkLKhgh7ptxHU8U__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_29__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshdukN4qLBshU17pB41kZNitHd1OVQuy2eAo2de8M9__DOT__B) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0))))));
}

void VysyxSoCFull___024root___act_comb__TOP__488(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__488\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh4lgl67PdyArLIIUKaOhQwSXXH43I5a8dTraNWwIy__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b3__05d_reg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwCy6jZu7AGojsJde1Yr8WIJstWeErOEooYk6nWAP__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__489(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__489\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh0VdCrMx6oBl9dByhbQ1IUMBWNVWdmwxNBGDcMvtQ__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshSWA2vbhQ7AoaexUBV4O6IYDbUfXxFeeMKJ4Kzcto__DOT__A1) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwCy6jZu7AGojsJde1Yr8WIJstWeErOEooYk6nWAP__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__490(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__490\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshuT4B8nvCi1v3D6wYhRjeqI6m3dNWa5XjUiD7Hu7v__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b30__05d_reg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwCy6jZu7AGojsJde1Yr8WIJstWeErOEooYk6nWAP__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__491(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__491\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshmthFuojIFZ96Hz675M0zYmcX40E3Iap87AP9y2lB__DOT__B0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b11__05d_reg_p__DOT__n0)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhshu3zBHQ10OeC8mp8TUF8fs29BUtUJMi5jllTmV7T2__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b11__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__492(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__492\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHYdzFxKW26DkwghWQAYAPzAY1f1sL4L4kOJBUWrn__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b1__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__493(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__493\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh1A4SFFgWGoRsWhazM2zyoQo6VQIkxFvygFZlXu5T__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b7__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__494(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__494\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshBJE5CdB2Cc9WaztngOooQWegOscJfIbPgkBSw9ck__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b15__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__495(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__495\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshHSBAaA1r4XxKDxBI3OGw9YWsNLUCdBVRGJA9V7AB__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b25__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__496(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__496\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshWYFyvlEzCAHZmieZoBGPAnBzDBu3vZCLWmOFRjUy__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b19__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__497(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__497\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshbCWBXSan7IJeW1fwgNru44IMwlDm1TZBjzDQtJeM__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b17__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__498(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__498\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshDfZBEMWAClAbBkleCTGzFEhtR0LG43CRVz659uAl__DOT__outB 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b23__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__499(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__499\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXsdgC5wdCMuAcKUdfB4IwEI69o5AZQVEADKzogSh__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b0__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__500(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__500\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh5AzB8NZEy4k3tZsdW9VSh2gdKS5NGbAqVP6Kg6CQ__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b10__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__501(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__501\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshmdiqHg1c7My3mpC23R43jEHTr30ZBqc55fRsD93t__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b6__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__502(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__502\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshA3SvVRKD1sx041J7CFnazftCMYRYf2xICTzPp7Kg__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b24__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__503(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__503\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshwRkMqFKx6rBywQ6sSHtNuQcD9hm9ch2NEm1n5DL8__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b26__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__504(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__504\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_471 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b14__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__505(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__505\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhsh5zfVDA0xRDTU7gIXBBu7rnXT30mR2hF9bL6I6Xtd__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b18__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__506(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__506\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshCJj9jN2ephyBRGV5IDC2DiYDiVtEHJLEO9wrZZBw__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b22__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__507(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__507\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHplHPsnG4W77kqGarqcVJHg30bVxzXoAvWe7h0My__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b8__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__508(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__508\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfxQVEbUG7AtnCaQwF6rbZBSGkMQfxNIuI0eBcMAu__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b9__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__509(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__509\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_472 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b13__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__510(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__510\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshlTTgPjr635A1lAOzfBiC4CdqLfFFhqfPbPDZxGnX__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b2__05d_reg_p__DOT__n0) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__511(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__511\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshuCuW5MjJ9BLjUm71AKR3MwtJ12qZf564Abdow5E6__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b12__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__512(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__512\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhsh5AAr5R1zuZ7vgQT2SKKgvpNrZnaIMNZT7QlPWdTn__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b20__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__513(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__513\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshOBLKqMTyHs1fRKTYrIQkLDsVtXdg0x7DQ6Mp03bL__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b4__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__514(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__514\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_469 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b16__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__515(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__515\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_462 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b28__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__516(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__516\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_ar_ready_AND2X1H7L_A__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__A)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_reg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__517(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__517\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__axi_w_ready_AND2X1H7L_A__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__518(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__518\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCfzs3dlXKSvnXBH8rUet19GHeim8olV2sovHYnWQ__DOT__C0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                 | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b0__05d_reg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__519(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__519\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b3__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__520(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__520\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b1__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__521(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__521\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh0nAfmzTTpVpV8z7stN8ow7fThT3XHqlfSC8uCMtc__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b4__05d_reg_p__DOT__n0)));
}

void VysyxSoCFull___024root___act_comb__TOP__522(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__522\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05Freg_p__DOT__CK 
        = ((IData)(vlSelfRef.clock) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_1_Z_ICGX0P5H7L_E__DOT__P0001));
}

void VysyxSoCFull___024root___act_comb__TOP__523(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__523\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_0___05Freg_p__DOT__CK 
        = ((IData)(vlSelfRef.clock) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR2BX1H7L_B_Z_ICGX0P5H7L_E__DOT__P0001));
}

void VysyxSoCFull___024root___act_comb__TOP__524(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__524\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_0___05Freg_p__DOT__CK 
        = ((IData)(vlSelfRef.clock) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_mret_NAND2BX0P5H7L_AN_Y_NOR3X0P5H7L_C_Y_ICGX0P5H7L_E__DOT__P0001));
}

void VysyxSoCFull___024root___act_comb__TOP__525(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__525\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_0___05Freg_p__DOT__CK 
        = ((IData)(vlSelfRef.clock) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__vaild_NAND2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_ICGX0P5H7L_E__DOT__P0001));
}

void VysyxSoCFull___024root___act_comb__TOP__526(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__526\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh6o42KkMiklLuTf9S6BgUoeL5a7qxBEqRrdPxUM2r__DOT__Y)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshj5Ur0BpdOHVePWZaLlfg6GyfAeEAJod6qSBBLtBe__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshj5Ur0BpdOHVePWZaLlfg6GyfAeEAJod6qSBBLtBe__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_476)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh6o42KkMiklLuTf9S6BgUoeL5a7qxBEqRrdPxUM2r__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_A0_NAND3BX0P5H7L_Y__DOT__Ax 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_476)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX0P5H7L_Y__DOT__A) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_476));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y)) 
                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_476))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_A0_NAND3BX0P5H7L_Y__DOT__Ax)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__527(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__527\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhshi6BkBoodRU3ATkiJC92nL5gWGQYf2korf14SFrIs__DOT__Y)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_457)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh2UuYlX3abqtHJnSRciKBopLKCpFrsprMAMR5w1sb__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshtTKvUJYb1p0BPBTHTKwrasjlRitHpYIAQEMVGZ2q__DOT__Y)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwxnsgbLej5offwFyfcYoSSjZ5NBd7BiKgzZ99BWO__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X1P4H7L_B_Y_NOR2BX1P4H7L_AN__DOT__Ax)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A__DOT__A) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_AND2X1H7L_Y__DOT__A) 
                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_INVX0P5H7L_A_Y_AND2X1H7L_A__DOT__B) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_457)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_AND2X1H7L_Y__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_AND2X1H7L_Y__DOT__A)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_AND2X1H7L_Y__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X1P4H7L_B_Y_NOR2BX1P4H7L_AN__DOT__Ax)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshFXmmKmei8u7ncOWxaEa4uYzBm70wxNBMpeD8Y44l__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkgveiXYbFuPpFli0fYrErpu8QFgLd7AqAcod8zxu__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshizxP7VhtCdUnygTSeAJu8RhlvpzxczLwvtBTkb0x__DOT__A) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshyXVvIsgYIOmF2B9l0cnAv3BK5e0AnNwo1WDqhvNy__DOT__B) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshizxP7VhtCdUnygTSeAJu8RhlvpzxczLwvtBTkb0x__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshizxP7VhtCdUnygTSeAJu8RhlvpzxczLwvtBTkb0x__DOT__A) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshbVzjf50nlApRGAeFzxploBWCWxpPIIWBwEOqBBKn__DOT__Y)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4bZO9OZLAAPUeEdz9r29ECd9pe2ewBsP4IoS6BQY__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshBr1cIe0F6SjMAkYklUfaDLv3PvXXe8EgFcaH3Btd__DOT__Y)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_INVX0P5H7L_A_Y_AND2X1H7L_A__DOT__Y))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjiPdyBNBi77AqitpHvIh2whiRXfCwAz5l8PNBIx__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_12___05Freg_p__DOT__n0)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4bZO9OZLAAPUeEdz9r29ECd9pe2ewBsP4IoS6BQY__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh2UuYlX3abqtHJnSRciKBopLKCpFrsprMAMR5w1sb__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_14___05Freg_p__DOT__n0))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z__DOT__Ax)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z__DOT__Ax)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_12___05Freg_p__DOT__n0)))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)));
}

void VysyxSoCFull___024root___act_comb__TOP__528(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__528\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshyXVvIsgYIOmF2B9l0cnAv3BK5e0AnNwo1WDqhvNy__DOT__B) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshbVzjf50nlApRGAeFzxploBWCWxpPIIWBwEOqBBKn__DOT__Y))));
}

extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_hf053abcd_0;

void VysyxSoCFull___024root___act_comb__TOP__529(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__529\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx381;
    __Vtableidx381 = 0;
    CData/*2:0*/ __Vtableidx382;
    __Vtableidx382 = 0;
    // Body
    __Vtableidx381 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshXVz22MVxJFnF2AF3rvq5mBevZ2EhQPIX3H0TORUD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx381];
    __Vtableidx382 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshPKR7FKUeVahQv6JkycthQCEx8OqkX6MJkA7682kq 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx382];
}

void VysyxSoCFull___024root___act_comb__TOP__530(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__530\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshAui8weYEiu7ANsh2vSh0xYBeyIdvjMIaOSci5Nq4__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshWCTTbhYKyXSkzBtIBxqjD33KXkOeCGk1hUOB4Qcx__DOT__Z 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshkuGm4NIpiK0QcQGc7AbDGn1NPvmNDhfrWN1IX0pf__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)));
}

void VysyxSoCFull___024root___act_comb__TOP__531(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__531\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx482;
    __Vtableidx482 = 0;
    // Body
    __Vtableidx482 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshoyAFxAB5nGjm33EncUV7d26YSvcpKDnjpE3EtxZM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx482];
}

void VysyxSoCFull___024root___act_comb__TOP__532(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__532\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv 
        = (1U & ((~ ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_10___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_10___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))) 
                         & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_10___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_10___05Freg_p__DOT__n0))))))) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_10___05FINVX0P5H7L_A_Y_OAI211X0P7H7L_A0_Y_INVX0P5H7L_A__DOT__Y)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAOI33X1H7L_A0_Y_OAI211X0P7H7L_C0_Y_INVX0P5H7L_A__DOT__Y)) 
                           | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_10___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_10___05FAOI33X0P5H7L_A0_Y_NAND2X0P5H7L_A_Y_INVX0P5H7L_A__DOT__Y))))))) 
                 & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_10___05FAOI222X1P4H7L_A0__DOT__outA) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_10___05FAOI222X1P4H7L_A0__DOT__outB) 
                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_10___05Freg_p__DOT__n0))))) 
                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_10___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_10___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)))) 
                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_10___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FAOI33X0P5H7L_A0__DOT__B0) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_10___05Freg_p__DOT__n0))))))) 
                    & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_10___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_10___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1__DOT__outA) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1__DOT__outB)))) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1_Y_AND2X1H7L_A_B_AOI222X1P4H7L_Y__DOT__outA) 
                             | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_10___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1_Y_AND2X1H7L_A_B_AOI222X1P4H7L_Y__DOT__outC))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__533(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__533\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_59 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__A) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__B));
}

void VysyxSoCFull___024root___act_comb__TOP__534(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__534\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshtDw6kpe2oo33BA3zNOVUH3tFnUwvJ0uUEgMczrAa__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))));
}

void VysyxSoCFull___024root___act_comb__TOP__535(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__535\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshBQannnRYo1CNsmCp1tAcO12COhU0C6PTFwUyoufk__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))) 
                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__536(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__536\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshGzU4ZZ4Se7AyI2Z5XRBYaBtGeJdv6txbDAtN038u__DOT__C 
        = (1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__537(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__537\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0 
        = (1U & ((~ ((~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05Freg_p__DOT__n0)))) 
                          & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_1___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))))) 
                         & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_1___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_1___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)))) 
                            & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_1___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_1___05Freg_p__DOT__n0)))))))) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN_C_INVX0P5H7L_A__DOT__A) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN__DOT__Ax) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN__DOT__Bx))))) 
                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_1___05FAO221X0P5H7L_A0__DOT__Y) 
                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1_Y_NOR2X1P4H7L_A_Y_NOR3BX0P5H7L_AN__DOT__AN_bar) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05FAO221X0P5H7L_B1_C0_INVX0P5H7L_A__DOT__Y)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05FAO221X0P5H7L_B1__DOT__OUT0) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__538(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__538\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx145;
    __Vtableidx145 = 0;
    CData/*2:0*/ __Vtableidx147;
    __Vtableidx147 = 0;
    // Body
    __Vtableidx145 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh48BjXI3PPGf8Rxum2x71rT9EhtA4ReAGuapAfsBH 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx145];
    __Vtableidx147 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshbsgcXWwRnOlI5UFSByhTHn0MBFZOKVRQBVwokV9Y 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx147];
}

void VysyxSoCFull___024root___act_comb__TOP__539(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__539\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx285;
    __Vtableidx285 = 0;
    // Body
    __Vtableidx285 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh9O5QPzbgYKrdk4jdsu2jKwUXAzE4hgvEJrU1rCFR 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx285];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4mRcQBP8YGKTCLOAxhY1lStFUOKAWAyiOYrHuxoI__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshbsgcXWwRnOlI5UFSByhTHn0MBFZOKVRQBVwokV9Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__540(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__540\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__541(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__541\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_13___05FINVX0P5H7L_A_Y_OAI211X1P4H7L_A0_Y_INVX0P5H7L_A__DOT__Y)) 
                     | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_13___05FAOI33X1H7L_A0__DOT__Y) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_13___05FAOI33X1H7L_A0_Y_NAND2X0P5H7L_A__DOT__B) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_13___05Freg_p__DOT__n0)))))) 
                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_210)))) 
                 & ((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_13___05Freg_p__DOT__n0) 
                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91))) 
                      & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_13___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05Freg_p__DOT__n0)))))) 
                     & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_13___05Freg_p__DOT__n0)) 
                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_13___05Freg_p__DOT__n0)))) 
                        & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_13___05Freg_p__DOT__n0)) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_13___05Freg_p__DOT__n0)))))) 
                    & (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_13___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_13___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113)))) 
                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_13___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))) 
                       & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_13___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_13___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)))) 
                          & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_13___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_13___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__542(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__542\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx324;
    __Vtableidx324 = 0;
    CData/*2:0*/ __Vtableidx325;
    __Vtableidx325 = 0;
    // Body
    __Vtableidx324 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshNW8k2BE68FoMhC3a7swDA9I9VLhXCr4ZB1jtDBMd 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx324];
    __Vtableidx325 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshwBoEacpzoMM0us1AAAU11CJmBMEwk2U2zbBCpRWc 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx325];
}

void VysyxSoCFull___024root___act_comb__TOP__543(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__543\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx351;
    __Vtableidx351 = 0;
    // Body
    __Vtableidx351 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshAw5Glef5GlMjJdyodMWAxFbFihDB56Z3iet2K96z 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx351];
}

void VysyxSoCFull___024root___act_comb__TOP__544(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__544\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__C 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax) 
                    ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__545(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__545\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_28___05FNAND2X0P5H7L_A_Y_INVX0P5H7L_A__DOT__Y)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_28___05FAOI22X0P5H7L_B1_Y_NAND3BX1P4H7L_C_Y_INVX0P5H7L_A__DOT__Y) 
              & (((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_28___05Freg_p__DOT__n0)) 
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
                         | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_28___05Freg_p__DOT__n0)) 
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
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_28___05Freg_p__DOT__n0))))))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0_Y_AND3X1P4H7L_C__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__546(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__546\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__Y) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_Y_INVX0P5H7L_A__DOT__Y)) 
                        | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_8___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_8___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_8___05Freg_p__DOT__n0))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_8___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_8___05Freg_p__DOT__n0)))))) 
                              | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_8___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_8___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))))))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))) 
                    & (~ (((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_8___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_8___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_8___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)))))) 
                           | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_8___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)))) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT1)))) 
                          | ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_8___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_8___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_8___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_8___05Freg_p__DOT__n0) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370))))))) 
                             | (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_8___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_8___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314)))) 
                                   & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_8___05Freg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_8___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__547(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__547\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv 
        = (1U & ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_19___05Freg_p__DOT__n0)) 
                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_19___05Freg_p__DOT__n0)))))) 
                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_19___05FAO221X1H7L_A0__DOT__OUT0) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_19___05FAO221X1H7L_A0__DOT__OUT1))) 
                     | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_C0_INVX0P5H7L_A__DOT__Y)) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__OUT0) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_NOR2X1P4H7L_A_Y_NOR3BX1P4H7L_AN__DOT__AN_bar)))) 
                 & ((~ ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_19___05Freg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_19___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)))) 
                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05Freg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))) 
                               & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_19___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_Y_NOR2X0P7H7L_A_B_AO222X0P5H7L_Y__DOT__OUT0) 
                           | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_19___05Freg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_Y_NOR2X0P7H7L_A_B_AO222X0P5H7L_Y__DOT__OUT2))))) 
                    & ((~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_19___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_19___05Freg_p__DOT__n0)))))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_19___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_AOI221X0P5H7L_C0__DOT__outA) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_19___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_AOI221X0P5H7L_C0__DOT__outB)))) 
                       & (~ ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_19___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_19___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_19___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AOI221X0P5H7L_C0__DOT__outA) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_19___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AOI221X0P5H7L_C0__DOT__outB))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__548(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__548\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx233;
    __Vtableidx233 = 0;
    // Body
    __Vtableidx233 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshTjdW6xUtgyBeC2IT02HUwm88qMzA2sk3Ab3Oo0hw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx233];
}

void VysyxSoCFull___024root___act_comb__TOP__549(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__549\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx311;
    __Vtableidx311 = 0;
    // Body
    __Vtableidx311 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshKqNH97Blwf61IgbgH1gOSZTBgHggweDXe5Wtku4j 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx311];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshkNbc1W01oah5IAHrMdLToQgePBjRomRnANwW7uY7__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
           & ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)) 
                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTkRBTP0G0BDxFu2GRBjf8KoLIvPq3mBs1fcE3JTK__DOT__A1_inv) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1))));
}

void VysyxSoCFull___024root___act_comb__TOP__550(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__550\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTEZH2RAxH5VQPQ5OMspO19I20uBgg5B0AhLjISmY__DOT__C 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1));
}

void VysyxSoCFull___024root___act_comb__TOP__551(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__551\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__A) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__B) 
              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05Freg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__552(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__552\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05Freg_p__DOT__n0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__553(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__553\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    CData/*2:0*/ __Vtableidx397;
    __Vtableidx397 = 0;
    // Body
    __Vtableidx76 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                            << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshn7XgSIfbhFTvU1xZvcdAzy7ZTjuXar7lXsqcWckE 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx76];
    __Vtableidx397 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshZK06c8qWQy3k0D4NBK0I8JxTwFZgxKFSBzz6203u 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx397];
}

void VysyxSoCFull___024root___act_comb__TOP__554(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__554\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx394;
    __Vtableidx394 = 0;
    // Body
    __Vtableidx394 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshvTHOzMp5LDvfSt225UTau69ncQgXvTHgVc6rfD4a 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx394];
}

void VysyxSoCFull___024root___act_comb__TOP__555(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__555\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshQxIvbsKykw851TAIk3udVHMePy8tqHHUuPAYoTCb__DOT__A1 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshqPc33XB5mXaBQtu6gNa3A25cn1klGYkeTlb3qhpK__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)));
}

void VysyxSoCFull___024root___act_comb__TOP__556(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__556\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx404;
    __Vtableidx404 = 0;
    CData/*2:0*/ __Vtableidx405;
    __Vtableidx405 = 0;
    // Body
    __Vtableidx405 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshknAuPijLBeFNAIUfEOgahiYObzs5cW6dGBB2tPJM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx405];
    __Vtableidx404 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshjeO2ZAcoXW8AAqRGusUqBQbkyV3WCytcbyhNZAJZ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx404];
}

void VysyxSoCFull___024root___act_comb__TOP__557(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__557\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx256;
    __Vtableidx256 = 0;
    // Body
    __Vtableidx256 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshYNZdiGsTkXqtapBTc11wygCtjtSNbI2nxjqzOiMd 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx256];
}

void VysyxSoCFull___024root___act_comb__TOP__558(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__558\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_NOR2BX1P4H7L_Z_AN_NAND3X0P5H7L_Y_B_AND2X1P4H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshizxP7VhtCdUnygTSeAJu8RhlvpzxczLwvtBTkb0x__DOT__A) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshl6LAYuCuDma8HkOC7brrkBpIAFzSpoAotCBGMKZl__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshFXmmKmei8u7ncOWxaEa4uYzBm70wxNBMpeD8Y44l__DOT__Y) 
           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshtTKvUJYb1p0BPBTHTKwrasjlRitHpYIAQEMVGZ2q__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshshnjAhzCJKJVMRce93UxOLHF98yx0GFcYRGZio3p__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y__DOT__C0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_A0_NAND3BX0P5H7L_Y__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_NOR2BX1P4H7L_Z_AN_NAND3X0P5H7L_Y_B_AND2X1P4H7L_Y__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__559(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__559\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx396;
    __Vtableidx396 = 0;
    CData/*2:0*/ __Vtableidx403;
    __Vtableidx403 = 0;
    // Body
    __Vtableidx396 = ((4U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar) 
                                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b31__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx396];
    __Vtableidx403 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshjeO2ZAcoXW8AAqRGusUqBQbkyV3WCytcbyhNZAJZ) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b31__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh2tPcQG3pLVDdL5EhXBBJWjKhXBOk63AfYukA7B10 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx403];
}

void VysyxSoCFull___024root___act_comb__TOP__560(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__560\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshpPVjXSnDHwKOsaOAh9aODfDVPMR9PwB0wb6tHlAy__DOT__A1_inv 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__561(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__561\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx326;
    __Vtableidx326 = 0;
    // Body
    __Vtableidx326 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFJE3AHMbH6i5HZzHiDpceKcVKb0XRwrENiVBp9dM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx326];
}

void VysyxSoCFull___024root___act_comb__TOP__562(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__562\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx306;
    __Vtableidx306 = 0;
    // Body
    __Vtableidx306 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshaTVAik4i1rMLlbBV1wFRnhKnmuAvbFeXBLHmk9b9 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx306];
    vlSelfRef.__VdfgRegularize_he50b618e_0_464 = ((~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax) 
                                                    ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshBdCVyBWHywyDYFtfrV4ixSHYmYZqEROzD92h6hBp__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax) 
               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)))) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshpPVjXSnDHwKOsaOAh9aODfDVPMR9PwB0wb6tHlAy__DOT__A1_inv) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1))));
}

void VysyxSoCFull___024root___act_comb__TOP__563(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__563\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx267;
    __Vtableidx267 = 0;
    // Body
    __Vtableidx267 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshMR4L4IuAZDexWVY6BGTfXZKeGj8GIPhiOzwMGq1h 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx267];
}

void VysyxSoCFull___024root___act_comb__TOP__564(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__564\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshqDqgjUXsYYKOeV8PU5fBPYAzf9RPWDoclIsQ7FQY__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__565(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__565\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx308;
    __Vtableidx308 = 0;
    // Body
    __Vtableidx308 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshIUtAvaHv655GKa2x4OAG6TsA2qjASlRtLB9ISSBt 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx308];
}

void VysyxSoCFull___024root___act_comb__TOP__566(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__566\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh6R1V6RoxTMKXc1qsTLsgIyECu7NBBAl7oWB2WRo7__DOT__Z 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_54 = (1U 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh6R1V6RoxTMKXc1qsTLsgIyECu7NBBAl7oWB2WRo7__DOT__Z) 
                                                    | (~ 
                                                       ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__567(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__567\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhshpffwzcp51zAYv5BE8AJcZBgNGrANPa4Tr26KOt0h__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA0wWoVEY625MhzN6PeXo7urRRBazBbdPawbRhRVo__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_56 = (1U 
                                                 & ((~ 
                                                     ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax))) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA0wWoVEY625MhzN6PeXo7urRRBazBbdPawbRhRVo__DOT__B)));
}

void VysyxSoCFull___024root___act_comb__TOP__568(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__568\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx424;
    __Vtableidx424 = 0;
    // Body
    __Vtableidx424 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBIeNBAC7AQPRPZnTG9jTe1X5FAJGfo1EXUMrPQqo 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx424];
}

void VysyxSoCFull___024root___act_comb__TOP__569(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__569\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx524;
    __Vtableidx524 = 0;
    // Body
    __Vtableidx524 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfBV4AGoXGXmAdTSJqZjjzYEIwgao99wzEEcaw9rz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx524];
}

void VysyxSoCFull___024root___act_comb__TOP__570(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__570\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshKQn0MUhyrGfouwleuQvtEaK9geE2m1B7FpNu3Mm0__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y)) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0))));
}

void VysyxSoCFull___024root___act_comb__TOP__571(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__571\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_470 = ((~ 
                                                   ((~ 
                                                     ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y))) 
                                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__572(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__572\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshjy1movpObsehstoXnGruotcp2igkIAbqVnJAn0Up__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A1 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshjy1movpObsehstoXnGruotcp2igkIAbqVnJAn0Up__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A1) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshjy1movpObsehstoXnGruotcp2igkIAbqVnJAn0Up__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__573(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__573\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_18___05Freg_p__DOT__n0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_Y_AND2X1H7L_B__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__574(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__574\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05Freg_p__DOT__n0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FAO221X0P5H7L_A0_Y_NOR4X6H7L_B_Y_AND2X1H7L_A__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__575(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__575\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx241;
    __Vtableidx241 = 0;
    CData/*2:0*/ __Vtableidx242;
    __Vtableidx242 = 0;
    // Body
    __Vtableidx241 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshjQqPFtCS1YOJOLbSRdB5VKycnJNK9GJNzKHAFeZV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx241];
    __Vtableidx242 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshRcOnufm8jANq3aujzwJ56QPFPAsT9Pq9ttAfr4jB 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx242];
}

void VysyxSoCFull___024root___act_comb__TOP__576(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__576\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx281;
    __Vtableidx281 = 0;
    // Body
    __Vtableidx281 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshtoBAcAx313b0adZ06LMZNR2TdvfAaiC7vVld7ntT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx281];
}

void VysyxSoCFull___024root___act_comb__TOP__577(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__577\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTEZH2RAxH5VQPQ5OMspO19I20uBgg5B0AhLjISmY__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__578(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__578\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx137;
    __Vtableidx137 = 0;
    CData/*2:0*/ __Vtableidx146;
    __Vtableidx146 = 0;
    // Body
    __Vtableidx137 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshjOciOt8mbzPKPP5M6Az2OmaQyRTVlkNGKNwCOIXY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx137];
    __Vtableidx146 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshNwGzSFDbUg8ScIZ97VevJv2mdJt6Km6QGbENUrBY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx146];
}

void VysyxSoCFull___024root___act_comb__TOP__579(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__579\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx320;
    __Vtableidx320 = 0;
    // Body
    __Vtableidx320 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshgrQH8UvOY4YXGUkj1Y4BINOlc2FUg9BTAjBSfBcQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx320];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshhzUA6xeL6BspgWk8JzsArSUWXjsfrGYxgTwu5SRf__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshjOciOt8mbzPKPP5M6Az2OmaQyRTVlkNGKNwCOIXY)) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshNwGzSFDbUg8ScIZ97VevJv2mdJt6Km6QGbENUrBY)) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))))));
}

void VysyxSoCFull___024root___act_comb__TOP__580(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__580\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1));
}

void VysyxSoCFull___024root___act_comb__TOP__581(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__581\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx151;
    __Vtableidx151 = 0;
    CData/*2:0*/ __Vtableidx152;
    __Vtableidx152 = 0;
    // Body
    __Vtableidx151 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh0yAKil38njuyDZR62UzQPFPFfwMGWsq21pKImeDn 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx151];
    __Vtableidx152 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshrZDAvZv690RB2Lf4JgwWunTrMg6At5I6WBAYxiAI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx152];
}

void VysyxSoCFull___024root___act_comb__TOP__582(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__582\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx286;
    __Vtableidx286 = 0;
    // Body
    __Vtableidx286 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshbFRsF93Xraln5GAVJP3Q5bSo3y3JAfQNBxseNgj8 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx286];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshAP2KCbKHkPLMc1PMNfE5YeYNeF4ZpsUJGWGi9mC7__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshrZDAvZv690RB2Lf4JgwWunTrMg6At5I6WBAYxiAI))));
}

void VysyxSoCFull___024root___act_comb__TOP__583(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__583\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__C 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__584(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__584\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__B0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshtYJPZokARyQ4NILhMqjLxi2ks3BRS6mGIA1WmNS5__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A0) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__585(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__585\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx455;
    __Vtableidx455 = 0;
    CData/*2:0*/ __Vtableidx456;
    __Vtableidx456 = 0;
    // Body
    __Vtableidx455 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshMws1tS8WCtvvHVDpFve3MugCRJ4PQHxbZiAa06gC 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx455];
    __Vtableidx456 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshqPAWN0EgMYQHUYnPhAf4ok0K5vv8NOpKeWRh58jQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx456];
}

void VysyxSoCFull___024root___act_comb__TOP__586(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__586\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx481;
    __Vtableidx481 = 0;
    // Body
    __Vtableidx481 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshRWDFOAczrAoVsJREzHtfkM1ObtLHZ35LU5Jwd8BB 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx481];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshtM9uPZvkqXvBRssfOIY7NilYTi1PWeMcC9PAcG49__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshqPAWN0EgMYQHUYnPhAf4ok0K5vv8NOpKeWRh58jQ) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshMws1tS8WCtvvHVDpFve3MugCRJ4PQHxbZiAa06gC)));
}

void VysyxSoCFull___024root___act_comb__TOP__587(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__587\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshDfRXB12PdoWsZbAuBZnhVDiKB501bblci3tI6B5K__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__588(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__588\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx264;
    __Vtableidx264 = 0;
    CData/*2:0*/ __Vtableidx265;
    __Vtableidx265 = 0;
    // Body
    __Vtableidx264 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshxapCrDlVMxDj9LFIaSVngAm4XjSD5GedgxTKsZbt__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx264];
    __Vtableidx265 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshGF7deMTxeoNr2yvSj99B0OL5oEUDjTK9r44Sidnj 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx265];
}

void VysyxSoCFull___024root___act_comb__TOP__589(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__589\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx273;
    __Vtableidx273 = 0;
    // Body
    __Vtableidx273 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcBNaMwgGkJHbSAglv6D2Qq2YtyKgCGH9t5sZyvRf 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx273];
}

void VysyxSoCFull___024root___act_comb__TOP__590(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__590\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhshk16JHz71Ejx0D6NAN0n9dvZZPITHyIIu8SlvVjBY__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__591(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__591\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_9___05Freg_p__DOT__n0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_9___05FAO222X0P5H7L_A0_Y_NOR4X6H7L_B_Y_AND2X1H7L_A__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__592(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__592\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshGLoSGxAzRYOhVbVbmYmAIK5TD1bMDRYepKWAoAvX__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__593(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__593\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx289;
    __Vtableidx289 = 0;
    // Body
    __Vtableidx289 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshQ7AnVWNIABoniEiAhqix2hP3R5zPz8Y55ElmHacP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx289];
}

void VysyxSoCFull___024root___act_comb__TOP__594(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__594\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshZNHgn6BcIt7PBUnBvALxEvPVpNCzXHNzi8an1nn4__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__C 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshZNHgn6BcIt7PBUnBvALxEvPVpNCzXHNzi8an1nn4__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__C) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshZNHgn6BcIt7PBUnBvALxEvPVpNCzXHNzi8an1nn4__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__595(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__595\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_25___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__A) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_25___05FNAND2X0P5H7L_A_1_Y_NAND3X1H7L_B_A_AND2X1H7L_A__DOT__B) 
              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_25___05Freg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__596(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__596\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx131;
    __Vtableidx131 = 0;
    CData/*2:0*/ __Vtableidx132;
    __Vtableidx132 = 0;
    // Body
    __Vtableidx131 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshsepj3DQbLMWKMnjZiZJyvVWpmBn8SPNMiRndcB2B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx131];
    __Vtableidx132 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshnKDsdkgtwX1JQuQNdFwI8ajraJCjsOrJihECBUpo 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx132];
}

void VysyxSoCFull___024root___act_comb__TOP__597(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__597\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx322;
    __Vtableidx322 = 0;
    // Body
    __Vtableidx322 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshSseqMJc9L0C61PATeYiB75kf51aGuIuotqcN1tbQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx322];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshNqe3MNhYleEOu1Jj1rIgdJMwhhJt9RkLfmM8iZnu__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshnKDsdkgtwX1JQuQNdFwI8ajraJCjsOrJihECBUpo))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshNqe3MNhYleEOu1Jj1rIgdJMwhhJt9RkLfmM8iZnu__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshNqe3MNhYleEOu1Jj1rIgdJMwhhJt9RkLfmM8iZnu__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshsepj3DQbLMWKMnjZiZJyvVWpmBn8SPNMiRndcB2B));
}

void VysyxSoCFull___024root___act_comb__TOP__598(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__598\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__D 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1));
}

void VysyxSoCFull___024root___act_comb__TOP__599(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__599\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshNyZpUgJJaWpSTEmBrA6cg1yBhpGBy6nORitobnvR__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__600(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__600\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_AND2X1H7L_A__DOT__A) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_AND2X1H7L_A__DOT__B) 
              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05Freg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_B_NOR2X0P5H7L_B_Y_AND2X1H7L_B__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__601(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__601\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx230;
    __Vtableidx230 = 0;
    // Body
    __Vtableidx230 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshwJayd4Lr7O1bxNzlacq85ASsiTpXrZWgRRATmuYX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx230];
}

void VysyxSoCFull___024root___act_comb__TOP__602(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__602\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshzAksTAw3BO32vRlDyJnqf2OQMyBbDkuja3EFpN4u__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__603(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__603\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx483;
    __Vtableidx483 = 0;
    // Body
    __Vtableidx483 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4Y1yz4gVxqJj9AALJijI1PteHMkudh7joJhOTfdX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx483];
}

void VysyxSoCFull___024root___act_comb__TOP__604(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__604\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_OR2X1P4H7L_B_A_OAI21X0P5H7L_Y__DOT__A1 
        = (1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh9F8w8SEnFx5AI3w5eHvgRsdm1ANAKZ72x5r2YXcp__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1));
}

void VysyxSoCFull___024root___act_comb__TOP__605(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__605\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshUDl01rmiIkqL8DsVz4XSmXsw6ZWXiWlaxUDMkmAP__DOT__A1_inv 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__606(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__606\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshRgytFyqAP0acvRAAHz4HMCjtWdM61ReD4QnUWGBw__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1));
}

void VysyxSoCFull___024root___act_comb__TOP__607(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__607\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshVxafDuw5khxFuRK6BW7bJUp2U56gRRxiztzdCzVS__DOT__C0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhshk97bt6ZDkk72KiABtHOvlUnNJYCCXAalsr7kSGOj__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__608(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__608\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx461;
    __Vtableidx461 = 0;
    // Body
    __Vtableidx461 = (((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshdlB6dZ47XLUEgJrwwVal0OtnlgnJQw1BB2UMOMd3__DOT__B0_bar)) 
                         | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwHEsVl76rMdewFoPAbaVBIOZEoGWVXxkOikB5wzu__DOT__B0_bar)) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                  << 1U) | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwHEsVl76rMdewFoPAbaVBIOZEoGWVXxkOikB5wzu__DOT__B0_bar)) 
                                             | (~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)))) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshdlB6dZ47XLUEgJrwwVal0OtnlgnJQw1BB2UMOMd3__DOT__B0_bar))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshBCJE6jlQrVvGMOP5hvKoNk8iRfTRWZg0VVCVmv41 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx461];
}

void VysyxSoCFull___024root___act_comb__TOP__609(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__609\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh4rzhFJQl5CQqAHdG2MxRtjT6zAitrwD40B1xjBSo__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b5__05d_reg_p__DOT__n0))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_57))));
}

void VysyxSoCFull___024root___act_comb__TOP__610(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__610\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_reg_p_D_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_ar_ready_AND2X1H7L_A__DOT__B) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel_0___05Freg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__611(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__611\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    // Body
    __Vtableidx36 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_ar_ready_AND2X1H7L_A__DOT__B) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel_0___05Freg_p__DOT__n0) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_valid_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc_axi_mem_ar_valid 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx36];
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc_axi_mem_ar_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready));
}

void VysyxSoCFull___024root___act_comb__TOP__612(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__612\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__axi_ar_vaild_OAI21X0P5H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_ar_ready_AND2X1H7L_A__DOT__B) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__axi_w_ready_AND2X1H7L_A__DOT__B));
}

void VysyxSoCFull___024root___act_comb__TOP__613(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__613\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_Y_AO21X1H7L_B0__DOT__outA 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__614(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__614\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__615(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__615\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    // Body
    __Vtableidx82 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                            << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                              << 1U)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b31__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshC7qEX3afQAF6LkCO0FoiQjLc3UqKgH3dCYJ2r3Q1 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx82];
}

void VysyxSoCFull___024root___act_comb__TOP__616(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__616\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx95;
    __Vtableidx95 = 0;
    // Body
    __Vtableidx95 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                            << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                              << 1U)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b28__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJkopFWZLwy5DwQVQM5dwkEDSdXmqq9fA1brzKghN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx95];
}

void VysyxSoCFull___024root___act_comb__TOP__617(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__617\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx330;
    __Vtableidx330 = 0;
    // Body
    __Vtableidx330 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b26__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshiPp22iRlFGt8YjS4A1Y9CUO2y8f4VUH8pop819ik 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx330];
}

void VysyxSoCFull___024root___act_comb__TOP__618(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__618\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx85;
    __Vtableidx85 = 0;
    // Body
    __Vtableidx85 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                            << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                              << 1U)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b24__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshh8w80tAYPNHmW2K1DGUFXB3Y5Thjceg6A6ayMEuT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx85];
}

void VysyxSoCFull___024root___act_comb__TOP__619(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__619\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx517;
    __Vtableidx517 = 0;
    // Body
    __Vtableidx517 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b14__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZRLCzad9eZTXCx2Uc2K4tpMGt119S02PL0GQidfX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx517];
}

void VysyxSoCFull___024root___act_comb__TOP__620(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__620\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx239;
    __Vtableidx239 = 0;
    // Body
    __Vtableidx239 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b20__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshuoxiXJi2JvrCQ83xQ6fQRYCYJjk6nIOCv642fqbt 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx239];
}

void VysyxSoCFull___024root___act_comb__TOP__621(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__621\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx506;
    __Vtableidx506 = 0;
    // Body
    __Vtableidx506 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b0__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshsh4cZdB7xDrPSuoZMsQfcCyRM6n6aGjB2euw8SyA 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx506];
}

void VysyxSoCFull___024root___act_comb__TOP__622(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__622\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx514;
    __Vtableidx514 = 0;
    // Body
    __Vtableidx514 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b13__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNfSUJuXWxlvp2qLNe6Sef599f7liU4ssmoIA3xjo 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx514];
}

void VysyxSoCFull___024root___act_comb__TOP__623(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__623\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx501;
    __Vtableidx501 = 0;
    // Body
    __Vtableidx501 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b2__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh6Qt3chJBKu4hoCAdaLaOE6jfBUyc4T0SBEzSax01 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx501];
}

void VysyxSoCFull___024root___act_comb__TOP__624(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__624\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx516;
    __Vtableidx516 = 0;
    // Body
    __Vtableidx516 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b11__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshAQ3ERWZrGruqfbAsd7DzJrIBNwKzp4CZzAaSFlFi 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx516];
}

void VysyxSoCFull___024root___act_comb__TOP__625(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__625\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx504;
    __Vtableidx504 = 0;
    // Body
    __Vtableidx504 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b4__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh6CgHZAoWT50sk36BqLysU3itUFq0dDfD5bbLdl7A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx504];
}

void VysyxSoCFull___024root___act_comb__TOP__626(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__626\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx499;
    __Vtableidx499 = 0;
    // Body
    __Vtableidx499 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b10__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshTFKxA1fXFS736IlPCy5Im5eYkIAc05ARs6gt8dlM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx499];
}

void VysyxSoCFull___024root___act_comb__TOP__627(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__627\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4FnJmNs5zUih4U02p1YsAwMqSOUmegyojWp04zJ4__DOT__A1 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0))));
}

void VysyxSoCFull___024root___act_comb__TOP__628(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__628\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx442;
    __Vtableidx442 = 0;
    CData/*2:0*/ __Vtableidx443;
    __Vtableidx443 = 0;
    CData/*2:0*/ __Vtableidx444;
    __Vtableidx444 = 0;
    // Body
    __Vtableidx444 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshQ4B6TVVOMNXPfU38KYsMLbBK2sQm73d1F0BFRrOv__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxjlBu4B3QhsIMcWRng2g5z9SQzAJphxKgZzoLyjq__DOT__Y) 
                                  << 1U) | (1U & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshbbgiADpK30OxKn4T3d3VTw0c6v2LzgbOOMlJQ3eQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx444];
    __Vtableidx443 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshbbgiADpK30OxKn4T3d3VTw0c6v2LzgbOOMlJQ3eQ)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshaTqij6zI6d75AFxiAPhZAX67nUW0VafhJ07GJzCP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx443];
    __Vtableidx442 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshaTqij6zI6d75AFxiAPhZAX67nUW0VafhJ07GJzCP) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshQ4B6TVVOMNXPfU38KYsMLbBK2sQm73d1F0BFRrOv__DOT__B) 
                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)))) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx442];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_AND2X1H7L_Y__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__629(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__629\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx383;
    __Vtableidx383 = 0;
    CData/*2:0*/ __Vtableidx384;
    __Vtableidx384 = 0;
    CData/*2:0*/ __Vtableidx385;
    __Vtableidx385 = 0;
    // Body
    __Vtableidx385 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBZgCfo5B4uf0bnYlblJsSqBUvV6kj5nRopw3FHpm__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxjlBu4B3QhsIMcWRng2g5z9SQzAJphxKgZzoLyjq__DOT__Y) 
                                  << 1U) | (1U & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshX2GAakgECfZn6jRGIZKJPWFIXA70CAq2xSTSJDBS 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx385];
    __Vtableidx384 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshX2GAakgECfZn6jRGIZKJPWFIXA70CAq2xSTSJDBS)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh9JdPv75eB0yrXxEj5IB8K4krMZ0CO71yDOaynkfY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx384];
    __Vtableidx383 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh9JdPv75eB0yrXxEj5IB8K4krMZ0CO71yDOaynkfY) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBZgCfo5B4uf0bnYlblJsSqBUvV6kj5nRopw3FHpm__DOT__B) 
                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)))) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx383];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__630(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__630\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx77;
    __Vtableidx77 = 0;
    // Body
    __Vtableidx77 = ((4U & (((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0)))) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__Ax)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)))) 
                            << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NAND2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx77];
}

void VysyxSoCFull___024root___act_comb__TOP__631(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__631\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx446;
    __Vtableidx446 = 0;
    CData/*2:0*/ __Vtableidx447;
    __Vtableidx447 = 0;
    CData/*2:0*/ __Vtableidx535;
    __Vtableidx535 = 0;
    CData/*2:0*/ __Vtableidx539;
    __Vtableidx539 = 0;
    // Body
    __Vtableidx539 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshB3VuZdwzwYp6nO6n6IoYKRXDchgrU4vMiflFiwYt 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx539];
    __Vtableidx535 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshJInSWSeOuxtlyqc5ULXwnUpVAyMF82kRsAQAHBYT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx535];
    __Vtableidx447 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshQ4B6TVVOMNXPfU38KYsMLbBK2sQm73d1F0BFRrOv__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshfp8KuKHaR3x6QBmtTjPPs9bHPpPddnIJZGnxaquN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx447];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshTD4Uey0cE8v2qFPPu8eJ6qI4Dscv5e7kJ9EDXfBd__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))) 
                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)))));
    __Vtableidx446 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshfp8KuKHaR3x6QBmtTjPPs9bHPpPddnIJZGnxaquN) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshG3hMPj3wjDBBvU9fobNArBdVMY8OAPwxBuAXUtRC 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx446];
}

void VysyxSoCFull___024root___act_comb__TOP__632(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__632\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx421;
    __Vtableidx421 = 0;
    CData/*2:0*/ __Vtableidx422;
    __Vtableidx422 = 0;
    CData/*2:0*/ __Vtableidx534;
    __Vtableidx534 = 0;
    CData/*2:0*/ __Vtableidx538;
    __Vtableidx538 = 0;
    // Body
    __Vtableidx538 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh8jgVO7TGl0GYKfecIUqeaHJJSkAQGxA8CMyndItP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx538];
    __Vtableidx534 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshDSTYJPcK3cOfCwGc0BSgEzf8fLrIu8J1RhOh3rom 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx534];
    __Vtableidx422 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshTsX9uBVSt0msZnJPMoqiH8uc0tmfRPunmzhkpFdi__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh786RNnXSgYYuOXAo0xgBKXAmYw4YShNKA42jsegw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx422];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshVFknVW5yB4zf14KHnumiGX6B0OGro3CkkxdtiAzN__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1__DOT__C0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh8jgVO7TGl0GYKfecIUqeaHJJSkAQGxA8CMyndItP) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y));
    __Vtableidx421 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh786RNnXSgYYuOXAo0xgBKXAmYw4YShNKA42jsegw) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshesNfw2FD0WyYWefZJAsa54DgQbFr2h3dw6yKoZAK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx421];
}

void VysyxSoCFull___024root___act_comb__TOP__633(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__633\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx387;
    __Vtableidx387 = 0;
    CData/*2:0*/ __Vtableidx388;
    __Vtableidx388 = 0;
    CData/*2:0*/ __Vtableidx533;
    __Vtableidx533 = 0;
    CData/*2:0*/ __Vtableidx537;
    __Vtableidx537 = 0;
    // Body
    __Vtableidx537 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshS5F3L0afar8M4JyxXhBZKK3tgmOLQEYx8xQRlE6M 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx537];
    __Vtableidx533 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhshg9EytUJXAqabOOqBgLXPRhG6Ttj6n0MjFKbjuk10 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx533];
    __Vtableidx388 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBZgCfo5B4uf0bnYlblJsSqBUvV6kj5nRopw3FHpm__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh8agLHZQBzteERghaQeTaXGa3XkXfCJlTeg79Rw9H 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx388];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshS5F3L0afar8M4JyxXhBZKK3tgmOLQEYx8xQRlE6M));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh2UuYlX3abqtHJnSRciKBopLKCpFrsprMAMR5w1sb__DOT__B))) 
                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4bZO9OZLAAPUeEdz9r29ECd9pe2ewBsP4IoS6BQY__DOT__Y) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhshg9EytUJXAqabOOqBgLXPRhG6Ttj6n0MjFKbjuk10)))));
    __Vtableidx387 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh8agLHZQBzteERghaQeTaXGa3XkXfCJlTeg79Rw9H) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshgNZqrbI1zUNXTGjptJBVT1jfZQaBnkVxgibfjLBW 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx387];
}

void VysyxSoCFull___024root___act_comb__TOP__634(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__634\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    CData/*2:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    CData/*2:0*/ __Vtableidx536;
    __Vtableidx536 = 0;
    // Body
    __Vtableidx536 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXdqrXD9Nx95ApZAlz3ZB6B29FUV8EHQ7T30mezj3 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx536];
    __Vtableidx80 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__Ax)) 
                            << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshq1wd6gNXqqrTj6ys7g4q8o0IMdn7yiNinlLQMZW2 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx80];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshJochtljbuABYQHeqciy4SPOPhMlGOdrT6DLXU7L8__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh2UuYlX3abqtHJnSRciKBopLKCpFrsprMAMR5w1sb__DOT__B))) 
                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4bZO9OZLAAPUeEdz9r29ECd9pe2ewBsP4IoS6BQY__DOT__Y) 
                       & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0) 
                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y)))) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXdqrXD9Nx95ApZAlz3ZB6B29FUV8EHQ7T30mezj3));
    __Vtableidx79 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshq1wd6gNXqqrTj6ys7g4q8o0IMdn7yiNinlLQMZW2) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshjHgioR641LSTFErvAR4TfgCNwJZImGBoaNaWRYeh 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx79];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshJochtljbuABYQHeqciy4SPOPhMlGOdrT6DLXU7L8__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshJochtljbuABYQHeqciy4SPOPhMlGOdrT6DLXU7L8__DOT__B0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__635(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__635\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx234;
    __Vtableidx234 = 0;
    // Body
    __Vtableidx234 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshl50tkA9QZwEwFUkUrwVnwly0qxRmqI4q0vs7Qglb__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshgrgVdVkXXtCqQXFM7sWmKYBqlS6FA632IMFxx0er 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx234];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzBBQvPNVa9ycrWAgbtJCv9UDt9VBNpBUCQlvcDqd__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__636(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__636\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx398;
    __Vtableidx398 = 0;
    // Body
    __Vtableidx398 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshSxeKmw9gS5NWlbsVYIxIglmYp54DF0EBxAyBFEek__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshYCVvyaxkegAJYAZwTkxgxaShS5icQ9CXKcCLTGIx 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx398];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgGwfUdUygNFVzd69mXEzqJiqFVXLZdCuX5RCqp7F__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__637(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__637\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx327;
    __Vtableidx327 = 0;
    // Body
    __Vtableidx327 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshdukN4qLBshU17pB41kZNitHd1OVQuy2eAo2de8M9__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshnZGSdsy0xszAkBGvMI9NNCDnH1Ut8N7oi5PC1iOI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx327];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshATXLWlgGKXGoWivVsfY4QkSDlCRYbiAhIaankz7E__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__638(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__638\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx158;
    __Vtableidx158 = 0;
    // Body
    __Vtableidx158 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshR5IiKjBFk2mLvYzh6FqNODOdnDtdV5aZHVC6poAj__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhshq1dPuSEsPk30QNSKA4xrqakHbMs170tTOW5qL3sX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx158];
}

void VysyxSoCFull___024root___act_comb__TOP__639(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__639\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx250;
    __Vtableidx250 = 0;
    // Body
    __Vtableidx250 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshrIYHFlCW9RoQH9NwX0KCG2Ibdg6ij18ttdUQBFNe__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshvp4BLwjS4WJsR4yvMZCdopx2IdpP2jPflNAhOeSP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx250];
}

void VysyxSoCFull___024root___act_comb__TOP__640(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__640\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx453;
    __Vtableidx453 = 0;
    CData/*2:0*/ __Vtableidx454;
    __Vtableidx454 = 0;
    // Body
    __Vtableidx454 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh55YK5Kw2sC2CsO0e4dlsOtE1iATTN1zQVDiPfQ9u 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx454];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshTCbcAJLBh7mH6XGxqI98Uw0dnbqvN3mVyNWDw9ER__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
    __Vtableidx453 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh55YK5Kw2sC2CsO0e4dlsOtE1iATTN1zQVDiPfQ9u) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh75csRmbtJKpDkzMZtRFcIsGNefaUR5zKcf0gXxSz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx453];
}

void VysyxSoCFull___024root___act_comb__TOP__641(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__641\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx148;
    __Vtableidx148 = 0;
    // Body
    __Vtableidx148 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh1zBLkZERpAa4l7Qh6OsWZfan32yQOxAcYTzCB3A2__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshwPF0Fd5B8JdXADpvqpIk3veo1bGovoX3Y1RtASvV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx148];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh57teSbtz8oNdCoWllPARL498XxF8wL1uA0oEQY5o__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__642(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__642\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx243;
    __Vtableidx243 = 0;
    // Body
    __Vtableidx243 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshVPoqWco1ggP5ROuBadmB5lsY2vVu4viKsEYXdfV4__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh8LFRgKeEfeQ5dwGA3QP1hAHOFhrRdOdh1WznLQjb 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx243];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh1zdffxEjYju6Y2NinbJFHwWiCe1pBnwchVBgp8PE__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__643(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__643\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx294;
    __Vtableidx294 = 0;
    // Body
    __Vtableidx294 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshc5WUSYFvEwAuVOlWYMBNOyETZJfcDYeb3HrkLsUH__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh55Dyqi9RrsC9qTpkY2J11UBDNjAEdxY8IQNLNQ9Z 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx294];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh98ukomIx8zn7dmBXfiTPnon0LYUHyxQxiw1MZZDn__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__644(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__644\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx357;
    __Vtableidx357 = 0;
    // Body
    __Vtableidx357 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshhYBbl8ARL35KZnkqQpCV205Si2WzLTHVs7koDwDn__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshRBG26JwNAhLX0ox6Pqm6pTFpRASQ6R2kwZU3B5qY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx357];
}

void VysyxSoCFull___024root___act_comb__TOP__645(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__645\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx464;
    __Vtableidx464 = 0;
    CData/*2:0*/ __Vtableidx465;
    __Vtableidx465 = 0;
    // Body
    __Vtableidx465 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0Wgq6x13eSABz1pjQ2bcr8kNvrBbP3uibtsi1JSK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx465];
    __Vtableidx464 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0Wgq6x13eSABz1pjQ2bcr8kNvrBbP3uibtsi1JSK) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshKQcM2jF5Exi1lqLfLllnRLMNfP2wRMwhx0a2IgxX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx464];
}

void VysyxSoCFull___024root___act_comb__TOP__646(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__646\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx122;
    __Vtableidx122 = 0;
    // Body
    __Vtableidx122 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh6saojwpdhr3uJZTXLKyEQAF6TMa5656Dl8C6lHz6__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhsheBxCB9lRZr5lDZmyZ1P2tdrLRFZZjbeRuyZQlFfX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx122];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshHmyjgnncaFju8XJJpwTqS4VM61v8cZd2UbZar3am__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__647(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__647\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx124;
    __Vtableidx124 = 0;
    // Body
    __Vtableidx124 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshRJqORf6n6CXcDTUHL2RCmVc2e6t3DYyybkfwrVrR__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___Vhsh93laASPUbpiWPcxAz6YfCLUSX3DLaoN1wW3Coff7 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx124];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___Vhsh3JPKG6WsGFeZwGN69cBOn7Bh1R6N7rNU1LxUFnC2__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__648(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__648\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx153;
    __Vtableidx153 = 0;
    // Body
    __Vtableidx153 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh8nvpWxiTnIoIxwEk4p3IyDv0fIr3U7BMQAX31YYj__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh3VUFLKXSxHc88D0DBk55IXSNb2IuErIAWst4GmqB 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx153];
}

void VysyxSoCFull___024root___act_comb__TOP__649(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__649\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx266;
    __Vtableidx266 = 0;
    // Body
    __Vtableidx266 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiaRF0jzFAqTYT9lW6Z5EX3BdgmJHMjZ3HV1CSrXG__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshZkpHSKRz1QdwM65qA3kjqFefxqz5u1OLX2FkNznz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx266];
}

void VysyxSoCFull___024root___act_comb__TOP__650(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__650\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx471;
    __Vtableidx471 = 0;
    CData/*2:0*/ __Vtableidx472;
    __Vtableidx472 = 0;
    // Body
    __Vtableidx472 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshV6tqgXzSmh9ynRholNsmDASQex6crYrqjATuKK13__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx472];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
    __Vtableidx471 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_OR2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx471];
}

void VysyxSoCFull___024root___act_comb__TOP__651(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__651\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx268;
    __Vtableidx268 = 0;
    // Body
    __Vtableidx268 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshnCsGBog4P1OLczNnTvdg4fIBfY9YhLOO2y0bpolQ__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshRfJ4ATyfu5nNcmyHir2BQlxKUUAeGey0KonCOB5d 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx268];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshuG5ZSvQC2CZKPQYCU88ddAuANJZqAynxNgKt8r1j__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__652(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__652\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx138;
    __Vtableidx138 = 0;
    // Body
    __Vtableidx138 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshwOOBWjanoBL5xCVV04jB0V1hUiOqfQrn0NtHnc69__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshfJ4gad3ETe9ZnQBrmNoaX9Bqk7TkP8R7B556DKVv 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx138];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___Vhshvwidb9zofch9qswf2YR0dVBwGpYB4Od933UpTLSy__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__653(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__653\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx323;
    __Vtableidx323 = 0;
    // Body
    __Vtableidx323 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh1p8sJ3NiEbelgR0X5O7sdSytgJX8mlHvKKgtRv0q__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh2oLTgneDVCUXoEmsEvBBXAAyBC9rDoNVNIGfUGyd 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx323];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshovNe0SOHzBBXT0R6ZdvuF9v84IaX1hIUjSq3v8QK__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__654(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__654\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx406;
    __Vtableidx406 = 0;
    // Body
    __Vtableidx406 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh0JR7u7dnXflyUGHWcqtzbZt4ktVvqwqzp1Nf0vMn__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshjFB8w3lyK1BhVY7nV4N0ATKWXJ4zSRCXRFIKW5k3 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx406];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshY32ngcXkat1moOBYNb9hjJdWPh3eUULfmdI70OoS__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__655(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__655\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx528;
    __Vtableidx528 = 0;
    CData/*2:0*/ __Vtableidx529;
    __Vtableidx529 = 0;
    // Body
    __Vtableidx529 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpU6BH4EfiwR4neBO3zQzMfoSOEA0jttUdwCSK0fX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx529];
    __Vtableidx528 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpU6BH4EfiwR4neBO3zQzMfoSOEA0jttUdwCSK0fX) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtACqkTibKY8FpxrrB6UfhcB8ZBiZCEMdJTB2VT3j 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx528];
}

void VysyxSoCFull___024root___act_comb__TOP__656(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__656\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    // Body
    __Vtableidx75 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b30__05d_reg_p__DOT__n0))))) 
                            << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshUFsBagCc70xLg9u2tehe5pZPxGQMgAFBgCyQv1Ag 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx75];
}

void VysyxSoCFull___024root___act_comb__TOP__657(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__657\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx328;
    __Vtableidx328 = 0;
    // Body
    __Vtableidx328 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b27__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh3CtZnGvyvEPu37X5UALbHgD5b93jbZhyFT0MrQI7 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx328];
}

void VysyxSoCFull___024root___act_comb__TOP__658(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__658\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx90;
    __Vtableidx90 = 0;
    // Body
    __Vtableidx90 = ((4U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b22__05d_reg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                            << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshF5TALYavtIMEXHkBWpAQJcr2PIbAVfHJWeE2MHGI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx90];
}

void VysyxSoCFull___024root___act_comb__TOP__659(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__659\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx92;
    __Vtableidx92 = 0;
    // Body
    __Vtableidx92 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b23__05d_reg_p__DOT__n0))))) 
                            << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshBG3UQwNmy2rAI76lrbYquj6XJ6AyBYZtyFelIy1s 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx92];
}

void VysyxSoCFull___024root___act_comb__TOP__660(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__660\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh49EtzMHZ20LYrTrdB8Uhdfe8m6difb47Wd1UqTbP__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                    | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b16__05d_reg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__661(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__661\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx511;
    __Vtableidx511 = 0;
    // Body
    __Vtableidx511 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b12__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpmIFL1dXpVYQnWQ9Nr38yTLj3Z66rJ5GjD7jby5a 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx511];
}

void VysyxSoCFull___024root___act_comb__TOP__662(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__662\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx509;
    __Vtableidx509 = 0;
    // Body
    __Vtableidx509 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b17__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ3Abnd64iJdFKBne7NOAD3C2tBa2KoBh78RUMisT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx509];
}

void VysyxSoCFull___024root___act_comb__TOP__663(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__663\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshOvcl65xu0rKE85Dl9NOp6e5rXdAWIJoJZ85l923C__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv)) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0)) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)))))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh1XaEhptoVNywUTuZcqXmwj4CJDZtSBA8IE7Az1z8__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__C0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshOvcl65xu0rKE85Dl9NOp6e5rXdAWIJoJZ85l923C__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshS5eMObAXUiAvBGG3KeQAKCOyb6aTGJRcAxByps2F__DOT__OUT0));
}

void VysyxSoCFull___024root___act_comb__TOP__664(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__664\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx497;
    __Vtableidx497 = 0;
    // Body
    __Vtableidx497 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b5__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshrvmejWHV6aPbJ3gncxuHoBVuj3klWIHBIwm9EvTV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx497];
}

void VysyxSoCFull___024root___act_comb__TOP__665(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__665\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx502;
    __Vtableidx502 = 0;
    // Body
    __Vtableidx502 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b3__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshz8AqZswrrEt6f6jzicPCt9WIoogIwD2zwyHmSq3H 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx502];
}

void VysyxSoCFull___024root___act_comb__TOP__666(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__666\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx508;
    __Vtableidx508 = 0;
    // Body
    __Vtableidx508 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b15__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKGtBYPkJpqepBYOr5TBiNxu0cKy2Flv4XfCjYMhe 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx508];
}

void VysyxSoCFull___024root___act_comb__TOP__667(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__667\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx467;
    __Vtableidx467 = 0;
    // Body
    __Vtableidx467 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b7__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshXItg0ysJgBtJpmKWIGBSqLyDrXZATsoTAl4ZTkx2 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx467];
}

void VysyxSoCFull___024root___act_comb__TOP__668(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__668\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx469;
    __Vtableidx469 = 0;
    // Body
    __Vtableidx469 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b6__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshshtLrNph1pNzw4Nc0x5CworthHDnhSHklAfcybO8 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx469];
}

void VysyxSoCFull___024root___act_comb__TOP__669(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__669\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshEOOE3TtAcFWOaFtyMKNFhDxXJ9L2dX9MK0WcwwTT__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv)) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0)) 
                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_A_NAND2X0P5H7L_A__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv))));
}

void VysyxSoCFull___024root___act_comb__TOP__670(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__670\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshRxxJAHjBFhsSsXcf8Vux1Fk5ZWzG6UUE4fvBjlyp__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv)) 
                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))))));
}

void VysyxSoCFull___024root___act_comb__TOP__671(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__671\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshF8ej5CAsOXZJU8cWMA1HuBwDMendGirBJBbgyJpu__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A) 
                 | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkgveiXYbFuPpFli0fYrErpu8QFgLd7AqAcod8zxu__DOT__outA))))));
}

void VysyxSoCFull___024root___act_comb__TOP__672(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__672\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshxkKqoFILPvRWwxY6YscdI6MvATRC3cdo2nCcABgF__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkgveiXYbFuPpFli0fYrErpu8QFgLd7AqAcod8zxu__DOT__outA)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshqiJzX4tDhiqk578klOC9qGc7hzITPjfqx4IbwBAB__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv))));
}

void VysyxSoCFull___024root___act_comb__TOP__673(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__673\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_A_NOR4X1H7L_Y_D_AOI21X0P5H7L_Y__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_Y_AO21X1H7L_B0__DOT__outA)));
}

void VysyxSoCFull___024root___act_comb__TOP__674(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__674\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx540;
    __Vtableidx540 = 0;
    // Body
    __Vtableidx540 = ((4U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshizxP7VhtCdUnygTSeAJu8RhlvpzxczLwvtBTkb0x__DOT__A) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax))) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b0__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshvJOucnQTObM52GXAvWCMG41Tox7b7oN0fin06pve 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx540];
}

void VysyxSoCFull___024root___act_comb__TOP__675(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__675\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx445;
    __Vtableidx445 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshIPHjL4KoYfTDMCaVcngI3hBs3jm8GlXvGANb37re__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    __Vtableidx445 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshl8vSxQzAvgt7ceOLOQF9SNql0BpzF2xJcIAYOFGu 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx445];
}

void VysyxSoCFull___024root___act_comb__TOP__676(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__676\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshbXwfLA4ofIGasVYlK3euENwpupHfLgII665ZihGB__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__677(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__677\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgGwfUdUygNFVzd69mXEzqJiqFVXLZdCuX5RCqp7F__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__678(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__678\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshcsp5qF8zmpIDtSOwPXBAAADA9X8XaAqsziBkSYCD__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__679(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__679\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___Vhshfd6VNp8EhmhXHzLJr3fZdwANe6KTnWHWrVAFCf4B__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshjl4wTNNsQJHjihPYCM4udHrGbOi3ov6sfoT5Nj7G__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_14___05Freg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__680(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__680\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshVzomuTL0BYyYCK4995xEWhprRGCNmQ3iDUvl2XuU__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQW5Fw6jvYJhTLgYhaBaFdDcq3REmeIOlrAcj0Cup__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__681(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__681\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshTTAsQs20mIgdbDxbAq6IMDpsD4CHAOlw4fcapNu8__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__682(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__682\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshPrTjdedvckpjmPUTMNRkuT9f1WOFzwJJe4tOSQjG__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshaKV28oEtcdAghB2MZAUAtdRGbaKLkdaEdtuLor9L__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__683(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__683\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshJVYXXMN5zgbFxu6U1mY2ZKPoZHb3qODU1FIvOxEf__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__684(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__684\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshQYzr8IAjXSyH7ofWw0vAC4B3HD2eEtFa079WpW3s__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh4L41boTkQBaHYR0fxAH6icuBM5c7kuKOlxBxLHib__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__685(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__685\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx420;
    __Vtableidx420 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshtSdP6WsMB1mIRgukrBRBvjEI84B6fL2tUjySu4aA__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax))));
    __Vtableidx420 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshFclsQvlmY6eSkca2eqMnwROn1vkvBvFZoT9vWdiU 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx420];
}

void VysyxSoCFull___024root___act_comb__TOP__686(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__686\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshUjxg2BA5b3BUTUQ1LiGE1kVBMjUqYhB9aaz6PyNA__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshwl4wkfGXOlLB17TAzYPCRB6xwqskpfKPXkFkiaSQ__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_13___05Freg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__687(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__687\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshHD70BvwEpmBGWJ6uz7RAJaHlTscZ7AMilytnXS8i__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__688(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__688\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshl7GFApxg3UvGex8ykWhCsP7MAZHoeSyCRvxwrJk9__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzB3kuExCplb2RO3gh0MP50WGdATRFZ02P8mBMg2k__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__689(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__689\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshR6ZZ6kOiZkLvIGZv56O6mV8WpVnFAZQRKh7j9ZxG__DOT__C0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__B0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    __Vtableidx78 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhzgrEsTRK0TBqABFf6aE8GyyTM8xmq69BpETSY7Q 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx78];
}
