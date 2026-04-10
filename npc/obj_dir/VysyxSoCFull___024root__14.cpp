// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_hf053abcd_0;

void VysyxSoCFull___024root___nba_comb__TOP__162(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__162\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*2:0*/ __Vtableidx383;
    __Vtableidx383 = 0;
    CData/*2:0*/ __Vtableidx384;
    __Vtableidx384 = 0;
    CData/*2:0*/ __Vtableidx385;
    __Vtableidx385 = 0;
    CData/*2:0*/ __Vtableidx387;
    __Vtableidx387 = 0;
    CData/*2:0*/ __Vtableidx388;
    __Vtableidx388 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBZgCfo5B4uf0bnYlblJsSqBUvV6kj5nRopw3FHpm__DOT__B 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_2___05FAOI222X0P5H7L_A0__DOT__outA) 
                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_0___05FAOI222X0P5H7L_A0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_2___05Freg_p__DOT__n0)) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_2___05FAOI222X0P5H7L_A0__DOT__outC)))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_2___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_2__DOT__Y))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_2___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_2___05Freg_p__DOT__n0))))))));
    __Vtableidx388 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBZgCfo5B4uf0bnYlblJsSqBUvV6kj5nRopw3FHpm__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh8agLHZQBzteERghaQeTaXGa3XkXfCJlTeg79Rw9H 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx388];
    __Vtableidx385 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBZgCfo5B4uf0bnYlblJsSqBUvV6kj5nRopw3FHpm__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxjlBu4B3QhsIMcWRng2g5z9SQzAJphxKgZzoLyjq__DOT__Y) 
                                  << 1U) | (1U & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshX2GAakgECfZn6jRGIZKJPWFIXA70CAq2xSTSJDBS 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx385];
    __Vtableidx387 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh8agLHZQBzteERghaQeTaXGa3XkXfCJlTeg79Rw9H) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshgNZqrbI1zUNXTGjptJBVT1jfZQaBnkVxgibfjLBW 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx387];
    __Vtableidx384 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshX2GAakgECfZn6jRGIZKJPWFIXA70CAq2xSTSJDBS)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhsh9JdPv75eB0yrXxEj5IB8K4krMZ0CO71yDOaynkfY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx384];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshmMMSutFfI57uBjOAVM5UgpRTf0sZA4ABz37skzZJ__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshGcX78hO0FSaXMpOtknzrjAMyHjjxrAte8j4A8pnL) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshgNZqrbI1zUNXTGjptJBVT1jfZQaBnkVxgibfjLBW));
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
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_2___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshmMMSutFfI57uBjOAVM5UgpRTf0sZA4ABz37skzZJ__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLDBnP0gY369tWkiRRRWKaJ1E5k5Ll3hxbHSftAMj__DOT__B) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_2___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_2___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx65 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b2__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_2___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_2___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx65];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_2___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_2___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__163(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__163\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)));
}

void VysyxSoCFull___024root___nba_comb__TOP__164(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__164\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    CData/*2:0*/ __Vtableidx528;
    __Vtableidx528 = 0;
    CData/*2:0*/ __Vtableidx529;
    __Vtableidx529 = 0;
    CData/*2:0*/ __Vtableidx530;
    __Vtableidx530 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_9___05FAOI222X0P5H7L_A0__DOT__outA) 
                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_0___05FAOI222X0P5H7L_A0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_9___05Freg_p__DOT__n0)) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_9___05FAOI222X0P5H7L_A0__DOT__outC)))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_9___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_2__DOT__Y))) 
                       & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_9___05Freg_p__DOT__n0)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y))))))));
    __Vtableidx529 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpU6BH4EfiwR4neBO3zQzMfoSOEA0jttUdwCSK0fX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx529];
    __Vtableidx530 = ((4U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3NuwxRqYEEotdjKAFmcE8buZspU2BpPALpURGiye 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx530];
    __Vtableidx528 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpU6BH4EfiwR4neBO3zQzMfoSOEA0jttUdwCSK0fX) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtACqkTibKY8FpxrrB6UfhcB8ZBiZCEMdJTB2VT3j 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx528];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3NuwxRqYEEotdjKAFmcE8buZspU2BpPALpURGiye))) 
                    | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv))) 
                          & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSCMpNwNszPlGc2XuWWTOKY6nm4IXN81f3x5NtoBD__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtACqkTibKY8FpxrrB6UfhcB8ZBiZCEMdJTB2VT3j)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSCMpNwNszPlGc2XuWWTOKY6nm4IXN81f3x5NtoBD__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_9___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx74 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b9__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_9___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx74];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_9___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_9___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__166(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__166\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    CData/*2:0*/ __Vtableidx418;
    __Vtableidx418 = 0;
    CData/*2:0*/ __Vtableidx419;
    __Vtableidx419 = 0;
    CData/*2:0*/ __Vtableidx421;
    __Vtableidx421 = 0;
    CData/*2:0*/ __Vtableidx422;
    __Vtableidx422 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshTsX9uBVSt0msZnJPMoqiH8uc0tmfRPunmzhkpFdi__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_8___05FAOI22X0P5H7L_B1_Y_NAND3X0P5H7L_B_A_INVX0P5H7L_Y__DOT__Y)) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_3___05FAOI221X0P5H7L_B1__DOT__outA) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_3___05FAOI221X0P5H7L_B1__DOT__outB)))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_3___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_2__DOT__Y)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_3___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05FAOI22X1P4H7L_A0_Y_AND2X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                             & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05FAOI22X1P4H7L_A0_Y_AND2X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__A1_inv)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_3___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_C0_NOR2X0P5H7L_Y__DOT__B)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_3___05Freg_p__DOT__n0)))))))));
    __Vtableidx422 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshTsX9uBVSt0msZnJPMoqiH8uc0tmfRPunmzhkpFdi__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh786RNnXSgYYuOXAo0xgBKXAmYw4YShNKA42jsegw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx422];
    __Vtableidx419 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B))) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshTsX9uBVSt0msZnJPMoqiH8uc0tmfRPunmzhkpFdi__DOT__B) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0)))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBabiAi1t1jFtdgO9jigFRy2rgjeah9OvkwkE6V1q 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx419];
    __Vtableidx421 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh786RNnXSgYYuOXAo0xgBKXAmYw4YShNKA42jsegw) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshesNfw2FD0WyYWefZJAsa54DgQbFr2h3dw6yKoZAK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx421];
    __Vtableidx418 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBabiAi1t1jFtdgO9jigFRy2rgjeah9OvkwkE6V1q) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshTsX9uBVSt0msZnJPMoqiH8uc0tmfRPunmzhkpFdi__DOT__B) 
                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)))) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshMUj6nIxjo01RFXJvhdaC3Dg6LR5BDAB1SKgX7ZoI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx418];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshMyxosjWdOEYMhuTpwUX3rXIIHGi7DBKzqhd3T8Ii__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshFclsQvlmY6eSkca2eqMnwROn1vkvBvFZoT9vWdiU) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshesNfw2FD0WyYWefZJAsa54DgQbFr2h3dw6yKoZAK));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A1 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshMUj6nIxjo01RFXJvhdaC3Dg6LR5BDAB1SKgX7ZoI));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_3___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A1))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshMyxosjWdOEYMhuTpwUX3rXIIHGi7DBKzqhd3T8Ii__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLDBnP0gY369tWkiRRRWKaJ1E5k5Ll3hxbHSftAMj__DOT__B) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_3___05Freg_p__DOT__D 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_3___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)) 
                 | (IData)(vlSelfRef.reset)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_3___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_3___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx68 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b3__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_3___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_3___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx68];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_3___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_3___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__167(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__167\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_251));
}

void VysyxSoCFull___024root___nba_comb__TOP__168(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__168\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05FAND3X1P4H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_12));
}

void VysyxSoCFull___024root___nba_comb__TOP__169(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__169\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax));
}

void VysyxSoCFull___024root___nba_comb__TOP__170(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__170\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b14__05d_reg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245));
}

void VysyxSoCFull___024root___nba_comb__TOP__171(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__171\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_481 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_14___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_482));
}

void VysyxSoCFull___024root___nba_comb__TOP__172(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__172\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__174(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__174\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_A0_INVX1P4H7L_A__DOT__Y)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__OUT1) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_AO21X1H7L_Y__DOT__Y))))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                             & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___Vhsh5TTEVp09Z7iiZxZGrjVc5qyIDJteDqWUS91ForcH__DOT__Y))) 
                                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshfSLgcI902GwGG7NtFEoFRlMZC5Jsa2FonIv6P1M9__DOT__Y))) 
                                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgGwfUdUygNFVzd69mXEzqJiqFVXLZdCuX5RCqp7F__DOT__A) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgGwfUdUygNFVzd69mXEzqJiqFVXLZdCuX5RCqp7F__DOT__B))) 
                                             & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgGwfUdUygNFVzd69mXEzqJiqFVXLZdCuX5RCqp7F__DOT__A) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgGwfUdUygNFVzd69mXEzqJiqFVXLZdCuX5RCqp7F__DOT__B)) 
                                                & ((~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y__DOT__Y))) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshSxeKmw9gS5NWlbsVYIxIglmYp54DF0EBxAyBFEek__DOT__B) 
                                                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0)))))))))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y) 
                                            ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__175(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__175\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_A0_INVX1P4H7L_A__DOT__Y)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X3H7L_Y_A0_NAND2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)))) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__B) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__A) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshF4Z9dDLjtn6ak34zgcNLcvRx2JfBH43VcKBPFY53__DOT__Y))))) 
                                & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshVzomuTL0BYyYCK4995xEWhprRGCNmQ3iDUvl2XuU__DOT__Ax)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshQgC57XkT2h5XUBsB4NOSj7Xr9aSLRwTEwujfBBfj__DOT__Y))) 
                                    & (~ ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_30__DOT__Y))) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshnpgSHGfbiJcSD58N1yBOaf19G7vdx6TFj8bSfqJG__DOT__B) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0)))))) 
                                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshQgC57XkT2h5XUBsB4NOSj7Xr9aSLRwTEwujfBBfj__DOT__Y)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshVzomuTL0BYyYCK4995xEWhprRGCNmQ3iDUvl2XuU__DOT__Ax))))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshdGCwlBkAzD3sAEcMMUfw02sXf4VfWabkJC6H6D7q__DOT__Y))) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshGKMrN1JO04g65tiWiZ7A9SEmA44v1RGwrDpP0Afl__DOT__Y))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__176(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__176\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*2:0*/ __Vtableidx357;
    __Vtableidx357 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshhYBbl8ARL35KZnkqQpCV205Si2WzLTHVs7koDwDn__DOT__B 
        = (1U & (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_29___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05FAOI21X0P5H7L_A0_B0_INVX0P5H7L_A__DOT__Y)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_29___05Freg_p__DOT__n0))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_2__DOT__Y)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_29___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_29___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05FAOI22X1P4H7L_A0_Y_AND2X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05FAOI22X1P4H7L_A0_Y_AND2X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05FAOI22X1P4H7L_A0_Y_AND2X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__A1_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_29___05FAOI22X1P4H7L_A0_Y_AND2X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv)))))));
    __Vtableidx357 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshhYBbl8ARL35KZnkqQpCV205Si2WzLTHVs7koDwDn__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshRBG26JwNAhLX0ox6Pqm6pTFpRASQ6R2kwZU3B5qY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx357];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh91qJhVFFbATHJpknZUqBIS3P1RUk8febkeAWLpuX__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshhYBbl8ARL35KZnkqQpCV205Si2WzLTHVs7koDwDn__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshdpW7AdGqG7MrmqEPGx8sJe4JmCxBFXAlM3KqcLdA__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshRBG26JwNAhLX0ox6Pqm6pTFpRASQ6R2kwZU3B5qY))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_29___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh91qJhVFFbATHJpknZUqBIS3P1RUk8febkeAWLpuX__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshdpW7AdGqG7MrmqEPGx8sJe4JmCxBFXAlM3KqcLdA__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_29___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_29___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx64 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b29__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_29___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_29___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx64];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_29___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_29___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__177(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__177\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*2:0*/ __Vtableidx327;
    __Vtableidx327 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshdukN4qLBshU17pB41kZNitHd1OVQuy2eAo2de8M9__DOT__B 
        = (1U & (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_27___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05FAOI21X0P5H7L_A0_B0_INVX0P5H7L_A__DOT__Y)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_27___05Freg_p__DOT__n0))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_27___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_27___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_27___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_27___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__A1_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_27___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__C0_inv)))))));
    __Vtableidx327 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshdukN4qLBshU17pB41kZNitHd1OVQuy2eAo2de8M9__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshnZGSdsy0xszAkBGvMI9NNCDnH1Ut8N7oi5PC1iOI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx327];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh8bBjpTyUrFmUzmXYlqJ1U7a4uWwrlTg7onsPBufQ__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshdukN4qLBshU17pB41kZNitHd1OVQuy2eAo2de8M9__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshLW6O5uY3wfjm8JKpiEdVd9vDabaEeDJCXOLRWEfh__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshnZGSdsy0xszAkBGvMI9NNCDnH1Ut8N7oi5PC1iOI))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_27___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshLW6O5uY3wfjm8JKpiEdVd9vDabaEeDJCXOLRWEfh__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh8bBjpTyUrFmUzmXYlqJ1U7a4uWwrlTg7onsPBufQ__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_27___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_27___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx62 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b27__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_27___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_27___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx62];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_27___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_27___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__178(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__178\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_B_NAND2BX1P4H7L_Y_AN_INVX0P5H7L_A__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__OUT1) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_C_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_AO21X1H7L_Y__DOT__Y) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar))))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshHSBAaA1r4XxKDxBI3OGw9YWsNLUCdBVRGJA9V7AB__DOT__Y) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshA7bkQaStG6MHbn0EMBDHEprAkikiHqwtRVoA700u__DOT__A1)))) 
                                       ^ (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYlEX0TWxcOcUvk1JAwfPboK62BEhf56MH7oZfAeq__DOT__A) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh1ye0h125yWkBehlX6xp8wtBHNSQ06pOJDbSmAldu__DOT__Y))) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshh7KOBfDI94i0BDq7bTvNSKp9nKEAEAnsS7GAj7BA__DOT__B)))))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshDedJTKpwSwAKYjkZP9XJ2IJyhdMlD0gqu7PZh3fq__DOT__Y))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshGpLqZeYYQKRMi5MIleMjQQRYfbvOLI50dEl1er0g__DOT__Y))) 
                                      & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshzIWmQiXj3eMfZnJ0tMWQnArOkd17Fg8oG6EM6bVT__DOT__Ax)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh98ukomIx8zn7dmBXfiTPnon0LYUHyxQxiw1MZZDn__DOT__Y))) 
                                         & (~ ((~ (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshc5WUSYFvEwAuVOlWYMBNOyETZJfcDYeb3HrkLsUH__DOT__B) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0))) 
                                                      & (~ 
                                                         ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_27__DOT__Y)))))) 
                                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh98ukomIx8zn7dmBXfiTPnon0LYUHyxQxiw1MZZDn__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshzIWmQiXj3eMfZnJ0tMWQnArOkd17Fg8oG6EM6bVT__DOT__Ax))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__179(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__179\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*2:0*/ __Vtableidx268;
    __Vtableidx268 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshnCsGBog4P1OLczNnTvdg4fIBfY9YhLOO2y0bpolQ__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_8___05FAOI22X0P5H7L_B1_Y_NAND3X0P5H7L_B_A_INVX0P5H7L_Y__DOT__Y)) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_24___05FAOI221X0P5H7L_B1__DOT__outA) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_24___05FAOI221X0P5H7L_B1__DOT__outB)))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_24___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_24___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_24___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_24___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__A1_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_24___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__C0_inv)))))));
    __Vtableidx268 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshnCsGBog4P1OLczNnTvdg4fIBfY9YhLOO2y0bpolQ__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshRfJ4ATyfu5nNcmyHir2BQlxKUUAeGey0KonCOB5d 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx268];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshk8mkbCrsKv0KszvKiaZLgCxeNvYRYElBC7uxPsXA__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshnCsGBog4P1OLczNnTvdg4fIBfY9YhLOO2y0bpolQ__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshvLVu3Ac1JFm9w37cQ54DPbJVN5k1VKru4CEzVp6G__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshRfJ4ATyfu5nNcmyHir2BQlxKUUAeGey0KonCOB5d))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_24___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshk8mkbCrsKv0KszvKiaZLgCxeNvYRYElBC7uxPsXA__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshvLVu3Ac1JFm9w37cQ54DPbJVN5k1VKru4CEzVp6G__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_24___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_24___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx59 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b24__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_24___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_24___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx59];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_24___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_24___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__180(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__180\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05FAND3X1P4H7L_B__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_7));
}

