// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

void VTOPmod___024root___nba_comb__TOP__139(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__139\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhshzsnk293TJfeBboOKMRahVzWWH1dgpCf3A9Y2bxA4__DOT__A 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_12_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_12_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh2HQOXcQm9rC1bQL4ckyLHL1clkaCbVX8H1h9X8So__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_11_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_11_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh4i6rw69OkoUOwGBzOjXSlKu6C1G0eRlJB0itfCQs__DOT__B 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_9_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_9_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cr2_q_8___05FOAI21_X1_B1_A_NAND2_X1_A2__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_8_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_8_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshkiDJh4Hy22BhPWkMcSehUznE5sHMSDVAlpHZshWA__DOT__B 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_7_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_7_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FOR2_X1_A1_A2_NAND2_X1_ZN_A2_AND2_X1_A1_ZN_AOI221_X1_A_B1_OAI22_X1_ZN__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_2_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_2_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B 
        = (1U & (~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN_C1_OAI21_X1_ZN__DOT__B)) 
                     & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_1_) 
                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_0_) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_2_) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_2_)))))) 
                    | (((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_1_)) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_1_)) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FOR2_X1_A1_A2_NAND2_X1_ZN_A2_AND2_X1_A1_ZN_AOI221_X1_A_B1_OAI22_X1_ZN__DOT__B))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_0_)) 
                       | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FOR2_X1_A1_A2_NAND2_X1_ZN_A2_AND2_X1_A1_ZN_AOI221_X1_A_B1_OAI22_X1_ZN__DOT__B) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_1_) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_0_)))) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_1_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_3_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__C1) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_2_))))) 
                    | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_3_)) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_B_AOI21_X1_ZN__DOT__A))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3_) 
                          & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_3_)))) 
                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FOR2_X1_A1_A2_AOI21_X1_B2__DOT__B2) 
                                & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_3_) 
                                      & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_2_)))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cr2_q_8___05FOAI21_X1_B1_A_NAND2_X1_A2_ZN_OAI22_X1_B1_ZN_AOI211_X1_B__DOT__ZN 
        = (1U & (~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__A) 
                            | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_6_) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshkiDJh4Hy22BhPWkMcSehUznE5sHMSDVAlpHZshWA__DOT__B))) 
                               | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshkiDJh4Hy22BhPWkMcSehUznE5sHMSDVAlpHZshWA__DOT__B)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__C2))))) 
                        | ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_6_) 
                                       & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_6_)) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_A_OAI21_X1_ZN_A_NAND3_X1_ZN__DOT__A3)))) 
                                   & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_5_)) 
                                          | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_6_)) 
                                             & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_6_))))) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__C2)))) 
                               | (((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2__DOT__ZN) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_4_)) 
                                       | ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_A_OAI21_X1_ZN_A_NAND3_X1_ZN__DOT__A3)) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_5_))) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_5_)))) 
                                   & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_A_OAI21_X1_ZN_A_NAND3_X1_ZN__DOT__A3) 
                                         & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_4_) 
                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_B_AOI21_X1_ZN__DOT__A))) 
                                            & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2__DOT__ZN) 
                                               | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_4_)))))) 
                                  | ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_6_)) 
                                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_6_)) 
                                         & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_A_OAI21_X1_ZN_A_NAND3_X1_ZN__DOT__A3)) 
                                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_5_)))) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_5_))))) 
                           | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_6_)) 
                              & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_6_) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__C2))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_7_) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_7_))) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__C2)))))))) 
                    | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshoFuxvEU3u1O2fdBnecvGlW400DiQ3XAeA4mnbbAp__DOT__C2) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_7_) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_8_) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_8_)))) 
                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__A) 
                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cr2_q_8___05FOAI21_X1_B1_A_NAND2_X1_A2__DOT__ZN)))) 
                       | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cr2_q_8___05FOAI21_X1_B1_A_NAND2_X1_A2__DOT__ZN) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__A) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_7_)))) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_7_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__A2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshBWkP2xvYOuoKmCdqAGOibwGi7u6GQPOmaDB23dv9__DOT__C2) 
                        & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_10_)) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh2HQOXcQm9rC1bQL4ckyLHL1clkaCbVX8H1h9X8So__DOT__B))) 
                           & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_430)) 
                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh2HQOXcQm9rC1bQL4ckyLHL1clkaCbVX8H1h9X8So__DOT__B)))))) 
                    & (((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cr2_q_8___05FOAI21_X1_B1_A_NAND2_X1_A2_ZN_OAI22_X1_B1_ZN_AOI211_X1_B__DOT__ZN) 
                            | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_8_) 
                                   | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshoFuxvEU3u1O2fdBnecvGlW400DiQ3XAeA4mnbbAp__DOT__C2) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_8_))) 
                                      & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_7_)) 
                                            & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_9_) 
                                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_3___05FAOI211_X1_C2_ZN_AOI22_X1_A2_ZN_AOI221_X1_B2_ZN_AOI211_X1_B_A_AOI211_X1_ZN__DOT__A) 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_9_)))))))) 
                               | (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh2zvg7lpmBBHts6ANJjavOAWTaZlUkqcnmPiWtPx8__DOT__B)) 
                                     | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_8_) 
                                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh4i6rw69OkoUOwGBzOjXSlKu6C1G0eRlJB0itfCQs__DOT__B))) 
                                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshoFuxvEU3u1O2fdBnecvGlW400DiQ3XAeA4mnbbAp__DOT__C2) 
                                           & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh4i6rw69OkoUOwGBzOjXSlKu6C1G0eRlJB0itfCQs__DOT__B))))))))) 
                        | (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_10_)) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_10_)) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_9_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_9_)))) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhsh2zvg7lpmBBHts6ANJjavOAWTaZlUkqcnmPiWtPx8__DOT__B))) 
                              & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_9_) 
                                     & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_10_)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_10_)))) 
                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_430)) 
                                    | (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_9_)) 
                                          | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_10_)) 
                                             & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_10_)))))))))) 
                       & ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_11_)) 
                                  | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_11_)) 
                                     | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_430))))) 
                              | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_430)) 
                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_10_)))) 
                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_10_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__ZN 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__A2) 
           & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_11_) 
                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshBWkP2xvYOuoKmCdqAGOibwGi7u6GQPOmaDB23dv9__DOT__C2) 
                        | (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_11_)) 
                              | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_12_)) 
                                 & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_12_)))))))) 
                 | ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_11_)) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhshzsnk293TJfeBboOKMRahVzWWH1dgpCf3A9Y2bxA4__DOT__A))) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshBWkP2xvYOuoKmCdqAGOibwGi7u6GQPOmaDB23dv9__DOT__C2) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___Vhshzsnk293TJfeBboOKMRahVzWWH1dgpCf3A9Y2bxA4__DOT__A) 
                             & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_11_)) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_11_)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_13_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__ZN) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshIBfXlxUDATaJFamXWq8friEP3ESWOxIC49bi9AzV__DOT__C1) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_12_))))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_13_) 
                        & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__ZN) 
                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshIBfXlxUDATaJFamXWq8friEP3ESWOxIC49bi9AzV__DOT__C1) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_13_)))) 
                           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_13_) 
                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_12_) 
                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__ZN)))) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_OAI21_X1_ZN_B1_AOI21_X1_B2__DOT__B2)))) 
                       | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B)) 
                          & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_13_) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm___VhshnJdVAJUVAHCVN5gNsx5oytGHSJmjWCo7rJVdm3fR__DOT__ZN))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2__DOT__ZN 
        = (1U & (~ (((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_NAND2_X1_A2__DOT__A2) 
                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2))) 
                             & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_14_)))) 
                         & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_NAND2_X1_A2__DOT__A2) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2)))) 
                     & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_15_))) 
                    | (((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_15_) 
                                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B)) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2)))) 
                                & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_14_)) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_14_)))) 
                            & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_15_)) 
                                   | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cnt_q_14_)) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_14_)))) 
                               | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2))))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15_)) 
                       | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_14_) 
                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15_))) 
                          & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_cmp_q_15___05FAOI222_X1_C2_A2_OAI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B)))))));
}

void VTOPmod___024root___nba_comb__TOP__140(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__140\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm___VhshD61WXhjolbJNVfxQLDOWxEmpVzz7X9AFIAkwN0BQ__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_14_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_14_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FOR2_X1_A1_A2_NAND2_X1_ZN_A1_NOR2_X1_A1_ZN_AOI21_X1_A__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_7_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_7_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm___Vhshor6gy7clTaxYogZBvPvdAahzZkFydozsSsLIbCHE__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_6_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_6_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_2___05FINV_X1_A_ZN_NOR2_X1_A1__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_2_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_2_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_3___05FOAI21_X1_A_ZN_AOI22_X1_B2__DOT__A2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_0___05FINV_X1_A_ZN_AOI21_X1_B2_ZN_OAI21_X1_B1_ZN_AOI21_X1_B1__DOT__A) 
                        | ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_2_)) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_2_))) 
                               & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_1_) 
                                      | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_0_)) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_0_)))) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_2___05FINV_X1_A_ZN_NOR2_X1_A1__DOT__ZN)))) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_1_)))) 
                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_0___05FOAI21_X1_B2_ZN_NAND2_X1_A2__DOT__A1) 
                           & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_2___05FINV_X1_A_ZN_NOR2_X1_A1__DOT__ZN) 
                                 & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_0___05FOAI21_X1_B2_B1_NAND2_X1_ZN__DOT__ZN) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_0_)))))) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_1_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__A2 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_3___05FOAI21_X1_A_ZN_AOI22_X1_B2__DOT__A2) 
                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_3_)) 
                        | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_3_) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_0___05FOAI21_X1_B2_ZN_NAND2_X1_A2__DOT__A1) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_1_)))) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_3___05FOAI21_X1_A_ZN_AOI22_X1_B2__DOT__B1)))) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_3___05FOAI21_X1_A_ZN_AOI22_X1_B2__DOT__A2) 
                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_3_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B 
        = (1U & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FOR2_X1_A1_A2_NAND2_X1_ZN_A1_NOR2_X1_A1_ZN_AOI21_X1_A__DOT__A) 
                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1)) 
                     | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN_C1_OAI21_X1_ZN__DOT__B)) 
                        & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_6_) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_7_) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_7_))))))) 
                 & (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_6_)) 
                     | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FOR2_X1_A1_A2_NAND2_X1_ZN_A1_NOR2_X1_A1_ZN_AOI21_X1_A__DOT__A) 
                           | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_6_)) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1))))) 
                    & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__A2) 
                               | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_4_))) 
                           | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__A2) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_4_)) 
                                  | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4_) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_3___05FOAI21_X1_A_ZN_AOI22_X1_B2__DOT__B1))) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1)))) 
                              | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_5_) 
                                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_5_) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1))) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1))))))) 
                       | (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1) 
                                 & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_5_)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm___Vhshor6gy7clTaxYogZBvPvdAahzZkFydozsSsLIbCHE__DOT__B))) 
                                    & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm___Vhshor6gy7clTaxYogZBvPvdAahzZkFydozsSsLIbCHE__DOT__B)))))) 
                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_5_) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_4___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1)
                                    ? (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_5_))
                                    : (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_6_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_6_)))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_8_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__C1) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_7_))))) 
                    | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_8_) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B)) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_B_AOI21_X1_ZN__DOT__A))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8_) 
                          & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_8_)))) 
                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FOR2_X1_A1_A2_AOI21_X1_B2__DOT__B2) 
                                & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_8_) 
                                      & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_7_) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B)))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__A2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2__DOT__ZN) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_9_))) 
                    & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_9_) 
                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2_B_AOI21_X1_ZN__DOT__A)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_8___05FAOI211_X1_C2__DOT__ZN) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_9_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__A2 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__A2) 
                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_10_)) 
                        | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10_) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10___05FOAI21_X1_A__DOT__B))) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__B2)))) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__A2) 
                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_10_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__B 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__A2) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_11_))) 
                            | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__A2) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_11_)) 
                                   | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_10___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__B2))) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1)))) 
                               | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_12_) 
                                     | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_12_) 
                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1))) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1))))))) 
                        | ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_13_)) 
                                   & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_13_) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1)))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_12_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1)
                                      ? (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_12_))
                                      : (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_13_) 
                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_13_))))))) 
                           | ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_13_)) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_13_)) 
                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_12_)) 
                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2__DOT__B1)))) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_12_))))) 
                    | ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_13_)) 
                               & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1)) 
                                  & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_13_) 
                                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_14_) 
                                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_14_))))))) 
                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm___VhshD61WXhjolbJNVfxQLDOWxEmpVzz7X9AFIAkwN0BQ__DOT__ZN) 
                              | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1))))) 
                       | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm___VhshD61WXhjolbJNVfxQLDOWxEmpVzz7X9AFIAkwN0BQ__DOT__ZN) 
                              & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_11___05FNAND2_X1_A1_ZN_AOI22_X1_B2_ZN_NOR3_X1_A3_A2_AOI21_X1_ZN__DOT__B1)) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_13_)))) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_13_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_15_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__B) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__C1) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_14_))))) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_15_) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_C1_INV_X1_ZN_A_AOI21_X1_ZN__DOT__B2))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cmp_q_15_) 
                          & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__B) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_15_)))) 
                             | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_15_) 
                                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__B) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_cnt_q_14_)))) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_irq_cdc_sync__02edat_i_AOI211_X1_ZN_C1_INV_X1_ZN_A_AOI21_X1_ZN__DOT__B2))))))));
}

void VTOPmod___024root___nba_comb__TOP__141(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__141\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elrtc__02em__02es_bit_alrmif_reg_p_CK_CLKGATE_X1_GCK_E_NAND2_X1_ZN__DOT__A2 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elrtc__02em__02es_bit_en) 
                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elrtc__02em__02es_bit_alrmie) 
                       & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elrtc__02em__02es_bit_alrmif)) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elrtc__02em__02es_alrm_irq_trg))))));
}

