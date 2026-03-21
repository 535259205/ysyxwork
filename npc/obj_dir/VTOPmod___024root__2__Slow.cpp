// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

VL_ATTR_COLD void VTOPmod___024root___stl_sequent__TOP__2(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___stl_sequent__TOP__2\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1;
    TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3;
    TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0;
    TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 0;
    // Body
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_tc_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q)));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_valid) 
         | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_tc_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_valid)) 
                 & ((((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_q)) 
                      & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q) 
                         == VL_SHIFTR_III(32,32,32, 
                                          ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_q) 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_tc_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_in_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_in_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_in_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgExtracted_h4037c933__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_d 
            = (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_init_q);
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_init_q;
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_d 
            = (0x0000ffffU & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_init_q);
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d 
            = ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                ? ((0x00000040U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                    ? ((0x00000020U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                        ? (((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                     >> 0x00000017U)) 
                              | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                       >> 0x00000019U))) 
                             << 0x0000001eU) | (((2U 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                     >> 0x00000019U)) 
                                                 | (1U 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                       >> 0x0000001bU))) 
                                                << 0x0000001cU)) 
                           | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                       >> 0x0000001bU)) 
                                | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                         >> 0x0000001dU))) 
                               << 0x0000001aU) | ((0x02000000U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                      >> 5U)) 
                                                  | ((0x01000000U 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                         >> 7U)) 
                                                     | vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data24_wr_rev))))
                        : ((0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                           | (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data24_wr_rev 
                              << 8U))) : ((0x00000020U 
                                           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                                           ? ((0x0000ffffU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                                              | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data16_wr_rev) 
                                                 << 0x00000010U))
                                           : ((0x00ffffffU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                                              | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data8_wr_rev) 
                                                 << 0x00000018U))))
                : ((0x00000040U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                    ? ((0x00000020U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata
                        : ((0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                           | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                              << 8U))) : ((0x00000020U 
                                           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                                           ? ((0x0000ffffU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                                              | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                 << 0x00000010U))
                                           : ((0x00ffffffU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                                              | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                 << 0x00000018U)))));
    } else {
        if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_qq;
            vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_qq;
            vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_d 
                = ((1U == (3U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
                                 >> 3U))) ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_qq_1021)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_qq_8005));
        }
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d 
                = ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                    ? ((0x00000010U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                        ? ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                            ? (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q_rev 
                               ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q)
                            : ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q_rev) 
                                                 ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q))))
                        : ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                            ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q_rev) 
                                                 ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q)))
                            : ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                               | (0x000000ffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q_rev) 
                                                 ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q)))))
                    : ((0x00000010U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                        ? ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                            ? (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                               ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q)
                            : ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                 ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q))))
                        : ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))
                            ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                               | (0x0000ffffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                 ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q)))
                            : ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d) 
                               | (0x000000ffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q) 
                                                 ^ vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q))))));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q;
    if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_fcr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d = 0U;
    } else {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q)));
        }
        if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__pop_hdshk)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)));
        } else if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__pop_hdshk))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d 
                = (0x0000003fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q) 
                                  - (IData)(1U)));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[7U];
    if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk) {
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q), 3U)), vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d, 
                        ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_push_valid)
                          ? (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)
                          : 0U));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q;
    if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_fcr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d = 0U;
    } else {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q)));
        }
        if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__push_hdshk))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q)));
        } else if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__push_hdshk)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d 
                = (0x0000003fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q) 
                                  - (IData)(1U)));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d[__Vilp1] 
            = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk) {
        VL_ASSIGNSEL_WI(2048, 32, (0x000007ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q), 5U)), vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d, 
                        ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_tx_push_valid)
                          ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                              ? ((0x00004000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                                  ? vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata
                                  : VL_SHIFTL_III(32,32,32, vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata, 8U))
                              : ((0x00004000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                                  ? VL_SHIFTL_III(32,32,32, vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata, 0x00000010U)
                                  : VL_SHIFTL_III(32,32,32, vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata, 0x00000018U)))
                          : 0U));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q;
    if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d = 0U;
    } else {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q)));
        }
        if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)));
        } else if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d 
                = (0x0000007fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q) 
                                  - (IData)(1U)));
        }
        if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q)));
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d 
                = (0x0000007fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q) 
                                  - (IData)(1U)));
        }
    }
    TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__src_data_i) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
              == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__src_data_i;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_0_prdata
             : 0U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata
                        : 0U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                   ? ((8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                       ? ((((0x0000ff00U 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                  >> 8U))) 
                                           << 0x00000010U) 
                                          | ((0x0000ff00U 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                 >> 8U)) 
                                             | (vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                >> 0x00000018U)))
                                       : vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)
                                   : 0U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                              ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel)
                                                  ? 
                                                 ((((4U 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                       ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                       : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                       ? 
                                                      ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                       ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                       : 
                                                      (0x000000c0U 
                                                       | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                       ? 
                                                      ((0x00000080U 
                                                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? 
                                                       ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                        >> 8U)
                                                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                       : 
                                                      ((0x00000080U 
                                                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                                   << 0x00000018U) 
                                                  | ((0x00ff0000U 
                                                      & (((4U 
                                                           & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                           ? 
                                                          ((2U 
                                                            & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                             ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                             : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                            : 
                                                           ((1U 
                                                             & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                             ? 
                                                            ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                                    << 2U)) 
                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                             : 0U))
                                                           : 
                                                          ((2U 
                                                            & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                             ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                             : 
                                                            (0x000000c0U 
                                                             | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                            : 
                                                           ((1U 
                                                             & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                             ? 
                                                            ((0x00000080U 
                                                              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                              ? 
                                                             ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                              >> 8U)
                                                              : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                             : 
                                                            ((0x00000080U 
                                                              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                              ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                              : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                                         << 0x00000010U)) 
                                                     | ((0x0000ff00U 
                                                         & (((4U 
                                                              & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                              ? 
                                                             ((2U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? 
                                                              ((1U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                               : 
                                                              ((1U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? 
                                                               ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                                : 0U))
                                                              : 
                                                             ((2U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? 
                                                              ((1U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                : 
                                                               (0x000000c0U 
                                                                | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                               : 
                                                              ((1U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? 
                                                               ((0x00000080U 
                                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                 ? 
                                                                ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                 >> 8U)
                                                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                                : 
                                                               ((0x00000080U 
                                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                                            << 8U)) 
                                                        | (0x000000ffU 
                                                           & ((4U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? 
                                                              ((2U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? 
                                                                ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                                  << 4U) 
                                                                 | ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                 : 
                                                                (0x000000c0U 
                                                                 | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? 
                                                                ((0x00000080U 
                                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? 
                                                                 ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                  >> 8U)
                                                                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                                 : 
                                                                ((0x00000080U 
                                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out)))))))))
                                                  : 0U)
                                              : 0U) 
                                            | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata
                                                 : 0U) 
                                               | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                    ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                       ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_6_prdata
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_7)
                                                          ? 
                                                         ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_apb4_rd_hdshk)
                                                           ? 
                                                          ((0x00000020U 
                                                            & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                            ? 
                                                           ((0x00000010U 
                                                             & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                             ? 0U
                                                             : 
                                                            ((8U 
                                                              & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? 0U
                                                               : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_pinmux_q)))
                                                            : 
                                                           ((0x00000010U 
                                                             & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                              ? 
                                                             ((4U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q
                                                               : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q)
                                                              : 
                                                             ((4U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype1_q
                                                               : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype0_q))
                                                             : 
                                                            ((8U 
                                                              & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                              ? 
                                                             ((4U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inten_q
                                                               : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q)
                                                              : 
                                                             ((4U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__s_dat_q
                                                               : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q))))
                                                           : 0U)
                                                          : 0U) 
                                                        | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_8)
                                                             ? 
                                                            ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_apb4_rd_hdshk)
                                                              ? 
                                                             ((0x00000020U 
                                                               & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                               ? 
                                                              ((0x00000010U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? 0U
                                                                : 
                                                               ((8U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? 0U
                                                                 : 
                                                                ((4U 
                                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                  ? 0U
                                                                  : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_pinmux_q)))
                                                               : 
                                                              ((0x00000010U 
                                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                ? 
                                                               ((8U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? 
                                                                ((4U 
                                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                  ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q
                                                                  : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q)
                                                                 : 
                                                                ((4U 
                                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                  ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype1_q
                                                                  : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype0_q))
                                                                : 
                                                               ((8U 
                                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                 ? 
                                                                ((4U 
                                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                  ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inten_q
                                                                  : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q)
                                                                 : 
                                                                ((4U 
                                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                  ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__s_dat_q
                                                                  : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q))))
                                                              : 0U)
                                                             : 0U) 
                                                           | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_9)
                                                                ? 
                                                               ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_apb4_rd_hdshk)
                                                                 ? 
                                                                ((0x00000020U 
                                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                  ? 
                                                                 ((0x00000010U 
                                                                   & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                   ? 0U
                                                                   : 
                                                                  ((8U 
                                                                    & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                    ? 0U
                                                                    : 
                                                                   ((4U 
                                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                     ? 0U
                                                                     : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_pinmux_q)))
                                                                  : 
                                                                 ((0x00000010U 
                                                                   & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                   ? 
                                                                  ((8U 
                                                                    & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                    ? 
                                                                   ((4U 
                                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q
                                                                     : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q)
                                                                    : 
                                                                   ((4U 
                                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype1_q
                                                                     : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype0_q))
                                                                   : 
                                                                  ((8U 
                                                                    & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                    ? 
                                                                   ((4U 
                                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inten_q
                                                                     : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q)
                                                                    : 
                                                                   ((4U 
                                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__s_dat_q
                                                                     : vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q))))
                                                                 : 0U)
                                                                : 0U) 
                                                              | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_10)
                                                                   ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata
                                                                   : 0U) 
                                                                 | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_11)
                                                                      ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata
                                                                      : 0U) 
                                                                    | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_12)
                                                                         ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata
                                                                         : 0U) 
                                                                       | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_13)
                                                                            ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata
                                                                            : 0U) 
                                                                          | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_14)
                                                                               ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata
                                                                               : 0U) 
                                                                             | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_15)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_16)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_17)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_18)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_19)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_20)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_21)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_21_prdata
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_22)
                                                                                 ? vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_22_prdata
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_23)
                                                                                 ? 
                                                                                (((vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__data
                                                                                [3U] 
                                                                                << 0x00000018U) 
                                                                                | (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__data
                                                                                [2U] 
                                                                                << 0x00000010U)) 
                                                                                | ((vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__data
                                                                                [1U] 
                                                                                << 8U) 
                                                                                | vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__data
                                                                                [0U]))
                                                                                 : 0U))))))))))))))))))))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i)
            ? (0x0000001fU & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)
            : 0U);
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite) 
           & (IData)(TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__src_data_i;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if ((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
             & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000000fU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0fU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0fU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x0fU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000010U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x10U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x10U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x10U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000011U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x11U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x11U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x11U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000012U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x12U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x12U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x12U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000013U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x13U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x13U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x13U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000014U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x14U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x14U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x14U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000015U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x15U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x15U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x15U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000016U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x16U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x16U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x16U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000017U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x17U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x17U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x17U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000018U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x18U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x18U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x18U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x00000019U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x19U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x19U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x19U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000001aU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x1aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000001bU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x1bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000001cU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x1cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000001dU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1dU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1dU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x1dU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000001eU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1eU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1eU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x1eU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
              >> 0x0000001fU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1fU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x1fU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x1fU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 1U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 1U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 2U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 2U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 3U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 3U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((3U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((3U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (3U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 4U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 4U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((4U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((4U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (4U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 5U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 5U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((5U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((5U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (5U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 6U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 6U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((6U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((6U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (6U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 7U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 7U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 8U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__irq_o))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 8U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 9U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__irq_o))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 9U) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((9U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((9U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (9U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 0x0000000aU)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_irq_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 0x0000000aU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x0aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 0x0000000bU)) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 0x0000000bU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x0bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 0x0000000cU)) & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 0x0000000cU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x0cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 0x0000000dU)) & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 0x0000000dU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0dU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0dU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x0dU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q;
    if ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                 >> 0x0000000eU)) & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        } else if (((vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q 
                     >> 0x0000000eU) & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0eU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)) 
             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) {
        if (((0x0eU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q)) 
             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i) 
                & (0x0eU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__r_full) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid) 
            << 1U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__r_full));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_full) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid) 
            << 1U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_full));
    TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_2)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__r_full) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0)) 
               | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid) 
                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((4U & ((IData)(TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid)) 
                              | (IData)(TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 2U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((4U & ((IData)(TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid)) 
                              | (IData)(TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 2U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_mask_T 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__r_full));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_2) {
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_0 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_1 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_0 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0;
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_1 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_2)
                     ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_mask_T_5 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0;
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_full) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid) 
                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)));
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__r_id)
             : 0U) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__rid_reg)
                       : 0U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_0) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready)) 
           | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                 ? 0U : 3U) : 0U) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                      ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bresp)
                                      : 0U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_id)
             : 0U) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                       ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__bid_reg)
                       : 0U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__casez_tmp));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last 
        = ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
            ? ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
                ? ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
                    ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
                    ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
            : ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
                ? ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
                    ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid))
                    ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT___GEN_1 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0) 
              & ((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 1U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 2U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 3U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 4U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 5U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 6U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 7U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = (1U & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                     & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
                 & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                    & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT___GEN_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (2U 
                                                 & ((~ 
                                                     ((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                                        & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_2)
                                                            ? 
                                                           ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                                            >> 1U)
                                                            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1))) 
                                                       & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid)) 
                                                      | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                                          & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                                              ? 
                                                             ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                                                              >> 1U)
                                                              : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))) 
                                                         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid)))) 
                                                    << 1U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__casez_tmp 
        = ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))
            : ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))
                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)
                    ? 1U : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))
                : ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
            & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))) 
           | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 1U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready)) 
           | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0x02020000U == (0x03ffff80U & vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = (1U & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                     & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
                 & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                    & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__casez_tmp_2));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_awready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT___GEN_2 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = (1U & ((~ ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                     & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
                 & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                    & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
}

VL_ATTR_COLD void VTOPmod___024root___stl_sequent__TOP__0(VTOPmod___024root* vlSelf);
VL_ATTR_COLD void VTOPmod___024root____Vm_traceActivitySetAll(VTOPmod___024root* vlSelf);
VL_ATTR_COLD void VTOPmod___024root___stl_sequent__TOP__1(VTOPmod___024root* vlSelf);

VL_ATTR_COLD void VTOPmod___024root___eval_stl(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_stl\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VTOPmod___024root___stl_sequent__TOP__0(vlSelf);
        VTOPmod___024root____Vm_traceActivitySetAll(vlSelf);
        VTOPmod___024root___stl_sequent__TOP__1(vlSelf);
        VTOPmod___024root___stl_sequent__TOP__2(vlSelf);
    }
}

VL_ATTR_COLD void VTOPmod___024root___eval_triggers__stl(VTOPmod___024root* vlSelf);
VL_ATTR_COLD bool VTOPmod___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool VTOPmod___024root___eval_phase__stl(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_phase__stl\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VTOPmod___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VTOPmod___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VTOPmod___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VTOPmod___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOPmod___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VTOPmod___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VTOPmod___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOPmod___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VTOPmod___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge TOPmod.asic.cpu.cpu.soc_1.ctrl.step)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge TOPmod.divReg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge TOPmod.externalPins_spi_sck)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge TOPmod.u_flash.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge TOPmod.__Vcellinp__u_psram__ce_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge TOPmod.psram_sck)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge TOPmod.psram_sck)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge TOPmod.__Vcellinp__u_psram__ce_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOPmod___024root____Vm_traceActivitySetAll(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root____Vm_traceActivitySetAll\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x0000000cU] = 1U;
}