void VysyxSoCFull___024root___nba_comb__TOP__181(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__181\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05FAND3X1P4H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_33___05FXNOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y__DOT__Ax));
}

void VysyxSoCFull___024root___nba_comb__TOP__182(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__182\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_INVX0P5H7L_A__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshqMc9HUAyOv9BRBwBvVUpcO1QmpppJ7g7g5VtBYpH__DOT__Y) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A))))) 
                          & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshHY9V2PgzqJPefROUg5WScupPHyfsdJ6c6IWMVERl__DOT__A) 
                                           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshHY9V2PgzqJPefROUg5WScupPHyfsdJ6c6IWMVERl__DOT__B)))) 
                                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhsh9j4ri3fhm1W11ky1IsBBwyHABcUpawJ9KGV4SFl0__DOT__Y))) 
                                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshd7b6mA5tBAeq4hfnbWNzWZr1LBsvP0FBD5CrIxYc__DOT__Y))) 
                                          & ((~ ((~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0))) 
                                                 ^ 
                                                 (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)) 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))))) 
                                             & ((~ 
                                                 ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_24__DOT__Y))) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshrIYHFlCW9RoQH9NwX0KCG2Ibdg6ij18ttdUQBFNe__DOT__B) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)))))))))) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21BX0P5H7L_Y_A0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1)))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__183(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__183\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p__DOT__D 
        = (1U & (~ ((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D_OAI31X1H7L_Y_B0_NOR3BX1P4H7L_Y_B_NOR2BX1P4H7L_Z__DOT__Ax))) 
                         | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar)) 
                                   | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_B_NAND2BX0P5H7L_Y_AN))))) 
                               & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                      & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshf2cqjnmrLS0ln5EEen0j3XGtPOL8FvJfqatBpj08__DOT__Ax)) 
                                            ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzgBIpnXJj1IZUAWV2ax3U6HSrh1AhGBRthVOcusK__DOT__Y))))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshQFyf8kabUynuhSwKsyQwVktKPPMNMyBkwyj3CXRx__DOT__Y))) 
                                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshBNyAuCTAGxbJ0iHzrT3bJn3XLwKTHVXe0qwBdADJ__DOT__Y))) 
                                        & ((~ ((~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshcsp5qF8zmpIDtSOwPXBAAADA9X8XaAqsziBkSYCD__DOT__Ax)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzBBQvPNVa9ycrWAgbtJCv9UDt9VBNpBUCQlvcDqd__DOT__Y))) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))) 
                                           & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzBBQvPNVa9ycrWAgbtJCv9UDt9VBNpBUCQlvcDqd__DOT__Y)) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshcsp5qF8zmpIDtSOwPXBAAADA9X8XaAqsziBkSYCD__DOT__Ax)) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshl50tkA9QZwEwFUkUrwVnwly0qxRmqI4q0vs7Qglb__DOT__B) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                 & (~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_22__DOT__Y)))))))))))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_48)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__184(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__184\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*2:0*/ __Vtableidx266;
    __Vtableidx266 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiaRF0jzFAqTYT9lW6Z5EX3BdgmJHMjZ3HV1CSrXG__DOT__B 
        = (1U & (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_23___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_1___05FAOI21X0P5H7L_A0_B0_INVX0P5H7L_A__DOT__Y)) 
                           | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_23___05Freg_p__DOT__n0))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_23___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_23___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_23___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__A1_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__C0_inv)))))));
    __Vtableidx266 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiaRF0jzFAqTYT9lW6Z5EX3BdgmJHMjZ3HV1CSrXG__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshZkpHSKRz1QdwM65qA3kjqFefxqz5u1OLX2FkNznz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx266];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh99rPcN4dACQBCvoc7wZBi6mA2nuGnnOOZi5pWrkv__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiaRF0jzFAqTYT9lW6Z5EX3BdgmJHMjZ3HV1CSrXG__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshvqoGQuxn34HU5JJ4CjJwNmIS7wBwJfB8LF3fIGll__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshZkpHSKRz1QdwM65qA3kjqFefxqz5u1OLX2FkNznz))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_23___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh99rPcN4dACQBCvoc7wZBi6mA2nuGnnOOZi5pWrkv__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshvqoGQuxn34HU5JJ4CjJwNmIS7wBwJfB8LF3fIGll__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_23___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_23___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx58 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b23__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_23___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_23___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx58];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_23___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_23___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__185(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__185\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_23___05FAND4X0P5H7L_D__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_24___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C));
}

void VysyxSoCFull___024root___nba_comb__TOP__186(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__186\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND3X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y__DOT__Y) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                        & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshqMc9HUAyOv9BRBwBvVUpcO1QmpppJ7g7g5VtBYpH__DOT__Y) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A))))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshOIVtF2ljAwJ0ce6HluTgKk0IFQ3BNAC0mbkh4b7U__DOT__A) 
                                        ^ (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshOIVtF2ljAwJ0ce6HluTgKk0IFQ3BNAC0mbkh4b7U__DOT__B) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshkNbc1W01oah5IAHrMdLToQgePBjRomRnANwW7uY7__DOT__B))))))) 
                              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhshafuh7F0NraBLNVZQZv20g8AH7EMsVKY5bdwWXNe8__DOT__Y))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh3BOf60Dh3MuBYv8F8ZZbvJAcMds90ZIqeJtjfd6o__DOT__Y))) 
                                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshHD70BvwEpmBGWJ6uz7RAJaHlTscZ7AMilytnXS8i__DOT__Y) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh1zdffxEjYju6Y2NinbJFHwWiCe1pBnwchVBgp8PE__DOT__Y))) 
                                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshHD70BvwEpmBGWJ6uz7RAJaHlTscZ7AMilytnXS8i__DOT__Y) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh1zdffxEjYju6Y2NinbJFHwWiCe1pBnwchVBgp8PE__DOT__Y)) 
                                          & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_23__DOT__Y))) 
                                             & ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshVPoqWco1ggP5ROuBadmB5lsY2vVu4viKsEYXdfV4__DOT__B) 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0))))))))))))) 
                    & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsht0WpzNnkdrq6deGPOuw9nakob8Ks7I90X8UDL52h__DOT__A) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_A_INVX0P5H7L_A__DOT__Y))))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVnOCr4gTE56amLmyb6X2Pazz6utC3yAWuMOL5SbL__DOT__Y))) 
                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_A_INVX0P5H7L_A__DOT__Y)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshA649GdJyO1BM6USkGhplVxvHzlnWNtPxoIE4ojPc__DOT__Y))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__187(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__187\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*2:0*/ __Vtableidx171;
    __Vtableidx171 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshX6FpELMt5Bh04X0fFDhG6sBAtqwhol1N0aNBFTZ7__DOT__B 
        = (1U & (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_19___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_1___05FAOI21X0P5H7L_A0_B0_INVX0P5H7L_A__DOT__Y)) 
                           | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_19___05Freg_p__DOT__n0))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_19___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_19___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__A1_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__C0_inv)))))));
    __Vtableidx171 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshX6FpELMt5Bh04X0fFDhG6sBAtqwhol1N0aNBFTZ7__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshJ5DQZXXAiwRtob82YnJZYUQKZZJno129CUB2q8Ci 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx171];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshUPpqGHLoBW5Qx8eQTsquc0LNSSMs6ADz7RHFtHCg__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshX6FpELMt5Bh04X0fFDhG6sBAtqwhol1N0aNBFTZ7__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshZYQw4fmivtojC0njzXCTThs0Z0BB9rJzhV11om4Q__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshJ5DQZXXAiwRtob82YnJZYUQKZZJno129CUB2q8Ci))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_19___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshUPpqGHLoBW5Qx8eQTsquc0LNSSMs6ADz7RHFtHCg__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshZYQw4fmivtojC0njzXCTThs0Z0BB9rJzhV11om4Q__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_19___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_19___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx53 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b19__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_19___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_19___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx53];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_19___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_19___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__188(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__188\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_45)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_B_NAND2X0P5H7L_Y_A) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                          & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshLpbDdQUVWPtEuubeyQwzQ531DsoyrBCf2SZ6bkAW__DOT__A) 
                                           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshLpbDdQUVWPtEuubeyQwzQ531DsoyrBCf2SZ6bkAW__DOT__B)))) 
                                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhsho0I14IAZMNn3dnpOwyQCHtJhAuz5subKe7bg3BV6__DOT__Y))) 
                                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshP3ZIuTpCuyFFBdCHriVVRoyAHF1VL38KDaizSGlb__DOT__Y))) 
                                          & ((~ ((~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax))) 
                                                 ^ 
                                                 (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)) 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))))) 
                                             & ((~ 
                                                 ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_20__DOT__Y))) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshR5IiKjBFk2mLvYzh6FqNODOdnDtdV5aZHVC6poAj__DOT__B) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0)))))))))) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__OUT1) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar))) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__189(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__189\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_A0_INVX1P4H7L_A__DOT__A)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_Y__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshqMc9HUAyOv9BRBwBvVUpcO1QmpppJ7g7g5VtBYpH__DOT__Y) 
                                 & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__B) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshnkzfWiO2Vs90fAch7rQfMEh33ARYxpocB181WfmL__DOT__Ax)))))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshv4v0EJvP7kD2RbqcA3HllKofSvZYBDoPv4Boivsj__DOT__Y))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshi2oNv1UAAB5cIOLP9Ps3dDKWIyMLKW43q52IAKBP__DOT__Y))) 
                                      & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0))) 
                                             ^ (~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y)) 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))))) 
                                         & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0))) 
                                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhsh0vr3GVWt0IJiP8Om4NTXo0TAdB1Kyb5Tqiiwgmzz__DOT__A) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                               & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_18__DOT__Y)))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__190(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__190\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A_NAND4BX1P4H7L_B__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_19___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_19___05FXNOR2X0P5H7L_Y_B_NAND4X0P5H7L_Y_D));
}

void VysyxSoCFull___024root___nba_comb__TOP__191(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__191\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D_OAI211X1P4H7L_Y_A0_INVX0P5H7L_A__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__OUT1) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar))) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                          & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21BX0P7H7L_Y__DOT__A0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1)) 
                                | ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshpqRcv8hbwhlnw1cFHm46JlO5RgxCaqVoWovFBwZF__DOT__Y))) 
                                       & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax))) 
                                              ^ (~ 
                                                 ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                                                  & (~ 
                                                     ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax)) 
                                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))))) 
                                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh0s9KrctDFNa5kOmlBZxgzR27iAXqFoghiFAKYo1X__DOT__Y))) 
                                             & ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0))) 
                                                & ((~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_19__DOT__Y))) 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh8nvpWxiTnIoIxwEk4p3IyDv0fIr3U7BMQAX31YYj__DOT__B) 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))))))))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                      & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshbCWBXSan7IJeW1fwgNru44IMwlDm1TZBjzDQtJeM__DOT__Ax)) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshtYJPZokARyQ4NILhMqjLxi2ks3BRS6mGIA1WmNS5__DOT__Y) 
                                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))))) 
                                            ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__B) 
                                               & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshKQn0MUhyrGfouwleuQvtEaK9geE2m1B7FpNu3Mm0__DOT__Ax)) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_470)))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__192(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__192\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_20___05Freg_p__DOT__n0) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_14___05Freg_p__DOT__n0) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_C)));
}