void VTOPmod___024root___nba_comb__TOP__142(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__142\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_A2_AOI21_X1_ZN_B2_OAI221_X1_ZN_C1_AOI21_X1_ZN__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_30_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_30_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshdjSiQ9A7bVLXXTFQM3BbfjcRVWrOI8LCi45Xg3AB__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_29_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_29_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshlXwy9IiMmRkDUWpute5pLdIaA9s7ABbD7ONAi2Hc__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_28_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_28_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshH6a3XBYZyOKfWDPf5jFowWW3a2ijXcMwGl5nMmdj__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_27_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_27_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24___05FOAI21_X1_B1_ZN_INV_X1_A_ZN_OAI22_X1_A2_B1_NAND2_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_24_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshvxgqqtFYh8ATuH4ZFbRueZXrcTVk7QE5AzDvXAfL__DOT__B 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_23_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_23_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22___05Freg_p_D_NOR2_X1_ZN_A2_XNOR2_X1_ZN_A_NAND2_X1_A2__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_22_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshbZ4UUbIZlmBGwX3nID3L95Pd4teXb90Nu4uBNV3j__DOT__B 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_21_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_21_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshXypUA1GX0eOiN15dmJ12zecIUMfAWBTlwSAdiAnY__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_20_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_20_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshakVaaAnBxhohPoJkvWKJ9HhGWPle4iX8uL0PIRKg__DOT__B 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_19_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_19_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshA2AILGetXk6kqh0SCg7xF1F3apI1zllBaCAV5Eel__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_18_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_18_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN_B_AOI21_X1_ZN__DOT__B 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_17_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_17_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16___05Freg_p_D_NOR2_X1_ZN_A2_XNOR2_X1_ZN_A_NAND2_X1_A2__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_16_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh9AE8Ej2Cva4jmq3exASdrGiEAP8B2uYwExPtSlQD__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_8_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_8_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C1 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_7_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_7_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_6_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_6_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1___05FINV_X1_A_ZN_AOI211_X1_A_ZN_OAI21_X1_B1_B2_NAND2_X1_ZN__DOT__A2 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_2_) 
                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_2_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B 
        = (1U & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1___05FINV_X1_A_ZN_AOI211_X1_A_ZN_OAI21_X1_B1_B2_NAND2_X1_ZN__DOT__A1) 
                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_1___05FNAND2_X1_A1__DOT__ZN) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1___05FINV_X1_A_ZN_AOI211_X1_A_ZN_OAI21_X1_B1_B2_NAND2_X1_ZN__DOT__A2))) 
                    & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1_)) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_1_) 
                              | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_0_)) 
                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_0_))))) 
                       | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1___05FINV_X1_A_ZN_AOI211_X1_A_ZN_OAI21_X1_B1_B2_NAND2_X1_ZN__DOT__A1) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1___05FINV_X1_A_ZN_AOI211_X1_A_ZN_OAI21_X1_B1_B2_NAND2_X1_ZN__DOT__A2)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_3_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_2_))))) 
                    | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_3_)) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_B_AOI21_X1_ZN__DOT__A))) 
                       | ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_3_) 
                                      & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_2_)))) 
                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_1___05FINV_X1_A_ZN_AOI211_X1_A_ZN_OAI21_X1_B1_B2_NAND2_X1_ZN__DOT__A1) 
                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_2_)))) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_3_))))) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_A_AOI211_X1_ZN__DOT__B 
        = (1U & (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_562)) 
                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh9AE8Ej2Cva4jmq3exASdrGiEAP8B2uYwExPtSlQD__DOT__ZN)) 
                        & (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_7_) 
                            & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_8_) 
                               | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_8_))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_A_AOI211_X1_ZN_C1_NAND2_X1_ZN__DOT__A2)))) 
                    | (((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2__DOT__ZN) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_4_))) 
                                & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__B1) 
                                       & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_4_) 
                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2_B_AOI21_X1_ZN__DOT__A))) 
                                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_3___05FAOI211_X1_C2__DOT__ZN) 
                                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_4_))))) 
                                   & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5_) 
                                         & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_5_) 
                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__B1))) 
                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C2))))))) 
                            & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__A) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__B1)) 
                                   | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5_) 
                                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_6_) 
                                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_6_)))) 
                                      & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C2))))) 
                               & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_5_)) 
                                  | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__A) 
                                        | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5_)) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI21_X1_A__DOT__B1)))))))) 
                        & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_6_) 
                                  | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_6_) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C2))) 
                                     & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_7_) 
                                           & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C2)) 
                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_7_))))))) 
                              | ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_6_)) 
                                     | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C1) 
                                           | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C2)) 
                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_6_)))))) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_5___05FOAI21_X1_A_ZN_AOI22_X1_B1_ZN_OAI211_X1_B_ZN_AOI221_X1_B2_B1_AOI211_X1_ZN__DOT__C2)))))) 
                       | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh9AE8Ej2Cva4jmq3exASdrGiEAP8B2uYwExPtSlQD__DOT__ZN) 
                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_562)) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_7_)))) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_7_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A__DOT__B1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_9_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_8_))))) 
                    | (((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_9_) 
                                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_8_)))) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_C1_OAI21_X1_ZN_A_OAI21_X1_ZN__DOT__B))) 
                            & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_C1_OAI21_X1_ZN_B1_AND2_X1_ZN__DOT__A2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_9_))))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9_)) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2__DOT__B2) 
                          & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2_A_AOI211_X1_ZN__DOT__B) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_9_))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A_ZN_OR3_X1_A3_ZN_INV_X1_A__DOT__A 
        = (1U & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A__DOT__B1) 
                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_10_))) 
                 | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_9___05FAOI221_X1_C2__DOT__B2) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10_))) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A__DOT__B1) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_10_)))) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_11_) 
                          | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__C1) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN_B_AOI211_X1_ZN__DOT__B)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_12_) 
                        | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A_ZN_OR3_X1_A3_ZN_INV_X1_A__DOT__A)) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__C1) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_11_))))) 
                    | ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A_ZN_OR3_X1_A3_ZN_INV_X1_A__DOT__A)) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_12_)) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A__DOT__B))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_12_) 
                          & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A_ZN_OR3_X1_A3_ZN_INV_X1_A__DOT__A)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN_A_AOI211_X1_ZN__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_12_)))) 
                             | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_12_) 
                                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_10___05FXNOR2_X1_A_ZN_AOI21_X1_A_ZN_OR3_X1_A3_ZN_INV_X1_A__DOT__A)) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_11_)))) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN_B_AOI211_X1_ZN__DOT__B))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_B1_AOI22_X1_A2__DOT__A2 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN__DOT__ZN) 
                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_13_)) 
                        | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13_) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A__DOT__B))) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__B2)))) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1_A2_AOI211_X1_ZN__DOT__ZN) 
                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_13_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshqjV5QlqXmhqf279F7V41SYCKF85WKJOjlKsfDgYf__DOT__A 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_16_) 
                                | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__C2) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16_))) 
                                   & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_15_)) 
                                         & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_17_) 
                                            & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshJ325c6D44ZtAyBuk2H3kyiDfczR6qPm8yno4pP92__DOT__A2) 
                                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_17_)))))))) 
                            | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshJ325c6D44ZtAyBuk2H3kyiDfczR6qPm8yno4pP92__DOT__A2) 
                                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16___05Freg_p_D_NOR2_X1_ZN_A2_XNOR2_X1_ZN_A_NAND2_X1_A2__DOT__ZN)) 
                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__C2) 
                                          | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_15_) 
                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_16_) 
                                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16_)))))) 
                                   | (((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14_) 
                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_13___05FOAI21_X1_A_ZN_AOI22_X1_B1__DOT__B2)) 
                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_B1_AOI22_X1_A2__DOT__A2) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_14_)))) 
                                       & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_B1_AOI22_X1_A2__DOT__A2) 
                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_14_)) 
                                             | ((~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshJ325c6D44ZtAyBuk2H3kyiDfczR6qPm8yno4pP92__DOT__A2) 
                                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_15_))) 
                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_15_))))) 
                                      | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16___05Freg_p_D_NOR2_X1_ZN_A2_XNOR2_X1_ZN_A_NAND2_X1_A2__DOT__ZN) 
                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshJ325c6D44ZtAyBuk2H3kyiDfczR6qPm8yno4pP92__DOT__A2) 
                                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_15_)))) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_15_))))) 
                               | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__A) 
                                     | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_16_) 
                                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN_B_AOI21_X1_ZN__DOT__B))) 
                                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__C2) 
                                           & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN_B_AOI21_X1_ZN__DOT__B))))))))) 
                        | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__C2) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_17_) 
                                   & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_18_) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_18_)))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__A) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshA2AILGetXk6kqh0SCg7xF1F3apI1zllBaCAV5Eel__DOT__ZN)))) 
                           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshA2AILGetXk6kqh0SCg7xF1F3apI1zllBaCAV5Eel__DOT__ZN) 
                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__A) 
                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_17_)))) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_17_))))) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_18_) 
                           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__C2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_18_))) 
                              & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_17_)) 
                                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_19_) 
                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_14___05FXOR2_X1_A_Z_OAI21_X1_A_ZN_AOI221_X1_B1_ZN_NOR3_X1_A3_A2_AOI211_X1_ZN__DOT__A) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_19_)))))))) 
                       | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__A) 
                             | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_18_) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshakVaaAnBxhohPoJkvWKJ9HhGWPle4iX8uL0PIRKg__DOT__B))) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__C2) 
                                   & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshakVaaAnBxhohPoJkvWKJ9HhGWPle4iX8uL0PIRKg__DOT__B))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24___05FOAI21_X1_B1_ZN_INV_X1_A_ZN_OAI22_X1_A2_ZN_AOI211_X1_B__DOT__A 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_22_) 
                        | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshAzXLC6rP3mABlXzCgNXPbU4A07bqSjVzrbka18gd__DOT__C2) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22_))) 
                           & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_21_)) 
                                 & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_23_) 
                                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__A) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_23_)))))))) 
                    | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshAzXLC6rP3mABlXzCgNXPbU4A07bqSjVzrbka18gd__DOT__C2) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_21_) 
                                   & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_22_) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22_)))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__A) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22___05Freg_p_D_NOR2_X1_ZN_A2_XNOR2_X1_ZN_A_NAND2_X1_A2__DOT__ZN)))) 
                           | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_20_) 
                                      | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__C2) 
                                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_20_))) 
                                         & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_19_)) 
                                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_21_) 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__A) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_21_)))))))) 
                                  | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__A) 
                                         | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_20_) 
                                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshbZ4UUbIZlmBGwX3nID3L95Pd4teXb90Nu4uBNV3j__DOT__B))) 
                                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__C2) 
                                               & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshbZ4UUbIZlmBGwX3nID3L95Pd4teXb90Nu4uBNV3j__DOT__B)))))) 
                                     | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshqjV5QlqXmhqf279F7V41SYCKF85WKJOjlKsfDgYf__DOT__A) 
                                           | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__C2) 
                                                   | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_19_) 
                                                      & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_20_) 
                                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_20_)))) 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__A) 
                                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshXypUA1GX0eOiN15dmJ12zecIUMfAWBTlwSAdiAnY__DOT__ZN)))) 
                                              | ((~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshXypUA1GX0eOiN15dmJ12zecIUMfAWBTlwSAdiAnY__DOT__ZN) 
                                                   & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___Vhsh4wRDyvfHE3iISK0nWz6nAaRZIJlQsXHjcD8fSNzo__DOT__A) 
                                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_19_)))) 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_19_)))))))) 
                              | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22___05Freg_p_D_NOR2_X1_ZN_A2_XNOR2_X1_ZN_A_NAND2_X1_A2__DOT__ZN) 
                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshG7XN1SLdAJn3oB77s9XVBXIxYKbfEsFRCaHeHdIq__DOT__A) 
                                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_21_)))) 
                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_21_))))) 
                       | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshAzXLC6rP3mABlXzCgNXPbU4A07bqSjVzrbka18gd__DOT__A) 
                             | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_22_) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshvxgqqtFYh8ATuH4ZFbRueZXrcTVk7QE5AzDvXAfL__DOT__B))) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshAzXLC6rP3mABlXzCgNXPbU4A07bqSjVzrbka18gd__DOT__C2) 
                                   & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshvxgqqtFYh8ATuH4ZFbRueZXrcTVk7QE5AzDvXAfL__DOT__B))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_A_AOI211_X1_ZN__DOT__B 
        = (1U & ((~ ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_29_)) 
                             | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_30_)) 
                                & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_30_))))) 
                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_A_AOI211_X1_ZN_C1_OAI21_X1_ZN__DOT__B))) 
                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_A2_AOI21_X1_ZN_B2_OAI221_X1_ZN_C1_AOI21_X1_ZN__DOT__A) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_A2_AOI21_X1_ZN_B2_OAI221_X1_ZN_C1_AOI21_X1_ZN__DOT__B1)))) 
                 & (((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_28_) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_569)
                              ? (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_28_))
                              : (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_29_) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_29_))))) 
                         & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshdjSiQ9A7bVLXXTFQM3BbfjcRVWrOI8LCi45Xg3AB__DOT__A2) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_28_))) 
                            | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_A2_AOI21_X1_ZN_B2_OAI221_X1_ZN_C1_AOI21_X1_ZN__DOT__B1) 
                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_569)) 
                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshdjSiQ9A7bVLXXTFQM3BbfjcRVWrOI8LCi45Xg3AB__DOT__A2))))))) 
                     | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshAlAmgwlk9tXvscPpdffRGBOVH4OHM4wdoBgVjmcC__DOT__B1) 
                                & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B1) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshH6a3XBYZyOKfWDPf5jFowWW3a2ijXcMwGl5nMmdj__DOT__B))) 
                                   & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshH6a3XBYZyOKfWDPf5jFowWW3a2ijXcMwGl5nMmdj__DOT__B)) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_26_))))) 
                            & ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_26_) 
                                           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_26_) 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B1))) 
                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshAlAmgwlk9tXvscPpdffRGBOVH4OHM4wdoBgVjmcC__DOT__B1)))) 
                                       | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_25_) 
                                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B2) 
                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B1)))))) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24___05FOAI21_X1_B1_ZN_INV_X1_A_ZN_OAI22_X1_A2_ZN_AOI211_X1_B__DOT__A) 
                                          | ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshyAi6rRG67svYODocv41jejHyWZB9kn5EQIhWSF10__DOT__B2) 
                                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_23_) 
                                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_24_) 
                                                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24_)))) 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshAzXLC6rP3mABlXzCgNXPbU4A07bqSjVzrbka18gd__DOT__A) 
                                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24___05FOAI21_X1_B1_ZN_INV_X1_A_ZN_OAI22_X1_A2_B1_NAND2_X1_ZN__DOT__ZN)))) 
                                             | ((~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24___05FOAI21_X1_B1_ZN_INV_X1_A_ZN_OAI22_X1_A2_B1_NAND2_X1_ZN__DOT__ZN) 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg___VhshAzXLC6rP3mABlXzCgNXPbU4A07bqSjVzrbka18gd__DOT__A) 
                                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_23_)))) 
                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_23_))))) 
                                      | (~ ((~ (((~ 
                                                  (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_25_)) 
                                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_25_)) 
                                                   & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshyAi6rRG67svYODocv41jejHyWZB9kn5EQIhWSF10__DOT__B2) 
                                                      | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24_))))) 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_24_)) 
                                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshyAi6rRG67svYODocv41jejHyWZB9kn5EQIhWSF10__DOT__B2) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_24_)) 
                                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_24_)))))) 
                                            & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_25_)) 
                                               | (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B2) 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshS4WeRH9i1vkXP7Xf4XhXaPqYq4VWBOkXBA0UbuUv__DOT__B))))))))) 
                               & ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_27_)) 
                                          | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_27_)) 
                                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B1)))) 
                                      | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_26_) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___Vhsh1wp6eBYVNiJLQ9Pf0Y7l7kKMpgzL3o3sZ9B0QAw7__DOT__B1)))) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_26_))))) 
                        & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshlXwy9IiMmRkDUWpute5pLdIaA9s7ABbD7ONAi2Hc__DOT__ZN) 
                                  | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshAlAmgwlk9tXvscPpdffRGBOVH4OHM4wdoBgVjmcC__DOT__B1)))) 
                              | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_569)) 
                                  & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_27_) 
                                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_28_) 
                                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_28_))))) 
                                 | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshlXwy9IiMmRkDUWpute5pLdIaA9s7ABbD7ONAi2Hc__DOT__ZN) 
                                        & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq___VhshAlAmgwlk9tXvscPpdffRGBOVH4OHM4wdoBgVjmcC__DOT__B1)) 
                                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_27_)))) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_27_))))))) 
                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_29_)) 
                       | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_A2_AOI21_X1_ZN_B2_OAI221_X1_ZN_C1_AOI21_X1_ZN__DOT__A) 
                             | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_29_)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_A2_AOI21_X1_ZN_B2_OAI221_X1_ZN_C1_AOI21_X1_ZN__DOT__B1))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_31_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_A_AOI211_X1_ZN__DOT__B) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_B1_AND2_X1_ZN__DOT__A2) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_30_))))) 
                    | (((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_31_) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_A_AOI211_X1_ZN__DOT__B))) 
                        & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_31_) 
                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1046)))) 
                       | ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1046)) 
                               | (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_31_)) 
                                     | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_30_)) 
                                        & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_A_AOI211_X1_ZN__DOT__B)))))) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_A_AOI211_X1_ZN__DOT__B) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_irq_cdc_sync__02edat_i_AOI221_X1_ZN_C1_OAI22_X1_ZN_B1_AND2_X1_ZN__DOT__A2) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cnt_q_31_))))) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_cmp_q_31_))))));
}