VL_ATTR_COLD void VTOPmod___024root___ctor_var_reset(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___ctor_var_reset\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->TOPmod__DOT__divReg = 0;
    vlSelf->TOPmod__DOT__externalPins_spi_sck = 0;
    vlSelf->TOPmod__DOT__externalPins_spi_mosi = 0;
    vlSelf->TOPmod__DOT__psram_sck = 0;
    vlSelf->TOPmod__DOT____Vcellinp__u_psram__ce_n = 0;
    vlSelf->TOPmod__DOT__psram_dio__strong__out2 = 0;
    vlSelf->TOPmod__DOT__psram_dio__strong__out3 = 0;
    vlSelf->TOPmod__DOT__psram_dio__strong__out4 = 0;
    vlSelf->TOPmod__DOT__psram_dio__strong__out5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__uart1_uart_tx_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__i2c_scl_dir_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__i2c_sda_dir_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__i2s_sd_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_22_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_21_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_6_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_0_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_19_psel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_19_penable = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_6 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_8 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_9 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_10 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_11 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_12 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_13 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_14 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_15 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_16 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_17 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_18 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_19 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_20 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_21 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_22 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_23 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_24 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__axi4lite_aw_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__axi4lite_w_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__axi4lite_b_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__axi4lite_b_payload_resp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__axi4lite_r_payload_resp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_prot = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_prot = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_payload_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_24 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_28 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_b_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_aw_fire = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_b_fire = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT____VdfgExtracted_hf015dc25__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT___zz_mcycle = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_doResult = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_id = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_resp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_doResult_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_burst = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_ha86a3254__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_h54ee5261__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_ar_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_ar_payload_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_ar_payload_size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_r_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_wantStart = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_grp_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg_string = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext_string = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_msip_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtime_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtime_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT____VdfgRegularize_ha7dfeca7_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ip_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ie_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_thold_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__ie_i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__ip_o = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_d[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_d[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_irq_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_prio_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_id_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_6 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_8 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_9 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_10 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_11 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_12 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_13 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_14 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_15 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_16 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_17 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_18 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_19 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_20 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_21 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_22 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_23 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_24 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_25 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_26 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_27 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_28 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_29 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____VdfgRegularize_h4b274899_0_30 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT____VdfgRegularize_h311b3097_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h93f44fe1_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hce86519e_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hb5305b17_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h2ccb80ab_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h02ce69e7_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h6abd9339_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h5cb1b302_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_hf183d12a_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h31b5436a_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_he400ba73_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h704cd1d9_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h4f81a988_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h29616330_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_ha117777b_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h5d6e1c92_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h8b57dc78_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hfa426b9b_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h7a5e7d47_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h7b9ed883_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h36413ce4_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_hc3b5fc42_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h9e6487be_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h7a5e8e33_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_ha0f11ae3_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hd637693e_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hb939ed0f_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h0e3ed8d6_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h1575974e_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h2c3f9f0e_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__id_i[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h37701fa9_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_prio_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_penable = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pstrb = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__interrupt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w_reg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__srx_pad = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fcr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__start_dlc = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rx_reset = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tx_reset = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_value = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__serial_out = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir_read = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr_read = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_pready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__spi_state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__spi_ack = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_prdata_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_psel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext = 0;
    VL_ZERO_RESET_W(72, vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string);
    VL_ZERO_RESET_W(72, vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext_string);
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    VL_ZERO_RESET_W(128, vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_alrm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ssta_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_wr_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_pready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_pready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_tmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__src_data_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__src_data_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__src_valid_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_ack_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_key_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_key_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_feed_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_in_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgExtracted_hbc9544f1__1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_arch_sys_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_arch_idl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_arch_idh_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgExtracted_h7bc7cde9__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgRegularize_hac0b0c7e_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__extra_gpio_out_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__extra_gpio_dir_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inten_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype0_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype1_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_pinmux_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_is_int_all = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgExtracted_h0a66584e__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgExtracted_h8b551abc__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__extra_gpio_out_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__extra_gpio_dir_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inten_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype0_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype1_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_pinmux_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_is_int_all = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgExtracted_h0a66584e__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgExtracted_h8b551abc__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__extra_gpio_out_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__extra_gpio_dir_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inten_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype0_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype1_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_pinmux_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_is_int_all = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgExtracted_h0a66584e__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgExtracted_h8b551abc__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_div_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_fcr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lsr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_clr_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_parity_err = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_push_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_pop_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_push_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q = 0;
    VL_ZERO_RESET_W(256, vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d);
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__pop_hdshk = 0;
    VL_ZERO_RESET_W(256, vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4);
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_target_bits = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_sample_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_baudgen_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__baud_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT____Vlvbound_h0f4f7ab8__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q = 0;
    VL_ZERO_RESET_W(288, vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_mem_d);
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__push_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk = 0;
    VL_ZERO_RESET_W(288, vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4);
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_target_bits = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_sample_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baudgen_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_start_bit = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_set_error = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_rx_fall = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baud_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_trg_level_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_txr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irxack = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_busy = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_rxack_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_tip_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_irq_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgExtracted_h5bbf88c4__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_cmd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_txd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_ack = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_rxd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__sr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__shift = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__ld = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__go = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__dcnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__c_state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cSCL = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cSDA = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSCL = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSDA = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSCL = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSDA = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dscl_dir = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sda_chk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_clk_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_slave_wait = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_filter_cnt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_c_state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sta_cond = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sto_cond = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cmd_stop = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____Vlvbound_hc3d30b7d__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_dat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_clk_fe = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgExtracted_hced033f8__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgExtracted_h1c0d4ea0__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgRegularize_h721d21bd_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_wr_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_wr_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_mem_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__pop_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr0_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr1_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr2_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr3_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_tc_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr0_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr1_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr2_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr3_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_tc_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_in_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_in_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_in_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_cmp_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_in_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_normal_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_trg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__s_dat_q = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__irq_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT____Vcellout__m__spi_spi_nss_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_clk_div = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_clk_div_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_addr_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_cmd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_cmd_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_dummy_rd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_dummy_wr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_swrst = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_rd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_wr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qrd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qwr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_csreg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_tx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_rx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_rx_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_data_tx_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_data_rx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_eot = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_th_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_th_rx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_rise_int_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_rise_int_rx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_int_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_int_rx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_int_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT____Vlvbound_h84ab5066__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__pointer_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__pointer_out = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__elements = 0;
    for (int __Vi0 = 0; __Vi0 < 33; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__buffer[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__loop1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT____Vlvbound_h84ab5066__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__pointer_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__pointer_out = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__elements = 0;
    for (int __Vi0 = 0; __Vi0 < 33; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__buffer[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__loop1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_ctrl_data_tx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_rise = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_fall = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_en_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_en_rx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__counter_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__counter_tx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__counter_rx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__counter_rx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__data_to_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__data_to_tx_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__data_to_tx_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__en_quad_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__do_tx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__do_rx = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__rx_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__s_spi_mode = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__tx_clk_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__rx_clk_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_mux = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_tgt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_tgt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__r_running = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__tx_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__en_quad_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__data_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__irq_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_div_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_mst_ws = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_tx_push_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_push_data = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_wr_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q = 0;
    VL_ZERO_RESET_W(2048, vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_mem_d);
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk = 0;
    VL_ZERO_RESET_W(2048, vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4);
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q = 0;
    VL_ZERO_RESET_W(2048, vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_mem_d);
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk = 0;
    VL_ZERO_RESET_W(2048, vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4);
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_ready_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_data_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__i2s_sck_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sck_re = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_re = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_fe = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_out__BRA__0__KET__ = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__u_sck_edge_det_sync_re__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__u_ws_edge_det_sync__DOT__s_dat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__s_rng_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT____VdfgRegularize_h82da046b_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__u_shift_dffr__DOT__dat_i = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_wr_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_rd_hdshk = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_init_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_in = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data8_wr_rev = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data16_wr_rev = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data24_wr_rev = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_qq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q_rev = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_qq_1021 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_qq_8005 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q_rev = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_d = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_qq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q_rev = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgExtracted_h4037c933__0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc8_07__DOT____VdfgRegularize_h9d5c102f_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_1021__DOT____VdfgRegularize_hb4a0f88e_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_1021__DOT____VdfgRegularize_hb4a0f88e_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_1021__DOT____VdfgRegularize_hb4a0f88e_0_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_11 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_13 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_14 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_17 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__active = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__setup = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__in_pready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__dout = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_sck = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_ce_n = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_din = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_sck = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_ce_n = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_dout = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_rd = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_wr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_done = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_re = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__nstate = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__size = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__byte0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__byte1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__nstate = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__data[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__nstate = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bresp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__latched = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__anyValid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_mask_T = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_mask_T_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__w_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__w_id = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__r_sel1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__w_sel1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT___GEN = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__r_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__r_id = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__rdata_REG = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__rdata_r0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__rdata_r1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__rdata_r2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__rdata_r3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_awready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__casez_tmp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__casez_tmp_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT___GEN_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__in_awready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__busy = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__r_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__r_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__busy_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__r_addr_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__r_len_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__len_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__addr_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__wbeats_latched = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___in_awready_T = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__wbeats_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__w_counter = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__w_todo = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_6 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__error_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___GEN_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___inc_addr_T_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___wrapMask_T_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___inc_addr_T_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___wrapMask_T_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___GEN_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT___GEN_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel = 0;
    vlSelf->TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__state = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__is_write_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__casez_tmp = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__rid_reg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__bid_reg = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__resp_hold_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data = 0;
    vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = 0;
    vlSelf->TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__reset = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__state = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__counter = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__cmd = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__addr = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__data = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__rdata = 0;
    vlSelf->TOPmod__DOT__u_flash__DOT__data_bswap = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__dio = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__out_en = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__out_data = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__cmd_data = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__cnt = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__addr_z = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__w_data = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__r_data = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__start_flag = 0;
    vlSelf->TOPmod__DOT__u_psram__DOT__end_rdata = 0;
    vlSelf->__VdfgRegularize_he50b618e_0_0 = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtableidx9 = 0;
    vlSelf->__Vtableidx10 = 0;
    vlSelf->__Vtableidx12 = 0;
    vlSelf->__Vtableidx13 = 0;
    vlSelf->__Vtableidx14 = 0;
    vlSelf->__Vtableidx15 = 0;
    vlSelf->__Vtableidx16 = 0;
    vlSelf->__Vtableidx18 = 0;
    vlSelf->__Vtableidx23 = 0;
    vlSelf->__Vtableidx24 = 0;
    vlSelf->__Vtableidx25 = 0;
    vlSelf->__Vtableidx28 = 0;
    vlSelf->__Vtableidx29 = 0;
    vlSelf->__Vtableidx30 = 0;
    vlSelf->__Vtableidx32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__Vdly__TOPmod__DOT__divReg = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->__Vdly__TOPmod__DOT__externalPins_spi_sck = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->__Vdly__TOPmod__DOT__externalPins_spi_mosi = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__baud_cnt = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baud_cnt = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__sr = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__dcnt = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_cmd = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_txd = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__c_state = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_slave_wait = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_c_state = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__i2c_scl_dir_o = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__i2c_sda_dir_o = 0;
    vlSelf->__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sda_chk = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_flash__DOT__state = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_flash__DOT__counter = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_flash__DOT__cmd = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_flash__DOT__addr = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_flash__DOT__data = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_psram__DOT__cnt = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_psram__DOT__addr_z = 0;
    vlSelf->__Vdly__TOPmod__DOT__u_psram__DOT__w_data = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TOPmod__DOT__divReg__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TOPmod__DOT__externalPins_spi_sck__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TOPmod__DOT__u_flash__DOT__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TOPmod__DOT____Vcellinp__u_psram__ce_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TOPmod__DOT__psram_sck__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