void VysyxSoCFull___024root___nba_comb__TOP__193(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__193\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A__DOT__A))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_C_AND2X1H7L_B__DOT__Y))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_B_NAND2X0P5H7L_Y_B) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                       & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshBJE5CdB2Cc9WaztngOooQWegOscJfIbPgkBSw9ck__DOT__Y) 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__A)))) 
                                             ^ (~ (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshDM1FjBjZBnjvB9nAebP8reAyVci3RQS7Bn9HQOH4__DOT__Y) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshZZf8djmOcKO8pAy29QZD634HKu42VXbzhsBjONaF__DOT__Ax))) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshhzUA6xeL6BspgWk8JzsArSUWXjsfrGYxgTwu5SRf__DOT__Y))))))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshoQdVGWCnWB1DP9oR5ttVCelcNLE8jJek4J2bW0jE__DOT__Y))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXi96VbUge7H1Efw3YXRACB4ZqPEpQtx0AUdo8hE5__DOT__Y))) 
                                         & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshl7GFApxg3UvGex8ykWhCsP7MAZHoeSyCRvxwrJk9__DOT__Ax)) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh57teSbtz8oNdCoWllPARL498XxF8wL1uA0oEQY5o__DOT__Y))) 
                                            & (~ ((~ 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh1zBLkZERpAa4l7Qh6OsWZfan32yQOxAcYTzCB3A2__DOT__B) 
                                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                    & ((~ 
                                                        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_17__DOT__Y))) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0)))))) 
                                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh57teSbtz8oNdCoWllPARL498XxF8wL1uA0oEQY5o__DOT__Y)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhshl7GFApxg3UvGex8ykWhCsP7MAZHoeSyCRvxwrJk9__DOT__Ax)))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__194(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__194\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X3H7L_Y_C0_INVX0P5H7L_A__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X3H7L_Y_C0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
           & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshqJdwXGPUSMcEmjLx6tB8EoO2o7OwsIIta5lL4YsF__DOT__Ax)) 
                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshXaycKk4awjPSToU25Z2FZXsWS5I0aFwmx5AFZh5c__DOT__Y))) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A))) 
              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshPoYOqjkENC3f3Qxwxiq4xIYaiIkaBaArm8ys0DH4__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshHpP0oOHmT7AEZcvK7MUV2rfxSaU8UlH4EHJ4BgTR__DOT__Y))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshJVYXXMN5zgbFxu6U1mY2ZKPoZHb3qODU1FIvOxEf__DOT__A) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___Vhsh3JPKG6WsGFeZwGN69cBOn7Bh1R6N7rNU1LxUFnC2__DOT__Y))) 
                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshJVYXXMN5zgbFxu6U1mY2ZKPoZHb3qODU1FIvOxEf__DOT__A) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___Vhsh3JPKG6WsGFeZwGN69cBOn7Bh1R6N7rNU1LxUFnC2__DOT__Y)) 
                          & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_14__DOT__Y))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshRJqORf6n6CXcDTUHL2RCmVc2e6t3DYyybkfwrVrR__DOT__B) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_12___05Freg_p__DOT__n0)))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX1P4H7L_Y_AN_INVX0P5H7L_A__DOT__A)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X3H7L_Y_C0_INVX0P5H7L_A__DOT__Y)) 
                             | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X3H7L_Y_A0_NAND2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)))) 
                                & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A)) 
                                      | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X3H7L_Y_A1_NOR2X1P4H7L_Y_B_NOR2X0P5H7L_Y_B))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__195(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__195\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NOR2BX1H7L_AN__DOT__Ax 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_B0N_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y))) 
                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_B0N_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y__DOT__B))) 
                        & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh6saojwpdhr3uJZTXLKyEQAF6TMa5656Dl8C6lHz6__DOT__B) 
                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshTTAsQs20mIgdbDxbAq6IMDpsD4CHAOlw4fcapNu8__DOT__A) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshHmyjgnncaFju8XJJpwTqS4VM61v8cZd2UbZar3am__DOT__Y))) 
                           & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_13__DOT__Y))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshTTAsQs20mIgdbDxbAq6IMDpsD4CHAOlw4fcapNu8__DOT__A) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshHmyjgnncaFju8XJJpwTqS4VM61v8cZd2UbZar3am__DOT__Y)))))))) 
                 | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_A0_NAND2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)))) 
                    & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_A1_AOI2BB1X0P5H7L_Y_A1N) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_A1_AOI2BB1X0P5H7L_Y__DOT__OUT1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y)) 
                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NOR2BX1H7L_AN__DOT__Ax)) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
                             & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__A) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y))) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__A) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y)))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__196(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__196\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*2:0*/ __Vtableidx464;
    __Vtableidx464 = 0;
    CData/*2:0*/ __Vtableidx465;
    __Vtableidx465 = 0;
    CData/*2:0*/ __Vtableidx466;
    __Vtableidx466 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B 
        = (1U & (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_6___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05FAOI21X0P5H7L_A0_B0_INVX0P5H7L_A__DOT__Y)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_6___05Freg_p__DOT__n0))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_6___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_6___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_6___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__A1_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_6___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__C0_inv)))))));
    __Vtableidx465 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0Wgq6x13eSABz1pjQ2bcr8kNvrBbP3uibtsi1JSK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx465];
    __Vtableidx466 = ((4U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshp6rDMxT04jJJUKAa6fBX8xivxWBHBTN4yHelU1m5 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx466];
    __Vtableidx464 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0Wgq6x13eSABz1pjQ2bcr8kNvrBbP3uibtsi1JSK) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshKQcM2jF5Exi1lqLfLllnRLMNfP2wRMwhx0a2IgxX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx464];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshp6rDMxT04jJJUKAa6fBX8xivxWBHBTN4yHelU1m5))) 
                    | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)))) 
                          & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh8CD43SLQ4XUcNR53ZATk8QFZ3aRhcI3XK39gasBC__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshKQcM2jF5Exi1lqLfLllnRLMNfP2wRMwhx0a2IgxX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh8CD43SLQ4XUcNR53ZATk8QFZ3aRhcI3XK39gasBC__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_6___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx71 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b6__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_6___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx71];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_6___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_6___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__197(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__197\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    CData/*2:0*/ __Vtableidx452;
    __Vtableidx452 = 0;
    CData/*2:0*/ __Vtableidx453;
    __Vtableidx453 = 0;
    CData/*2:0*/ __Vtableidx454;
    __Vtableidx454 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B 
        = (1U & (~ ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_5___05Freg_p__DOT__n0)) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05FAOI21X0P5H7L_A0_B0_INVX0P5H7L_A__DOT__Y)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05FAOI21X0P5H7L_A0__DOT__A1) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05Freg_p__DOT__n0))))) 
                    & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05FAOI222X0P5H7L_C0__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05Freg_p__DOT__n0)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0_A1_AND3X1P4H7L_A_1__DOT__Y)))) 
                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__A1_inv) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_5___05FAOAI211X0P5H7L_A0__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_19___05FAOAI211X0P5H7L_A0__DOT__C0_inv)))))));
    __Vtableidx454 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh55YK5Kw2sC2CsO0e4dlsOtE1iATTN1zQVDiPfQ9u 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx454];
    __Vtableidx452 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B))) 
                                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh6LsLFQJunypyQg9AehHnfEHgzNDHrbpfrGURM0BM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx452];
    __Vtableidx453 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh55YK5Kw2sC2CsO0e4dlsOtE1iATTN1zQVDiPfQ9u) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh75csRmbtJKpDkzMZtRFcIsGNefaUR5zKcf0gXxSz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx453];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh6LsLFQJunypyQg9AehHnfEHgzNDHrbpfrGURM0BM) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax))) 
                    & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshT3W4SoRJrlGSlYEiQdVmRApwr3KLNVNbCTVPAALU__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh75csRmbtJKpDkzMZtRFcIsGNefaUR5zKcf0gXxSz)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshT3W4SoRJrlGSlYEiQdVmRApwr3KLNVNbCTVPAALU__DOT__B) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_5___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    __Vtableidx70 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b5__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx70];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_5___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__198(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__198\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y)) 
                       & ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_B_AOI21BX0P5H7L_Y_B0N_OA31X1H7L_Y_A1_INVX0P5H7L_A__DOT__Y)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1)))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHZ05BHqZGbVIkvGt2BZgGxY0khLLk6y0AWcIBMPx__DOT__Y))) 
                                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh1A4SFFgWGoRsWhazM2zyoQo6VQIkxFvygFZlXu5T__DOT__Y) 
                                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_59)))) 
                                               ^ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0ZuasBFmeRjnxYJAGBcXM0AQNqICTzdcir14Qr7t__DOT__A) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0ZuasBFmeRjnxYJAGBcXM0AQNqICTzdcir14Qr7t__DOT__B)) 
                                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshtDw6kpe2oo33BA3zNOVUH3tFnUwvJ0uUEgMczrAa__DOT__Ax)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshBQannnRYo1CNsmCp1tAcO12COhU0C6PTFwUyoufk__DOT__B)))))) 
                                        & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_A_NAND2X0P5H7L_A__DOT__A) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                                           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_9__DOT__Y)))))))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ar_size_INVX0P5H7L_A__DOT__Y)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_14___05Freg_p__DOT__n0))))) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_B_AOI21BX0P5H7L_Y_A0)))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y__DOT__Y))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__200(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__200\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_2___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_2___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_2___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_3___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_2___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_2___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__201(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__201\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
           & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshZZf8djmOcKO8pAy29QZD634HKu42VXbzhsBjONaF__DOT__Ax)) 
                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshDM1FjBjZBnjvB9nAebP8reAyVci3RQS7Bn9HQOH4__DOT__Y))) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A))) 
              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshRAzdKLjPNTBOTTUPlZis7vsamL2PsIbEDBfHeqKF__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshCoKFb1iNdaXtx9DI8TZ1fmv5FVXI48d094eKCNDr__DOT__Y))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___Vhshfd6VNp8EhmhXHzLJr3fZdwANe6KTnWHWrVAFCf4B__DOT__Y) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___Vhshvwidb9zofch9qswf2YR0dVBwGpYB4Od933UpTLSy__DOT__Y))) 
                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___Vhshfd6VNp8EhmhXHzLJr3fZdwANe6KTnWHWrVAFCf4B__DOT__Y) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___Vhshvwidb9zofch9qswf2YR0dVBwGpYB4Od933UpTLSy__DOT__Y)) 
                          & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_16__DOT__Y))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_14___05Freg_p__DOT__n0))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshwOOBWjanoBL5xCVV04jB0V1hUiOqfQrn0NtHnc69__DOT__B) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_INVX0P5H7L_A__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X0P5H7L_Y_B) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__202(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__202\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_INVX0P5H7L_A__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__A) 
                     ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__B)))) 
              & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshxArEfda51BaRA2LJTQG3ut6CZ9HTnZP1Pkx1ystv__DOT__Y))) 
                    & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshQYzr8IAjXSyH7ofWw0vAC4B3HD2eEtFa079WpW3s__DOT__A) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshovNe0SOHzBBXT0R6ZdvuF9v84IaX1hIUjSq3v8QK__DOT__Y)) 
                        & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh1p8sJ3NiEbelgR0X5O7sdSytgJX8mlHvKKgtRv0q__DOT__B) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_28__DOT__Y))))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshQYzr8IAjXSyH7ofWw0vAC4B3HD2eEtFa079WpW3s__DOT__A) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshovNe0SOHzBBXT0R6ZdvuF9v84IaX1hIUjSq3v8QK__DOT__Y)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_A0_INVX0P5H7L_A__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A0_NAND2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)))) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_INVX0P5H7L_A__DOT__Y))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__204(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__204\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_C0_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_C0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh1tFBlCvzId17ndnsJ2yIb0QdRzp4i2HsXdioGjA6__DOT__A) 
                            ^ (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh1tFBlCvzId17ndnsJ2yIb0QdRzp4i2HsXdioGjA6__DOT__B) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshNqe3MNhYleEOu1Jj1rIgdJMwhhJt9RkLfmM8iZnu__DOT__Y))))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshsyuDS7FMxJuNe70BnPubt885eyWOYjA2wELjDJmt__DOT__Y))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh5JS8DV1tJOJBG9g48gxXshNWAs971fB0rAK0RHJR__DOT__Y))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshUjxg2BA5b3BUTUQ1LiGE1kVBMjUqYhB9aaz6PyNA__DOT__A) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshSfKyOIMBS3zhhxb5lZLlIpkxAugIcqDOgBUeg1EV__DOT__Y))) 
                             & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshUjxg2BA5b3BUTUQ1LiGE1kVBMjUqYhB9aaz6PyNA__DOT__A) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshSfKyOIMBS3zhhxb5lZLlIpkxAugIcqDOgBUeg1EV__DOT__Y))) 
                                   | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshJvd00yG3sbwBFuDZs4fX4sRESKz8g2zim4KEf1jW__DOT__B) 
                                             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                         & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_15__DOT__Y))) 
                                            & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_imm_J_13___05Freg_p__DOT__n0))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_C0_INVX0P5H7L_A__DOT__Y)) 
                           | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_A0_NAND2BX0P5H7L_Y_AN_AO21X1H7L_Y__DOT__Y)))) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_A1_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B))))))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_A0_INVX0P5H7L_A__DOT__A)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__205(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__205\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B))) 
                 & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1)) 
                       | ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshq6xx8PqGe87jzLZOWH2xK34PBsaDK9zWy6wK4fuF__DOT__outA)) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_B_AND2X1H7L_Y__DOT__A)) 
                                        | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhshi6BkBoodRU3ATkiJC92nL5gWGQYf2korf14SFrIs__DOT__Y)))))) 
                              & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhGrJA9SlmNt4c1apwiydA7RZQ3TsgxnVkagoK8sN__DOT__Y))) 
                                        & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A__DOT__Y) 
                                            | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXsdgC5wdCMuAcKUdfB4IwEI69o5AZQVEADKzogSh__DOT__A) 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_OR2X1P4H7L_B_A_OAI21X0P5H7L_Y__DOT__A1))))) 
                                           & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__Ax)) 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXsdgC5wdCMuAcKUdfB4IwEI69o5AZQVEADKzogSh__DOT__A) 
                                                 & (~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_2__DOT__Y)))))))) 
                                    | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshBV7CQzRN2qeo4aaJATWzGzLlRHRzuBdBBBGl3ish__DOT__Y))))))) 
                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_AN__DOT__Ax)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y__DOT__Y)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y__DOT__Y) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0__DOT__outB)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p__DOT__D 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y__DOT__Y)) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y__DOT__Ax) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y__DOT__Y)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__206(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__206\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_C0_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_AND2X1H7L_B__DOT__Y))) 
                 & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshB92VGfanYFTrZe4zQATfVTyLMyKmeQOJVi5e3k1L__DOT__B))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshJqshSx8CpOBMEZmn3f4RGYozucicIzf7xsj3pvRe__DOT__B))) 
                              & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshflTiKdaAIWUk493kLtAVNeExD5Ot0jAs1QiC3LfH__DOT__B) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshqiJzX4tDhiqk578klOC9qGc7hzITPjfqx4IbwBAB__DOT__A) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshtgGyUy6w9Qo9tKu7iX3AXeE1LVMQR5E5yG91ALvr__DOT__Y))) 
                                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_12__DOT__Y))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshqiJzX4tDhiqk578klOC9qGc7hzITPjfqx4IbwBAB__DOT__A) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshtgGyUy6w9Qo9tKu7iX3AXeE1LVMQR5E5yG91ALvr__DOT__Y)))))))) 
                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshnfpSGaeLL8rAh54eauR6A0k2KBvfvgPTdcMCPRI6__DOT__A) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshXoMlUUpsGeDVAxBt7xJeSwBhjgTa6NI5V3YXEKa6__DOT__Y)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_INVX0P5H7L_A__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_C0_INVX0P5H7L_A__DOT__Y)) 
                             | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A0_NAND2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)))) 
                                & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A)))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__207(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__207\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_A0_INVX0P5H7L_A__DOT__Y))) 
                    & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv)) 
                                  ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_B_AOI22X1P4H7L_Y_A1_XOR2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B))) 
                              | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_B_AOI22X1P4H7L_Y_B0_NAND2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)))) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_A1_AOI2BB1X0P5H7L_Y__DOT__OUT1) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_B_AOI22X1P4H7L_Y_B1_AOI2BB1X1P4H7L_Y_A1N) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A))))))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B))) 
                          & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__B))) 
                                    & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0))) 
                                           ^ (~ ((~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0)) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))) 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0))))))) 
                                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh5hrQb9R5WcAWSsjJQ2dNjB8dwsrVlRJDS6qAt1w2__DOT__A) 
                                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                          & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_10__DOT__Y))))))) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__208(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__208\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_INVX0P5H7L_A__DOT__Y))) 
                    & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_B_NAND2BX0P5H7L_Y_AN)))) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B))))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y__DOT__A) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__A0) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__A1))) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__OUT0))))) 
                             & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshvpnXCDBrcQWuorj1zvbViYifxhE2tykiLGcBLAse__DOT__Y))) 
                                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshIPHjL4KoYfTDMCaVcngI3hBs3jm8GlXvGANb37re__DOT__Ax)) 
                                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshTD4Uey0cE8v2qFPPu8eJ6qI4Dscv5e7kJ9EDXfBd__DOT__Y)))) 
                                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshTD4Uey0cE8v2qFPPu8eJ6qI4Dscv5e7kJ9EDXfBd__DOT__Y) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshIPHjL4KoYfTDMCaVcngI3hBs3jm8GlXvGANb37re__DOT__Ax))) 
                                             & ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshQ4B6TVVOMNXPfU38KYsMLbBK2sQm73d1F0BFRrOv__DOT__B) 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_6__DOT__Y)))))))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_AND2X1H7L_Y__DOT__Y))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__210(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__210\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y__DOT__Y))) 
                 & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B))) 
                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSCMpNwNszPlGc2XuWWTOKY6nm4IXN81f3x5NtoBD__DOT__B))) 
                              & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax))) 
                                     ^ (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)) 
                                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))) 
                                           & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0))))))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_11__DOT__Y)))))))) 
                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                          & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfxQVEbUG7AtnCaQwF6rbZBSGkMQfxNIuI0eBcMAu__DOT__Y) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_69)))) 
                                ^ (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshACctrfZJe8jCgvDwhRvcBwxdwl9F2FZQillkZivR__DOT__Y) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
                                          & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)))) 
                                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0))))) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_B_AOI22X1P4H7L_Y_A1_XOR2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B)))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_AND2X1H7L_A__DOT__Y)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_C_NAND2X0P5H7L_Y_B) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_B_AOI211X1P4H7L_Y_A1_AND2X1H7L_Y__DOT__A))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y__DOT__Y))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__212(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__212\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_OR2X0P5H7L_Y_B_NAND4X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
}