void VTOPmod___024root___nba_comb__TOP__143(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__143\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_16___05FXOR2_X1_B_Z_NOR4_X1_A1_ZN_NAND3_X1_A1__DOT__ZN 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_16_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_16_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_12_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_18_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_18_)) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_8_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_)))))) 
                    & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_2_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_5_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_)) 
                              | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_14_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_6_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_)))))) 
                       & (~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_3_) 
                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_))) 
                                 & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_4_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_15_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_))) 
                                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_9_) 
                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_))))))) 
                             | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_10_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_1_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_))) 
                                       & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_19_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_19_))) 
                                          & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_17_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_17_))))))) 
                                | (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_13_) 
                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_))) 
                                      & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_11_) 
                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_))) 
                                         & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_7_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_))) 
                                            & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02es_tmr_pscr_q_0_) 
                                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim3__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_))))))))))))));
}

void VTOPmod___024root___nba_comb__TOP__144(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__144\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshgJNdcY5VHGA9F7gHQYUC8LFWnS6XGJB0HQej01Qn__DOT__B2 
        = (1U & (~ (((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b0__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                         & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b0__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)))) 
                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b0__05d__02eu_plic_gateway__02es_edge_dec_d_AOI21_X1_ZN__DOT__B2) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshH4CEn3aPYmMdLNiBA04cmvBMSAHr0qXmA5A7i3tg__DOT__B2 
        = (1U & (~ (((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                         & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)))) 
                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_edge_dec_d_AOI21_X1_ZN__DOT__B2) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshodagZzMcYiGopB6UAw2KaoesjHN5SEw09R1Q0dTh__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b1__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                        & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b1__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)))) 
                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshAAk1g9CRMdXrmAgfZybWU4E8G5LyAyddgTYBWKIA__DOT__A2) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshHEhLdHG3DzQonvfjtGAAKpxPX3iQtJyTkecjyKnL__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b6__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                        & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b6__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)))) 
                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshbUzoQfKLTIRCwsqLHNJyPAgL56H1SwXXtMeUix6J__DOT__A2) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshlUYHqoqXKrLvW7B1P6aHw2DEGgECwCClIKQVSNA3__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b13__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshUDR0hANTspnzMQb9TiW3cgmgL2K7x2rGbpxInJ08__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b2__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshJZI9bdCaGNGZsmNoBAZqOdMH1HYQarjDAqVnhqXX__DOT__A2 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b3__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshueWLJ9ii9SrsyLUApxDI5l3XxFp6TpIGASstOAEx__DOT__A2 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b4__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshAd35Lytt545erjrRu6kj0qu2E7RcsNNvgHS5mbSw__DOT__A2 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b7__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshxL6ZqhI2OblsTSpQ44MbsjVznoWFiIkIkP187GCu__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b12__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshqFZALO8fSk4POAdZKBPYT0BZx9V7KhKk32DKPOdV__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b5__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshsAAoLk7Z5TjTeTBcI33kTsaoewACHlkJo1X4d5Lz__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b11__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshXvy0GESyTWOWl3zVAJLBmrMfaRSeXHI4viNg4gWV__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b9__05d__02eu_plic_gateway__02es_trg_cnt_q_0_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshxhQfrnSeUgrsC0ZGoURRIj32CsNARO9w9vRcKmdx__DOT__C2 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_edge_dec_q) 
                    | ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_2_)) 
                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshH4CEn3aPYmMdLNiBA04cmvBMSAHr0qXmA5A7i3tg__DOT__B2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_trg_cnt_q_2_)))) 
                           | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshH4CEn3aPYmMdLNiBA04cmvBMSAHr0qXmA5A7i3tg__DOT__B2) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_trg_cnt_q_2_))))) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b10__05d__02eu_plic_gateway__02es_edge_dec_q_NAND2_X1_A1__DOT__A2)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___Vhshd9ywwJfz3LdaSWWvakMOdLnN4QtvZCAWOkYLZvYK__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshUDR0hANTspnzMQb9TiW3cgmgL2K7x2rGbpxInJ08__DOT__A2) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b2__05d__02eu_plic_gateway__02es_trg_cnt_q_1_))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshUDR0hANTspnzMQb9TiW3cgmgL2K7x2rGbpxInJ08__DOT__A2) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b2__05d__02eu_plic_gateway__02es_trg_cnt_q_1_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshJmHlgBpVQhpxXh2X77XwsUT0YjglEnrepIAzBlq9__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b3__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshJZI9bdCaGNGZsmNoBAZqOdMH1HYQarjDAqVnhqXX__DOT__A2))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b3__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshJZI9bdCaGNGZsmNoBAZqOdMH1HYQarjDAqVnhqXX__DOT__A2)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshhgQpfNlHJdGYDGhQ5m7LU13hocsGlRzxjCPhBmvK__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b4__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshueWLJ9ii9SrsyLUApxDI5l3XxFp6TpIGASstOAEx__DOT__A2))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b4__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshueWLJ9ii9SrsyLUApxDI5l3XxFp6TpIGASstOAEx__DOT__A2)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshuVd4OzbK7W7d9bALsBjTGHv4cmETcHLvGY8E99OJ__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b7__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshAd35Lytt545erjrRu6kj0qu2E7RcsNNvgHS5mbSw__DOT__A2))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b7__05d__02eu_plic_gateway__02es_trg_cnt_q_1_) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshAd35Lytt545erjrRu6kj0qu2E7RcsNNvgHS5mbSw__DOT__A2)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___Vhsh4KBNKmEdSjscpceBZO1eO2VSmCtWiGJeMUBwe3tu__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshxL6ZqhI2OblsTSpQ44MbsjVznoWFiIkIkP187GCu__DOT__A2) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b12__05d__02eu_plic_gateway__02es_trg_cnt_q_1_))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshxL6ZqhI2OblsTSpQ44MbsjVznoWFiIkIkP187GCu__DOT__A2) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b12__05d__02eu_plic_gateway__02es_trg_cnt_q_1_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshOlkAC776MnnBDG6ragSl8R1IHAl8DZwUyJu1xW5Z__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshqFZALO8fSk4POAdZKBPYT0BZx9V7KhKk32DKPOdV__DOT__A2) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b5__05d__02eu_plic_gateway__02es_trg_cnt_q_1_))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshqFZALO8fSk4POAdZKBPYT0BZx9V7KhKk32DKPOdV__DOT__A2) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b5__05d__02eu_plic_gateway__02es_trg_cnt_q_1_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___Vhsh4nWkONpIhgtATUyDPTGjF7VBgyGsMJDJaqQCmEG8__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshsAAoLk7Z5TjTeTBcI33kTsaoewACHlkJo1X4d5Lz__DOT__A2) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b11__05d__02eu_plic_gateway__02es_trg_cnt_q_1_))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshsAAoLk7Z5TjTeTBcI33kTsaoewACHlkJo1X4d5Lz__DOT__A2) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b11__05d__02eu_plic_gateway__02es_trg_cnt_q_1_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshysPUDIXmY8VKTqBcFF20XllN4QCjPbW0uMFEUY1m__DOT__B2 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshXvy0GESyTWOWl3zVAJLBmrMfaRSeXHI4viNg4gWV__DOT__A2) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b9__05d__02eu_plic_gateway__02es_trg_cnt_q_1_))) 
                    & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02es_bit_tnm_1_)) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic___VhshXvy0GESyTWOWl3zVAJLBmrMfaRSeXHI4viNg4gWV__DOT__A2) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elplic__02em__02eu_plic_core__02ePLIC_GATEPWAY_BLOCK__05b9__05d__02eu_plic_gateway__02es_trg_cnt_q_1_)))))));
}

void VTOPmod___024root___nba_comb__TOP__145(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__145\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02eiir_3___05Freg_p_D_AND3_X1_ZN__DOT__A3 
        = (1U & (~ ((~ ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ecount_2_)) 
                                & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02efcr_0_) 
                                   & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ecount_3_)) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02efcr_1_))))) 
                            & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ecount_3_)) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02efcr_1_))) 
                               & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ecount_0_) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_529))) 
                                      | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02efcr_1_) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02efcr_0_)))) 
                                  | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ecount_1_))))) 
                        & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ecount_4_)))) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02eier_0_))));
}

void VTOPmod___024root___nba_comb__TOP__146(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__146\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02eti_int_AOI22_X1_B2__DOT__B2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02eier_0_)) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02eti_int_NOR3_X1_ZN_A3_NAND2_X1_A2__DOT__A2) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart____VhshoXGKkUFB8Mt5HfCquDL9amOqw4v5zG8ZXW5N5zcB__DOT__A3)))));
}

void VTOPmod___024root___nba_comb__TOP__147(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__147\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_bit_en_INV_X1_A_ZN_NOR3_X1_A1_A2_INV_X1_A__DOT__ZN 
        = (1U & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_1_) 
                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_)) 
                     | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_13_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_3_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_)) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_14_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_)))))) 
                 & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_4_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_9_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_12_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_)) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_6_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_)))))) 
                    & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_2_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_15_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_)) 
                              | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_0_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_8_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_)))))) 
                       & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_11_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_)) 
                             | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_10_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_)) 
                                | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_7_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_)) 
                                   | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02es_pwm_pscr_q_5_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_))))))))));
}

void VTOPmod___024root___nba_comb__TOP__148(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__148\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02es_cnt_d_1___05FAND4_X1_ZN__DOT__A2 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_4_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_8_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_13_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_)) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_6_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_)))))) 
                    & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_15_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_7_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_)) 
                              | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_2_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_11_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_)))))) 
                       & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_14_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_)) 
                              | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_3_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_)) 
                                 | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_1_) 
                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_)) 
                                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_5_) 
                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_)))))) 
                          & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_12_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_)) 
                                | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_9_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_)) 
                                   | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_0_) 
                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_)) 
                                      | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02es_pwm_pscr_q_10_) 
                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpwm0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_)))))))))));
}

void VTOPmod___024root___nba_comb__TOP__149(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__149\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4___05FXOR2_X1_B_Z_NOR4_X1_A2_ZN_NAND3_X1_A2__DOT__ZN 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_6_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_7_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_10_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_)) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_9_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_)))))) 
                    & ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_19_) 
                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_19_))) 
                               & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_2_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_))) 
                                  & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_15_) 
                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_))) 
                                     & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_8_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_))))))) 
                           | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_18_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_18_))) 
                                  & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_1_) 
                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_))) 
                                     & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_12_) 
                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_))) 
                                        & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_14_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_))))))) 
                              | (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_17_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_17_))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_13_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_))) 
                                       & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_11_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_))) 
                                          & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_0_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_)))))))))) 
                       & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_3_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_)) 
                             | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_4_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_)) 
                                | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_16_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_16_)) 
                                   | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_pscr_q_5_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_))))))))));
}

void VTOPmod___024root___nba_comb__TOP__150(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__150\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_0___05FINV_X1_A_ZN_NAND2_X1_A2_ZN_NAND2_X1_A2__DOT__A2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_0_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_3___05FAOI221_X1_B2__DOT__B1 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_0___05FINV_X1_A_ZN_NAND2_X1_A2_ZN_NAND2_X1_A2__DOT__A2) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_1_))) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_1_))) 
                        & (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_0___05FINV_X1_A_ZN_NAND2_X1_A2_ZN_NAND2_X1_A2__DOT__A2) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_1_)) 
                           & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_2_)) 
                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_2_))))) 
                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_2_)) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_2_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_4___05FINV_X1_A_ZN_AOI21_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_3___05FAOI221_X1_B2__DOT__B1) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_3_))) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_3_))) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_3___05FAOI221_X1_B2__DOT__B1) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_3_)) 
                           | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_4_)) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_4_))))) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_4_)) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_4_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_1___05FAOI22_X1_B2_ZN_NAND4_X1_A1_A4_NAND3_X1_ZN_A2_AOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_6_)) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_6_))) 
                        | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_4___05FINV_X1_A_ZN_AOI21_X1_B1__DOT__ZN) 
                               | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_5_))) 
                           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_4___05FINV_X1_A_ZN_AOI21_X1_B1__DOT__ZN) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_5_))) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_5_))))) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_rx_6_)) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_rx_6_)))));
}

void VTOPmod___024root___nba_comb__TOP__151(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__151\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_2___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI211_X1_A__DOT__C1 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_0_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_tx_elem_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_2___05FINV_X1_A_ZN_AOI21_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_2_)) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_tx_elem_2_))) 
                        | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_2___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI211_X1_A__DOT__C1) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_1_))) 
                               | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_tx_elem_1_))) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_2___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI211_X1_A__DOT__C1) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_1_))))) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_txth_2_)) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_tx_elem_2_)))));
}

void VTOPmod___024root___nba_sequent__TOP__1459(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1459\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02estate_1___05Freg_p_QN_NOR2_X1_A1_ZN_OAI21_X1_B2_B1_AND2_X1_ZN__DOT__A1 
        = (1U & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_2_) 
                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_1_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_0_) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_3_))))) 
                 & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_15_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_6_) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_4_) 
                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_5_))))) 
                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_14_) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_11_) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_10_) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_13_))))) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_9_) 
                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_8_) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_7_) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_dummy_rd_12_)))))))));
}

void VTOPmod___024root___nba_sequent__TOP__1460(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1460\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_15_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_14_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_13_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_12_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_11_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_10_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_9_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_8_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_7_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_2_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_oe1_reg_p_D_OAI21_X1_ZN_A_NAND3_X1_ZN_A3_OAI21_X1_ZN_A_AND2_X1_ZN__DOT__A2 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_5_) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_4_) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_3_) 
                          | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_2_) 
                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_1_) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_cmd_len_0_))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_oe1_reg_p_D_OAI21_X1_ZN_A_NAND3_X1_ZN_A3_OAI21_X1_ZN_A_AND2_X1_ZN__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_5_) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_4_) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_3_) 
                          | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_2_) 
                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_0_) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_addr_len_1_))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_10___05FNOR4_X1_A1_ZN_AND4_X1_A3__DOT__ZN 
        = (1U & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_1_) 
                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_0_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_3_) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_4_))))) 
                 & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_2_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_7_) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_6_) 
                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_5_))))) 
                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_10_) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_9_) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_11_) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_12_))))) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_8_) 
                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_15_) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_13_) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_data_len_14_)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_oe1_reg_p_D_OAI21_X1_ZN_A_NAND3_X1_ZN_A3_OAI21_X1_ZN_A_AND2_X1_ZN__DOT__ZN 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_oe1_reg_p_D_OAI21_X1_ZN_A_NAND3_X1_ZN_A3_OAI21_X1_ZN_A_AND2_X1_ZN__DOT__A1) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_oe1_reg_p_D_OAI21_X1_ZN_A_NAND3_X1_ZN_A3_OAI21_X1_ZN_A_AND2_X1_ZN__DOT__A2));
}

void VTOPmod___024root___nba_sequent__TOP__1461(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1461\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02edo_rx 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02ecounter_tx_valid_NAND2_X1_ZN_A1_OAI21_X1_ZN_B1_AOI21_X1_ZN__DOT__B2));
}

void VTOPmod___024root___nba_comb__TOP__152(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__152\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshVX7LshzFhHrIFHRNYBOBfpcjzAr7ipcpf0BBJu13__DOT__A3 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_13_) 
                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_13_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_11___05FXOR2_X1_A_Z_NAND3_X1_A3__DOT__A3 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_11_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_11_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshvU2Kwn3zc5fYOWBQjLzlBUjGsRJxQXwMdeuueKYL__DOT__A 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_9_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_9_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_6___05FXNOR2_X1_A_ZN_NOR3_X1_A3__DOT__A3 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_6_) 
                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_6_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_3___05FXOR2_X1_A_Z_MUX2_X1_S__DOT__S 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_3_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_3_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshTcAktlkCAC1SIF1AwOH9Gm7mzWQxzn2DFGqhkKLp__DOT__B 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_2_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_2_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_6___05FOR3_X1_A2_A3_OAI221_X1_C2_B2_AOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_4_) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_6___05FOR3_X1_A2_A3_NAND2_X1_ZN__DOT__A2) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_4_)))) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_4_) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_trgt_6___05FOR3_X1_A2_A3_NAND2_X1_ZN__DOT__A2) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_txreg__02ecounter_4_))))));
}

void VTOPmod___024root___nba_comb__TOP__153(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__153\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ebyte_index_0___05Freg_p_D_AND2_X1_ZN__DOT__ZN 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02esck) 
           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ebyte_index_0_) 
              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_0_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__psram_en_o_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_NOR3_X1_A3_ZN_NAND3_X1_A3_A2_AND3_X1_A3__DOT__ZN 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_4_) 
           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__psram_en_o_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_NOR3_X1_A3_ZN_NAND3_X1_A3_A2_AND3_X1_A3__DOT__A3) 
              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02esck)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02estate_AND2_X1_A1__DOT__A2) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02esck))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_571 = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_3_)) 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2_) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__psram_en_o_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_NOR3_X1_A3_ZN_NAND3_X1_A3_A2_AND3_X1_A3__DOT__ZN)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_584 = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_3_) 
                                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__psram_en_o_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_NOR3_X1_A3_ZN_NAND3_X1_A3_A2_AND3_X1_A3__DOT__ZN))) 
                                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_0___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_418)) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_4___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram____VhshRSfJQsb8Hpdp0c9jdVHVAFwxFPKeHRX2Bt5jAGhK__DOT__A2) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_4_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_3___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_3_)) 
                          ^ (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2_) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_418))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_5___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_5_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram____VhshRSfJQsb8Hpdp0c9jdVHVAFwxFPKeHRX2Bt5jAGhK__DOT__ZN))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_6___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_419)) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_6_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_7___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ece_n_reg_p_D_INV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_6_) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_419))) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_7_)))));
}

void VTOPmod___024root___nba_comb__TOP__154(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__154\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ebyte_index_0_) {
        if (vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2_) {
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_4___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_8_;
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_5___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_9_;
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_6___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_10_;
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_7___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_11_;
        } else {
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_4___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_24_;
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_5___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_25_;
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_6___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_26_;
            vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_7___05Freg_p_D 
                = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_27_;
        }
    } else if (vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elpsram__02empsram__02enpsram__02eu_psram_top_apb__02eu0__02eMR__02ecounter_2_) {
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_4___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_0_;
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_5___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_1_;
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_6___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_2_;
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_7___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_3_;
    } else {
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_4___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_16_;
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_5___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_17_;
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_6___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_18_;
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_7___05Freg_p_D 
            = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02e_apbxbar_auto_anon_out_23_prdata_19_;
    }
}

void VTOPmod___024root___nba_comb__TOP__155(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__155\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI221_X1_B1__DOT__B1 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI221_X1_B1_ZN_AOI21_X1_A__DOT__ZN 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI221_X1_B1__DOT__B1) 
                                | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_1_))) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_1_))) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI221_X1_B1__DOT__B1) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_1_)) 
                           | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_2_)) 
                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_2_))))) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_2_)) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_2_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_5___05FNAND2_X1_A1__DOT__A2 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI221_X1_B1_ZN_AOI21_X1_A__DOT__ZN) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_3_))) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_3_))) 
                        & (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_0___05FINV_X1_A_ZN_NOR2_X1_A2_ZN_AOI221_X1_B1_ZN_AOI21_X1_A__DOT__ZN) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_3_)) 
                           & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_4_)) 
                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_4_))))) 
                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_4_)) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_4_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elps2__02em__02es_bit_itn_AOI222_X1_C2_ZN_OAI21_X1_B1_A_OAI21_X1_ZN_B2_AND3_X1_ZN__DOT__A2 
        = (1U & ((~ ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_6_)) 
                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_6_))) 
                     & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_5___05FNAND2_X1_A1__DOT__A2) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_5_))) 
                        & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_5_)) 
                              & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_5___05FNAND2_X1_A1__DOT__A2) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_5_))))))) 
                 & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eelements_tx_6_)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02es_th_tx_6_))));
}

void VTOPmod___024root___nba_sequent__TOP__1462(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1462\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_2_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_7_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_20_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_19_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_23_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_16_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_17_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_21_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_18_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_22_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_28_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_27_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_24_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_31_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_26_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_29_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_25_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_30_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_15_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_12_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_13_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_11_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_10_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_14_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_9_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_xorv_q_8_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1463(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1463\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_4_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_4___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_4___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A) 
                                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_2___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_3_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      (((((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_1_)) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_3___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_0___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)) 
                                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_2___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_5___05FAOI21_X1_ZN__DOT__ZN));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_2_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_1___05FNOR2_X1_ZN_A2_NOR2_X1_ZN__DOT__A2) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_2___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_2_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_6_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_6___05FOAI21_X1_ZN_A_NAND2_X1_ZN__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_6___05FOAI21_X1_ZN_B1_XOR2_X1_Z_A_XNOR2_X1_ZN__DOT__ZN) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_6___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_A__DOT__A)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_7_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_7___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_6___05FOAI21_X1_ZN_B1_XOR2_X1_Z_A_XNOR2_X1_ZN__DOT__ZN) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_0___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_0_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      ((((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_8___05FMUX2_X1_A_Z_AOI221_X1_B1__DOT__ZN) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_6___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN)) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_0___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)) 
                                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_0___05FOAI21_X1_ZN__DOT__B1))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_28_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_17___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_18___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_20_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_28_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_27_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_16___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_1___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A))) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_19_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_27_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_24_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_1___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_18___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_16_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_24_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_31_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_23_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_31_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_26_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_26___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__B) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_18_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_26_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_29_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_29___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_19___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__B) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_21_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_29_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_25_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_17_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_25_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_30_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_20___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_A_1__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14___05FNAND2_X1_A1_ZN_OAI211_X1_B_C2_XNOR2_X1_A_ZN_XNOR2_X1_B__DOT__A))) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_22_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_30_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_1_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_1___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      (1U 
                                                       & (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_13_) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_6___05FOAI21_X1_ZN_B1_MUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__B)) 
                                                          ^ 
                                                          ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_5___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN)
                                                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_1___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_A_MUX2_X1_Z__DOT__B))))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_7_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_7___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_6___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                           ? 
                                                          (~ 
                                                           ((((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_7___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14_)) 
                                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_15_)) 
                                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11___05Freg_p_QN_XNOR2_X1_A_ZN_XNOR2_X1_B__DOT__A)))
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_5___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9___05FXNOR2_X1_B_ZN_XNOR2_X1_B__DOT__A)))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_q_1_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_1___05FAOI21_X1_ZN__DOT__A) 
                                                  | (~ 
                                                     ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_1___05FNOR2_X1_ZN_A2_NOR2_X1_ZN__DOT__A2)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_20_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_20___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_A_1__DOT__A) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_12_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_20_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_19_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_19___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__B) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_11_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_19_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_16_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_16___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_8_) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14___05FNAND2_X1_A1_ZN_OAI211_X1_B_C2_XNOR2_X1_A_ZN_XNOR2_X1_A__DOT__B)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_16_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_23_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_0___05FAOI21_X1_ZN__DOT__B1) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_6___05FMUX2_X1_Z_B_XOR2_X1_Z_A_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_15_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_23_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_18_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_14___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_10_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_18_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_21_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_13_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_21_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_17_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_17___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_6___05FMUX2_X1_Z_B_XOR2_X1_Z_A_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_9_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_17_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_22_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_14_) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14___05FNAND2_X1_A1_ZN_OAI211_X1_B_C2_XNOR2_X1_A_ZN_XNOR2_X1_A__DOT__B)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_22_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_15_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_15___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9___05Freg_p_QN_XNOR2_X1_B_ZN_MUX2_X1_A__DOT__Z) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN_B1_OAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A)))
                                                         : 
                                                        (~ 
                                                         (1U 
                                                          ^ 
                                                          ((((((((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_15___05FOAI21_X1_ZN_B1_MUX2_X1_Z_B_XNOR2_X1_ZN_A_XNOR2_X1_ZN__DOT__A) 
                                                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_1___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_A_MUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)) 
                                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN_B1_OAI21_X1_ZN_A_NAND2_X1_ZN_A2_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)) 
                                                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B1)) 
                                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9___05FXNOR2_X1_B_ZN_XNOR2_X1_B__DOT__A)) 
                                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_10_)) 
                                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9_)) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_4___05FAOI21_X1_ZN_B1_MUX2_X1_Z__DOT__A))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_14___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((~ 
                                                          ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)) 
                                                           | (~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_6___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_15___05FOAI21_X1_ZN_B1_MUX2_X1_Z_B_XNOR2_X1_ZN_A_XNOR2_X1_ZN__DOT__A))))) 
                                                         | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)) 
                                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_6_)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_12_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_12___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_12___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_0___05FAOI21_X1_ZN__DOT__B1) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_4_)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_11_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_11___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_8___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_ZN__DOT__ZN) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_3_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_8_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_8___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_8___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_ZN__DOT__ZN) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_0_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_15_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_15___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_7_) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_16___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_19___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__B)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_10_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_10___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_7___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__B) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_2_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_13_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_3___05FAOI21_X1_ZN__DOT__B1) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_17___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_5_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_13_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_9_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_9___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_12___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_1_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_14_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_14___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_14___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_26___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_6_)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_10_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_10___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2) 
                                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN))) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_2_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_6_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc8_d_6___05FOAI21_X1_ZN_A_NAND2_X1_ZN__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                         ? 
                                                        (~ 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_6___05FOAI21_X1_ZN_B1_MUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__B) 
                                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_11___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2))) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2)))
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_4___05FAOI21_X1_ZN_B1_MUX2_X1_Z__DOT__A) 
                                                          ^ 
                                                          ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_5___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_13_))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_4_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_4___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_18___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_26___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__B))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_3_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_3___05FAOI21_X1_ZN__DOT__B1) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_0_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_0___05FAOI21_X1_ZN__DOT__B1) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_7_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_7___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_7___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__B) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14___05FNAND2_X1_A1_ZN_OAI211_X1_B_C2_XNOR2_X1_A_ZN_XNOR2_X1_B__DOT__A))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_2_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_2___05FOAI21_X1_ZN_A_NAND2_X1_ZN__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_18___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_1___05FAOI21_X1_ZN__DOT__B1))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_5_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_5___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_1___05FAOI21_X1_ZN__DOT__B1) 
                                                       ^ 
                                                       (~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_26___05FMUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A))))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_1_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_1___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_1___05FAOI21_X1_ZN__DOT__B1) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_q_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                            ? ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_29___05FMUX2_X1_Z_B_XNOR2_X1_ZN__DOT__A) 
                                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc32_d_12___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A))
                                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_6_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_2_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_2___05FOAI21_X1_ZN_A_NAND2_X1_ZN__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                         ? 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11___05Freg_p_QN_XNOR2_X1_A_ZN_XNOR2_X1_B__DOT__A) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_11___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2))
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9___05Freg_p_QN_XNOR2_X1_B_ZN_MUX2_X1_A__DOT__Z) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN_B1_OAI21_X1_ZN_A_NAND2_X1_ZN_A2_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_13_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)
                                                  ? 
                                                 (~ 
                                                  ((~ 
                                                    ((~ 
                                                      (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9_)) 
                                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN))) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_5_)))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_13_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9_ 
        = vlSelfRef.__Vdly__TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9_;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_9___05FXNOR2_X1_B_ZN_XNOR2_X1_B__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_13_) 
                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_14_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_5_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_5___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_4___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN_B1_OAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__B) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_10___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2)))
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_3___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                          ^ 
                                                          ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_12_)) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11_))))))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_12_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_12___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | (~ 
                                                        ((~ 
                                                          ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)) 
                                                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B1) 
                                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_9___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_MUX2_X1_Z__DOT__A)))) 
                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_4_))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_4_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_4___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2) 
                                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)
                                                         ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_4___05FAOI21_X1_ZN_B1_MUX2_X1_Z__DOT__A)
                                                         : 
                                                        (~ 
                                                         (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_3___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11_)) 
                                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11___05Freg_p_QN_XNOR2_X1_A_ZN_XNOR2_X1_B__DOT__A)))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_init_q_11___05FNAND2_X1_A1__DOT__ZN) 
                                                  & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2)) 
                                                     | ((~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_11___05FOAI21_X1_ZN_B1_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__A2) 
                                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN))) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_3_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_8___05FOAI21_X1_ZN_B1_XNOR2_X1_ZN_B_MUX2_X1_Z_A_XNOR2_X1_ZN__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_11_) 
                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_15_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_3_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN__DOT__A) 
                                                  | ((~ 
                                                      ((~ 
                                                        ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)) 
                                                         & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_6___05FOAI21_X1_ZN_B1_MUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__B) 
                                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_q_10___05Freg_p_QN_XOR2_X1_A_Z_XNOR2_X1_A__DOT__A)))) 
                                                       & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN)) 
                                                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B1)))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN__DOT__B2))))));
}