void VysyxSoCFull___024root___nba_comb__TOP__213(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__213\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_13 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05FAND3X1P4H7L_A__DOT__Y) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_24___05Freg_p__DOT__n0) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_56___05FNAND2X0P5H7L_Y_B_NAND4BBX0P5H7L_Y__DOT__ANx)));
}

void VysyxSoCFull___024root___nba_comb__TOP__214(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__214\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                 | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
}

void VysyxSoCFull___024root___nba_comb__TOP__215(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__215\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b15__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2));
}

void VysyxSoCFull___024root___nba_comb__TOP__216(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__216\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_C 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_15___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_481));
}

void VysyxSoCFull___024root___nba_comb__TOP__217(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__217\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__218(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__218\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx572;
    __Vtableidx572 = 0;
    // Body
    __Vtableidx572 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p__DOT__n0) 
                        ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B_MUX2X0P5H7L_Y__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx572];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__219(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__219\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_A0_INVX1P4H7L_A__DOT__Y)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_B) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                             & (~ ((~ (((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax))) 
                                            ^ (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                                                  & (~ 
                                                     ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)) 
                                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))))) 
                                        & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshhYBbl8ARL35KZnkqQpCV205Si2WzLTHVs7koDwDn__DOT__B) 
                                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0))) 
                                              & (~ 
                                                 ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_31__DOT__Y)))))) 
                                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh91qJhVFFbATHJpknZUqBIS3P1RUk8febkeAWLpuX__DOT__Y))) 
                                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshdpW7AdGqG7MrmqEPGx8sJe4JmCxBFXAlM3KqcLdA__DOT__Y)))))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                      & (~ ((~ ((~ 
                                                 ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b29__05d_reg_p__DOT__n0))) 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__A1)))) 
                                            ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__B) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__A)))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__220(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__220\n"); );
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
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D_OAI21X0P5H7L_Y_B0_AND3X1P4H7L_Y__DOT__B 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D_OAI21X0P5H7L_Y_B0_AND3X1P4H7L_Y_B_INVX1P4H7L_Y_A_OAI2BB1X0P5H7L_Y_A0N) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                        & (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__A) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__B)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshBdCVyBWHywyDYFtfrV4ixSHYmYZqEROzD92h6hBp__DOT__B))) 
                              ^ (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__C) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b27__05d_reg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))))))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshLW6O5uY3wfjm8JKpiEdVd9vDabaEeDJCXOLRWEfh__DOT__Y))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh8bBjpTyUrFmUzmXYlqJ1U7a4uWwrlTg7onsPBufQ__DOT__Y))) 
                          & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshO3ec8NKIH12GJZbzTOBmzWfdJBkLKhgh7ptxHU8U__DOT__Y)) 
                                | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshATXLWlgGKXGoWivVsfY4QkSDlCRYbiAhIaankz7E__DOT__Y) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshPrTjdedvckpjmPUTMNRkuT9f1WOFzwJJe4tOSQjG__DOT__Y))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p__DOT__D 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D_OAI21X0P5H7L_Y_A0_INVX0P5H7L_A__DOT__A)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_A0_NAND2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)))) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D_OAI21X0P5H7L_Y_B0_AND3X1P4H7L_Y__DOT__B))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__221(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__221\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A__DOT__A) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_B_OAI211X1P4H7L_Y_A1_AOI2BB1X0P5H7L_A1N__DOT__B0_bar)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_B_AOI22X1P4H7L_Y_B0_NAND2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0))) 
                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYlEX0TWxcOcUvk1JAwfPboK62BEhf56MH7oZfAeq__DOT__A) 
                                       ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh1ye0h125yWkBehlX6xp8wtBHNSQ06pOJDbSmAldu__DOT__Y)))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshk8mkbCrsKv0KszvKiaZLgCxeNvYRYElBC7uxPsXA__DOT__Y))) 
                                   & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshvLVu3Ac1JFm9w37cQ54DPbJVN5k1VKru4CEzVp6G__DOT__Y))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshbXwfLA4ofIGasVYlK3euENwpupHfLgII665ZihGB__DOT__A) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshuG5ZSvQC2CZKPQYCU88ddAuANJZqAynxNgKt8r1j__DOT__Y))) 
                                         & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshbXwfLA4ofIGasVYlK3euENwpupHfLgII665ZihGB__DOT__A) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshuG5ZSvQC2CZKPQYCU88ddAuANJZqAynxNgKt8r1j__DOT__Y)) 
                                            & ((~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_26__DOT__Y))) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshnCsGBog4P1OLczNnTvdg4fIBfY9YhLOO2y0bpolQ__DOT__B) 
                                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0))))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__222(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__222\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_11 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_18___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05FAND3X1P4H7L_B__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__223(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__223\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_A_NOR4X1H7L_A_Y_AND4X1P4H7L_B_C 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_17___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05FAND3X1P4H7L_B__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__224(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__224\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05FAND3X1P4H7L_A__DOT__Y) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_2___05Freg_p__DOT__n0) 
              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_6)));
}

void VysyxSoCFull___024root___nba_comb__TOP__225(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__225\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A__DOT__A) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshqMc9HUAyOv9BRBwBvVUpcO1QmpppJ7g7g5VtBYpH__DOT__Y) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1))))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                    & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshDfZBEMWAClAbBkleCTGzFEhtR0LG43CRVz659uAl__DOT__outB)) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhshk16JHz71Ejx0D6NAN0n9dvZZPITHyIIu8SlvVjBY__DOT__A1)))) 
                                       ^ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshHY9V2PgzqJPefROUg5WScupPHyfsdJ6c6IWMVERl__DOT__A) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshHY9V2PgzqJPefROUg5WScupPHyfsdJ6c6IWMVERl__DOT__B)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshzCaa02hRGS3BakqtpEVr7eTMFeVeMgWjXafBN4dy__DOT__B))))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshvqoGQuxn34HU5JJ4CjJwNmIS7wBwJfB8LF3fIGll__DOT__Y))) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax))) 
                                          ^ (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y)) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)) 
                                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))))))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh99rPcN4dACQBCvoc7wZBi6mA2nuGnnOOZi5pWrkv__DOT__Y))) 
                                         & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiaRF0jzFAqTYT9lW6Z5EX3BdgmJHMjZ3HV1CSrXG__DOT__B) 
                                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                            & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0))) 
                                               & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_25__DOT__Y)))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__226(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__226\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_487 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_23___05FAND4X0P5H7L_D__DOT__Y) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_27___05Freg_p__DOT__n0) 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_26___05Freg_p__DOT__n0) 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_25___05Freg_p__DOT__n0) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_28___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__227(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__227\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D_NAND3X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_A_Y_NOR2BX1H7L_B__DOT__Ax)) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D_NAND3X1P4H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1))) 
                          & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshqMc9HUAyOv9BRBwBvVUpcO1QmpppJ7g7g5VtBYpH__DOT__Y) 
                                 & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X1P4H7L_Y_B_AOI21X1P4H7L_Y__DOT__A0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)))) 
                             & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshWYFyvlEzCAHZmieZoBGPAnBzDBu3vZCLWmOFRjUy__DOT__Y) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_47)))) 
                                       ^ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshtxiAQzAowaOrfAxzBqaoq1R9gacQRAUDmG5qNmcb__DOT__Y)) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshABp50Sm3FXnm6ayBINThOJz9iiAnUAaybD1shU38__DOT__outA))) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshLpbDdQUVWPtEuubeyQwzQ531DsoyrBCf2SZ6bkAW__DOT__A) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshLpbDdQUVWPtEuubeyQwzQ531DsoyrBCf2SZ6bkAW__DOT__B)))))) 
                                & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshZYQw4fmivtojC0njzXCTThs0Z0BB9rJzhV11om4Q__DOT__Y))) 
                                   & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhshwf54EUkSms3NNbKbSIc60JzxGJ3dt5k902xpUWDg__DOT__Ax)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshaqBPCqfRV6CH47HKBbbXetSLs0h7yAeeaEBxa2vy__DOT__Y))) 
                                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_21__DOT__Y))) 
                                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR4X6H7L_A_B_NOR3X0P5H7L_B_Y_BUFX1P4H7L_A__DOT__Y) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0))))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshUPpqGHLoBW5Qx8eQTsquc0LNSSMs6ADz7RHFtHCg__DOT__Y))) 
                                         & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshX6FpELMt5Bh04X0fFDhG6sBAtqwhol1N0aNBFTZ7__DOT__B) 
                                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshaqBPCqfRV6CH47HKBbbXetSLs0h7yAeeaEBxa2vy__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhshwf54EUkSms3NNbKbSIc60JzxGJ3dt5k902xpUWDg__DOT__Ax))))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__228(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__228\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_2 = (1U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A_NAND4BX1P4H7L_B__DOT__Ax)) 
                                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A))));
}