void VTOPmod___024root___nba_comb__TOP__156(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__156\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_758 = (1U 
                                                  & (((~ 
                                                       ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)) 
                                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_size_0_))) 
                                                      | (~ 
                                                         (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_size_1_) 
                                                           & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)) 
                                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_))) 
                                                          | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_size_1_)) 
                                                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1))))) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_size_1_) 
                                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))))) 
                                                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_size_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0___05Freg_p__DOT__D 
        = (1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_758)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1___05Freg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_) 
                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                    | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_758)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2___05Freg_p__DOT__D 
        = (1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_758)) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_start_d_NAND2_X1_ZN_A2_AND2_X1_ZN__DOT__ZN 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_758)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_en));
}

void VTOPmod___024root___nba_sequent__TOP__1464(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1464\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_7_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_2_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02espi_clk_div_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_comb__TOP__157(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__157\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1 
        = (1U & (~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_0_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_0_))) 
                        & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_7_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_7_))) 
                           & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_2_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_2_))) 
                              & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_6_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_6_))))))) 
                    | (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_5_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_5_))) 
                          & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_4_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_4_))) 
                             & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_1_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_1_))) 
                                & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_3_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_tgt_q_3_))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_0___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_0_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_1___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_0_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_1_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_2___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_2_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_3___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_3_)) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_d_3___05FNOR2_X1_ZN_A2_XNOR2_X1_ZN_B_NAND3_X1_ZN__DOT__ZN))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_4___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_d_4___05FNOR2_X1_ZN_A2_XNOR2_X1_ZN_B_AND2_X1_A2__DOT__A2) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_4_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_5___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_5_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_d_4___05FNOR2_X1_ZN_A2_XNOR2_X1_ZN_B_AND2_X1_A2__DOT__ZN))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_6___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448)) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_6_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_7___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_CK_CLKGATE_X1_GCK_E_AND2_X1_ZN__DOT__A1) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_6_) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))) 
                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_clkgen__02es_cnt_q_7_)))));
}

void VTOPmod___024root___nba_comb__TOP__158(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__158\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_13___05FXOR2_X1_B_Z_MUX2_X1_S__DOT__S 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_13_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_13_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshgbdpskdO0eHa6CZcpAI3J8rHo3wsRbCACt4GzTgf__DOT__S 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_11_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_11_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_9___05FXOR2_X1_B_Z_MUX2_X1_S__DOT__S 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_9_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_9_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_7___05FXOR2_X1_A_Z_MUX2_X1_S__DOT__S 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_7_) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_7_));
    vlSelfRef.__VdfgRegularize_he50b618e_0_454 = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_5_) 
                                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_5_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__qspi_sck_o_reg_p_D_AND3_X1_A1_ZN_OAI211_X1_A_C2_AND4_X1_ZN__DOT__A3 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_2_) 
                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_spictrl__02eu_rxreg__02ecounter_trgt_2_))));
}

void VTOPmod___024root___nba_comb__TOP__159(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__159\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_2_) {
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elsr2_AOI21_X1_B2__DOT__B2 
            = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_) 
                            & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_46_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_43_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_40_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_37_)))))) 
                        & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_22_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_19_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_16_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_13_))))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_)))));
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elsr3_AOI21_X1_B2__DOT__B2 
            = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_) 
                            & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_45_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_42_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_39_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_36_)))))) 
                        & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_21_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_18_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_15_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_12_))))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_)))));
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elsr4_AOI21_X1_B2__DOT__B2 
            = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_) 
                            & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_47_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_44_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_41_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_38_)))))) 
                        & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_23_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_20_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_17_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_14_))))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_)))));
    } else {
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elsr2_AOI21_X1_B2__DOT__B2 
            = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_) 
                            & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_34_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_31_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_28_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_25_)))))) 
                        & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_10_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_7_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_4_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_1_))))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_)))));
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elsr3_AOI21_X1_B2__DOT__B2 
            = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_) 
                            & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_33_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_30_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_27_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_24_)))))) 
                        & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_9_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_6_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_3_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_0_))))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_)))));
        vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elsr4_AOI21_X1_B2__DOT__B2 
            = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_) 
                            & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_35_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_32_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_29_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_26_)))))) 
                        & ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                   & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_11_))) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_8_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_))))) 
                               & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_1_) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_0_)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_5_)
                                      : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02efifo_2_))))) 
                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02ebottom_3_)))));
    }
}

void VTOPmod___024root___nba_comb__TOP__160(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__160\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_558___05FMUX2_X1_A_Z_AOI221_X1_B2__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02epointer_out_0_)) 
                    | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_443)) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02epointer_out_1_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_622_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_558_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_516___05FMUX2_X1_A_Z_AOI221_X1_B2__DOT__C2) 
                          & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02epointer_out_1_)
                              ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_750_)
                              : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_686_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_1028___05FAOI21_X1_B2_A_AOI211_X1_ZN_C1_AOI21_X1_ZN__DOT__B2 
        = (1U & (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_443)) 
                         & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02epointer_out_1_)
                             ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_612_)
                             : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_548_))) 
                        | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_516___05FMUX2_X1_A_Z_AOI221_X1_B2__DOT__C2) 
                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02epointer_out_1_)
                               ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_740_)
                               : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02ebuffer_676_))))) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_rxfifo__02epointer_out_0_))));
}

void VTOPmod___024root___nba_comb__TOP__161(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__161\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshMygifSfSYB9Oc0GRrjUplQx7vAWls2V5AlCguPH3__DOT__A4 
        = (1U & ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_53___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02estval_9_)) 
                         | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh9IXDB9zhfRpL1yrTaO70wKRqN0IUue8n7Vcdb6n8__DOT__A1) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_1_9_)))) 
                     & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_54___05FAOI222_X1_C2__DOT__B1) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcounteren_9_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr2_24___05FAOI222_X1_C2__DOT__C1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr2_9_)))) 
                        & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshAtKBEBmv1MpAibkfU7IdnDJf0sQQyHDjV89tuuQz__DOT__ZN)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_exu_csr_satp___05Fbore_9_)) 
                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr3_7___05FAOI222_X1_C2__DOT__C1) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr3_9_)))) 
                           & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_13___05FAOI222_X1_C2__DOT__A2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg3_9_)) 
                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emedeleg_9_)))))))) 
                 | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg0_34___05FAOI222_X1_A1__DOT__B1) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escounteren_9_)) 
                            | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_2___05FAOI22_X1_B2_B1_INV_X1_A__DOT__ZN)) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_9_)))) 
                        & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_924)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg2_9_)) 
                               | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_49___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_9_)))) 
                           & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_GEN_0_8_)) 
                              | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshBh6jKxB32Ym16bCkQA4rwhFBpbcKUh0rzT1YHZLo__DOT__A) 
                                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshBh6jKxB32Ym16bCkQA4rwhFBpbcKUh0rzT1YHZLo__DOT__B1) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_9_)) 
                                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshGv6bbOdVCfTxvByVeAu5yqVBtS9ov1OPpZsU1ITj__DOT__C1) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_mip_T_4_9_))))))))) 
                    | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_54___05FAOI222_X1_C2__DOT__A2) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg0_9_)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_954)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg1_9_)))) 
                           & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_20___05FAOI221_X1_B2__DOT__C2) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_0_9_)) 
                                  | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_134)) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_9_)) 
                                     | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_116)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcause_9_))))) 
                              & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escause_1___05FAOI222_X1_A1__DOT__A2) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escause_9_)) 
                                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_2___05FAOI222_X1_B2__DOT__C1) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr1_9_))))))) 
                       | (~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_7___05FAOI22_X1_A1_A2_INV_X1_A__DOT__ZN)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_9_)) 
                                 | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshUjJqFwmNdsF8YtcWNEjB2etBsYBlgP1KcdTRJiC5__DOT__ZN)) 
                                    & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_src2_9_)
                                        ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtvec_9_)
                                        : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02estvec_9_))))) 
                             & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esscratch_0___05FAOI222_X1_A1__DOT__A2) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esscratch_9_)) 
                                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_10___05FAOI222_X1_B2__DOT__A2) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_9_)))) 
                                & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_45___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_9_)) 
                                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emscratch_30___05FAOI222_X1_C2__DOT__C1) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emscratch_9_)))) 
                                   & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_10___05FAOI222_X1_B2__DOT__C2) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr0_9_)) 
                                         | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_0___05FAOI221_X1_C1_B1_AOI21_X1_ZN__DOT__B1) 
                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_mip_T_4_9_))))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_9___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1 
        = (1U & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh4gxAeH6QrCrcFoa0cXh2Tx4pAAK7vPljhBwIOEKQ__DOT__C1) 
                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_9_)) 
                    | ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshAvkwE53OLN8sVnRRUjHW7ssqJGjLD5VgRjWzSYNA__DOT__B)) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_9_)) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh4EI208T7plJheAdQ6tzmGovZIDIvhYgWQdl7uoNv__DOT__ZN))) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshMygifSfSYB9Oc0GRrjUplQx7vAWls2V5AlCguPH3__DOT__A4)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcounteren_9___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_9___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02eaxi_bridge__02ew_len_cnt_0___05Freg_p_D_AOI211_X1_ZN__DOT__A))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_9___05Freg_p_D_AOI211_X1_ZN__DOT__ZN 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02eaxi_bridge__02ew_len_cnt_0___05Freg_p_D_AOI211_X1_ZN__DOT__A) 
                    | ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02e_wbu_io_in_valid___05Fbore)) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_9_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh11FZZa4GBhVAyAA9F2AWqZmfZEvclNAB8lIrOyxE__DOT__ZN)))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_9___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1) 
                          & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02e_wbu_io_in_valid___05Fbore)))))));
}

void VTOPmod___024root___nba_comb__TOP__162(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__162\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshfmVyTKf8IXHcaU8c6eMDAwvM1lKFBYZDO7fP7unB__DOT__A 
        = (1U & ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_45___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_5_)) 
                         | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_2___05FAOI22_X1_B2_B1_INV_X1_A__DOT__ZN)) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_5_)))) 
                     & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_924)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg2_5_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg0_34___05FAOI222_X1_A1__DOT__B1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escounteren_5_)))) 
                        & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_49___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_5_)) 
                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr3_7___05FAOI222_X1_C2__DOT__C1) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr3_5_)))) 
                           & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_10___05FAOI222_X1_B2__DOT__C2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr0_5_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_0___05FAOI221_X1_C1_B1_AOI21_X1_ZN__DOT__B1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_mip_T_4_5_)))))))) 
                 | ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshAtKBEBmv1MpAibkfU7IdnDJf0sQQyHDjV89tuuQz__DOT__ZN)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_exu_csr_satp___05Fbore_5_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emscratch_30___05FAOI222_X1_C2__DOT__C1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emscratch_5_)))) 
                        & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_7___05FAOI22_X1_A1_A2_INV_X1_A__DOT__ZN)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_5_)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_954)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg1_5_)))) 
                           & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_GEN_0_4_)) 
                              | (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshBh6jKxB32Ym16bCkQA4rwhFBpbcKUh0rzT1YHZLo__DOT__A) 
                                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshBh6jKxB32Ym16bCkQA4rwhFBpbcKUh0rzT1YHZLo__DOT__B1) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_5_)) 
                                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshGv6bbOdVCfTxvByVeAu5yqVBtS9ov1OPpZsU1ITj__DOT__C1) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_mip_T_4_5_))))))))) 
                    | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh9IXDB9zhfRpL1yrTaO70wKRqN0IUue8n7Vcdb6n8__DOT__A1) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_1_5_)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emedeleg_5_)))) 
                           & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_54___05FAOI222_X1_C2__DOT__B1) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcounteren_5_)) 
                                  | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshUjJqFwmNdsF8YtcWNEjB2etBsYBlgP1KcdTRJiC5__DOT__ZN)) 
                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_src2_9_)
                                         ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtvec_5_)
                                         : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02estvec_5_))))) 
                              & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_20___05FAOI221_X1_B2__DOT__C2) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_0_5_)) 
                                    | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_134)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_5_)) 
                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_123)) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_5_)))))))) 
                       | (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esscratch_0___05FAOI222_X1_A1__DOT__A2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esscratch_5_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_2___05FAOI222_X1_B2__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr1_5_)))) 
                             & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_54___05FAOI222_X1_C2__DOT__A2) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg0_5_)) 
                                    | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escause_1___05FAOI222_X1_A1__DOT__A2) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escause_5_)))) 
                                & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_116)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcause_5_)) 
                                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr2_24___05FAOI222_X1_C2__DOT__C1) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr2_5_)))) 
                                   & (~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_53___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02estval_5_)) 
                                         | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_13___05FAOI222_X1_C2__DOT__A2) 
                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg3_5_))))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_5___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1 
        = (1U & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh4gxAeH6QrCrcFoa0cXh2Tx4pAAK7vPljhBwIOEKQ__DOT__C1) 
                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_5_)) 
                    | ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshAvkwE53OLN8sVnRRUjHW7ssqJGjLD5VgRjWzSYNA__DOT__B)) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_5_)) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh4EI208T7plJheAdQ6tzmGovZIDIvhYgWQdl7uoNv__DOT__ZN))) 
                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshfmVyTKf8IXHcaU8c6eMDAwvM1lKFBYZDO7fP7unB__DOT__A)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcounteren_5___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_5___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02eaxi_bridge__02ew_len_cnt_0___05Freg_p_D_AOI211_X1_ZN__DOT__A))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_5___05Freg_p_D_AOI211_X1_ZN__DOT__ZN 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02eaxi_bridge__02ew_len_cnt_0___05Freg_p_D_AOI211_X1_ZN__DOT__A) 
                    | ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02e_wbu_io_in_valid___05Fbore)) 
                           | (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_164)) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_5_))))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_5___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1) 
                          & (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02e_wbu_io_in_valid___05Fbore)))))));
}