void VysyxSoCFull___024root___nba_comb__TOP__230(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__230\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__B))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B))) 
                       & (~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshT3W4SoRJrlGSlYEiQdVmRApwr3KLNVNbCTVPAALU__DOT__B))) 
                                    & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag_NOR2BX1P4H7L_AN_B_NOR2BX1P4H7L_Z_B_INVX0P5H7L_A__DOT__Y)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_7__DOT__Y))) 
                                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh1XaEhptoVNywUTuZcqXmwj4CJDZtSBA8IE7Az1z8__DOT__A) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshTCbcAJLBh7mH6XGxqI98Uw0dnbqvN3mVyNWDw9ER__DOT__Y)))) 
                                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B) 
                                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh1XaEhptoVNywUTuZcqXmwj4CJDZtSBA8IE7Az1z8__DOT__A) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshTCbcAJLBh7mH6XGxqI98Uw0dnbqvN3mVyNWDw9ER__DOT__Y))))))) 
                             | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__A) 
                                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh4rzhFJQl5CQqAHdG2MxRtjT6zAitrwD40B1xjBSo__DOT__Ax)) 
                                             ^ (~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshtM9uPZvkqXvBRssfOIY7NilYTi1PWeMcC9PAcG49__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__OUT0))))))) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y__DOT__A1)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_B_OAI31X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__231(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__231\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_3___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_3___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_3___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B_AND3X1P4H7L_Y_A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_3___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_3___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__232(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__232\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_NOR2X0P5H7L_B__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_OR2X0P5H7L_Y_B_NAND4X1P4H7L_Y__DOT__Y)));
}

void VysyxSoCFull___024root___nba_comb__TOP__233(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__233\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_260 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_OR2X0P5H7L_Y_B_NAND4X1P4H7L_Y__DOT__Y) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X3H7L_Y_D_OR3X1H7L_Y_A_NAND4X0P7H7L_Y__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__234(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__234\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_14 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_25___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_13));
}

void VysyxSoCFull___024root___nba_comb__TOP__235(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__235\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_NAND2X1P4H7L_B__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_258 = (1U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y)) 
                                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))));
}

void VysyxSoCFull___024root___nba_comb__TOP__236(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__236\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_A_NOR4X1H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_16___05Freg_p__DOT__n0) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_42___05FXOR2X1P4H7L_Y_B_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y_D) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_42___05FXOR2X1P4H7L_Y_B_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y_D_NAND4X0P5H7L_C_D) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_C))));
}

void VysyxSoCFull___024root___nba_comb__TOP__237(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__237\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D));
}

void VysyxSoCFull___024root___nba_comb__TOP__238(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__238\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_268 = (1U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_240 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D));
}

void VysyxSoCFull___024root___nba_comb__TOP__239(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__239\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p_D_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p__DOT__n0) 
                                                         ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__240(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__240\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_42___05FXOR2X1P4H7L_Y_B_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y_D_NAND4X0P5H7L_C_D) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_42___05FXOR2X1P4H7L_Y_B_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y_D) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax)));
}

void VysyxSoCFull___024root___nba_comb__TOP__241(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__241\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_4___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B_AND3X1P4H7L_Y_A)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_4___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_5___05FXOR2X0P5H7L_Y_B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_4___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B_AND3X1P4H7L_Y_A));
}

void VysyxSoCFull___024root___nba_comb__TOP__242(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__242\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_8___05FXOR2X0P5H7L_Y_B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B_AND3X1P4H7L_Y_A) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_5___05Freg_p__DOT__n0) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_7___05Freg_p__DOT__n0) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_6___05Freg_p__DOT__n0) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_4___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__243(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__243\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A0_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y__DOT__Y) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_260));
}

void VysyxSoCFull___024root___nba_comb__TOP__244(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__244\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_14));
}

void VysyxSoCFull___024root___nba_comb__TOP__245(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__245\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_17___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_A_NOR4X1H7L_A_Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__247(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__247\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__250(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__250\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y 
        = (1U ^ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_240));
}

void VysyxSoCFull___024root___nba_comb__TOP__251(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__251\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__252(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__252\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_240));
}

void VysyxSoCFull___024root___nba_comb__TOP__253(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__253\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_8 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_16___05Freg_p__DOT__n0) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_18___05Freg_p__DOT__n0) 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_C) 
                                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_A_NOR4X1H7L_A_Y_AND4X1P4H7L_B_C) 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__254(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__254\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_5___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_5___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_5___05FXOR2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_6___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_5___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_5___05FXOR2X0P5H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__255(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__255\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_8___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_8___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_8___05FXOR2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_9___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_8___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_8___05FXOR2X0P5H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__256(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__256\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv) 
            & ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv))) 
           | ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN__DOT__AN_bar)));
}

void VysyxSoCFull___024root___nba_comb__TOP__257(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__257\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_62___05FXNOR2X0P5H7L_Y_B_NAND4X1P4H7L_Y_D 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_18___05Freg_p__DOT__n0) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_A_NOR4X1H7L_A_Y_AND4X1P4H7L_B_C) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_B) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_A_NOR4X1H7L_A_Y))));
}

void VysyxSoCFull___024root___nba_comb__TOP__258(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__258\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__D 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
            & ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))) 
           | ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)));
}

void VysyxSoCFull___024root___nba_comb__TOP__259(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__259\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p__DOT__D 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
            & ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))) 
           | ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)));
}

void VysyxSoCFull___024root___nba_comb__TOP__262(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__262\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_249 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p__DOT__n0));
}

void VysyxSoCFull___024root___nba_comb__TOP__263(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__263\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv))));
}

void VysyxSoCFull___024root___nba_comb__TOP__266(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__266\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_NAND2X1P4H7L_B__DOT__Y) 
                    | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_251)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__267(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__267\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_NAND2X1P4H7L_B__DOT__Y) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_NOR2X0P5H7L_B__DOT__B))));
}

void VysyxSoCFull___024root___nba_comb__TOP__268(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__268\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_OR2X0P5H7L_Y_B_NAND4X1P4H7L_Y__DOT__Y) 
                    | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254))) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_258)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__269(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__269\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_258)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1));
}

void VysyxSoCFull___024root___nba_comb__TOP__270(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__270\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1));
}

void VysyxSoCFull___024root___nba_comb__TOP__271(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__271\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_6___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_6___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_6___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__272(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__272\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_7___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_6___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_6___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_7___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__273(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__273\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_9___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_9___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_9___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_10___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_9___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_9___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__274(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__274\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p__DOT__n0))) 
              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p__DOT__n0)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__275(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__275\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0));
}

void VysyxSoCFull___024root___nba_comb__TOP__276(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__276\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__277(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__277\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__278(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__278\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__279(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__279\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_297 = (1U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)) 
                                                     | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)));
}

void VysyxSoCFull___024root___nba_comb__TOP__280(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__280\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__OUT0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0));
}

void VysyxSoCFull___024root___nba_comb__TOP__281(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__281\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_260)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0));
}

void VysyxSoCFull___024root___nba_comb__TOP__282(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__282\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_OAI21X0P5H7L_A1__DOT__B0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__C0_inv) 
           & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv)) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__D 
        = (1U & (((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__A1_inv))) 
                 | ((~ (IData)(vlSelfRef.reset)) & 
                    (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_OAI21X0P5H7L_A1__DOT__B0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__283(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__283\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv))));
}

void VysyxSoCFull___024root___nba_comb__TOP__284(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__284\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__A1N 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv)) 
                    ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___nba_comb__TOP__285(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__285\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv)) 
                 | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_265)))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax)) 
                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_251)) 
                          | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254)) 
                             | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0)))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_259 = (1U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)) 
                                                     | (~ 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p__DOT__n0) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__286(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__286\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_10___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_10___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_10___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__287(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__287\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_11___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_10___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_10___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_11___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_10___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_10___05Freg_p__DOT__n0) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_11___05Freg_p__DOT__n0)));
}

void VysyxSoCFull___024root___nba_comb__TOP__288(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__288\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__289(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__289\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__D 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y)) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)))) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)));
}

void VysyxSoCFull___024root___nba_comb__TOP__290(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__290\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__291(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__291\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__292(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__292\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__294(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__294\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p__DOT__n0) 
                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)))) 
              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p__DOT__n0)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__295(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__295\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)));
}

void VysyxSoCFull___024root___nba_comb__TOP__296(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__296\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X3H7L_Y_D_OR3X1H7L_Y_A_NAND4X0P7H7L_Y__DOT__Y) 
                    | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__297(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__297\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X3H7L_Y_D_OR3X1H7L_Y_A_NAND4X0P7H7L_Y__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263)) 
                       | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__298(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__298\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__OUT0)));
}

void VysyxSoCFull___024root___nba_comb__TOP__299(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__299\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__D 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y_A2_OAI21X0P5H7L_A1_Y_AOAI211X1P4H7L_A0__DOT__C0_inv))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b18__05d_reg_p__DOT__D) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                       & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax))) 
                          | ((IData)(vlSelfRef.reset) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__300(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__300\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx571;
    __Vtableidx571 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__Y 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__A1N) 
            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__B0_bar));
    __Vtableidx571 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__A1N) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y_A1N_MUX2X1P4H7L_B__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y_A1N_MUX2X1P4H7L_B_Y 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx571];
}

void VysyxSoCFull___024root___nba_comb__TOP__301(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__301\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_AOI31X2H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__303(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__303\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_12___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_12___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_12___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_12___05FXOR2X0P5H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__304(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__304\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__305(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__305\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__306(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__306\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__307(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__307\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p__DOT__n0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p__DOT__n0) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__308(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__308\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__D 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y__DOT__A0_inv) 
            & ((~ (IData)(vlSelfRef.reset)) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y)))) 
           | ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__309(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__309\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_AOI31X2H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__310(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__310\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_13___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_13___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_13___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
}

void VysyxSoCFull___024root___nba_comb__TOP__311(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__311\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__312(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__312\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__313(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__313\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.reset)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))));
}

void VysyxSoCFull___024root___nba_comb__TOP__314(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__314\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_14___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_14___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_15___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_14___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__315(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__315\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_31___05FXOR2X1P4H7L_Y_B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B)) 
                    | ((~ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_6) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_487))) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_2)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__316(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__316\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_21___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_2)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__317(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__317\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_29___05FXNOR2X0P5H7L_Y_B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A_NAND4BX1P4H7L_B__DOT__Ax) 
              & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_487) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_27___05Freg_p__DOT__n0) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_24___05Freg_p__DOT__n0) 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A) 
                                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_17___05Freg_p__DOT__n0) 
                                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_19___05Freg_p__DOT__n0) 
                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_18___05Freg_p__DOT__n0) 
                                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_28___05Freg_p__DOT__n0) 
                                                                      & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_486) 
                                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_B))))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__318(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__318\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_15___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_15___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_15___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__319(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__319\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_16___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_15___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_15___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_16___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_17___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_15___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_20___05FXOR2X1P4H7L_Y_B_AND4X0P5H7L_Y_C));
}

void VysyxSoCFull___024root___nba_comb__TOP__320(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__320\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_31___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_31___05FXOR2X1P4H7L_Y_B) 
                                           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_31___05Freg_p__DOT__n0)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_5 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_31___05FXOR2X1P4H7L_Y_B) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_31___05Freg_p__DOT__n0));
}

void VysyxSoCFull___024root___nba_comb__TOP__321(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__321\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    __Vtableidx38 = ((4U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.reset))) 
                            << 2U)) | ((2U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_31___05FXOR2X1P4H7L_Y_B) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_33___05FXNOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y__DOT__Ax))) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(vlSelfRef.reset) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05Freg_p_D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx38];
    vlSelfRef.__VdfgRegularize_he50b618e_0_485 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_31___05FXOR2X1P4H7L_Y_B) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_1___05FAND3X1P4H7L_A__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__322(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__322\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_21___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_21___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_21___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_22___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_21___05Freg_p__DOT__n0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_21___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__323(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__323\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_24___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_21___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_24___05Freg_p__DOT__n0)))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_488 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_21___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_23___05FAND4X0P5H7L_D__DOT__Y));
}

void VysyxSoCFull___024root___nba_comb__TOP__324(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__324\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_29___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_29___05Freg_p__DOT__n0)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_29___05FXNOR2X0P5H7L_Y_B)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__325(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__325\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_C 
        = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_8) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_29___05FXNOR2X0P5H7L_Y_B)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_8) 
                 | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14))));
}

void VysyxSoCFull___024root___nba_comb__TOP__326(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__326\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_60___05FXNOR2X0P5H7L_Y_B_NAND3X1P4H7L_Y_C 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_29___05FXNOR2X0P5H7L_Y_B)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_29___05FXNOR2X0P5H7L_Y_B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_35___05FXNOR2X0P5H7L_Y_B 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax)) 
                 | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_2___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_485)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_2___05Freg_p__DOT__n0))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_2___05Freg_p__DOT__n0)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_485)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__327(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__327\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_30___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_30___05Freg_p__DOT__n0) 
                                                ^ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_29___05Freg_p__DOT__n0)) 
                                                   | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__328(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__328\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_6___05Freg_p__DOT__n0) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05FAND3X1P4H7L_B__DOT__Y))));
}

void VysyxSoCFull___024root___nba_comb__TOP__329(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__329\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05FAND3X1P4H7L_B__DOT__Y) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_63___05FXNOR2X0P5H7L_Y_B_NAND4BX1P4H7L_Y__DOT__Ax) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05Freg_p__DOT__n0) 
                                           ^ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_7) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))));
}

void VysyxSoCFull___024root___nba_comb__TOP__330(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__330\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_44___05FXNOR2X3H7L_Y_B 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_5___05FAND3X1P4H7L_B__DOT__Y) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)));
}

void VysyxSoCFull___024root___nba_comb__TOP__331(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__331\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_17___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_17___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_17___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__332(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__332\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_18___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_17___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_17___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_18___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__333(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__333\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_19___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_17___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_19___05FXNOR2X0P5H7L_Y_B_NAND4X0P5H7L_Y_D))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_19___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__334(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__334\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_20___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_20___05Freg_p__DOT__n0) 
                                           ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_17___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_24___05FXNOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_C_NAND4X4H7L_B_A_NAND4BX1P4H7L_B__DOT__Ax))));
}

void VysyxSoCFull___024root___nba_comb__TOP__335(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__335\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_0___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_5)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_0___05Freg_p__DOT__n0))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_0___05Freg_p__DOT__n0)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_5)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__336(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__336\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_22___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_22___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_22___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__337(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__337\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_23___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_22___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_22___05FXNOR2X0P5H7L_Y_B_INVX0P5H7L_A_Y))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_23___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__338(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__338\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_25___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_488)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_25___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__339(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__339\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_26___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_25___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_488))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_26___05Freg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_27___05FXNOR2X1P4H7L_Y_B_INVX0P5H7L_A_Y 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_486) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_488));
}

void VysyxSoCFull___024root___nba_comb__TOP__340(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__340\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_19___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_19___05Freg_p__DOT__n0) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_52___05FNAND2X0P5H7L_Y_A_OAI31X0P5H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)) 
                 | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_19___05Freg_p__DOT__n0) 
                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_11))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_35___05FXNOR2X0P5H7L_Y_B))));
}

void VysyxSoCFull___024root___nba_comb__TOP__341(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__341\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_27___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_27___05Freg_p__DOT__n0) 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_B)) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A)))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_27___05Freg_p__DOT__n0)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_C) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_B))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__342(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__342\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_57___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_13)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A)));
}

void VysyxSoCFull___024root___nba_comb__TOP__343(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__343\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p_D_AOI2XB1X1H7L_Y_A0_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_14)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_25___05Freg_p_D_AOI21X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_25___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_57___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_25___05Freg_p__DOT__n0) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_57___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__344(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__344\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_55___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_22___05Freg_p__DOT__n0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05FAND3X1P4H7L_A__DOT__Y))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A)));
}

void VysyxSoCFull___024root___nba_comb__TOP__345(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__345\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_54___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05FAND3X1P4H7L_A__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05FAND3X1H7L_B_C_INVX0P5H7L_Y__DOT__A)));
}

void VysyxSoCFull___024root___nba_comb__TOP__346(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__346\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    // Body
    __Vtableidx39 = ((4U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_28___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.reset))) 
                            << 2U)) | ((2U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_27___05Freg_p__DOT__n0) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_60___05FXNOR2X0P5H7L_Y_B_NAND3X1P4H7L_Y_C) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_62___05FXNOR2X0P5H7L_Y_B_NAND4X1P4H7L_Y_D)))) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(vlSelfRef.reset) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_28___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_28___05Freg_p_D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx39];
}

void VysyxSoCFull___024root___nba_comb__TOP__347(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__347\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_27___05Freg_p__DOT__n0) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_28___05Freg_p__DOT__n0) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)));
}

void VysyxSoCFull___024root___nba_comb__TOP__348(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__348\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_3___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_3___05Freg_p__DOT__n0) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_35___05FXNOR2X0P5H7L_Y_B)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__349(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__349\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_4___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_35___05FXNOR2X0P5H7L_Y_B)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_3___05Freg_p__DOT__n0))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_4___05Freg_p__DOT__n0))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_4___05Freg_p__DOT__n0)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_60___05FXNOR2X0P5H7L_Y_B_NAND3X1P4H7L_Y_C) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_3___05Freg_p__DOT__n0))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__350(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__350\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_53___05FNAND2X0P5H7L_Y_A_OAI31X0P5H7L_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)) 
                 | ((~ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_11) 
                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_12))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_35___05FXNOR2X0P5H7L_Y_B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_52___05FNAND2X0P5H7L_Y_A_OAI31X0P5H7L_Y__DOT__outA))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_20___05Freg_p__DOT__n0) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_52___05FNAND2X0P5H7L_Y_A_OAI31X0P5H7L_Y__DOT__outA))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__351(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__351\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_7___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_7___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_7___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15));
}

void VysyxSoCFull___024root___nba_comb__TOP__352(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__352\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_6___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_6___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)));
}

void VysyxSoCFull___024root___nba_comb__TOP__353(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__353\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_50___05FOR2X1P4H7L_Y_A_OA31X1H7L_Y__DOT__outA 
        = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))));
}

void VysyxSoCFull___024root___nba_comb__TOP__354(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__354\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_42___05FXOR2X1P4H7L_Y_B_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y_D) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_9___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_9___05Freg_p__DOT__n0) 
                                           ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_8___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))));
}

void VysyxSoCFull___024root___nba_comb__TOP__355(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__355\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_12___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_12___05Freg_p__DOT__n0)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_44___05FXNOR2X3H7L_Y_B)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_12___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_44___05FXNOR2X3H7L_Y_B));
}

void VysyxSoCFull___024root___nba_comb__TOP__356(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__356\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_46___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_482) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_44___05FXNOR2X3H7L_Y_B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_13___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_13___05Freg_p__DOT__n0))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_13___05Freg_p__DOT__n0)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__357(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__357\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_47___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_481) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_44___05FXNOR2X3H7L_Y_B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_14___05Freg_p_D_AOI21X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_46___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_14___05Freg_p__DOT__n0))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_46___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_14___05Freg_p__DOT__n0))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__358(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__358\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_48___05FNAND2X0P5H7L_Y_B_NAND3X0P5H7L_Y_C) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_44___05FXNOR2X3H7L_Y_B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_15___05Freg_p_D_AOI21X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_47___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_15___05Freg_p__DOT__n0))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_47___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_15___05Freg_p__DOT__n0))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__359(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__359\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_27___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_27___05FXNOR2X1P4H7L_Y_B_INVX0P5H7L_A_Y)) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_27___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__360(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__360\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_28___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_27___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_27___05FXNOR2X1P4H7L_Y_B_INVX0P5H7L_A_Y))) 
                                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_4_28___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__361(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__361\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p_D_AOI2XB1X1H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p_D_AOI2XB1X1H7L_Y_A0_OAI21X0P5H7L_Y__DOT__outA))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p__DOT__n0) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_26___05Freg_p_D_AOI2XB1X1H7L_Y_A0_OAI21X0P5H7L_Y__DOT__outA))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__362(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__362\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_23___05Freg_p_D_AOI21X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_23___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_55___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_23___05Freg_p__DOT__n0) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_55___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__363(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__363\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_22___05Freg_p_D_AOI21X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_22___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_54___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_22___05Freg_p__DOT__n0) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_54___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__364(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__364\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_24___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_24___05Freg_p__DOT__n0) 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_56___05FNAND2X0P5H7L_Y_B_NAND4BBX0P5H7L_Y__DOT__ANx)) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_54___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA)))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_24___05Freg_p__DOT__n0)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_59___05FNAND2X0P5H7L_Y_B_NAND3BX0P5H7L_Y_C) 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05FAND3X1P4H7L_A__DOT__Y) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_56___05FNAND2X0P5H7L_Y_B_NAND4BBX0P5H7L_Y__DOT__ANx)))))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__365(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__365\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    __Vtableidx42 = ((4U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_31___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.reset))) 
                            << 2U)) | ((2U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_62___05FXNOR2X0P5H7L_Y_B_NAND4X1P4H7L_Y_D) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_29___05Freg_p__DOT__n0) 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_30___05Freg_p__DOT__n0) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19))))) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(vlSelfRef.reset) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_31___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_31___05Freg_p_D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx42];
}

void VysyxSoCFull___024root___nba_comb__TOP__366(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__366\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_15 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_62___05FXNOR2X0P5H7L_Y_B_NAND4X1P4H7L_Y_D) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19));
}

void VysyxSoCFull___024root___nba_comb__TOP__367(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__367\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_53___05FNAND2X0P5H7L_Y_A_OAI31X0P5H7L_Y__DOT__outA))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_21___05Freg_p__DOT__n0) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_53___05FNAND2X0P5H7L_Y_A_OAI31X0P5H7L_Y__DOT__outA))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__368(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__368\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_8___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_8___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)));
}

void VysyxSoCFull___024root___nba_comb__TOP__369(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__369\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_18___05Freg_p_D_AOI2BB1X0P5H7L_Y__DOT__Y 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_50___05FOR2X1P4H7L_Y_A_OA31X1H7L_Y__DOT__outA) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_18___05Freg_p__DOT__n0))) 
                  & (~ (IData)(vlSelfRef.reset))) | 
                 ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_50___05FOR2X1P4H7L_Y_A_OA31X1H7L_Y__DOT__outA) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_18___05Freg_p__DOT__n0)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__370(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__370\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_10___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_10___05Freg_p__DOT__n0) 
                                           ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)));
}

void VysyxSoCFull___024root___nba_comb__TOP__371(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__371\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_11___05Freg_p__DOT__D 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_11___05Freg_p__DOT__n0) 
                                           ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_10___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))));
}

void VysyxSoCFull___024root___nba_comb__TOP__372(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__372\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_16___05Freg_p_D_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_16___05Freg_p__DOT__n0))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_16___05Freg_p__DOT__n0)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_49___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_16___05Freg_p__DOT__n0) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))));
}

void VysyxSoCFull___024root___nba_comb__TOP__373(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__373\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    // Body
    __Vtableidx40 = ((4U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_29___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.reset))) 
                            << 2U)) | ((2U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_15)) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(vlSelfRef.reset) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_29___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_29___05Freg_p_D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx40];
}

void VysyxSoCFull___024root___nba_comb__TOP__374(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__374\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    // Body
    __Vtableidx41 = ((4U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_30___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.reset))) 
                            << 2U)) | ((2U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_29___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_15))) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(vlSelfRef.reset) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_30___05Freg_p__DOT__n0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_30___05Freg_p_D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx41];
}