void VTOPmod___024root___nba_comb__TOP__163(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__163\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshMv7JjxJjPg15xh5zXBPyXhzXsyR3AGKFQBBvUm27__DOT__B2 
        = (1U & ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_54___05FAOI222_X1_C2__DOT__B1) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcounteren_1_)) 
                         | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_7___05FAOI22_X1_A1_A2_INV_X1_A__DOT__ZN)) 
                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_1_)))) 
                     & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg0_34___05FAOI222_X1_A1__DOT__B1) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escounteren_1_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh9IXDB9zhfRpL1yrTaO70wKRqN0IUue8n7Vcdb6n8__DOT__A1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_1_1_)))) 
                        & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_54___05FAOI222_X1_C2__DOT__A2) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg0_1_)) 
                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_0___05FAOI221_X1_C1_B1_AOI21_X1_ZN__DOT__B1) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_mip_T_4_1_)))) 
                           & (~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_53___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02estval_1_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_2___05FAOI222_X1_B2__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr1_1_)))))))) 
                 | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escause_1___05FAOI222_X1_A1__DOT__A2) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02escause_1_)) 
                            | (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_2___05FAOI22_X1_B2_B1_INV_X1_A__DOT__ZN)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_1_)) 
                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_954)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg1_1_))))) 
                        & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_GEN_0_0_)) 
                           | (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshGv6bbOdVCfTxvByVeAu5yqVBtS9ov1OPpZsU1ITj__DOT__C1) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_mip_T_4_1_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshBh6jKxB32Ym16bCkQA4rwhFBpbcKUh0rzT1YHZLo__DOT__B1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_1_))))))) 
                    | ((~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_20___05FAOI221_X1_B2__DOT__C2) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_0_1_)) 
                               | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_134)) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_1_)) 
                                  | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_123)) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_1_))))) 
                           & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emscratch_30___05FAOI222_X1_C2__DOT__C1) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emscratch_1_)) 
                                  | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_10___05FAOI222_X1_B2__DOT__C2) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr0_1_)))) 
                              & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esscratch_0___05FAOI222_X1_A1__DOT__A2) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esscratch_1_)) 
                                     | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshBh6jKxB32Ym16bCkQA4rwhFBpbcKUh0rzT1YHZLo__DOT__A) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02e_GEN_0_0_)))) 
                                 & (~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emepc_45___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_1_)) 
                                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr2_24___05FAOI222_X1_C2__DOT__C1) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr2_1_)))))))) 
                       | (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_13___05FAOI222_X1_C2__DOT__A2) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg3_1_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr3_7___05FAOI222_X1_C2__DOT__C1) 
                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpaddr3_1_)))) 
                             & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshAtKBEBmv1MpAibkfU7IdnDJf0sQQyHDjV89tuuQz__DOT__ZN)) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_exu_csr_satp___05Fbore_1_)) 
                                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_116)) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcause_1_)))) 
                                & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02esepc_49___05FAOI22_X1_B2_A2_INV_X1_A__DOT__ZN)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtval_1_)) 
                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emedeleg_1_)))) 
                                   & (~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_924)) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02epmpcfg2_1_)) 
                                         | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshUjJqFwmNdsF8YtcWNEjB2etBsYBlgP1KcdTRJiC5__DOT__ZN)) 
                                            & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_src2_9_)
                                                ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emtvec_1_)
                                                : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02estvec_1_)))))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_1___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_cfIn_instr_16___05FINV_X1_A_ZN_NOR2_X1_A1__DOT__A2) 
                        | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_cfIn_instr_16_)))) 
                    | ((((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshSUclGtpJrRJ4Gk5EkRT34JTnbHdP03k7VUBi43jw__DOT__C2) 
                         | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh4EI208T7plJheAdQ6tzmGovZIDIvhYgWQdl7uoNv__DOT__A2) 
                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_func_0_) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_cfIn_instr_16_)))) 
                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshMv7JjxJjPg15xh5zXBPyXhzXsyR3AGKFQBBvUm27__DOT__B1))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshMv7JjxJjPg15xh5zXBPyXhzXsyR3AGKFQBBvUm27__DOT__B2)) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh4gxAeH6QrCrcFoa0cXh2Tx4pAAK7vPljhBwIOEKQ__DOT__C1) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_1_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emcounteren_1___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_1___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02eaxi_bridge__02ew_len_cnt_0___05Freg_p_D_AOI211_X1_ZN__DOT__A))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_1___05Freg_p_D_AOI211_X1_ZN__DOT__ZN 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02eaxi_bridge__02ew_len_cnt_0___05Freg_p_D_AOI211_X1_ZN__DOT__A) 
                    | ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02e_wbu_io_in_valid___05Fbore)) 
                           | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_0_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02eperfCnts_2_1_)))) 
                       | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02e_wbu_io_in_valid___05Fbore)) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emie_1___05Freg_p_D_AOI211_X1_ZN_B_AND2_X1_ZN__DOT__A1))))));
}

void VTOPmod___024root___nba_sequent__TOP__1465(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1465\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_7_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_9_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_6_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_8_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_5_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_7_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_4_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_3_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_2_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_1_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02efifo_rx__02edata_in_10___05Freg_p_D_AND2_X1_ZN__DOT__A2) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02ereceiver__02ershift_0_)));
}

void VTOPmod___024root___nba_sequent__TOP__1466(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1466\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_0_ 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_1_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_1_ 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_2_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_2_ 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_3_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_3_ 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_4_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_4_ 
        = ((IData)(vlSelfRef.reset) | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_1_) 
                                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_0_))
                                        ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_5_)
                                        : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_uart_rx__02ereg_rx_sync_2_)));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_5_ 
        = (1U & ((IData)(vlSelfRef.reset) | (~ ((~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_1_) 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_6_))) 
                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_549)) 
                                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_1_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_6_ 
        = ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_1_) 
                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_0_)
                                           ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_7_)
                                           : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_uart_rx__02ereg_rx_sync_2_))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_rx_push_data_7_ 
        = ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02es_bit_wls_1_) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_549)));
}

void VTOPmod___024root___nba_comb__TOP__164(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__164\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_0___05Freg_p__DOT__D 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_0_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_1___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_0_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_1_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_3___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__A) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_3_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_4___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_4___05FAOI21_X1_ZN_B2_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_4_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_2_) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B))) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__A) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_5___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_5_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_6___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NOR2_X1_ZN__DOT__A2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_6___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_490)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_6_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_7___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_7___05FINV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_7_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_8___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_7___05FINV_X1_A_ZN_NAND2_X1_A1__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_8_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_9___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_658)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_9_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_10___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_10___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_10_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_11___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_10___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_11_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_12___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_657)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_12_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_13___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_13___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_13_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_14___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_13___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_14_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_15___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_656)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_15_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_16___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_16___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_16_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_17___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_16___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_17_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_18___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_655)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_18_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_19___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_19___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_19_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_20___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_19___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_20_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_21___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_654)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_21_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_22___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_22___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_22_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_23___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_22___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_23_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_24___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_653)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_24_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_25___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_25___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_25_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_26___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_25___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_26_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_27___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_652)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_27_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_28___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_28___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_28_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_29___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_28___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_29_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_30___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_cap_en_NAND2_X1_A1_ZN_OAI211_X1_B__DOT__C)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_665)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_cap_cnt_30_)))))));
}

void VTOPmod___024root___nba_comb__TOP__165(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__165\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3___05FXOR2_X1_B_Z_NOR4_X1_A1_ZN_NAND3_X1_A2__DOT__ZN 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_4_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_13_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_0_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_)) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_14_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_)))))) 
                    & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_3_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_8_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_)) 
                              | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_6_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_)) 
                                 | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_11_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_)))))) 
                       & (~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_17_) 
                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_17_))) 
                                 & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_7_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_18_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_18_))) 
                                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_5_) 
                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_))))))) 
                             | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_16_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_16_))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_15_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_))) 
                                       & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_10_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_))) 
                                          & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_12_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_))))))) 
                                | (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_2_) 
                                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_))) 
                                      & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_1_) 
                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_))) 
                                         & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_19_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_19_))) 
                                            & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02es_tmr_pscr_q_9_) 
                                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim0__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_))))))))))))));
}

void VTOPmod___024root___nba_sequent__TOP__1467(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1467\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0___05FAND2_X1_A2__DOT__ZN 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_1_)) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_mode_0_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_revout 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_bit_revin 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
}

void VTOPmod___024root___nba_comb__TOP__166(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__166\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_2___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_26_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_18_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_2_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_10_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_26_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_8___05FMUX2_X1_A_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_24_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_16_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_0_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_8_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_24_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_7___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_31_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_23_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_7_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_15_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_31_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_6___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_30_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_22_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_6_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_14_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_30_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_5___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_29_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_13_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_5_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_21_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_29_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_25_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_17_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_25_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_4___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_28_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_12_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_4_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_20_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_28_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_3___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)) 
                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_27_)) 
                            | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__B2) 
                               & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_19_)))) 
                        | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_1_))) 
                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_9___05FAOI22_X1_B1_A1_AND3_X1_A2_ZN_AOI21_X1_A__DOT__B1) 
                        & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_0_)
                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_3_)
                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_11_))) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_calc_cnt_q_2_) 
                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_27_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_1___05FAOI21_X1_ZN_B1_XNOR2_X1_ZN_A_MUX2_X1_Z_B_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_6___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_5___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_0___05FAOI21_X1_ZN_B1_OAI21_X1_ZN_A_NAND2_X1_ZN_A2_XNOR2_X1_ZN_B_XNOR2_X1_ZN__DOT__A 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_8___05FMUX2_X1_A_Z_AOI221_X1_B1__DOT__ZN) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_1___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc16_d_3___05FAOI21_X1_ZN_B1_OAI21_X1_ZN_B1_XNOR2_X1_ZN__DOT__A 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_7___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN) 
           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_q_3___05FMUX2_X1_B_Z_AOI221_X1_B1__DOT__ZN));
}

void VTOPmod___024root___nba_comb__TOP__167(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__167\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_0___05Freg_p__DOT__D 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_0_)))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_1___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_0_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_1_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_3___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__A) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_3_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_4___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_4___05FAOI21_X1_ZN_B2_XOR2_X1_Z_B_NAND2_X1_ZN__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_4_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_5___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_5_) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_6___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NOR2_X1_ZN__DOT__A2))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_2_) 
                           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B1_OAI21_X1_ZN__DOT__B))) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__A) 
                             | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_6___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_503)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_6_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_7___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_7___05FINV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_7_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_8___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_7___05FINV_X1_A_ZN_NAND2_X1_A1__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_8_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_9___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_648)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_9_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_10___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_10___05FINV_X1_A_ZN_NAND2_X1_A1__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_10_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_11___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_10___05FINV_X1_A_ZN_NAND2_X1_A1__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_11_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_12___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_640)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_12_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_13___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_13___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_13_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_14___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_13___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_14_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_15___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_639)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_15_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_16___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_16___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_16_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_17___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_16___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_17_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_18___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_638)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_18_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_19___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_19___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_19_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_20___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_19___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_20_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_21___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_637)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_21_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_22___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_22___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_22_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_23___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_22___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_23_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_24___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_636)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_24_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_25___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_25___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_25_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_26___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_25___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_26_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_27___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_635)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_27_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_28___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_28___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__A2) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_28_)))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_29___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_28___05FAOI21_X1_ZN_B2_XNOR2_X1_ZN_B_NAND2_X1_A2__DOT__ZN) 
                          ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_29_))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_30___05FAOI21_X1_ZN__DOT__ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_cap_gap_cnt_q_OAI221_X1_C2__DOT__B)) 
                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_tmr_cap_cnt_counter__02eu_delta_counter__02es_cnt_d_2___05FAOI21_X1_ZN_B2_AOI21_X1_ZN__DOT__B)) 
                       & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_647)) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_cap_cnt_30_)))))));
}