void VysyxSoCFull___024root___nba_comb__TOP__375(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__375\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_17___05Freg_p_D_AOI21X1P4H7L_Y__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_49___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_17___05Freg_p__DOT__n0))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT___zz_mcycle_49___05FNAND2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__outA) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__debug_data_5_17___05Freg_p__DOT__n0))))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__17(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__18(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__19(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__20(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__21(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__22(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__23(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__24(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__25(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__26(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__27(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__28(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__29(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__30(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__31(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__32(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__33(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__34(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__35(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__36(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__37(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__38(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__39(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__40(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__41(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__42(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__43(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__44(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__45(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__46(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__47(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__48(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__49(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__50(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__51(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__52(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__53(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__54(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__55(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__56(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__57(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__58(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__59(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__60(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__61(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__62(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__63(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__64(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__65(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__66(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__67(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__68(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__69(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__70(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__71(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__72(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__73(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__74(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__75(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__76(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__77(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__78(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__79(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__80(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__81(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__82(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__83(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__84(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__85(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__86(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__87(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__88(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__89(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__90(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__91(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__92(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__93(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__94(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__95(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__96(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__97(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__98(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__99(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__100(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__101(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__102(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__103(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__104(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__105(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__106(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__107(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__108(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__109(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__110(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__111(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__112(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__113(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__114(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__115(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__116(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__117(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__118(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__119(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__120(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__121(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__122(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__123(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__124(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__125(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__126(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__127(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__128(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__129(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__130(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__131(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__132(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__133(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__134(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__135(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__136(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__137(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__138(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__139(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__140(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__141(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__142(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__143(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__144(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__145(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__146(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__147(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__148(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__149(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__150(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__151(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__152(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__153(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__154(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__155(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__156(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__157(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__158(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__159(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__160(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__161(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__162(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__163(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__164(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__165(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__166(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__167(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__168(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__169(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__170(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__171(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__172(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__173(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__174(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__175(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__176(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__177(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__178(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__179(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__180(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__181(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__182(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__183(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__184(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__185(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__186(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__187(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__188(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__189(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__190(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__191(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__192(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__193(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__194(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__195(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__196(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__197(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__198(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__199(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__200(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__201(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__202(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__203(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__204(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__205(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__206(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__207(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__208(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__209(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__210(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__211(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__212(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__213(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__214(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__215(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__216(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__217(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__218(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__219(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__220(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__221(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__222(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__223(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__224(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__225(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__226(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__227(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__228(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__229(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__230(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__231(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__232(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__233(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__234(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__235(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__236(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__237(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__238(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__239(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__240(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__241(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__242(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__243(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__244(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__245(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__246(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__247(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__248(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__249(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__250(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__251(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__252(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__253(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__254(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__255(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__256(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__257(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__258(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__259(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__260(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__261(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__262(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__263(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__264(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__265(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__266(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__267(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__268(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__269(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__17(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__18(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__19(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__20(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__21(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__22(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__23(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__24(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__25(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__26(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__27(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__28(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__29(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__30(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__31(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__32(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__33(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__34(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__35(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__36(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__37(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__38(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__39(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__40(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__41(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__42(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__43(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__44(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__45(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__46(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__47(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__48(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__49(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__50(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__51(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__52(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__53(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__54(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__55(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__56(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__57(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__58(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__59(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__60(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__61(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__62(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__63(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__64(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__65(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__66(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__67(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__68(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__69(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__70(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__71(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__72(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__73(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__74(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__75(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__76(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__77(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__78(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__79(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__80(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__81(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__82(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__83(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__84(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__85(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__86(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__87(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__88(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__89(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__90(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__91(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__92(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__93(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__94(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__95(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__96(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__97(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__98(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__99(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__100(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__101(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__102(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__103(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__104(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__105(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__106(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__107(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__108(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__109(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__110(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__111(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__112(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__113(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__114(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__115(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__116(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__117(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__118(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__119(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__120(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__121(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__122(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__123(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__124(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__125(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__126(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__127(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__128(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__129(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__130(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__131(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__132(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__133(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__134(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__135(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__136(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__137(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__138(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__139(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__140(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__141(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__142(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__143(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__144(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__145(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__146(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__147(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__148(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__149(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__150(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__151(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__152(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__153(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1295(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1217(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__156(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__157(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__158(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__159(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__160(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1382(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1398(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1400(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1365(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1473(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1366(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1384(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1378(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1421(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1419(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1432(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1397(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1412(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1410(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1423(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1439(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___act_comb__TOP__1469(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[270U] = 1U;
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__39(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__47(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__48(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__49(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__50(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__52(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__61(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__62(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__63(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__64(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__65(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__66(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__67(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__68(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__69(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__70(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__71(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__72(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__73(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__74(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__75(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__76(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__77(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__78(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__79(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__80(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__81(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__82(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__83(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__84(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__85(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__86(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__87(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__88(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__89(vlSelf);
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__90(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__91(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__92(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__93(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__94(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__95(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__96(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__97(vlSelf);
    }
    if ((0x0080000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__98(vlSelf);
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__99(vlSelf);
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__100(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__101(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__102(vlSelf);
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__103(vlSelf);
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__104(vlSelf);
    }
    if ((0x0020000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__105(vlSelf);
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__106(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__107(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__108(vlSelf);
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__109(vlSelf);
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__110(vlSelf);
    }
    if ((0x0020000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__111(vlSelf);
    }
    if ((0x0100000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__112(vlSelf);
    }
    if ((0x0400000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__113(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__114(vlSelf);
    }
    if ((0x0080000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__115(vlSelf);
    }
    if ((0x0400000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__116(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__117(vlSelf);
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__118(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__119(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__120(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__121(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__122(vlSelf);
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__123(vlSelf);
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__124(vlSelf);
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__125(vlSelf);
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__126(vlSelf);
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__127(vlSelf);
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__128(vlSelf);
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__129(vlSelf);
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__130(vlSelf);
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__131(vlSelf);
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__132(vlSelf);
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__133(vlSelf);
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__134(vlSelf);
    }
    if ((0x0040000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__135(vlSelf);
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__136(vlSelf);
    }
    if ((0x0400000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__137(vlSelf);
    }
    if ((0x0040000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__138(vlSelf);
    }
    if ((0x0100000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__139(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__140(vlSelf);
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__141(vlSelf);
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__142(vlSelf);
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__143(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__144(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__145(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__146(vlSelf);
    }
    if ((0x0100000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__147(vlSelf);
    }
    if ((0x0080000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__148(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__149(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__150(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__151(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__152(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__153(vlSelf);
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__154(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__155(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__156(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__157(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__158(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__159(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__160(vlSelf);
    }
    if ((0x0040000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__161(vlSelf);
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__162(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__163(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__164(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__165(vlSelf);
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__166(vlSelf);
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__167(vlSelf);
    }
    if ((0x0020000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__168(vlSelf);
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__169(vlSelf);
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__170(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__171(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__172(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__173(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__174(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__175(vlSelf);
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__176(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__177(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__178(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__179(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__180(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__181(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__182(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__183(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__184(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__185(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__186(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__187(vlSelf);
    }
    if ((0x0400000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__188(vlSelf);
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__189(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__190(vlSelf);
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__191(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__192(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__193(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__194(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__195(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[20U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__196(vlSelf);
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__197(vlSelf);
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__198(vlSelf);
    }
    if ((0x0100000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__199(vlSelf);
    }
    if ((0x0080000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__200(vlSelf);
    }
    if ((0x0040000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__201(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__202(vlSelf);
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__203(vlSelf);
    }
    if ((0x0020000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__204(vlSelf);
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__205(vlSelf);
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__206(vlSelf);
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__207(vlSelf);
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__208(vlSelf);
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__209(vlSelf);
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__210(vlSelf);
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__211(vlSelf);
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__212(vlSelf);
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__213(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__214(vlSelf);
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__215(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__216(vlSelf);
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__217(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__218(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__219(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__220(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__221(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__222(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__223(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__224(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__225(vlSelf);
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__226(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__227(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__228(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__229(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__230(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__231(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__232(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__233(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__234(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__235(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__236(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__237(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__238(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__239(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__240(vlSelf);
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__241(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__242(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__243(vlSelf);
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__244(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__245(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__246(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__247(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__248(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__249(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__250(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__251(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__252(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__253(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__254(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__255(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__256(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__257(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__258(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__259(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__260(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__261(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__262(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__263(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__264(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__265(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__266(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__267(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered[18U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__268(vlSelf);
    }
    if ((((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[21U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__269(vlSelf);
    }
    if ((0x0200100000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
    }
    if (((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__5(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000004040ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__6(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__7(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (8ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__8(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (4ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__9(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (2ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__10(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (6ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__11(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x8000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__13(vlSelf);
    }
    if (((0x8000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x4000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x0000000040000020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x0000000000400020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x0000000000000820ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x0000000001000020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x0000000000000420ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x2000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0x0080004000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x0000104000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0x0200004000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x8000004000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0x0000084000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((((0x8000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (2ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__27(vlSelf);
    }
    if (((0x0080004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0200010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((((0x4000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (1ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__29(vlSelf);
    }
    if (((0x0000104000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000410000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__30(vlSelf);
    }
    if (((0x0800004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x2000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__31(vlSelf);
    }
    if (((0x0000024000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000090000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__32(vlSelf);
    }
    if (((0x0008004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0020010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__33(vlSelf);
    }
    if (((0x0200004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0800010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__34(vlSelf);
    }
    if (((0x0000044000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000110000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__35(vlSelf);
    }
    if (((0x0000084000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000210000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__36(vlSelf);
    }
    if (((0x0020004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0080010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__37(vlSelf);
    }
    if (((0x0100004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0400010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__38(vlSelf);
    }
    if (((0x0400004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x1000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__39(vlSelf);
    }
    if (((0x0000204000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000810000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__40(vlSelf);
    }
    if (((0x1000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x4000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__41(vlSelf);
    }
    if (((0x0002004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0008010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__42(vlSelf);
    }
    if (((0x0000404000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0001010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__43(vlSelf);
    }
    if (((0x0001004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0004010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__44(vlSelf);
    }
    if (((0x0010004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0040010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__45(vlSelf);
    }
    if (((0x0040004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0100010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__46(vlSelf);
    }
    if (((0x0000804000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0002010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__47(vlSelf);
    }
    if ((0x1000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__48(vlSelf);
    }
    if ((0x3000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__49(vlSelf);
    }
    if ((0x00000000000000a0ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__50(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__51(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000004ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__52(vlSelf);
    }
    if ((0x0800400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__53(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000008ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__54(vlSelf);
    }
    if (((0x0004004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0010010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__55(vlSelf);
    }
    if (((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__56(vlSelf);
    }
    if ((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__57(vlSelf);
    }
    if (((0x0000014000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000050000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__58(vlSelf);
    }
    if ((0x0000014000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__59(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000020ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__60(vlSelf);
    }
    if (((0x0000005000000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__61(vlSelf);
    }
    if ((0x0000000010000020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__62(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (8ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000002ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__63(vlSelf);
    }
    if (((0x0000004100000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (2ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__64(vlSelf);
    }
    if ((0x0000002000000020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__65(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000010ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__66(vlSelf);
    }
    if ((0x0000000080000020ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__67(vlSelf);
    }
    if ((0x0400400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__68(vlSelf);
    }
    if (((0x0018000000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__69(vlSelf);
    }
    if (((0x2000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x8000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__70(vlSelf);
    }
    if ((0x2000004000000000ULL & vlSelfRef.__VnbaTriggered[19U])) {
        VysyxSoCFull___024root___nba_comb__TOP__71(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000040ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__72(vlSelf);
    }
    if (((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__73(vlSelf);
    }
    if ((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (4ULL & vlSelfRef.__VnbaTriggered[21U])) 
         | (0x0000010000000001ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__74(vlSelf);
    }
    if (((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__75(vlSelf);
    }
    if ((0x0100400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__76(vlSelf);
    }
    if ((0x0500400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__77(vlSelf);
    }
    if (((0x0500400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__78(vlSelf);
    }
    if ((0x0080400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__79(vlSelf);
    }
    if ((0x0040400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__80(vlSelf);
    }
    if (((0x0002800000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__81(vlSelf);
    }
    if ((0x0020400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__82(vlSelf);
    }
    if ((0x0060400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__83(vlSelf);
    }
    if ((0x0010400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__84(vlSelf);
    }
    if ((0x0008400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__85(vlSelf);
    }
    if ((0x0004400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__86(vlSelf);
    }
    if ((0x0001400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__87(vlSelf);
    }
    if ((0x0002400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__88(vlSelf);
    }
    if ((0x0006400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__89(vlSelf);
    }
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__90(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__91(vlSelf);
    }
    if (((0x0001c00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__92(vlSelf);
    }
    if (((0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__93(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__94(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__95(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__96(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000001c00ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__97(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__98(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__99(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__100(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__101(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000090ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__102(vlSelf);
    }
    if (((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__103(vlSelf);
    }
    if ((((((0x4000004020000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (1ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x1000000010000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010080000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__104(vlSelf);
    }
    if (((0x000000000000001eULL & vlSelfRef.__VnbaTriggered[19U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__105(vlSelf);
    }
    if (((((0x0800004004000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0200000002000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x2000010010000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__106(vlSelf);
    }
    if (((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__107(vlSelf);
    }
    if (((0x0000000014000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__108(vlSelf);
    }
    if (((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__109(vlSelf);
    }
    if (((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__110(vlSelf);
    }
    if (((((0x0100004000800020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0040000000400000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0400010002000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__111(vlSelf);
    }
    if (((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__112(vlSelf);
    }
    if (((0xc000000000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__113(vlSelf);
    }
    if (((0x0000002020000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__114(vlSelf);
    }
    if (((((0x0020004000100020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0008000000080000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0080010000400080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__115(vlSelf);
    }
    if (((((0x0008004000040020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0002000000020000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0020010000100080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__116(vlSelf);
    }
    if (((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__117(vlSelf);
    }
    if (((0x00000000001c0000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__118(vlSelf);
    }
    if (((((0x0010004000080020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0004000000040000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0040010000200080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__119(vlSelf);
    }
    if (((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__120(vlSelf);
    }
    if (((((0x0001004000008020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000004000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0004010000020080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__121(vlSelf);
    }
    if (((((0x0000404000002020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000100000001000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0001010000008080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__122(vlSelf);
    }
    if (((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__123(vlSelf);
    }
    if (((((0x0000804000004020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000200000002000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0002010000010080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__124(vlSelf);
    }
    if (((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__125(vlSelf);
    }
    if (((((0x0000204000001020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000080000000800ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000810000004080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__126(vlSelf);
    }
    if (((((0x0000044000000220ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000010000000100ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000110000000880ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__127(vlSelf);
    }
    if (((((0x0000024000000120ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000008000000080ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000090000000480ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__128(vlSelf);
    }
    if (((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__129(vlSelf);
    }
    if (((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__130(vlSelf);
    }
    if ((((((0x0000004800000024ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000012000000090ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__131(vlSelf);
        vlSelfRef.__Vm_traceActivity[271U] = 1U;
    }
    if (((((0x0004004000020020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0001000000010000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0010010000080080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__132(vlSelf);
        vlSelfRef.__Vm_traceActivity[272U] = 1U;
    }
    if (((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__133(vlSelf);
    }
    if (((0x0000000000010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__134(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x000000000000002eULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__135(vlSelf);
    }
    if (((((0x0000104000000820ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000040000000400ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000410000002080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__136(vlSelf);
    }
    if (((((0x0200004001000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0080000000800000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0800010004000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__137(vlSelf);
    }
    if ((((((0x8000004040000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (2ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x2000000020000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010100000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__138(vlSelf);
    }
    if (((((0x0000084000000420ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000020000000200ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000210000001080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__139(vlSelf);
    }
    if (((((0x8000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (2ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__140(vlSelf);
    }
    if ((((0x0080004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0200010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__141(vlSelf);
    }
    if (((((0x4000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (1ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__142(vlSelf);
    }
    if ((((0x0800004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x2000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__143(vlSelf);
    }
    if ((((0x0008004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0020010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__144(vlSelf);
    }
    if ((((0x0200004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0800010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__145(vlSelf);
    }
    if ((((0x0100004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0400010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__146(vlSelf);
    }
    if ((((0x1000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x4000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__147(vlSelf);
    }
    if ((((0x0000404000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0001010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__148(vlSelf);
    }
    if ((((0x0001004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0004010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__149(vlSelf);
    }
    if ((((0x0010004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0040010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__150(vlSelf);
    }
    if ((((0x0040004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0100010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__151(vlSelf);
    }
    if ((((0x0000804000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0002010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__152(vlSelf);
    }
    if (((0xb000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__153(vlSelf);
    }
    if ((((0x0004004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0010010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1295(vlSelf);
    }
    if ((((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1217(vlSelf);
    }
    if (((((0x000000c000000060ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000002000000020ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000030000000180ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__156(vlSelf);
    }
    if (((((0x00000140000000a0ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000004000000040ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000050000000280ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__157(vlSelf);
    }
    if ((((((0x0000005000000028ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x0000000800000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x00000140000000a0ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__158(vlSelf);
        vlSelfRef.__Vm_traceActivity[273U] = 1U;
    }
    if ((((((0x0000004100000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (8ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x8000000080000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010400000082ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__159(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000010ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__160(vlSelf);
    }
    if (((((0x2000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004010ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x8000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1382(vlSelf);
    }
    if (((((0x2000004010000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0800000008000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x8000010040000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__162(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000040ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__163(vlSelf);
    }
    if ((((((0x0000006000000030ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x0000001000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x00000180000000c0ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__164(vlSelf);
        vlSelfRef.__Vm_traceActivity[274U] = 1U;
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000004ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004090ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000001ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1398(vlSelf);
    }
    if ((((((0x0000004080000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (4ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x4000000040000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010200000081ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__166(vlSelf);
        vlSelfRef.__Vm_traceActivity[275U] = 1U;
    }
    if ((0x0d00400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__167(vlSelf);
    }
    if (((0x0006800000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__168(vlSelf);
    }
    if ((0x00e0400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__169(vlSelf);
    }
    if ((0x000e400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__170(vlSelf);
    }
    if (((0x0000070000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__171(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000190ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__172(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000008ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004190ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000002ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1400(vlSelf);
    }
    if (((((((0x4000004020000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (1ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x1000000010000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010080000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__174(vlSelf);
    }
    if ((((((0x0800004004000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0200000002000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x2000010010000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__175(vlSelf);
    }
    if (((((0x1000004008000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0400000004000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x4000010020000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__176(vlSelf);
    }
    if (((((0x0400004002000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0100000001000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x1000010008000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__177(vlSelf);
    }
    if ((((((0x0100004000800020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0040000000400000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0400010002000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__178(vlSelf);
    }
    if (((((0x0080004000400020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0020000000200000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0200010001000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__179(vlSelf);
    }
    if ((((1ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc000000000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__180(vlSelf);
    }
    if (((0x0001002020000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__181(vlSelf);
    }
    if ((((((0x0020004000100020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0008000000080000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0080010000400080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__182(vlSelf);
    }
    if ((((((0x0008004000040020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0002000000020000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0020010000100080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__183(vlSelf);
    }
    if (((((0x0040004000200020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0010000000100000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0100010000800080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__184(vlSelf);
    }
    if (((0x00000000003c0000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__185(vlSelf);
    }
    if ((((((0x0010004000080020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0004000000040000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0040010000200080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__186(vlSelf);
    }
    if (((((0x0002004000010020ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000800000008000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0008010000040080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__187(vlSelf);
    }
    if ((((((0x0001004000008020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000400000004000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0004010000020080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__188(vlSelf);
    }
    if ((((((0x0000404000002020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000100000001000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0001010000008080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__189(vlSelf);
    }
    if (((0x000000000000e000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__190(vlSelf);
    }
    if ((((((0x0000804000004020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000200000002000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0002010000010080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__191(vlSelf);
    }
    if (((0x0000000000021c00ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__192(vlSelf);
    }
    if ((((((0x0000204000001020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000080000000800ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000810000004080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__193(vlSelf);
    }
    if ((((((0x0000044000000220ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000010000000100ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000110000000880ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__194(vlSelf);
    }
    if ((((((0x0000024000000120ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000008000000080ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000090000000480ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__195(vlSelf);
    }
    if ((((((0x0000004400000022ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000011000000088ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__196(vlSelf);
        vlSelfRef.__Vm_traceActivity[276U] = 1U;
    }
    if ((((((0x0000004200000021ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[21U])) 
           | (0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010800000084ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__197(vlSelf);
        vlSelfRef.__Vm_traceActivity[277U] = 1U;
    }
    if (((((((0x0000004800000024ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000000400000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000012000000090ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__198(vlSelf);
    }
    if ((((((0x0004004000020020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0001000000010000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0010010000080080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1365(vlSelf);
    }
    if (((0x0000000008010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__200(vlSelf);
    }
    if ((((((0x0000104000000820ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000040000000400ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000410000002080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__201(vlSelf);
    }
    if ((((((0x0200004001000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0080000000800000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0800010004000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__202(vlSelf);
    }
    if (((((((0x8000004040000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (2ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x2000000020000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010100000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1473(vlSelf);
    }
    if ((((((0x0000084000000420ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000020000000200ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000210000001080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__204(vlSelf);
    }
    if ((((((0x000000c000000060ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000002000000020ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000030000000180ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__205(vlSelf);
    }
    if ((((((0x00000140000000a0ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000004000000040ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000050000000280ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__206(vlSelf);
    }
    if (((((((0x0000005000000028ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000000800000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x00000140000000a0ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__207(vlSelf);
    }
    if (((((((0x0000004100000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (8ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x8000000080000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010400000082ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__208(vlSelf);
    }
    if ((((((0x2000004010000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0800000008000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x8000010040000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1366(vlSelf);
    }
    if (((((((0x0000006000000030ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000001000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x00000180000000c0ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__210(vlSelf);
    }
    if (((((((0x0000004080000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (4ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x4000000040000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010200000081ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1384(vlSelf);
    }
    if ((0x4d00400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__212(vlSelf);
    }
    if (((0x003e800000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__213(vlSelf);
    }
    if ((0x0de0400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__214(vlSelf);
    }
    if ((0x001e400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__215(vlSelf);
    }
    if (((0x00000f0000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__216(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000390ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__217(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000010ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004390ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000004ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__218(vlSelf);
    }
    if ((((((0x1000004008000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0400000004000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x4000010020000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__219(vlSelf);
    }
    if ((((((0x0400004002000020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0100000001000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x1000010008000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__220(vlSelf);
    }
    if ((((((0x0080004000400020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0020000000200000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0200010001000080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__221(vlSelf);
    }
    if ((((1ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc000400000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__222(vlSelf);
    }
    if ((((1ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc000200000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__223(vlSelf);
    }
    if (((0x0801002034000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__224(vlSelf);
    }
    if ((((((0x0040004000200020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0010000000100000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0100010000800080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__225(vlSelf);
    }
    if (((0x0000000003fc0000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__226(vlSelf);
    }
    if ((((((0x0002004000010020ULL & vlSelfRef.__VnbaTriggered[19U]) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000800000008000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0008010000040080ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__227(vlSelf);
    }
    if (((0x000000000002fc00ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__228(vlSelf);
    }
    if (((((((0x0000004400000022ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000000200000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000011000000088ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1378(vlSelf);
    }
    if (((((((0x0000004200000021ULL & vlSelfRef.__VnbaTriggered[19U]) 
             | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[21U])) 
            | (0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[22U])) 
           | (0x0000000100000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
          | (0x0000010800000084ULL & vlSelfRef.__VnbaTriggered[20U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__230(vlSelf);
    }
    if (((0x0000000048010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__231(vlSelf);
    }
    if ((0x7d00400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__232(vlSelf);
    }
    if (((0xfd00400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__233(vlSelf);
    }
    if (((0x007e800000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__234(vlSelf);
    }
    if ((0x00fe400000000000ULL & vlSelfRef.__VnbaTriggered[21U])) {
        VysyxSoCFull___024root___nba_comb__TOP__235(vlSelf);
    }
    if ((((0x000000000000001eULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x00001fc000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__236(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000790ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__237(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000001f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__238(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000020ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004790ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000008ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__239(vlSelf);
    }
    if ((((0x000000000000001eULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x080100e034000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__240(vlSelf);
    }
    if (((0x00000000c8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__241(vlSelf);
    }
    if (((0x00000007c8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__242(vlSelf);
    }
    if (((0xfd00400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x000000000000002fULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__243(vlSelf);
    }
    if (((0x00fe800000000000ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__244(vlSelf);
    }
    if ((((0x000000000000001eULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0x00003fc000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__245(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000080ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000005f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000020ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1421(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000000f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__247(vlSelf);
    }
    if (((((0x0000104000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x000fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000410000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1419(vlSelf);
    }
    if (((((0x0000204000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x001fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000810000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1432(vlSelf);
    }
    if (((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__250(vlSelf);
        vlSelfRef.__Vm_traceActivity[278U] = 1U;
    }
    if (((0x001fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__251(vlSelf);
    }
    if (((0x0001c00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__252(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8017fe034000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__253(vlSelf);
    }
    if (((0x00000001c8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__254(vlSelf);
    }
    if (((0x0000000fc8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__255(vlSelf);
    }
    if (((((0x8000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfd00400000000002ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x000000000000406fULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__256(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc0feffc000000000ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__257(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000040ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000004f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000010ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__258(vlSelf);
    }
    if (((((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000400000000100ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000040ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__259(vlSelf);
    }
    if (((((0x0000014000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000050000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1397(vlSelf);
    }
    if (((((0x0000024000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0001c00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000090000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1412(vlSelf);
    }
    if (((0x003fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__262(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003fbfULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__263(vlSelf);
    }
    if (((((0x0000044000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0003c00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000110000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1410(vlSelf);
    }
    if (((((0x0000084000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000210000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1423(vlSelf);
    }
    if (((0x05ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__266(vlSelf);
    }
    if (((0x7dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__267(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__268(vlSelf);
    }
    if (((0x00ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__269(vlSelf);
    }
    if (((0x001fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__270(vlSelf);
    }
    if (((0x00000003c8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__271(vlSelf);
    }
    if (((0x00000007c8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__272(vlSelf);
    }
    if (((0x0000001fc8010020ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__273(vlSelf);
    }
    if (((0x007fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__274(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003fffULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__275(vlSelf);
    }
    if (((0x0dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__276(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__277(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f91ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__278(vlSelf);
    }
    if (((0x0dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__279(vlSelf);
    }
    if (((0x01ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__280(vlSelf);
        vlSelfRef.__Vm_traceActivity[279U] = 1U;
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f91ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__281(vlSelf);
    }
    if (((((0x0008004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x05ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0020010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__282(vlSelf);
    }
    if (((0x007fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__283(vlSelf);
    }
    if (((0x003fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__284(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f93ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__285(vlSelf);
        vlSelfRef.__Vm_traceActivity[280U] = 1U;
    }
    if (((0x0000001fc8010060ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__286(vlSelf);
    }
    if (((0x0000001fc80100e0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__287(vlSelf);
    }
    if (((((0x0000804000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x007fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0002010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__288(vlSelf);
    }
    if (((((0x8000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000002ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007fffULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__289(vlSelf);
    }
    if (((((0x0010004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x0dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0040010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__290(vlSelf);
    }
    if (((((0x0100004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0400010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__291(vlSelf);
    }
    if (((((0x0200004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f91ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0800010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__292(vlSelf);
    }
    if (((((0x0020004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x1dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0080010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1439(vlSelf);
    }
    if (((0x3dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__294(vlSelf);
    }
    if (((0x3dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__295(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f97ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__296(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000003f9fULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__297(vlSelf);
    }
    if (((0x01ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__298(vlSelf);
    }
    if (((((0x0001004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x00ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0004010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__299(vlSelf);
    }
    if (((((0x0000404000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x003fc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0001010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__300(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f97ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__301(vlSelf);
    }
    if (((((0x0400004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f93ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x1000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___act_comb__TOP__1469(vlSelf);
    }
    if (((0x0000001fc80101e0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__303(vlSelf);
    }
    if (((((0x0040004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x3dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0100010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__304(vlSelf);
    }
    if (((0x7dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__305(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007f9fULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__306(vlSelf);
    }
    if (((0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U]) 
         | (0x0000000000007fbfULL & vlSelfRef.__VnbaTriggered[22U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__307(vlSelf);
    }
    if (((((0x0002004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x01ffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0008010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__308(vlSelf);
    }
    if (((((0x0800004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f97ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x2000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__309(vlSelf);
    }
    if (((0x0000001fc80103e0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__310(vlSelf);
    }
    if (((((0x0080004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0x7dffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f90ULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0200010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__311(vlSelf);
    }
    if (((((0x1000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000000ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007f9fULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x4000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__312(vlSelf);
    }
    if (((((0x4000004000000000ULL & vlSelfRef.__VnbaTriggered[19U]) 
           | (0xfdffc00000000001ULL & vlSelfRef.__VnbaTriggered[21U])) 
          | (0x0000000000007fbfULL & vlSelfRef.__VnbaTriggered[22U])) 
         | (0x0000010000000000ULL & vlSelfRef.__VnbaTriggered[20U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__313(vlSelf);
    }
    if (((0x0000001fc80107e0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__314(vlSelf);
    }
    if (((0x0000001fdfffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__315(vlSelf);
    }
    if (((0x0000001fc803ffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__316(vlSelf);
    }
    if (((0x0000001fcbffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__317(vlSelf);
    }
    if (((0x0000001fc8010fe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__318(vlSelf);
    }
    if (((0x0000001fc8011fe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__319(vlSelf);
    }
    if (((0x0000001fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__320(vlSelf);
    }
    if (((0x0001003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__321(vlSelf);
    }
    if (((0x0000001fc807ffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__322(vlSelf);
    }
    if (((0x0000001fc83fffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__323(vlSelf);
    }
    if (((0x0000001fcfffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__324(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8017fffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__325(vlSelf);
    }
    if (((0x0801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__326(vlSelf);
    }
    if (((0x0000001fdfffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__327(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__328(vlSelf);
    }
    if ((((1ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__329(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80100ffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__330(vlSelf);
    }
    if (((0x0000001fc8013fe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__331(vlSelf);
    }
    if (((0x0000001fc8017fe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__332(vlSelf);
    }
    if (((0x0000001fc801ffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__333(vlSelf);
    }
    if (((0x0000001fc803ffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__334(vlSelf);
    }
    if (((0x0000003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__335(vlSelf);
    }
    if (((0x0000001fc80fffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__336(vlSelf);
    }
    if (((0x0000001fc81fffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__337(vlSelf);
    }
    if (((0x0000001fc87fffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__338(vlSelf);
    }
    if (((0x0000001fc8ffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__339(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc801ffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__340(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc9ffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__341(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc83fffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__342(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc87fffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__343(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80fffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__344(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc807ffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__345(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xcbffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__346(vlSelf);
    }
    if (((0x0b01003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__347(vlSelf);
    }
    if (((0x4801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__348(vlSelf);
    }
    if (((0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__349(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc803ffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__350(vlSelf);
    }
    if ((((7ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__351(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[19U]) | 
          (0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__352(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8013fffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__353(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__354(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80101ffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__355(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80103ffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__356(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80107ffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__357(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8010fffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__358(vlSelf);
    }
    if (((0x0000001fc9ffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__359(vlSelf);
    }
    if (((0x0000001fcbffffe0ULL & vlSelfRef.__VnbaTriggered[18U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__360(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8ffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__361(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc81fffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__362(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80fffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__363(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc83fffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__364(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xffffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__365(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xcbffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__366(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc807ffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__367(vlSelf);
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc801003fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__368(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8017fffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__369(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc801007fffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__370(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc80100ffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__371(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8011fffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__372(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xcfffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__373(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xdfffffffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__374(vlSelf);
    }
    if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[19U]) 
          | (0xc8013fffffffffe0ULL & vlSelfRef.__VnbaTriggered[18U])) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VysyxSoCFull___024root___nba_comb__TOP__375(vlSelf);
    }
}

void VysyxSoCFull___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 23> &out, const VlUnpacked<QData/*63:0*/, 23> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0x00000016U >= n));
}

void VysyxSoCFull___024root___eval_triggers_vec__act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 23> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VysyxSoCFull___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 23> &in);
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VysyxSoCFull___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VysyxSoCFull___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        VysyxSoCFull___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VysyxSoCFull___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 23> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((0x00000017U > n));
}

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VysyxSoCFull___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        VysyxSoCFull___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VysyxSoCFull___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VysyxSoCFull___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VysyxSoCFull___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
}
#endif  // VL_DEBUG