void VTOPmod___024root___nba_comb__TOP__168(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__168\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_492 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_0_) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_)) 
                                                       | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_7_) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_)) 
                                                          | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_10_) 
                                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_)) 
                                                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_14_) 
                                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_)))))) 
                                                     & ((~ 
                                                         (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_17_) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_17_)) 
                                                          | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_9_) 
                                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_)) 
                                                             | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_13_) 
                                                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_)) 
                                                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_12_) 
                                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_)))))) 
                                                        & (~ 
                                                           ((~ 
                                                             ((~ 
                                                               ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_18_) 
                                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_18_))) 
                                                              & ((~ 
                                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_2_) 
                                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_))) 
                                                                 & ((~ 
                                                                     ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_3_) 
                                                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_))) 
                                                                    & (~ 
                                                                       ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_11_) 
                                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_))))))) 
                                                            | ((~ 
                                                                ((~ 
                                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_1_) 
                                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_))) 
                                                                 & ((~ 
                                                                     ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_15_) 
                                                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_))) 
                                                                    & ((~ 
                                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_16_) 
                                                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_16_))) 
                                                                       & (~ 
                                                                          ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_6_) 
                                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_))))))) 
                                                               | (~ 
                                                                  ((~ 
                                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_19_) 
                                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_19_))) 
                                                                   & ((~ 
                                                                       ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_4_) 
                                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_8_) 
                                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_))) 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02es_tmr_pscr_q_5_) 
                                                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim1__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_)))))))))))));
}

void VTOPmod___024root___nba_comb__TOP__169(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__169\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7___05FXOR2_X1_B_Z_NOR4_X1_A4_ZN_NAND3_X1_A1__DOT__ZN 
        = (1U & (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_19_) 
                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_19_)) 
                        | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_2_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_2_)) 
                           | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_7_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_7_)) 
                              | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_11_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_11_)))))) 
                    & ((~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_16_) 
                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_16_))) 
                               & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_0_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_0_))) 
                                  & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_12_) 
                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_12_))) 
                                     & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_9_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_9_))))))) 
                           | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_17_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_17_))) 
                                  & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_18_) 
                                         ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_18_))) 
                                     & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_10_) 
                                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_10_))) 
                                        & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_15_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_15_))))))) 
                              | (~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_8_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_8_))) 
                                    & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_5_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_5_))) 
                                       & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_1_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_1_))) 
                                          & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_6_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_6_)))))))))) 
                       & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_3_) 
                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_3_)) 
                             | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_14_) 
                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_14_)) 
                                | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_13_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_13_)) 
                                   | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_tmr_pscr_q_4_) 
                                      ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02eclk_cnt_o_4_))))))))));
}

void VTOPmod___024root___nba_comb__TOP__170(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__170\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_norm_trg1_reg_p__DOT__D 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02es_bit_en) 
           & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eltim2__02em__02eu_clk_int_div_simple__02es_div_done_q_2___05FNAND3_X1_A1_ZN_INV_X1_A__DOT__ZN));
}

void VTOPmod___024root___nba_comb__TOP__171(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__171\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsha5J6BsSfX1rwDRwMqsbg8Jj9DhusZbzbGmqIBALx__DOT__Z 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_17_)
            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_12_)
            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_1_));
}

void VTOPmod___024root___nba_comb__TOP__172(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__172\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_11___05FMUX2_X1_B__DOT__Z 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_17_)
            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_11_)
            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_0_));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_dmem_status_sum_NOR2_X1_A1_ZN 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_11___05FMUX2_X1_B__DOT__Z)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_dmem_status_sum))));
}

void VTOPmod___024root___nba_comb__TOP__173(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__173\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshKp46ukWn08ZFXwuD1kS8st1iVKBYTaRwXB7Xq5st__DOT__C2 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_1_)) 
                    & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_0_)) 
                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ecsr__02emstatus_1_)))));
}

void VTOPmod___024root___nba_comb__TOP__174(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__174\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshXCKcASz0vYSx3ZUtkTkCB8kTQmyTDbtBkc7CBFMN__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_1_) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_0_))));
}

void VTOPmod___024root___nba_comb__TOP__175(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__175\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____Vhsh9F2gQ2ms5rhZhhRIBo0qNB7DwT6Njf4c6Vn0BntB__DOT__ZN 
        = (1U & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_1_)) 
                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_src2_9_)) 
                     | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_0_)) 
                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_src2_8_)))) 
                 | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02ealu__02eio_in_bits_src2_9_)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02e_backend_io_memMMU_imem_privilegeMode_1_))));
}

void VTOPmod___024root___nba_sequent__TOP__1468(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1468\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02etstate_1_ 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((~ 
                                                  ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02etstate_2_)) 
                                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02ebit_out_reg_p_CK_CLKGATE_X1_GCK_E_OAI22_X1_ZN_B2_OAI21_X1_ZN__DOT__B))) 
                                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02etstate_5_))));
}

void VTOPmod___024root___nba_sequent__TOP__1469(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1469\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02ebit_out 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02etstate_2_)
                                                  ? 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02eshift_out_0___05FMUX2_X1_B__DOT__S)
                                                   ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02eshift_out_0_)
                                                   : 
                                                  (~ 
                                                   (((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elcr_5_) 
                                                       | ((~ 
                                                           ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elcr_2_) 
                                                            | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02eparity_xor_INV_X1_A_ZN_AOI211_X1_C2__DOT__C1))) 
                                                          | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02eparity_xor)) 
                                                             & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02eparity_xor_INV_X1_A_ZN_AOI211_X1_C2__DOT__C1))))) 
                                                     | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elcr_4_)) 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elcr_4_) 
                                                         & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02eparity_xor))) 
                                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elcr_5_)))))
                                                  : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02ebit_out_reg_p_D_MUX2_X1_Z_A_AND2_X1_ZN__DOT__ZN))));
}

void VTOPmod___024root___nba_comb__TOP__176(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__176\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__uart0_tx_OR2_X1_ZN_A2_AOI21_X1_B1__DOT__B1 
        = (1U & (~ ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02etransmitter__02estx_o_tmp)) 
                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart0__02emuart__02eUregs__02elcr_6_))));
}

void VTOPmod___024root___nba_sequent__TOP__1470(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1470\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_flash__DOT__addr = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__addr;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__cmd = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__cmd;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__counter = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__counter;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__state = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__state;
}

void VTOPmod___024root___nba_sequent__TOP__1471(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1471\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__externalPins_spi_mosi = 
        (1U & ((~ (IData)(vlSelfRef.reset)) & (~ ((~ 
                                                   ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN__DOT__A) 
                                                    & ((~ 
                                                        ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_575)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_574)) 
                                                              & ((~ 
                                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S) 
                                                                   & ((~ 
                                                                       ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                        & ((~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_123_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_121_)))))) 
                                                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_120_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_122_)))))) 
                                                                      & ((~ 
                                                                          ((~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_127_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_125_)))))) 
                                                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_124_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_126_))))) 
                                                                         | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)))))) 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                        & ((~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_115_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_113_)))))) 
                                                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_112_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_114_)))))) 
                                                                      & ((~ 
                                                                          ((~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_119_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_117_)))))) 
                                                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_116_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_118_))))) 
                                                                         | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582))))) 
                                                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S))))) 
                                                            & ((~ 
                                                                ((~ 
                                                                  ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S) 
                                                                   & ((~ 
                                                                       ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                        & ((~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_91_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_89_)))))) 
                                                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_88_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_90_)))))) 
                                                                      & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                         | (~ 
                                                                            ((~ 
                                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                               & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_95_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_93_)))))) 
                                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_92_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_94_))))))))) 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                        & ((~ 
                                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_83_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_81_)))))) 
                                                                           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_80_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_82_)))))) 
                                                                      & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                         | (~ 
                                                                            ((~ 
                                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                               & ((~ 
                                                                                ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_87_))) 
                                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                                | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_85_)))))) 
                                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_84_)
                                                                                 : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_86_)))))))) 
                                                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S)))) 
                                                               | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_574)))))) 
                                                       & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_575)) 
                                                          | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z__DOT__Z))))) 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN__DOT__A) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_575)
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_574)
                                                          ? 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)
                                                            ? 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_15_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_13_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_12_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_14_)))))
                                                            : 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_11_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_9_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_8_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_10_))))))
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)
                                                            ? 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_7_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_5_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_4_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_6_)))))
                                                            : 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_3_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_1_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_0_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_2_)))))))
                                                          : 
                                                         (~ 
                                                          ((~ 
                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S) 
                                                             & ((~ 
                                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                  & ((~ 
                                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_43_))) 
                                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                             | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_41_)))))) 
                                                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_40_)
                                                                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_42_)))))) 
                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                   | (~ 
                                                                      ((~ 
                                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                         & ((~ 
                                                                             ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_47_))) 
                                                                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                               | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_45_)))))) 
                                                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                              ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_44_)
                                                                              : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_46_))))))))) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                  & ((~ 
                                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_35_))) 
                                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                             | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_33_)))))) 
                                                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_32_)
                                                                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_34_)))))) 
                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                   | (~ 
                                                                      ((~ 
                                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                         & ((~ 
                                                                             ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_39_))) 
                                                                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                               | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_37_)))))) 
                                                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                              ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_36_)
                                                                              : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_38_)))))))) 
                                                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S)))))
                                                         : 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_574)
                                                          ? 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S)
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)
                                                            ? 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_31_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_29_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_28_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_30_)))))
                                                            : 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_27_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_26_))))))
                                                           : 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)
                                                            ? 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_23_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_21_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_20_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_22_)))))
                                                            : 
                                                           (~ 
                                                            ((~ 
                                                              ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                    & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_19_))) 
                                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                     | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_17_)))))) 
                                                             & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                    ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_16_)
                                                                    : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_18_)))))))
                                                          : 
                                                         (~ 
                                                          ((~ 
                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S) 
                                                             & ((~ 
                                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                  & ((~ 
                                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_59_))) 
                                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                             | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_57_)))))) 
                                                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_56_)
                                                                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_58_)))))) 
                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                   | (~ 
                                                                      ((~ 
                                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                         & ((~ 
                                                                             ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_63_))) 
                                                                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                               | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_61_)))))) 
                                                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                              ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_60_)
                                                                              : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_62_))))))))) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                  & ((~ 
                                                                      ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                            & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_51_))) 
                                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                             | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_49_)))))) 
                                                                     & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                            ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_48_)
                                                                            : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_50_)))))) 
                                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_582)) 
                                                                   | (~ 
                                                                      ((~ 
                                                                        ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                         & ((~ 
                                                                             ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                              & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_55_))) 
                                                                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)) 
                                                                               | (~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_53_)))))) 
                                                                       & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02ectrl_9___05FXNOR2_X1_A_B_BUF_X1_A_1__DOT__A) 
                                                                          | ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_478)
                                                                              ? (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_52_)
                                                                              : (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_54_)))))))) 
                                                              | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__spi_mosi_reg_p_D_OAI21_X1_ZN_A_OAI211_X1_ZN_C1_MUX2_X1_Z_A_MUX2_X1_Z__DOT__S)))))))))));
}

void VTOPmod___024root___nba_sequent__TOP__1472(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1472\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_248_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_249_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_250_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_251_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_252_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_253_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_254_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1473(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1473\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_216_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_217_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_218_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_219_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_220_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_221_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_222_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1474(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1474\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_240_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_241_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_242_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_243_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_244_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_245_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_246_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1475(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1475\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_208_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_209_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_210_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_211_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_212_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_213_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_214_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1476(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1476\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_184_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_185_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_186_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_187_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_188_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_189_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_190_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1477(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1477\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_152_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_153_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_154_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_155_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_156_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_157_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_158_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1478(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1478\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_176_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_177_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_178_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_179_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_180_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_181_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_182_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1479(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1479\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_144_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_145_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_146_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_147_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_148_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_149_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_150_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1480(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1480\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_232_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_233_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_234_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_235_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_236_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_237_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_238_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1481(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1481\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_200_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_201_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_202_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_203_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_204_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_205_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_206_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1482(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1482\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_224_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_225_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_226_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_227_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_228_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_229_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_230_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1483(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1483\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_192_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_193_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_194_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_195_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_196_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_197_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_198_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1484(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1484\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_168_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_169_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_170_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_171_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_172_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_173_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_174_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1485(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1485\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_136_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_137_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_138_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_139_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_140_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_141_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_142_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1486(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1486\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_160_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_161_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_162_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_163_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_164_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_165_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_166_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1487(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1487\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_128_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_129_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_130_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_131_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_132_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_133_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_134_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1488(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1488\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_120_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_121_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_122_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_123_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_124_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_125_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_126_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1489(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1489\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_88_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_89_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_90_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_91_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_92_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_93_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_94_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1490(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1490\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_112_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_113_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_114_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_115_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_116_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_117_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_118_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1491(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1491\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_80_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_81_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_82_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_83_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_84_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_85_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_86_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1492(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1492\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_56_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_57_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_58_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_59_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_60_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_61_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_62_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1493(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1493\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_24_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_25_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_26_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_27_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_28_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_29_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_30_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1494(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1494\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_48_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_49_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_50_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_51_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_52_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_53_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_54_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1495(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1495\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_16_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_17_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_18_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_19_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_20_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_21_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_22_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1496(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1496\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_104_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_108_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_109_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_110_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1497(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1497\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_72_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_73_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_74_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_75_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_76_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_77_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_78_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1498(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1498\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_96_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_97_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_98_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_99_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1499(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1499\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_64_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_65_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_66_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_67_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_68_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_69_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_70_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1500(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1500\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_40_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_41_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_42_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_43_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_44_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_45_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_46_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1501(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1501\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_8_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_9_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_10_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_11_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_12_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_13_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_14_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1502(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1502\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_32_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_33_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_34_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_35_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_36_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_37_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_38_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1503(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1503\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_0___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_105___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_2_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_106___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_107___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_100___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_101___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_mem_q_102___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_comb__TOP__177(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__177\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_uart_tx__02es_parity_bit_d_AND2_X1_ZN__DOT__ZN 
        = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_uart_tx__02es_fsm_q_2_) 
           & ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_uart_tx__02es_parity_bit_q) 
              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_uart_tx__02es_reg_data_q_0_)));
}

void VTOPmod___024root___nba_sequent__TOP__1504(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1504\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_2_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_1___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_0___05Freg_p__DOT__D));
    vlSelfRef.__VdfgRegularize_he50b618e_0_554 = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_0_) 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_1_));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180 = ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eluart1__02em__02eu_tx_fifo__02es_rd_ptr_q_2_) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_554));
}

void VTOPmod___024root___nba_comb__TOP__178(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__178\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshPBLOqwHC8BRkdAvrIvCbest8DxBKZZHToygw7Y84__DOT__A4 
        = (1U & (~ ((~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_58_)) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_58_)) 
                                & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_10_)) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_10_)))) 
                            | (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_53_)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_53_)) 
                               | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_2_)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_2_))))) 
                        & ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_20_)) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_20_)) 
                                   & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_42_)) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_42_)))) 
                               | (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_50_)) 
                                   & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_50_)) 
                                  | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_60_)) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_60_))))) 
                           & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_22_) 
                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_22_)) 
                                  | (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_55_)) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_55_)) 
                                     | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_39_)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_39_))))) 
                              & (~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_14_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_14_)) 
                                        & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_41_)) 
                                           | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_41_)))) 
                                    | (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_42_)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_42_)) 
                                       | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_6_)) 
                                          & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_6_))))))))) 
                    | ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_41_)) 
                                & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_41_)) 
                               | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_7_)) 
                                  & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_7_)))) 
                           & (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_18_)) 
                               | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_18_)) 
                              & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_61_)) 
                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_61_))))) 
                       | ((~ ((~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_2_)) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_2_)) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_5_)) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_5_)))) 
                                  | (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_48_)) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_48_)) 
                                     | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_61_)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_61_))))) 
                              & ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_18_)) 
                                      & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_18_)) 
                                     | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_10_)) 
                                        & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_10_)))) 
                                 & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_23_) 
                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_23_)))))) 
                          | (~ ((~ (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_14_)) 
                                     & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_14_)) 
                                    | ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_58_)) 
                                       & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_58_)))) 
                                & (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_50_)) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_50_)) 
                                   & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_5_)) 
                                      | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_5_))))))))));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu____VhshPBLOqwHC8BRkdAvrIvCbest8DxBKZZHToygw7Y84__DOT__A1 
        = (1U & (~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_45_) 
                            ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_45_))) 
                        & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_51_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_51_))) 
                           & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_17_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_17_))) 
                              & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_40_) 
                                    ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_40_))))))) 
                    | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_8_) 
                               ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_8_))) 
                           & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_56_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_56_))) 
                              & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_30_) 
                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_30_))) 
                                 & (~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_38_) 
                                       ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_38_))))))) 
                       | ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_35_) 
                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_35_))) 
                              & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_34_) 
                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_34_))) 
                                 & ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_16_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_16_))) 
                                    & (~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_11_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_11_)) 
                                          | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_19_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_19_)) 
                                             | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_33_) 
                                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_33_)) 
                                                | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_9_) 
                                                   ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_9_)))))))))) 
                          | (~ ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_52_) 
                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_52_)) 
                                    | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_36_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_36_)) 
                                       | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_12_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_12_)) 
                                          | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_13_) 
                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_13_)))))) 
                                & ((~ (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_31_) 
                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_31_)) 
                                       | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_54_) 
                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_54_)) 
                                          | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_25_) 
                                              ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_25_)) 
                                             | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_43_) 
                                                ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_43_)))))) 
                                   & (~ ((~ ((~ ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_44_) 
                                                 ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_44_))) 
                                             & (((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_53_)) 
                                                 | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_53_)) 
                                                & ((~ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_39_)) 
                                                   | (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_39_))))) 
                                         | (((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_37_) 
                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_37_)) 
                                            | ((~ (
                                                   (~ 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_24_) 
                                                     ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_24_))) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_47_) 
                                                        ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_47_))) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_46_) 
                                                           ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_46_))) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_4_) 
                                                             ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_4_))))))) 
                                               | ((IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_lsu_setLrAddr___05Fbore_27_) 
                                                  ^ (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02ecpu__02ecpu__02enutshell_cpu__02enutcore__02ebackend__02eexu__02e_csr_lrAddr___05Fbore_27_))))))))))))));
}

void VTOPmod___024root___nba_sequent__TOP__1505(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1505\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1055_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1054_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1053_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1052_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1051_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1050_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1049_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1048_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1047_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1046_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1045_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1044_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1043_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1042_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1041_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1040_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1039_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1038_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1037_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1036_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1035_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1034_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1033_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1032_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1031_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1030_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1029_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1028_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1027_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1026_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1025_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1;
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1024_ 
        = vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D;
}

void VTOPmod___024root___nba_sequent__TOP__1506(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1506\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_959_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_958_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_957_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_956_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_955_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_954_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_953_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_952_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_951_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_950_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_949_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_948_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_947_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_946_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_945_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_944_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_943_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_942_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_941_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_940_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_939_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_938_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_937_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_936_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_935_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_934_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_933_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_932_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_931_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_930_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_929_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_928_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1507(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1507\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_927_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_926_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_925_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_924_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_923_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_922_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_921_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_920_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_919_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_918_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_917_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_916_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_915_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_914_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_913_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_912_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_911_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_910_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_909_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_908_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_907_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_906_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_905_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_904_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_903_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_902_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_901_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_900_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_899_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_898_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_897_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_896_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1508(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1508\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_831_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_830_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_829_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_828_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_827_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_826_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_825_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_824_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_823_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_822_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_821_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_820_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_819_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_818_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_817_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_816_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_815_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_814_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_813_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_812_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_811_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_810_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_809_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_808_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_807_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_806_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_805_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_804_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_803_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_802_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_801_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_800_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1509(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1509\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_799_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_798_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_797_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_796_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_795_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_794_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_793_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_792_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_791_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_790_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_789_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_788_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_787_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_786_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_785_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_784_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_783_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_782_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_781_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_780_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_779_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_778_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_777_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_776_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_775_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_774_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_773_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_772_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_771_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_770_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_769_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_768_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1510(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1510\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1023_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1022_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1021_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1020_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1019_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1018_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1017_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1016_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1015_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1014_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1013_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1012_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1011_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1010_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1009_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1008_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1007_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1006_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1005_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1004_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1003_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1002_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1001_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1000_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_999_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_998_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_997_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_996_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_995_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_994_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_993_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_992_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1511(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1511\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_991_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_990_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_989_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_988_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_987_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_986_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_985_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_984_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_983_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_982_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_981_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_980_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_979_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_978_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_977_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_976_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_975_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_974_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_973_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_972_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_971_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_970_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_969_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_968_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_967_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_966_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_965_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_964_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_963_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_962_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_961_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_960_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1512(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1512\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_895_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_894_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_893_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_892_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_891_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_890_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_889_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_888_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_887_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_886_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_885_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_884_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_883_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_882_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_881_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_880_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_879_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_878_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_877_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_876_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_875_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_874_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_873_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_872_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_871_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_870_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_869_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_868_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_867_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_866_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_865_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_864_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1513(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1513\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_863_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_862_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_861_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_860_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_859_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_858_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_857_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_856_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_855_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_854_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_853_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_852_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_851_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_850_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_849_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_848_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_847_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_846_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_845_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_844_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_843_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_842_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_841_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_840_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_839_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_838_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_837_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_836_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_835_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_834_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_833_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_832_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1514(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1514\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_767_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_766_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_765_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_764_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_763_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_762_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_761_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_760_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_759_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_758_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_757_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_756_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_755_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_754_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_753_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_752_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_751_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_750_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_749_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_748_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_747_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_746_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_745_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_744_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_743_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_742_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_741_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_740_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_739_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_738_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_737_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_736_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1515(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1515\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_703_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_702_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_701_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_700_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_699_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_698_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_697_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_696_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_695_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_694_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_693_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_692_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_691_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_690_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_689_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_688_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_687_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_686_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_685_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_684_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_683_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_682_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_681_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_680_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_679_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_678_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_677_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_676_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_675_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_674_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_673_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_672_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1516(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1516\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_735_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_734_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_733_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_732_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_731_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_730_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_729_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_728_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_727_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_726_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_725_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_724_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_723_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_722_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_721_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_720_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_719_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_718_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_717_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_716_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_715_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_714_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_713_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_712_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_711_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_710_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_709_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_708_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_707_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_706_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_705_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_704_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1517(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1517\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_671_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_670_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_669_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_668_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_667_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_666_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_665_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_664_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_663_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_662_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_661_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_660_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_659_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_658_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_657_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_656_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_655_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_654_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_653_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_652_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_651_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_650_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_649_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_648_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_647_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_646_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_645_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_644_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_643_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_642_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_641_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_640_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1518(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1518\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_639_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_638_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_637_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_636_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_635_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_634_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_633_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_632_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_631_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_630_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_629_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_628_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_627_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_626_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_625_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_624_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_623_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_622_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_621_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_620_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_619_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_618_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_617_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_616_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_615_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_614_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_613_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_612_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_611_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_610_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_609_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_608_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1519(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1519\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_575_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_574_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_573_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_572_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_571_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_570_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_569_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_568_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_567_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_566_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_565_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_564_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_563_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_562_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_561_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_560_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_559_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_558_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_557_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_556_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_555_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_554_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_553_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_552_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_551_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_550_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_549_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_548_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_547_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_546_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_545_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_544_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1520(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1520\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_607_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_606_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_605_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_604_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_603_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_602_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_601_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_600_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_599_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_598_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_597_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_596_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_595_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_594_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_593_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_592_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_591_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_590_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_589_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_588_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_587_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_586_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_585_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_584_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_583_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_582_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_581_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_580_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_579_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_578_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_577_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_576_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1521(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1521\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_543_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_542_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_541_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_540_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_539_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_538_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_537_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_536_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_535_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_534_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_533_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_532_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_531_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_530_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_529_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_528_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_527_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_526_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_525_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_524_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_523_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_522_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_521_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_520_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_519_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_518_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_517_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_516_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_515_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_514_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_513_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_512_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1522(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1522\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_447_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_446_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_445_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_444_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_443_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_442_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_441_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_440_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_439_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_438_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_437_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_436_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_435_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_434_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_433_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_432_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_431_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_430_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_429_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_428_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_427_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_426_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_425_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_424_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_423_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_422_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_421_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_420_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_419_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_418_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_417_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_416_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1523(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1523\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_415_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_414_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_413_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_412_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_411_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_410_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_409_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_408_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_407_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_406_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_405_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_404_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_403_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_402_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_401_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_400_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_399_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_398_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_397_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_396_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_395_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_394_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_393_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_392_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_391_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_390_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_389_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_388_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_387_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_386_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_385_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_384_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1524(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1524\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_319_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_318_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_317_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_316_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_315_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_314_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_313_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_312_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_311_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_310_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_309_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_308_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_307_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_306_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_305_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_304_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_303_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_302_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_301_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_300_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_299_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_298_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_297_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_296_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_295_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_294_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_293_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_292_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_291_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_290_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_289_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_288_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1525(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1525\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_287_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_286_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_285_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_284_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_283_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_282_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_281_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_280_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_279_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_278_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_277_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_276_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_275_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_274_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_273_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_272_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_271_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_270_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_269_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_268_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_267_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_266_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_265_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_264_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_263_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_262_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_261_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_260_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_259_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_258_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_257_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_256_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1526(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1526\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_191_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_190_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_189_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_188_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_187_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_186_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_185_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_184_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_183_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_182_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_181_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_180_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_179_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_178_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_177_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_176_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_175_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_174_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_173_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_172_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_171_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_170_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_169_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_168_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_167_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_166_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_165_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_164_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_163_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_162_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_161_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_160_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1527(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1527\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_159_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_158_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_157_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_156_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_155_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_154_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_153_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_152_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_151_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_150_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_149_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_148_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_147_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_146_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_145_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_144_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_143_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_142_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_141_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_140_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_139_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_138_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_137_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_136_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_135_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_134_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_133_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_132_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_131_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_130_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_129_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_128_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1528(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1528\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_63_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_62_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_61_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_60_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_59_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_58_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_57_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_56_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_55_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_54_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_53_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_52_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_51_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_50_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_49_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_48_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_47_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_46_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_45_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_44_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_43_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_42_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_41_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_40_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_39_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_38_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_37_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_36_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_35_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_34_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_33_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_32_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1529(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1529\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_31_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_30_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_29_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_28_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_27_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_26_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_25_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_24_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_23_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_22_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_21_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_20_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_19_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_18_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_17_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_16_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_15_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_14_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_13_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_12_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_11_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_10_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_9_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_8_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_7_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_6_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_5_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_4_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_3_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_2_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_1_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_0_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1530(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1530\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_511_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_510_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_509_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_508_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_507_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_506_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_505_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_504_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_503_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_502_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_501_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_500_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_499_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_498_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_497_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_496_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_495_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_494_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_493_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_492_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_491_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_490_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_489_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_488_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_487_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_486_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_485_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_484_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_483_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_482_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_481_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_480_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1531(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1531\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_479_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_478_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_477_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_476_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_475_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_474_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_473_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_472_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_471_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_470_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_469_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_468_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_467_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_466_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_465_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_464_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_463_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_462_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_461_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_460_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_459_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_458_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_457_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_456_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_455_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_454_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_453_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_452_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_451_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_450_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_449_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_448_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}

void VTOPmod___024root___nba_sequent__TOP__1532(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__1532\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_383_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_382_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_381_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_380_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_379_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_378_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_377_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_25___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_376_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elspi__02emspi__02eu0_spi_top__02erx_24___05Freg_p_D_OAI22_X1_ZN_A2_AOI21_X1_ZN__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_375_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshfVY5nlgtzbHn0wLtgArHgBq71ktWvdNZdMBfJDJC__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_374_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_14___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_373_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_13___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_372_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshcnknVAL6J8JOG3E6LF2bqRqbAQ5xukZhlTQT20fm__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_371_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___Vhshs6RguoxWwCQgAQvT5mHLFsFNbUOrmAXa10klfUoI__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_370_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshZQqrTEA7LsbbX0uC1T4xmmXSlCG8DbVJgohd2kof__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_369_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elwdg__02em__02es_wdg_key_d_9___05FNOR2_X1_ZN_A1_OAI221_X1_C1_A_AOI22_X1_ZN__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_368_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi___VhshWU8y0eTABIbCAWhM6Yd9dk7XqWSeRA3ZZ3DVCxnu__DOT__A1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_367_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_15___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_366_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_1__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_365_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_364_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_12___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_363_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_11___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_362_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_10___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_361_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eli2s__02em__02es_bit_dtl_0___05FINV_X1_A_ZN_AOI21_X1_B1_ZN_AOI211_X1_B_ZN_AOI22_X1_A2_2__DOT__B2));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_360_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_8___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_359_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_7___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_358_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_357_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_21___05FOAI22_X1_ZN_A2_MUX2_X1_Z_A_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_356_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_4___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_355_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_3___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_354_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_2___05Freg_p__DOT__D));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_353_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elcrc__02em__02es_crc_data_d_22___05FOAI22_X1_ZN_A2_MUX2_X1_Z_B_AOI21_X1_ZN__DOT__B1));
    vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02elqspi__02em__02eu_spi_core__02eu_txfifo__02ebuffer_352_ 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.TOPmod__DOT__u_ysyxSoCTop__DOT__asic__02eaxi42apb__02ewdata_reg_r_0___05Freg_p__DOT__D));
}
