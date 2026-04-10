// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_hf053abcd_0;

void VysyxSoCFull___024root___act_comb__TOP__690(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__690\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx452;
    __Vtableidx452 = 0;
    // Body
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
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshT3W4SoRJrlGSlYEiQdVmRApwr3KLNVNbCTVPAALU__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh75csRmbtJKpDkzMZtRFcIsGNefaUR5zKcf0gXxSz)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh6LsLFQJunypyQg9AehHnfEHgzNDHrbpfrGURM0BM) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax))) 
                    & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshanpMugaUKsxyUX9VRxR9NariSNUCY7ngFQ38M8G0__DOT__B) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshT3W4SoRJrlGSlYEiQdVmRApwr3KLNVNbCTVPAALU__DOT__B) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_5___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_5___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__691(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__691\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx466;
    __Vtableidx466 = 0;
    // Body
    __Vtableidx466 = ((4U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshp6rDMxT04jJJUKAa6fBX8xivxWBHBTN4yHelU1m5 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx466];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh8CD43SLQ4XUcNR53ZATk8QFZ3aRhcI3XK39gasBC__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshKQcM2jF5Exi1lqLfLllnRLMNfP2wRMwhx0a2IgxX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshp6rDMxT04jJJUKAa6fBX8xivxWBHBTN4yHelU1m5))) 
                    | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)))) 
                          & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshrsOReta8K3xGsmBKgjxZ3dPMeDwlLz8L4IyBiy68__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh8CD43SLQ4XUcNR53ZATk8QFZ3aRhcI3XK39gasBC__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_6___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_6___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__692(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__692\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx113;
    __Vtableidx113 = 0;
    // Body
    __Vtableidx113 = ((4U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshflTiKdaAIWUk493kLtAVNeExD5Ot0jAs1QiC3LfH__DOT__B) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshImZOLV8QNtxoygpM9lAEKKWLDXAs0qPV8ihiqu6F 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx113];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshB92VGfanYFTrZe4zQATfVTyLMyKmeQOJVi5e3k1L__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshImZOLV8QNtxoygpM9lAEKKWLDXAs0qPV8ihiqu6F))) 
                    | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv))) 
                          & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshflTiKdaAIWUk493kLtAVNeExD5Ot0jAs1QiC3LfH__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__693(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__693\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx470;
    __Vtableidx470 = 0;
    // Body
    __Vtableidx470 = ((4U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshV6tqgXzSmh9ynRholNsmDASQex6crYrqjATuKK13__DOT__B) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b7__05d_reg_p__DOT__n0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshAklf4vG0bUqcppASnK8mM6W6cvAToE3A9472Q5sN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx470];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_OR2X1P4H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHZ05BHqZGbVIkvGt2BZgGxY0khLLk6y0AWcIBMPx__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshAklf4vG0bUqcppASnK8mM6W6cvAToE3A9472Q5sN) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax))) 
                    & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshV6tqgXzSmh9ynRholNsmDASQex6crYrqjATuKK13__DOT__B) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_NOR2X0P5H7L_B_Y_NOR2X0P5H7L_B_A_BUFX3H7L_A__DOT__Y) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B))) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshV6tqgXzSmh9ynRholNsmDASQex6crYrqjATuKK13__DOT__B) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__com_encode_vaild_NOR2BX1P4H7L_AN__DOT__Ax)))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_A_NAND2X0P5H7L_A__DOT__A) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_7___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHZ05BHqZGbVIkvGt2BZgGxY0khLLk6y0AWcIBMPx__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_7___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_7___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__694(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__694\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx418;
    __Vtableidx418 = 0;
    CData/*2:0*/ __Vtableidx419;
    __Vtableidx419 = 0;
    // Body
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
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshMyxosjWdOEYMhuTpwUX3rXIIHGi7DBKzqhd3T8Ii__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshFclsQvlmY6eSkca2eqMnwROn1vkvBvFZoT9vWdiU) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshesNfw2FD0WyYWefZJAsa54DgQbFr2h3dw6yKoZAK));
    __Vtableidx418 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBabiAi1t1jFtdgO9jigFRy2rgjeah9OvkwkE6V1q) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshTsX9uBVSt0msZnJPMoqiH8uc0tmfRPunmzhkpFdi__DOT__B) 
                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)))) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshMUj6nIxjo01RFXJvhdaC3Dg6LR5BDAB1SKgX7ZoI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx418];
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
}

void VysyxSoCFull___024root___act_comb__TOP__695(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__695\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx107 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_2__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshChTXieBXVovvQfpjY3M8vBWcqYKOAE4Z1r2VNcKD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx107];
}

void VysyxSoCFull___024root___act_comb__TOP__696(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__696\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx227 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_4__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshfBpVZ1XvV0mqGOZGdX0nomsscR4kVNAo7FKPNW9a 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx227];
}

void VysyxSoCFull___024root___act_comb__TOP__697(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__697\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx224 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_5__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh6N60q7IF3Aiuh2tARFr9Adw2b9nP1MOMhkDpikrX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx224];
}

void VysyxSoCFull___024root___act_comb__TOP__698(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__698\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx225 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_6__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCCrM5fl9ghHAueiYkavosekbFB0h4xnxUsH4hfxN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx225];
}

void VysyxSoCFull___024root___act_comb__TOP__699(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__699\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshpmvc0BPPt6pokHCBlooY60GYiQwSALGR3RQeLlGV__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_7__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__700(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__700\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdRCfztlVCfCffIuP5B9FzKG3zHOPzrpBblg0iSZy__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_8__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__701(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__701\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshEHRwvSXewBIXASAfFXV5zeM1TAgBBaOvLWKMB26d__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_9__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__702(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__702\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx217 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_12__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshL4Jj9QASYvB8l6VwgESkzwBEPBPPzUAO1xr8YSU1 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx217];
}

void VysyxSoCFull___024root___act_comb__TOP__703(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__703\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx213 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_13__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshGUMkxhhCAvhcQDEBmPmk0E6W1bS3zCEJJRpu1OOK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx213];
}

void VysyxSoCFull___024root___act_comb__TOP__704(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__704\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx214 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_14__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh4fjW1clLZbjtWYJFBW5fJ7gdDQpdnhp2PHArRAc0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx214];
}

void VysyxSoCFull___024root___act_comb__TOP__705(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__705\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx209 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_15__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHnG4AJh4ATAgsUaN8HhS1F488PvZJQADiLImhbN0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx209];
}

void VysyxSoCFull___024root___act_comb__TOP__706(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__706\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx210 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_16__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshPw9wak5gUwIr4G4tlWtDCDJB1lqB03kgB5fDcSSQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx210];
}

void VysyxSoCFull___024root___act_comb__TOP__707(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__707\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx207 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_17__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshRsLdMKnfS91KrBlkTmskbiBVZDDuSuKOZb3UDGH1 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx207];
}

void VysyxSoCFull___024root___act_comb__TOP__708(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__708\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh0FvrDts7Q3ElR6K0JMYu83YAuXXuCr69kCDDWrIK__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_18__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__709(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__709\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx197 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_19__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshMwGBPzxXVj6nJg4bPM1LIbYIBiuAuAnGBxHggztD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx197];
}

void VysyxSoCFull___024root___act_comb__TOP__710(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__710\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx202 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_22__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshEgx1rWKvp4A5dtZYb59BsasxHA4TMY3X7L3FrKsL 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx202];
}

void VysyxSoCFull___024root___act_comb__TOP__711(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__711\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx190 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_23__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhsharkGUQbrADtmMEKBKEh9DGQEZsku4q7zsehXLnF0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx190];
}

void VysyxSoCFull___024root___act_comb__TOP__712(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__712\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshCEYYTyPEsEPqiIU1jENp8jifBbMf7oo2CW8qsKwU__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_24__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__713(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__713\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx193 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_25__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshaV4vBrjrCL6BekmdSegt3BRGmdT0sGFvfHF2AZbb 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx193];
}

void VysyxSoCFull___024root___act_comb__TOP__714(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__714\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx194 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_26__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshyr9pDXFZLkWy0LgD5jwgpFvAMgbSmO9HnBywdYdC 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx194];
}

void VysyxSoCFull___024root___act_comb__TOP__715(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__715\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx180 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_28__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh78j4pVVi2f5KsI2tF5ZceGJNOiA0EJGcZktLm4wY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx180];
}

void VysyxSoCFull___024root___act_comb__TOP__716(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__716\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx185 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_29__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshSol3a6baXMurqcNtn4K7ndBY4B4vtcZoKaIfhB1D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx185];
}

void VysyxSoCFull___024root___act_comb__TOP__717(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__717\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx186 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_30__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshKhIzcQap2HcwTDbwZ93c9RBCQPBziOUdVHNB6UYs 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx186];
}

void VysyxSoCFull___024root___act_comb__TOP__718(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__718\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx183 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh24MXRYBaQ29DRIMa85jKTIjBG2gUzQAOLLBomZty 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx183];
}

void VysyxSoCFull___024root___act_comb__TOP__719(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__719\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx176 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_1__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshD062rCsoqEV9ExzhteNtlpYDZSlmlC4BgMAOHsCa 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx176];
}

void VysyxSoCFull___024root___act_comb__TOP__720(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__720\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx386;
    __Vtableidx386 = 0;
    // Body
    __Vtableidx386 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshGcX78hO0FSaXMpOtknzrjAMyHjjxrAte8j4A8pnL 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx386];
}

void VysyxSoCFull___024root___act_comb__TOP__721(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__721\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshMfrWjpykhDDQDeJLgXlFl5hoSmlR0AlORT5zUpWw__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)))))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__722(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__722\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshXD79dQTBmJvJzIbE3VQ7oZAUXJiuuleW0s2jTLmc__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__723(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__723\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshjo1fvSAxiLcv39buJAX9rPtXZVmJE7WBArWfwAhT__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__724(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__724\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1fXOjuZjTIFUdIiaraP1m9Viu1zrdy6WNG9lzz6f__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__725(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__725\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshV3rXOTLhTTLuzrRZIT84UAyER4YlkFxRMcarMhTt__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)))))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__726(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__726\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh2iC96Z65RqwkVXuB1nGf8x2lDquw9zBG7pZGuvpP__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__727(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__727\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHHcsmGzA7yFAAivzQB1lox43zJJYmrYo5AwWXI2Z__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__728(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__728\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh5oWsDwBzabBcUNeWNeTAyNSX1zytwh6OBQwJgkwH__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshlTTgPjr635A1lAOzfBiC4CdqLfFFhqfPbPDZxGnX__DOT__B0) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA)) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshAui8weYEiu7ANsh2vSh0xYBeyIdvjMIaOSci5Nq4__DOT__A2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__729(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__729\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx116;
    __Vtableidx116 = 0;
    CData/*2:0*/ __Vtableidx117;
    __Vtableidx117 = 0;
    // Body
    __Vtableidx116 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshvZyAAKcu53hcAvxkRuACtP4BMOYCPi9xLn5K2oSI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx116];
    __Vtableidx117 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshlC5TNdHYAvf3nI9pGOMzCkHRXlSrm3LCj974GH9r 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx117];
}

void VysyxSoCFull___024root___act_comb__TOP__730(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__730\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx111;
    __Vtableidx111 = 0;
    CData/*2:0*/ __Vtableidx112;
    __Vtableidx112 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshtgGyUy6w9Qo9tKu7iX3AXeE1LVMQR5E5yG91ALvr__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
    __Vtableidx112 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshflTiKdaAIWUk493kLtAVNeExD5Ot0jAs1QiC3LfH__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh3FnzKiZAIshgJJjlJBeaxjDUCzYGAOf1vRVTi98N 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx112];
    __Vtableidx111 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh3FnzKiZAIshgJJjlJBeaxjDUCzYGAOf1vRVTi98N) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b10__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshJv7fEKjLAgkg0Xb9KeO8XknClmRYsL4eNFG66Q3H 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx111];
}

void VysyxSoCFull___024root___act_comb__TOP__731(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__731\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx300;
    __Vtableidx300 = 0;
    // Body
    __Vtableidx300 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshPAKxBJOvvERhI8JqravHZZxv0OgM8qYUIrWc6b85 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx300];
}

void VysyxSoCFull___024root___act_comb__TOP__732(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__732\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshUxwXnlgWM0kQ3vJhO0bahioFyL7KNSOhLKfAZvBl__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_43 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshUxwXnlgWM0kQ3vJhO0bahioFyL7KNSOhLKfAZvBl__DOT__outA)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__B)));
}

void VysyxSoCFull___024root___act_comb__TOP__733(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__733\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx463;
    __Vtableidx463 = 0;
    // Body
    __Vtableidx463 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__B) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx463];
}

void VysyxSoCFull___024root___act_comb__TOP__734(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__734\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx462;
    __Vtableidx462 = 0;
    // Body
    __Vtableidx462 = ((4U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__B) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y)) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__A) 
                                                          | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshZofPWNLBWUAibXXbzCXGtqea6tINehrvll0BDhQx__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx462];
}

void VysyxSoCFull___024root___act_comb__TOP__735(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__735\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0ZuasBFmeRjnxYJAGBcXM0AQNqICTzdcir14Qr7t__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshmdiqHg1c7My3mpC23R43jEHTr30ZBqc55fRsD93t__DOT__Ax)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshGzU4ZZ4Se7AyI2Z5XRBYaBtGeJdv6txbDAtN038u__DOT__C)))));
}

void VysyxSoCFull___024root___act_comb__TOP__736(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__736\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshloaHWGygk5EcAA5u4BJm34ERB1TL2tjnZ9Btx8pe__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshGzU4ZZ4Se7AyI2Z5XRBYaBtGeJdv6txbDAtN038u__DOT__C) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_59));
}

void VysyxSoCFull___024root___act_comb__TOP__737(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__737\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx231;
    __Vtableidx231 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBn2GgXjdr5AUdVMRF3442XMIzpv1sy5DgU1arKjw__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
    __Vtableidx231 = ((4U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshyPKwSGrGQygilhUrmvf0v7Ewimp7g1xaSjBxAj05__DOT__B) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y))) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshxj1H1n8uBphBAusZdVE1ucTPKOzbw25NBfxmhTGV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx231];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0))) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh3jJfX5AVhQRqf9pd56FGFucHoqnzv9xPYgjgroIY__DOT__S0) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)))) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4bZO9OZLAAPUeEdz9r29ECd9pe2ewBsP4IoS6BQY__DOT__Y) 
                     & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y))) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXghnjrsgFZtIHoovZM1KAqcm9ehqsFKoB5l8KB2P__DOT__Y)))))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh2UuYlX3abqtHJnSRciKBopLKCpFrsprMAMR5w1sb__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__738(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__738\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx130;
    __Vtableidx130 = 0;
    CData/*2:0*/ __Vtableidx133;
    __Vtableidx133 = 0;
    // Body
    __Vtableidx130 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshvKCHil3igmeQOMIR2BgumA5PCKDriq5MrXeCAhuR 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx130];
    __Vtableidx133 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshk4aCIIy0AeggTc6bRfIx4AT5jOhp7EkBxeALE84x 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx133];
}

void VysyxSoCFull___024root___act_comb__TOP__739(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__739\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx291;
    __Vtableidx291 = 0;
    // Body
    __Vtableidx291 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshzkopzvzuSEIN85vDuzi3vbdHJAWJH9kVB6uUzqNb 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx291];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshroTKcBU4DPj0wHcm5ZcMcHkhANlxjlvUheLL7sWP__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshk4aCIIy0AeggTc6bRfIx4AT5jOhp7EkBxeALE84x))));
}

void VysyxSoCFull___024root___act_comb__TOP__740(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__740\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__C 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__741(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__741\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx134;
    __Vtableidx134 = 0;
    // Body
    __Vtableidx134 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshJvd00yG3sbwBFuDZs4fX4sRESKz8g2zim4KEf1jW__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshCM9jOZKDUUVDAdFmvVM0QJSIPKLBH32ZKslci3Bo 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx134];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshSfKyOIMBS3zhhxb5lZLlIpkxAugIcqDOgBUeg1EV__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax))))));
}

void VysyxSoCFull___024root___act_comb__TOP__742(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__742\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx341;
    __Vtableidx341 = 0;
    // Body
    __Vtableidx341 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhshc6GKsbhwhnbGhxEAUNekeaGwhsYABhuufcERqNb5 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx341];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshNyZpUgJJaWpSTEmBrA6cg1yBhpGBy6nORitobnvR__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__743(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__743\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx339;
    __Vtableidx339 = 0;
    // Body
    __Vtableidx339 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshnpgSHGfbiJcSD58N1yBOaf19G7vdx6TFj8bSfqJG__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhshb5xtxYLUrVzucHzoCvyPk8PDfR0Us3XQ5QtnYcrB 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx339];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshQgC57XkT2h5XUBsB4NOSj7Xr9aSLRwTEwujfBBfj__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__744(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__744\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx336;
    __Vtableidx336 = 0;
    // Body
    __Vtableidx336 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshHDIw3DvH4BpV6CAVjNWmpAyR7ydBAnK4ElbIvzsD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx336];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__A 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__B0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__B0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__745(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__745\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshzYuD7UPNq4h2IApbOZNX6y4d7klGRseHcgWIaTFD__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv));
}

void VysyxSoCFull___024root___act_comb__TOP__746(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__746\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx495;
    __Vtableidx495 = 0;
    // Body
    __Vtableidx495 = ((4U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh5hrQb9R5WcAWSsjJQ2dNjB8dwsrVlRJDS6qAt1w2__DOT__A) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y))) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHUjH5lQ5NzUlR5NT1nnih75NbT8G0WpyXtOyQohM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx495];
}

void VysyxSoCFull___024root___act_comb__TOP__747(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__747\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx171;
    __Vtableidx171 = 0;
    // Body
    __Vtableidx171 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshX6FpELMt5Bh04X0fFDhG6sBAtqwhol1N0aNBFTZ7__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshJ5DQZXXAiwRtob82YnJZYUQKZZJno129CUB2q8Ci 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx171];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshaqBPCqfRV6CH47HKBbbXetSLs0h7yAeeaEBxa2vy__DOT__Y 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__Y) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__748(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__748\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshf2cqjnmrLS0ln5EEen0j3XGtPOL8FvJfqatBpj08__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhsh5AAr5R1zuZ7vgQT2SKKgvpNrZnaIMNZT7QlPWdTn__DOT__Y) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTEZH2RAxH5VQPQ5OMspO19I20uBgg5B0AhLjISmY__DOT__C)));
}

void VysyxSoCFull___024root___act_comb__TOP__749(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__749\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx228;
    __Vtableidx228 = 0;
    CData/*2:0*/ __Vtableidx229;
    __Vtableidx229 = 0;
    // Body
    __Vtableidx229 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshyPKwSGrGQygilhUrmvf0v7Ewimp7g1xaSjBxAj05__DOT__B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxjlBu4B3QhsIMcWRng2g5z9SQzAJphxKgZzoLyjq__DOT__Y) 
                                  << 1U) | (1U & (~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshmsBetSRVvOACFmtFf66YyOi0kcvXcf4BLYTnsbS0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx229];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh5Us5QRlP9FTKdArg22VdA6qjZr7AUPrrdpA2cbxY__DOT__Y 
        = (1U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0))) 
                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshxj1H1n8uBphBAusZdVE1ucTPKOzbw25NBfxmhTGV)));
    __Vtableidx228 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshmsBetSRVvOACFmtFf66YyOi0kcvXcf4BLYTnsbS0)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshfcTyZJ2x5F7SFtSeznXh9MQR61n6d38t9jZ6cK2x 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx228];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshfcTyZJ2x5F7SFtSeznXh9MQR61n6d38t9jZ6cK2x) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshyPKwSGrGQygilhUrmvf0v7Ewimp7g1xaSjBxAj05__DOT__B) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y)))))) 
                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh5Us5QRlP9FTKdArg22VdA6qjZr7AUPrrdpA2cbxY__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLDBnP0gY369tWkiRRRWKaJ1E5k5Ll3hxbHSftAMj__DOT__B) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_1___05Freg_p__DOT__D 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)) 
                 | (IData)(vlSelfRef.reset)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_1___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__750(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__750\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshqwoW36gBpUtqlMHiEpqupsNjg4dQ5KqGIDfV8GU2__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0));
}

void VysyxSoCFull___024root___act_comb__TOP__751(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__751\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshcFgp00sNYcsGQeNwWpQgJvOob3VxHxhZW7QJPs9D__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__752(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__752\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh3bspnj0e1Fl9r1OruzX8uJAgOMp5UvpiAA9uBbzz__DOT__AN 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b1__05d_reg_p__DOT__n0)))) 
                 | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))))));
}

void VysyxSoCFull___024root___act_comb__TOP__753(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__753\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ523Nw72k4LVWUwain5YapIsU8yPHF365kLtAzKt__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_3__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__754(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__754\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx340;
    __Vtableidx340 = 0;
    CData/*2:0*/ __Vtableidx356;
    __Vtableidx356 = 0;
    // Body
    __Vtableidx340 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshT0S6cY4swB5BdRhDGxPz6SJwVaZIC1lV4L6yKSuZ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx340];
    __Vtableidx356 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshWRVQpKrSvQNXkrADKxfnj3CiK8yxvFu4lDycEwFu 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx356];
}

void VysyxSoCFull___024root___act_comb__TOP__755(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__755\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx353;
    __Vtableidx353 = 0;
    // Body
    __Vtableidx353 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh1Cf7uAAxeoSw5nIaYAaRe7NeFfbYnAsClg8oaFjN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx353];
}

void VysyxSoCFull___024root___act_comb__TOP__756(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__756\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshXQMFA0g7WbGSBTApmWC2i2ALMWo2NaK7GIjoN0FY__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__757(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__757\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    // Body
    __Vtableidx97 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                            << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                              << 1U)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b29__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshM4BpOKzdWZC2BadBWzRne5qY7WZchbGDcQC6z4Ek 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx97];
}

void VysyxSoCFull___024root___act_comb__TOP__758(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__758\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__759(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__759\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx363 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_31__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBfhPBAkDLgjNbB5SMyPdByPwlUXfWHuqr5nK1npZ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx363];
}

void VysyxSoCFull___024root___act_comb__TOP__760(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__760\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx402;
    __Vtableidx402 = 0;
    // Body
    __Vtableidx402 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshqPc33XB5mXaBQtu6gNa3A25cn1klGYkeTlb3qhpK__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshQxIvbsKykw851TAIk3udVHMePy8tqHHUuPAYoTCb__DOT__A1)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshWCpHWAZlAeUKyDY8gODSlzHVgulfzK68O8beWOB3__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx402];
}

void VysyxSoCFull___024root___act_comb__TOP__761(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__761\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshuT4B8nvCi1v3D6wYhRjeqI6m3dNWa5XjUiD7Hu7v__DOT__B0) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshqPc33XB5mXaBQtu6gNa3A25cn1klGYkeTlb3qhpK__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshQxIvbsKykw851TAIk3udVHMePy8tqHHUuPAYoTCb__DOT__A1))));
}

void VysyxSoCFull___024root___act_comb__TOP__762(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__762\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshZAivutLkijxAUZkQFlgAp9whIRkSSUr3sdZRWRPG__DOT__Ax)) 
                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmBHx0Y5iq5O06sof2HAYALW1bBViUQk6aWp7Kkbd__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN))))));
    __Vtableidx81 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshC7qEX3afQAF6LkCO0FoiQjLc3UqKgH3dCYJ2r3Q1) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrukUMwB2mX348lk4BEaLTkm3ZrFBNyVSUIyxC3ki 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx81];
}

void VysyxSoCFull___024root___act_comb__TOP__763(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__763\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshwRkMqFKx6rBywQ6sSHtNuQcD9hm9ch2NEm1n5DL8__DOT__Y) 
                    & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_464)))));
}

void VysyxSoCFull___024root___act_comb__TOP__764(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__764\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__C0 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b26__05d_reg_p__DOT__n0) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b27__05d_reg_p__DOT__n0))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__C) 
                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_464))));
}

void VysyxSoCFull___024root___act_comb__TOP__765(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__765\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshqDqgjUXsYYKOeV8PU5fBPYAzf9RPWDoclIsQ7FQY__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__766(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__766\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYlEX0TWxcOcUvk1JAwfPboK62BEhf56MH7oZfAeq__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshA3SvVRKD1sx041J7CFnazftCMYRYf2xICTzPp7Kg__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_54)))));
}

void VysyxSoCFull___024root___act_comb__TOP__767(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__767\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA8Zq7rcDht4NA1et4J3vK33gPbHqdEeU5NeQma9a__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshWCTTbhYKyXSkzBtIBxqjD33KXkOeCGk1hUOB4Qcx__DOT__Z) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshkuGm4NIpiK0QcQGc7AbDGn1NPvmNDhfrWN1IX0pf__DOT__outA)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_56)))));
}

void VysyxSoCFull___024root___act_comb__TOP__768(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__768\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshnkzfWiO2Vs90fAch7rQfMEh33ARYxpocB181WfmL__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_469)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshjy1movpObsehstoXnGruotcp2igkIAbqVnJAn0Up__DOT__Y) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__769(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__769\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx170;
    __Vtableidx170 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshtxiAQzAowaOrfAxzBqaoq1R9gacQRAUDmG5qNmcb__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))));
    __Vtableidx170 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh3Bxeh1J5FVprBVyJO7hJPtBII8v187FsyWxUTalN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx170];
}

void VysyxSoCFull___024root___act_comb__TOP__770(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__770\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx316;
    __Vtableidx316 = 0;
    // Body
    __Vtableidx316 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshGYR5QOjDsEPmv7ulTXBARCAv7KC5Ka2KLDIOOSFq 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx316];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshABp50Sm3FXnm6ayBINThOJz9iiAnUAaybD1shU38__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh3Bxeh1J5FVprBVyJO7hJPtBII8v187FsyWxUTalN)));
}

void VysyxSoCFull___024root___act_comb__TOP__771(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__771\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx168;
    __Vtableidx168 = 0;
    // Body
    __Vtableidx168 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b18__05d_reg_p__DOT__n0))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshDYSK1mDXXVqTfBXeK9o9Cm897vU1vztVtc5ZJVqh 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx168];
}

void VysyxSoCFull___024root___act_comb__TOP__772(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__772\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshuBrf0smP2aU10yNc0E3LqrB4WJhBwGJrVqj9ZGsj__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshEibz7fhbePJPV7h5Jh5LbiLxwjJgYAmGzUU8hQf4__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_46 = (1U 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshuBrf0smP2aU10yNc0E3LqrB4WJhBwGJrVqj9ZGsj__DOT__B) 
                                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshEibz7fhbePJPV7h5Jh5LbiLxwjJgYAmGzUU8hQf4__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__773(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__773\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSrK94xUooZwh8MlZcmUMBNG4dFk1OQ9WZPZ6MjBB__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b3__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__A1_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSrK94xUooZwh8MlZcmUMBNG4dFk1OQ9WZPZ6MjBB__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__774(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__774\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx198 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_20__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshNqEAGUiRBmjr0CjghpNBgSPUePKANS7wI83Ydpr3 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx198];
}

void VysyxSoCFull___024root___act_comb__TOP__775(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__775\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshRo2lJH7nHJS7R7cJYiWMAEwhacJaVvCFHy5pxwdL__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshuBrf0smP2aU10yNc0E3LqrB4WJhBwGJrVqj9ZGsj__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_47 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshuBrf0smP2aU10yNc0E3LqrB4WJhBwGJrVqj9ZGsj__DOT__Ax)) 
                                                    | (~ 
                                                       ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__776(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__776\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx169;
    __Vtableidx169 = 0;
    // Body
    __Vtableidx169 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshuN55WtRaKv3RTwLBSXWjR5OCl3klK1TuZg3nQAKX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx169];
}

void VysyxSoCFull___024root___act_comb__TOP__777(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__777\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx279;
    __Vtableidx279 = 0;
    // Body
    __Vtableidx279 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshl82XXatZcU4jSNtHibYvKKCLTyzRxbwBBPIfEGCB 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx279];
}

void VysyxSoCFull___024root___act_comb__TOP__778(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__778\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXTceVIH7QeNycZSPeOAdrPRj3uoV1S5BPzS8QDsr__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                     & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                            & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b19__05d_reg_p__DOT__n0)))))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__779(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__779\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhshwf54EUkSms3NNbKbSIc60JzxGJ3dt5k902xpUWDg__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh406lJoTamVIvQPnUPKkVq5A2gU0LNu8AUpae25AP__DOT__B0 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshC6kTWUV557BSvz96sR4CIzjXNK6ZnMMyOYsrHtxF__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3VYwoqOgfZ8FORYbZSVAjrfCLt4VBmLVGVUBZddo__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__780(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__780\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx201 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_21__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh43xjuv4L47R4lEap3K1bQuxETgDV1shxzMEtlRVM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx201];
}

void VysyxSoCFull___024root___act_comb__TOP__781(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__781\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshOIVtF2ljAwJ0ce6HluTgKk0IFQ3BNAC0mbkh4b7U__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b21__05d_reg_p__DOT__n0))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTEZH2RAxH5VQPQ5OMspO19I20uBgg5B0AhLjISmY__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__782(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__782\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_507 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTEZH2RAxH5VQPQ5OMspO19I20uBgg5B0AhLjISmY__DOT__C) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshTEZH2RAxH5VQPQ5OMspO19I20uBgg5B0AhLjISmY__DOT__B));
}

void VysyxSoCFull___024root___act_comb__TOP__783(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__783\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshZZf8djmOcKO8pAy29QZD634HKu42VXbzhsBjONaF__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_471)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__B))));
}

void VysyxSoCFull___024root___act_comb__TOP__784(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__784\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshpt1Tr3WM7aaBjbIj48GvsQLsIy3Jp5nXenCO1COn__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__B) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__785(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__785\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__OUT0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A0));
}

void VysyxSoCFull___024root___act_comb__TOP__786(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__786\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshXe2vB1MUTpEZ0Lo35MFeU1Lljn9BdaA2ufghOmal__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A)) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B)) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshjy1movpObsehstoXnGruotcp2igkIAbqVnJAn0Up__DOT__Y) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshtYJPZokARyQ4NILhMqjLxi2ks3BRS6mGIA1WmNS5__DOT__Y))))) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b17__05d_reg_p__DOT__n0) 
                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_469))));
}

void VysyxSoCFull___024root___act_comb__TOP__787(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__787\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__A0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshOBLKqMTyHs1fRKTYrIQkLDsVtXdg0x7DQ6Mp03bL__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshDfRXB12PdoWsZbAuBZnhVDiKB501bblci3tI6B5K__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__788(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__788\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshxJejHzftUZtcCVxA9a3CRybURBxhfDVPJDyDxnTw__DOT__OUT0 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshDfRXB12PdoWsZbAuBZnhVDiKB501bblci3tI6B5K__DOT__A) 
               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_57))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwzFQxgXlDNXq3qUrV3WopfIIXLefv8Jc8TpmiEkf__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshBCJE6jlQrVvGMOP5hvKoNk8iRfTRWZg0VVCVmv41))));
}

void VysyxSoCFull___024root___act_comb__TOP__789(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__789\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx527;
    __Vtableidx527 = 0;
    // Body
    __Vtableidx527 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshdLy2pfaXI2ooK61c4apRh45T3AV8wdnCVRa3JLHw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx527];
}

void VysyxSoCFull___024root___act_comb__TOP__790(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__790\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx521;
    __Vtableidx521 = 0;
    // Body
    __Vtableidx521 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshciHHne6rhNekoZENkvUAW4I535VBpjzS17aXbjmV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx521];
}

void VysyxSoCFull___024root___act_comb__TOP__791(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__791\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBld0eDAnaatOzycYwd4Keril3UpTGyej1dk7FJ9u__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv)) 
                        & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0)))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__792(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__792\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx496;
    __Vtableidx496 = 0;
    // Body
    __Vtableidx496 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b9__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshE5VhlL4SUzBtLAn7dACtIoccEDffRg30BYtfUD11 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx496];
}

void VysyxSoCFull___024root___act_comb__TOP__793(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__793\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__C0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhshp97v8Big5PnllqGLnK3FcBK54oCnLRB2CpbyZnAA__DOT__Z 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__B0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_69 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__B0) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhshp97v8Big5PnllqGLnK3FcBK54oCnLRB2CpbyZnAA__DOT__Z));
}

void VysyxSoCFull___024root___act_comb__TOP__794(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__794\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx530;
    __Vtableidx530 = 0;
    // Body
    __Vtableidx530 = ((4U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B))) 
                              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b9__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3NuwxRqYEEotdjKAFmcE8buZspU2BpPALpURGiye 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx530];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSCMpNwNszPlGc2XuWWTOKY6nm4IXN81f3x5NtoBD__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtACqkTibKY8FpxrrB6UfhcB8ZBiZCEMdJTB2VT3j)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3NuwxRqYEEotdjKAFmcE8buZspU2BpPALpURGiye))) 
                    | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv))) 
                          & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQBGSx3iX84x3LQ0l3NSmkTnSg2aW8iMUt2o2OQdA__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_B_NOR2BX1P4H7L_Z_B_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__B))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSCMpNwNszPlGc2XuWWTOKY6nm4IXN81f3x5NtoBD__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_9___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_9___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__795(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__795\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx216 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_11__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshLHclwvTmW3x0g3oEL3gJPRrH86TC7mm9ODcpq4PJ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx216];
}

void VysyxSoCFull___024root___act_comb__TOP__796(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__796\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhshu3zBHQ10OeC8mp8TUF8fs29BUtUJMi5jllTmV7T2__DOT__Y) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshZNHgn6BcIt7PBUnBvALxEvPVpNCzXHNzi8an1nn4__DOT__Y) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))))));
}

void VysyxSoCFull___024root___act_comb__TOP__797(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__797\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx292;
    __Vtableidx292 = 0;
    CData/*2:0*/ __Vtableidx293;
    __Vtableidx293 = 0;
    // Body
    __Vtableidx292 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshHBF7WiQgFlt9aZ94XvrnTR8iwF468QyNQH9t4ok2 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx292];
    __Vtableidx293 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshD9sALD07YSr946Xq4CfWFPXfZi4NfL9zT4Nzu0Xz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx293];
}

void VysyxSoCFull___024root___act_comb__TOP__798(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__798\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx276;
    __Vtableidx276 = 0;
    // Body
    __Vtableidx276 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAjxy9xUcM4obe6s3NaQHAEsNZ8J55v1eANxOqLgL 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx276];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshZmw5zDybsgbmxACe6CTCgXYvFypn7ISJ2N8jgIcB__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshD9sALD07YSr946Xq4CfWFPXfZi4NfL9zT4Nzu0Xz) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__799(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__799\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0FA1fwFrTEs0tXpjipy9O5o9U2HUAU2M1yToT6jb__DOT__A) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b5__05d_reg_p__DOT__n0)))))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshzIWmQiXj3eMfZnJ0tMWQnArOkd17Fg8oG6EM6bVT__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__800(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__800\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    // Body
    __Vtableidx88 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                            << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                              << 1U)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b25__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFw0MbkjH4eKqcB19n2SgEA2PhN8KeHi0ymvk70ES 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx88];
}

void VysyxSoCFull___024root___act_comb__TOP__801(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__801\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshA7bkQaStG6MHbn0EMBDHEprAkikiHqwtRVoA700u__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__A0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__B0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__802(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__802\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx179 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_27__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHjZbXBtE9YXr5AAaBsfD8h7weyAtMuVH3nbrrQsg 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx179];
}

void VysyxSoCFull___024root___act_comb__TOP__803(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__803\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshqJdwXGPUSMcEmjLx6tB8EoO2o7OwsIIta5lL4YsF__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshuCuW5MjJ9BLjUm71AKR3MwtJ12qZf564Abdow5E6__DOT__Ax)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__D))));
}

void VysyxSoCFull___024root___act_comb__TOP__804(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__804\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshACctrfZJe8jCgvDwhRvcBwxdwl9F2FZQillkZivR__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__805(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__805\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshUKMN37aPtcsm8K4b3emeAhMHgenwYWJZpYvOXxML__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv)) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0))));
}

void VysyxSoCFull___024root___act_comb__TOP__806(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__806\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtCsEnvuIe61fV0AvVwSetWZVg6dzjXAwYUFsXA6c__DOT__A1 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                        | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b8__05d_reg_p__DOT__n0))))))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__807(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__807\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshS6RmXYLZVCtGAkNBkSGOSPWXJ1GpbzlzmULyOryf__DOT__A1 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_505 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshK2knyZJYAq1PPItLalU6ZARgUpGBFO1ZInT4zzBc__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshS6RmXYLZVCtGAkNBkSGOSPWXJ1GpbzlzmULyOryf__DOT__A1) 
                    & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_505)))));
}

void VysyxSoCFull___024root___act_comb__TOP__808(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__808\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
        = ((((((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                        << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)))) 
                << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)))) 
                          << 4U)) | ((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                                              << 1U)) 
                                       | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)))) 
                                      << 2U) | ((2U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)))))) 
             << 0x00000018U) | ((((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)))) 
                                   << 6U) | (((2U & 
                                               ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)))) 
                                             << 4U)) 
                                 | ((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)))) 
                                     << 2U) | ((2U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                        << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)))) 
                << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)))) 
                          << 4U)) | ((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                                              << 1U)) 
                                       | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)))) 
                                      << 2U) | ((2U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)))))) 
             << 8U) | (((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                                 << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))) 
                         << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)))) 
                                   << 4U)) | ((((2U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__809(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__809\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx494;
    __Vtableidx494 = 0;
    // Body
    __Vtableidx494 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh2w6BWhjBdBOMBJ67WvPbYDfFu71EUw6X0NKp5chB__DOT__B))) 
                              & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh5hrQb9R5WcAWSsjJQ2dNjB8dwsrVlRJDS6qAt1w2__DOT__A) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_C0_INVX1P4H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b8__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2BX1P4H7L_Z_B_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx494];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHUjH5lQ5NzUlR5NT1nnih75NbT8G0WpyXtOyQohM)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NOR2BX1P4H7L_Z_B_NOR2X0P5H7L_Y_B))) 
                    | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0))) 
                          & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))) 
                                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh5hrQb9R5WcAWSsjJQ2dNjB8dwsrVlRJDS6qAt1w2__DOT__A) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_8___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__B) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_8___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_8___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__810(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__810\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshDhgphStBexP8jmSAy2CfbqUTuTmRxw6DICdpqOTW__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data_AND2X1H7L_Y_10__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__811(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__811\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh03HmmJR7uosYCFcdNsgyZMbo220qwTrA1vyZYjVE__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA))) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshzAksTAw3BO32vRlDyJnqf2OQMyBbDkuja3EFpN4u__DOT__Y)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)));
}

void VysyxSoCFull___024root___act_comb__TOP__812(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__812\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx425;
    __Vtableidx425 = 0;
    // Body
    __Vtableidx425 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                                 | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ 
                                                      ((~ 
                                                        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh9F8w8SEnFx5AI3w5eHvgRsdm1ANAKZ72x5r2YXcp__DOT__outA))) 
                                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                                                          & (~ 
                                                             ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)) 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh9F8w8SEnFx5AI3w5eHvgRsdm1ANAKZ72x5r2YXcp__DOT__outA)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshpAfKbEvnQjFTCGAyO1JuNRhIuhduQGTvTqGuOd2W 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx425];
}

void VysyxSoCFull___024root___act_comb__TOP__813(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__813\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshzCaa02hRGS3BakqtpEVr7eTMFeVeMgWjXafBN4dy__DOT__B 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshUDl01rmiIkqL8DsVz4XSmXsw6ZWXiWlaxUDMkmAP__DOT__A1_inv))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A))))));
}

void VysyxSoCFull___024root___act_comb__TOP__814(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__814\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshHY9V2PgzqJPefROUg5WScupPHyfsdJ6c6IWMVERl__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshCJj9jN2ephyBRGV5IDC2DiYDiVtEHJLEO9wrZZBw__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshRgytFyqAP0acvRAAHz4HMCjtWdM61ReD4QnUWGBw__DOT__A1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__815(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__815\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshYTiU5uhXF3rxMRn8GiebLjozJqGbTwBhn0FmwKyN__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshRgytFyqAP0acvRAAHz4HMCjtWdM61ReD4QnUWGBw__DOT__A1) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhshk16JHz71Ejx0D6NAN0n9dvZZPITHyIIu8SlvVjBY__DOT__A1));
}

void VysyxSoCFull___024root___act_comb__TOP__816(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__816\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__axi_ar_vaild_NOR2X1P4H7L_B_Y_AND2X6H7L_B__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__axi_ar_vaild_OAI21X0P5H7L_A1__DOT__outA)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg_5___05Freg_p__DOT__n0));
}

void VysyxSoCFull___024root___act_comb__TOP__817(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__817\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshQFyf8kabUynuhSwKsyQwVktKPPMNMyBkwyj3CXRx__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshl50tkA9QZwEwFUkUrwVnwly0qxRmqI4q0vs7Qglb__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshBNyAuCTAGxbJ0iHzrT3bJn3XLwKTHVXe0qwBdADJ__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshgrgVdVkXXtCqQXFM7sWmKYBqlS6FA632IMFxx0er))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_20___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshQFyf8kabUynuhSwKsyQwVktKPPMNMyBkwyj3CXRx__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshBNyAuCTAGxbJ0iHzrT3bJn3XLwKTHVXe0qwBdADJ__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_20___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_20___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__818(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__818\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VysyxSoCFull___024root___act_comb__TOP__819(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__819\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshfSLgcI902GwGG7NtFEoFRlMZC5Jsa2FonIv6P1M9__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshSxeKmw9gS5NWlbsVYIxIglmYp54DF0EBxAyBFEek__DOT__B) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                           & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                             | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshPb2aChiDODd0LYyV5InSSAksm8XGGzobuUJ58Dlo__DOT__Ax) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___Vhsh5TTEVp09Z7iiZxZGrjVc5qyIDJteDqWUS91ForcH__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshYCVvyaxkegAJYAZwTkxgxaShS5icQ9CXKcCLTGIx))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_30___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshfSLgcI902GwGG7NtFEoFRlMZC5Jsa2FonIv6P1M9__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___Vhsh5TTEVp09Z7iiZxZGrjVc5qyIDJteDqWUS91ForcH__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_30___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_30___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__820(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__820\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshCoKFb1iNdaXtx9DI8TZ1fmv5FVXI48d094eKCNDr__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshwOOBWjanoBL5xCVV04jB0V1hUiOqfQrn0NtHnc69__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshRAzdKLjPNTBOTTUPlZis7vsamL2PsIbEDBfHeqKF__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshfJ4gad3ETe9ZnQBrmNoaX9Bqk7TkP8R7B556DKVv))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_14___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshCoKFb1iNdaXtx9DI8TZ1fmv5FVXI48d094eKCNDr__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshRAzdKLjPNTBOTTUPlZis7vsamL2PsIbEDBfHeqKF__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_14___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_14___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__821(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__821\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshdGCwlBkAzD3sAEcMMUfw02sXf4VfWabkJC6H6D7q__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshnpgSHGfbiJcSD58N1yBOaf19G7vdx6TFj8bSfqJG__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshGKMrN1JO04g65tiWiZ7A9SEmA44v1RGwrDpP0Afl__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhshb5xtxYLUrVzucHzoCvyPk8PDfR0Us3XQ5QtnYcrB))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_28___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshdGCwlBkAzD3sAEcMMUfw02sXf4VfWabkJC6H6D7q__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshGKMrN1JO04g65tiWiZ7A9SEmA44v1RGwrDpP0Afl__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_28___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_28___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__822(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__822\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VysyxSoCFull___024root___act_comb__TOP__823(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__823\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhsho0I14IAZMNn3dnpOwyQCHtJhAuz5subKe7bg3BV6__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshR5IiKjBFk2mLvYzh6FqNODOdnDtdV5aZHVC6poAj__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshP3ZIuTpCuyFFBdCHriVVRoyAHF1VL38KDaizSGlb__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhshq1dPuSEsPk30QNSKA4xrqakHbMs170tTOW5qL3sX))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_18___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhsho0I14IAZMNn3dnpOwyQCHtJhAuz5subKe7bg3BV6__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshP3ZIuTpCuyFFBdCHriVVRoyAHF1VL38KDaizSGlb__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_18___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_18___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__824(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__824\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshd7b6mA5tBAeq4hfnbWNzWZr1LBsvP0FBD5CrIxYc__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshrIYHFlCW9RoQH9NwX0KCG2Ibdg6ij18ttdUQBFNe__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhsh9j4ri3fhm1W11ky1IsBBwyHABcUpawJ9KGV4SFl0__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshvp4BLwjS4WJsR4yvMZCdopx2IdpP2jPflNAhOeSP))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_22___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshd7b6mA5tBAeq4hfnbWNzWZr1LBsvP0FBD5CrIxYc__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhsh9j4ri3fhm1W11ky1IsBBwyHABcUpawJ9KGV4SFl0__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_22___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_22___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__825(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__825\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh1p8sJ3NiEbelgR0X5O7sdSytgJX8mlHvKKgtRv0q__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshxArEfda51BaRA2LJTQG3ut6CZ9HTnZP1Pkx1ystv__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh2oLTgneDVCUXoEmsEvBBXAAyBC9rDoNVNIGfUGyd))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_26___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshxArEfda51BaRA2LJTQG3ut6CZ9HTnZP1Pkx1ystv__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_26___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_26___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__826(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__826\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshMags5ZlHvApOc5k13BaVMkqlOCKEXPmyuOmXqHSa__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh0JR7u7dnXflyUGHWcqtzbZt4ktVvqwqzp1Nf0vMn__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshEF2TZAwmo022pjmCHT3RuOTFFeHB17LyNBVMdioF__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshjFB8w3lyK1BhVY7nV4N0ATKWXJ4zSRCXRFIKW5k3))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshMags5ZlHvApOc5k13BaVMkqlOCKEXPmyuOmXqHSa__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshEF2TZAwmo022pjmCHT3RuOTFFeHB17LyNBVMdioF__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_31___05Freg_p__DOT__D 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)) 
                 | (IData)(vlSelfRef.reset)));
}

void VysyxSoCFull___024root___act_comb__TOP__827(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__827\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh5JS8DV1tJOJBG9g48gxXshNWAs971fB0rAK0RHJR__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshJvd00yG3sbwBFuDZs4fX4sRESKz8g2zim4KEf1jW__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshsyuDS7FMxJuNe70BnPubt885eyWOYjA2wELjDJmt__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshCM9jOZKDUUVDAdFmvVM0QJSIPKLBH32ZKslci3Bo))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_13___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh5JS8DV1tJOJBG9g48gxXshNWAs971fB0rAK0RHJR__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshsyuDS7FMxJuNe70BnPubt885eyWOYjA2wELjDJmt__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_13___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_13___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__828(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__828\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshoQdVGWCnWB1DP9oR5ttVCelcNLE8jJek4J2bW0jE__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh1zBLkZERpAa4l7Qh6OsWZfan32yQOxAcYTzCB3A2__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXi96VbUge7H1Efw3YXRACB4ZqPEpQtx0AUdo8hE5__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshwPF0Fd5B8JdXADpvqpIk3veo1bGovoX3Y1RtASvV))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_15___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshoQdVGWCnWB1DP9oR5ttVCelcNLE8jJek4J2bW0jE__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXi96VbUge7H1Efw3YXRACB4ZqPEpQtx0AUdo8hE5__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_15___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_15___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__829(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__829\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshi2oNv1UAAB5cIOLP9Ps3dDKWIyMLKW43q52IAKBP__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y)) 
                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhsh0vr3GVWt0IJiP8Om4NTXo0TAdB1Kyb5Tqiiwgmzz__DOT__A) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshv4v0EJvP7kD2RbqcA3HllKofSvZYBDoPv4Boivsj__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhsh0vr3GVWt0IJiP8Om4NTXo0TAdB1Kyb5Tqiiwgmzz__DOT__A) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y))) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshzpfDSbDsX6sVVA5gq7zOogYpPO4THsBPj5XDZcBg__DOT__Y) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y)))))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_16___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshi2oNv1UAAB5cIOLP9Ps3dDKWIyMLKW43q52IAKBP__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshv4v0EJvP7kD2RbqcA3HllKofSvZYBDoPv4Boivsj__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_16___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_16___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__830(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__830\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhshafuh7F0NraBLNVZQZv20g8AH7EMsVKY5bdwWXNe8__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshVPoqWco1ggP5ROuBadmB5lsY2vVu4viKsEYXdfV4__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh3BOf60Dh3MuBYv8F8ZZbvJAcMds90ZIqeJtjfd6o__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh8LFRgKeEfeQ5dwGA3QP1hAHOFhrRdOdh1WznLQjb))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_21___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhshafuh7F0NraBLNVZQZv20g8AH7EMsVKY5bdwWXNe8__DOT__Y))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh3BOf60Dh3MuBYv8F8ZZbvJAcMds90ZIqeJtjfd6o__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_21___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_21___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__831(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__831\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshGpLqZeYYQKRMi5MIleMjQQRYfbvOLI50dEl1er0g__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshc5WUSYFvEwAuVOlWYMBNOyETZJfcDYeb3HrkLsUH__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshDedJTKpwSwAKYjkZP9XJ2IJyhdMlD0gqu7PZh3fq__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh55Dyqi9RrsC9qTpkY2J11UBDNjAEdxY8IQNLNQ9Z))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_25___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshGpLqZeYYQKRMi5MIleMjQQRYfbvOLI50dEl1er0g__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshDedJTKpwSwAKYjkZP9XJ2IJyhdMlD0gqu7PZh3fq__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_25___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_25___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__832(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__832\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VysyxSoCFull___024root___act_comb__TOP__833(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__833\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VysyxSoCFull___024root___act_comb__TOP__834(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__834\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_B0N_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y__DOT__B 
        = (1U & (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y)))))) 
                    | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh6saojwpdhr3uJZTXLKyEQAF6TMa5656Dl8C6lHz6__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_B0N_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhsheBxCB9lRZr5lDZmyZ1P2tdrLRFZZjbeRuyZQlFfX))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_11___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_B0N_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y__DOT__B))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_B0N_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_11___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_11___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_11___05Freg_p__DOT__D 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_11___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)) 
                 | (IData)(vlSelfRef.reset)));
}

void VysyxSoCFull___024root___act_comb__TOP__835(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__835\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshHpP0oOHmT7AEZcvK7MUV2rfxSaU8UlH4EHJ4BgTR__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshRJqORf6n6CXcDTUHL2RCmVc2e6t3DYyybkfwrVrR__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshPoYOqjkENC3f3Qxwxiq4xIYaiIkaBaArm8ys0DH4__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___Vhsh93laASPUbpiWPcxAz6YfCLUSX3DLaoN1wW3Coff7))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_12___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshHpP0oOHmT7AEZcvK7MUV2rfxSaU8UlH4EHJ4BgTR__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshPoYOqjkENC3f3Qxwxiq4xIYaiIkaBaArm8ys0DH4__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_12___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_12___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus_12___05Freg_p__DOT__D 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_12___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)) 
                 | (IData)(vlSelfRef.reset)));
}

void VysyxSoCFull___024root___act_comb__TOP__836(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__836\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh0s9KrctDFNa5kOmlBZxgzR27iAXqFoghiFAKYo1X__DOT__Y 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_1_Y_NOR2X0P5H7L_B_Y_BUFX3H7L_A__DOT__Y) 
                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax)))))) 
                     & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh3ZnTYegBRYppleEPkqDRRHnDBSppHnNYcGYlKt0Y__DOT__Y)) 
                           | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh60nEha7Uby6aQpO4ZbBHO1vQteIt2DRtF26oT92i__DOT__Ax) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh09Hdtu3qBwgBYQKxR2m1bRLzwJAqgs2iBeCGwMES__DOT__Y))))))) 
                 & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh8nvpWxiTnIoIxwEk4p3IyDv0fIr3U7BMQAX31YYj__DOT__B) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshiKTsd2Rk32BSXHJhArc0jFhNOHLG97ViLBtBcvbO__DOT__Y))) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshpqRcv8hbwhlnw1cFHm46JlO5RgxCaqVoWovFBwZF__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFhzsgITefVIraqTBQBeM8dC7ll0GHNV0AdeKyYcd__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh3VUFLKXSxHc88D0DBk55IXSNb2IuErIAWst4GmqB))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh7iyeJorAWd7bPoQ81b4J2q8pM7RRVS4Ja9k6elNw__DOT__Y)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_17___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___VhshpqRcv8hbwhlnw1cFHm46JlO5RgxCaqVoWovFBwZF__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh0s9KrctDFNa5kOmlBZxgzR27iAXqFoghiFAKYo1X__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_17___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_17___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__837(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__837\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VysyxSoCFull___024root___act_comb__TOP__838(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__838\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx94;
    __Vtableidx94 = 0;
    // Body
    __Vtableidx94 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJkopFWZLwy5DwQVQM5dwkEDSdXmqq9fA1brzKghN) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshH9PRuqh3hvSnXAZ9SrCBIgvI2u8JAsXM7YZfGfer 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx94];
}

void VysyxSoCFull___024root___act_comb__TOP__839(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__839\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx329;
    __Vtableidx329 = 0;
    // Body
    __Vtableidx329 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshiPp22iRlFGt8YjS4A1Y9CUO2y8f4VUH8pop819ik) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshSx4iepX9hJCOPx75KDKX2h9IeiCpb911QcBA4pVy 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx329];
}

void VysyxSoCFull___024root___act_comb__TOP__840(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__840\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx84;
    __Vtableidx84 = 0;
    // Body
    __Vtableidx84 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshh8w80tAYPNHmW2K1DGUFXB3Y5Thjceg6A6ayMEuT) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshs3KPgnu6R4GsOQLGmO7LKIHqyibQdW1DJhgTmug0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx84];
}

void VysyxSoCFull___024root___act_comb__TOP__841(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__841\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx238;
    __Vtableidx238 = 0;
    // Body
    __Vtableidx238 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshuoxiXJi2JvrCQ83xQ6fQRYCYJjk6nIOCv642fqbt) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_A1_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx238];
}

void VysyxSoCFull___024root___act_comb__TOP__842(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__842\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx505;
    __Vtableidx505 = 0;
    // Body
    __Vtableidx505 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshsh4cZdB7xDrPSuoZMsQfcCyRM6n6aGjB2euw8SyA) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheBAhscNiyrn7MvHoaDe2zQQtBNSdEgQB80VKp2wz 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx505];
}

void VysyxSoCFull___024root___act_comb__TOP__843(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__843\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx513;
    __Vtableidx513 = 0;
    // Body
    __Vtableidx513 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNfSUJuXWxlvp2qLNe6Sef599f7liU4ssmoIA3xjo) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheTLk8OXBIAAH2yfkGqAqrUg4NtsCmFqYfNP5IjXT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx513];
}

void VysyxSoCFull___024root___act_comb__TOP__844(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__844\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx500;
    __Vtableidx500 = 0;
    // Body
    __Vtableidx500 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh6Qt3chJBKu4hoCAdaLaOE6jfBUyc4T0SBEzSax01) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMQZka6X6vERmBlbsMXWp2BvFwWmv5RBIGo5Ml5sT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx500];
}

void VysyxSoCFull___024root___act_comb__TOP__845(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__845\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx515;
    __Vtableidx515 = 0;
    // Body
    __Vtableidx515 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshAQ3ERWZrGruqfbAsd7DzJrIBNwKzp4CZzAaSFlFi) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshdpByrI1t6tlwfHfhMZLkcVcyGCH4jf3eWM95c715 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx515];
}

void VysyxSoCFull___024root___act_comb__TOP__846(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__846\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx503;
    __Vtableidx503 = 0;
    // Body
    __Vtableidx503 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh6CgHZAoWT50sk36BqLysU3itUFq0dDfD5bbLdl7A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshY7mjBSDsj7gGAhiVtIrmxeNMQjZpm0ABWAGsi53Y__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshfyw26yb6AFsATZLqROCBAxAK1RbbcQlpqUp9FZRT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx503];
}

void VysyxSoCFull___024root___act_comb__TOP__847(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__847\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx498;
    __Vtableidx498 = 0;
    // Body
    __Vtableidx498 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshTFKxA1fXFS736IlPCy5Im5eYkIAc05ARs6gt8dlM) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaHub9vOBtrVRSVAFRNjpq2M2LASE8e9BNZzmcvI8 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx498];
}

void VysyxSoCFull___024root___act_comb__TOP__848(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__848\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_B_AND2X1H7L_Y_A_AOI21X0P5H7L_Y__DOT__A0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NAND2X0P5H7L_Y_B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhshh9O1JPUJXnYDJk2B386EYsXrmsbHnVvG97dUAXHq__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4Y1yz4gVxqJj9AALJijI1PteHMkudh7joJhOTfdX));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhGrJA9SlmNt4c1apwiydA7RZQ3TsgxnVkagoK8sN__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhzgrEsTRK0TBqABFf6aE8GyyTM8xmq69BpETSY7Q) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshjHgioR641LSTFErvAR4TfgCNwJZImGBoaNaWRYeh));
}

void VysyxSoCFull___024root___act_comb__TOP__849(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__849\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__B0_bar 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshl6LAYuCuDma8HkOC7brrkBpIAFzSpoAotCBGMKZl__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__OUT1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__B0_bar));
}

void VysyxSoCFull___024root___act_comb__TOP__850(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__850\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx255;
    __Vtableidx255 = 0;
    // Body
    __Vtableidx255 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshYNZdiGsTkXqtapBTc11wygCtjtSNbI2nxjqzOiMd) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshXAgAdXKb4tzuRn8tdjqWvJGxdBWDvMReq4u79GA8 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx255];
}

void VysyxSoCFull___024root___act_comb__TOP__851(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__851\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx393;
    __Vtableidx393 = 0;
    // Body
    __Vtableidx393 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshvTHOzMp5LDvfSt225UTau69ncQgXvTHgVc6rfD4a) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshCwP5X7Ka5VOeBXMiB8XIcrKHVqCLXiYK6TZhK0ke 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx393];
}

void VysyxSoCFull___024root___act_comb__TOP__852(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__852\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx305;
    __Vtableidx305 = 0;
    // Body
    __Vtableidx305 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshaTVAik4i1rMLlbBV1wFRnhKnmuAvbFeXBLHmk9b9) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcEopVxfJuyBD9PlhhI3qiWukLob7O0NmbMQTyF4J 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx305];
}

void VysyxSoCFull___024root___act_comb__TOP__853(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__853\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx350;
    __Vtableidx350 = 0;
    // Body
    __Vtableidx350 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshAw5Glef5GlMjJdyodMWAxFbFihDB56Z3iet2K96z) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshnttL4RT5LYi41Pg8i8gAjgAavI0By1RdB90yNa9Q 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx350];
}

void VysyxSoCFull___024root___act_comb__TOP__854(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__854\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx307;
    __Vtableidx307 = 0;
    // Body
    __Vtableidx307 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshIUtAvaHv655GKa2x4OAG6TsA2qjASlRtLB9ISSBt) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshZxLPKrv9nk7nK4AQKFa5sMCBaB5pXTii4d3i6XCf 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx307];
}

void VysyxSoCFull___024root___act_comb__TOP__855(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__855\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx312;
    __Vtableidx312 = 0;
    // Body
    __Vtableidx312 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y))) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh0OXDSH4jTHBqdQn1UTnB4KGWWUMPvYud7btEPVxK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx312];
}

void VysyxSoCFull___024root___act_comb__TOP__856(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__856\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcBNaMwgGkJHbSAglv6D2Qq2YtyKgCGH9t5sZyvRf) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__857(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__857\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx310;
    __Vtableidx310 = 0;
    // Body
    __Vtableidx310 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshKqNH97Blwf61IgbgH1gOSZTBgHggweDXe5Wtku4j) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshRQCtIa9xHVhW5nm9e830MdmHi25LagplPkQJvShH 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx310];
}

void VysyxSoCFull___024root___act_comb__TOP__858(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__858\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx280;
    __Vtableidx280 = 0;
    // Body
    __Vtableidx280 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshtoBAcAx313b0adZ06LMZNR2TdvfAaiC7vVld7ntT) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshxxkpQEALotsA4BBLOXBZHXtO7CkidFlEQVu8MHOW 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx280];
}

void VysyxSoCFull___024root___act_comb__TOP__859(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__859\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx317;
    __Vtableidx317 = 0;
    // Body
    __Vtableidx317 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshF8pDdzjyiEumu6xXXHpf8SW1aH8oRgvIxVuGQoA1__DOT__Y)))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh6pQi6bcyr6Nki5HQKOALNCBOJ7IO45gfIDjtqvkr 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx317];
}

void VysyxSoCFull___024root___act_comb__TOP__860(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__860\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshbFRsF93Xraln5GAVJP3Q5bSo3y3JAfQNBxseNgj8) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__861(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__861\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx319;
    __Vtableidx319 = 0;
    // Body
    __Vtableidx319 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshgrQH8UvOY4YXGUkj1Y4BINOlc2FUg9BTAjBSfBcQ) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshP5b5S1uKu38sh5K5SABItKCycGKAHYAII4tyWF8I 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx319];
}

void VysyxSoCFull___024root___act_comb__TOP__862(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__862\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx284;
    __Vtableidx284 = 0;
    // Body
    __Vtableidx284 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh9O5QPzbgYKrdk4jdsu2jKwUXAzE4hgvEJrU1rCFR) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshjD42LJroHwAX5imii3pgSbys5lr1smAAl86WGOTu 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx284];
}

void VysyxSoCFull___024root___act_comb__TOP__863(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__863\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx321;
    __Vtableidx321 = 0;
    // Body
    __Vtableidx321 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshSseqMJc9L0C61PATeYiB75kf51aGuIuotqcN1tbQ) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshnkUj8hIgn8RLhf7a7XUPimdwGUrLjqNWelpoBpLQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx321];
}

void VysyxSoCFull___024root___act_comb__TOP__864(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__864\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx288;
    __Vtableidx288 = 0;
    // Body
    __Vtableidx288 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshQ7AnVWNIABoniEiAhqix2hP3R5zPz8Y55ElmHacP) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshMd68kfLo0fw9rNFQBW8ZfIENxxg5EdhBYwkdBCRV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx288];
}

void VysyxSoCFull___024root___act_comb__TOP__865(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__865\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshkzQoGPz6dPUiwKefMVKmzLlpge96XZ1zhNvxMzvW__DOT__Y 
        = (1U & (~ ((~ ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshFEKViEqlykcD1hYfqqMmf6BpxfaXlsI56ZJ5pkju__DOT__A0)))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__866(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__866\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshhdYNIVKhkdFlZLx3S7WsOsXxP8cyu8goiVcEXfSP__DOT__Y 
        = (1U & (~ ((~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshQArLJ41ck12hgoQzrD7dGqrGBjGtVeyeKsQ5Xjly__DOT__Y) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y))) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__867(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__867\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshnccO4Wn4Y9RUFgVIxHj5kfos8rvCdrrJvcfqKYOB__DOT__Y 
        = (1U & (~ ((~ ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshK0ikoaPJ2lgGFs03QRDDN3BBgB5IZvJLYApzV60A__DOT__Ax)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y))) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__868(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__868\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx480;
    __Vtableidx480 = 0;
    // Body
    __Vtableidx480 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshRWDFOAczrAoVsJREzHtfkM1ObtLHZ35LU5Jwd8BB) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4hebkZgAobvagyNsJDLbakwxKTvB4VmF4oxzPWGP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx480];
}

void VysyxSoCFull___024root___act_comb__TOP__869(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__869\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx525;
    __Vtableidx525 = 0;
    // Body
    __Vtableidx525 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshr99LAP1pSwPQ8CE0OKSA81L4dshBcQ8e29tBjODA__DOT__Ax)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y))) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshbH3Igfgf22FYLuZAhlkDAcTre2QmX9IoJIjXE1Np 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx525];
}

void VysyxSoCFull___024root___act_comb__TOP__870(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__870\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh77AbyJeR86gtVd43CnaObxI7LJPJVFlJHygVwUXV__DOT__A1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshoyAFxAB5nGjm33EncUV7d26YSvcpKDnjpE3EtxZM) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshECVRWE0AjB75bkM1BR9E7Oah55ASm6JtB3j4SxH5__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhshh9O1JPUJXnYDJk2B386EYsXrmsbHnVvG97dUAXHq__DOT__Y)))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh77AbyJeR86gtVd43CnaObxI7LJPJVFlJHygVwUXV__DOT__A1))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshECVRWE0AjB75bkM1BR9E7Oah55ASm6JtB3j4SxH5__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__871(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__871\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx523;
    __Vtableidx523 = 0;
    // Body
    __Vtableidx523 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfBV4AGoXGXmAdTSJqZjjzYEIwgao99wzEEcaw9rz) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWGZj0IQFHY22BuvAPjaLwXYSqzR3Wd6q1LU9A21P 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx523];
}

void VysyxSoCFull___024root___act_comb__TOP__872(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__872\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx417;
    __Vtableidx417 = 0;
    // Body
    __Vtableidx417 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshpgjxSJMlJx1B0kJ1CRxABqMHsPMV6a5OdFIb5n1x 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx417];
    vlSelfRef.__VdfgRegularize_he50b618e_0_460 = (1U 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhshh9O1JPUJXnYDJk2B386EYsXrmsbHnVvG97dUAXHq__DOT__Y)) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshtdhzwKAE76grIWYYnexyuKM35L2eB6Xm5Ou9oSJu__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshpgjxSJMlJx1B0kJ1CRxABqMHsPMV6a5OdFIb5n1x));
}

void VysyxSoCFull___024root___act_comb__TOP__873(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__873\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx468;
    __Vtableidx468 = 0;
    // Body
    __Vtableidx468 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshRxxJAHjBFhsSsXcf8Vux1Fk5ZWzG6UUE4fvBjlyp__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshshtLrNph1pNzw4Nc0x5CworthHDnhSHklAfcybO8) 
                                  << 1U) | (1U & (~ 
                                                  ((~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)) 
                                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__B0_inv)) 
                                                        | (~ 
                                                           ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                                                            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0))))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshHfrsqL9yze94X62BviogDlCQfDw6OIcTblgwAO7B__DOT__Y) 
                                                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshaKJ2jjJqB9fDuBUTHqo07o54twG0KJr1tUBCJqPV 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx468];
}

void VysyxSoCFull___024root___act_comb__TOP__874(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__874\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_C0_AND2X1H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_A_NOR4X1H7L_Y_D_AOI21X0P5H7L_Y__DOT__A1) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))));
}

void VysyxSoCFull___024root___act_comb__TOP__875(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__875\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1XA0AeXBRKbxOErrpR7i4pLXm2BVnCV4V9XZTih2__DOT__B 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshvJOucnQTObM52GXAvWCMG41Tox7b7oN0fin06pve) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__876(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__876\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshvpnXCDBrcQWuorj1zvbViYifxhE2tykiLGcBLAse__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshl8vSxQzAvgt7ceOLOQF9SNql0BpzF2xJcIAYOFGu) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshG3hMPj3wjDBBvU9fobNArBdVMY8OAPwxBuAXUtRC));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_4___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_AND2X1H7L_Y__DOT__Y))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshvpnXCDBrcQWuorj1zvbViYifxhE2tykiLGcBLAse__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))) 
                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLDBnP0gY369tWkiRRRWKaJ1E5k5Ll3hxbHSftAMj__DOT__B) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_4___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_4___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__877(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__877\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__878(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__878\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__879(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__879\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    // Body
    __Vtableidx72 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b7__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_7___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_7___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx72];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_7___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_7___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__880(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__880\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__881(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__881\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx105 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh6N60q7IF3Aiuh2tARFr9Adw2b9nP1MOMhkDpikrX) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshfBpVZ1XvV0mqGOZGdX0nomsscR4kVNAo7FKPNW9a)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshHjZlvC7bl5yrNe8YeFQePBIxUfybOWL1M5wYn6Ag 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx105];
}

void VysyxSoCFull___024root___act_comb__TOP__882(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__882\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx223 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCCrM5fl9ghHAueiYkavosekbFB0h4xnxUsH4hfxN) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh6N60q7IF3Aiuh2tARFr9Adw2b9nP1MOMhkDpikrX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx223];
}

void VysyxSoCFull___024root___act_comb__TOP__883(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__883\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx103 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshpmvc0BPPt6pokHCBlooY60GYiQwSALGR3RQeLlGV__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCCrM5fl9ghHAueiYkavosekbFB0h4xnxUsH4hfxN)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshU59SEB0ARloAPM5pdEpv9CxeManB0kxDQ8DcCAGe 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx103];
}

void VysyxSoCFull___024root___act_comb__TOP__884(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__884\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx221 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdRCfztlVCfCffIuP5B9FzKG3zHOPzrpBblg0iSZy__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshpmvc0BPPt6pokHCBlooY60GYiQwSALGR3RQeLlGV__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx221];
}

void VysyxSoCFull___024root___act_comb__TOP__885(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__885\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx102 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshEHRwvSXewBIXASAfFXV5zeM1TAgBBaOvLWKMB26d__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdRCfztlVCfCffIuP5B9FzKG3zHOPzrpBblg0iSZy__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshvB8HILf9o9lEcP9G6FUpsU9KIsMrtB0Rh39DSGcw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx102];
}

void VysyxSoCFull___024root___act_comb__TOP__886(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__886\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx377 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshGUMkxhhCAvhcQDEBmPmk0E6W1bS3zCEJJRpu1OOK) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshL4Jj9QASYvB8l6VwgESkzwBEPBPPzUAO1xr8YSU1)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBMBhsatpzMBapBdzaLfNicQ3EgJ0dtMEECC0bNyX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx377];
}

void VysyxSoCFull___024root___act_comb__TOP__887(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__887\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx212 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh4fjW1clLZbjtWYJFBW5fJ7gdDQpdnhp2PHArRAc0) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshGUMkxhhCAvhcQDEBmPmk0E6W1bS3zCEJJRpu1OOK)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx212];
}

void VysyxSoCFull___024root___act_comb__TOP__888(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__888\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx438 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHnG4AJh4ATAgsUaN8HhS1F488PvZJQADiLImhbN0) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh4fjW1clLZbjtWYJFBW5fJ7gdDQpdnhp2PHArRAc0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshfKLJ2gCrgxEcoMEObaLz0s6mh82GjGIHWe8Vs0qP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx438];
}

void VysyxSoCFull___024root___act_comb__TOP__889(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__889\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx208 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshPw9wak5gUwIr4G4tlWtDCDJB1lqB03kgB5fDcSSQ) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHnG4AJh4ATAgsUaN8HhS1F488PvZJQADiLImhbN0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx208];
}

void VysyxSoCFull___024root___act_comb__TOP__890(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__890\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx375 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshRsLdMKnfS91KrBlkTmskbiBVZDDuSuKOZb3UDGH1) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshPw9wak5gUwIr4G4tlWtDCDJB1lqB03kgB5fDcSSQ)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshAgVgkEKVyKgZoPyO1hKEBdmx4Zj09I3hSAZ8759W 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx375];
}

void VysyxSoCFull___024root___act_comb__TOP__891(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__891\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx206 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh0FvrDts7Q3ElR6K0JMYu83YAuXXuCr69kCDDWrIK__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshRsLdMKnfS91KrBlkTmskbiBVZDDuSuKOZb3UDGH1)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx206];
}

void VysyxSoCFull___024root___act_comb__TOP__892(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__892\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx435 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshMwGBPzxXVj6nJg4bPM1LIbYIBiuAuAnGBxHggztD) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh0FvrDts7Q3ElR6K0JMYu83YAuXXuCr69kCDDWrIK__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh01rCJ3safJ1IygbrsCggG0PAmXIYa9ylmBHJDXut 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx435];
}

void VysyxSoCFull___024root___act_comb__TOP__893(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__893\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx370 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhsharkGUQbrADtmMEKBKEh9DGQEZsku4q7zsehXLnF0) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshEgx1rWKvp4A5dtZYb59BsasxHA4TMY3X7L3FrKsL)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhshfl9RgUXRhMXkWmkEoz3XYrdo1tzGuCNFVpEZIj71 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx370];
}

void VysyxSoCFull___024root___act_comb__TOP__894(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__894\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx189 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshCEYYTyPEsEPqiIU1jENp8jifBbMf7oo2CW8qsKwU__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhsharkGUQbrADtmMEKBKEh9DGQEZsku4q7zsehXLnF0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx189];
}

void VysyxSoCFull___024root___act_comb__TOP__895(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__895\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx368 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshaV4vBrjrCL6BekmdSegt3BRGmdT0sGFvfHF2AZbb) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshCEYYTyPEsEPqiIU1jENp8jifBbMf7oo2CW8qsKwU__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBe6BFU1QLYQa8r0ZK19RW9w25DgMPTwKvRITqfkm 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx368];
}

void VysyxSoCFull___024root___act_comb__TOP__896(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__896\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx192 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshyr9pDXFZLkWy0LgD5jwgpFvAMgbSmO9HnBywdYdC) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshaV4vBrjrCL6BekmdSegt3BRGmdT0sGFvfHF2AZbb)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx192];
}

void VysyxSoCFull___024root___act_comb__TOP__897(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__897\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx364 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshSol3a6baXMurqcNtn4K7ndBY4B4vtcZoKaIfhB1D) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh78j4pVVi2f5KsI2tF5ZceGJNOiA0EJGcZktLm4wY)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshIERLqvbdGB6gFAtOk8t9LYU9RW1ZZNJ84zNVtpNf 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx364];
}

void VysyxSoCFull___024root___act_comb__TOP__898(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__898\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx184 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshKhIzcQap2HcwTDbwZ93c9RBCQPBziOUdVHNB6UYs) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshSol3a6baXMurqcNtn4K7ndBY4B4vtcZoKaIfhB1D)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx184];
}

void VysyxSoCFull___024root___act_comb__TOP__899(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__899\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx360 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshD062rCsoqEV9ExzhteNtlpYDZSlmlC4BgMAOHsCa) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh24MXRYBaQ29DRIMa85jKTIjBG2gUzQAOLLBomZty)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshleUOJ9WqYBVE5aOLvkbmdSjWCyLCwfgDnlyFo2jQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx360];
}

void VysyxSoCFull___024root___act_comb__TOP__900(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__900\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx175 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshl6LAYuCuDma8HkOC7brrkBpIAFzSpoAotCBGMKZl__DOT__Y) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshD062rCsoqEV9ExzhteNtlpYDZSlmlC4BgMAOHsCa)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshOTJHTY7agLerK3AheT6SM1fTPH7sggJUlHcCWBBX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx175];
}

void VysyxSoCFull___024root___act_comb__TOP__901(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__901\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshmMMSutFfI57uBjOAVM5UgpRTf0sZA4ABz37skzZJ__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshGcX78hO0FSaXMpOtknzrjAMyHjjxrAte8j4A8pnL) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshgNZqrbI1zUNXTGjptJBVT1jfZQaBnkVxgibfjLBW));
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
}

void VysyxSoCFull___024root___act_comb__TOP__902(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__902\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshhWtksByporyuJEoBcm4yHmi9LNl3k1MwyuNcW3OA__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjiPdyBNBi77AqitpHvIh2whiRXfCwAz5l8PNBIx__DOT__A1) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh2iC96Z65RqwkVXuB1nGf8x2lDquw9zBG7pZGuvpP__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjiPdyBNBi77AqitpHvIh2whiRXfCwAz5l8PNBIx__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh2iC96Z65RqwkVXuB1nGf8x2lDquw9zBG7pZGuvpP__DOT__Y)) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjiPdyBNBi77AqitpHvIh2whiRXfCwAz5l8PNBIx__DOT__A1) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__903(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__903\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshJqshSx8CpOBMEZmn3f4RGYozucicIzf7xsj3pvRe__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh93c1RykRCIBiCjSJ4LbloT1OrIIgHAhzCa9kqI6x__DOT__A1)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshJv7fEKjLAgkg0Xb9KeO8XknClmRYsL4eNFG66Q3H)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_10___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_Y_A_NOR2BX1H7L_B__DOT__Ax)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshB92VGfanYFTrZe4zQATfVTyLMyKmeQOJVi5e3k1L__DOT__B))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshJqshSx8CpOBMEZmn3f4RGYozucicIzf7xsj3pvRe__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_INVX0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX1P4H7L_A_Y_BUFX3H7L_A__DOT__Y))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NOR2BX1P4H7L_Z_AN_NOR2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X1H7L_B_Y_NOR2X1P4H7L_B_Y_BUFX3H7L_A__DOT__Y))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_10___05Freg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_10___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__904(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__904\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx299;
    __Vtableidx299 = 0;
    // Body
    __Vtableidx299 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshPAKxBJOvvERhI8JqravHZZxv0OgM8qYUIrWc6b85) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshBg44vlLCxApTG6bCO1L5VzxjyqBAdawvsOAgIXRW 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx299];
}

void VysyxSoCFull___024root___act_comb__TOP__905(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__905\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__B) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__C)));
}

void VysyxSoCFull___024root___act_comb__TOP__906(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__906\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshnfpSGaeLL8rAh54eauR6A0k2KBvfvgPTdcMCPRI6__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___Vhsh5AzB8NZEy4k3tZsdW9VSh2gdKS5NGbAqVP6Kg6CQ__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_43)))));
}

void VysyxSoCFull___024root___act_comb__TOP__907(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__907\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshSl5vu3tj7QADLeNKtHwo8tArZbjCf9ikhuTA1oR9__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshZNHgn6BcIt7PBUnBvALxEvPVpNCzXHNzi8an1nn4__DOT__Y) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_43));
}

void VysyxSoCFull___024root___act_comb__TOP__908(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__908\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_58 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshZofPWNLBWUAibXXbzCXGtqea6tINehrvll0BDhQx__DOT__YN)) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshBCJE6jlQrVvGMOP5hvKoNk8iRfTRWZg0VVCVmv41) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshloaHWGygk5EcAA5u4BJm34ERB1TL2tjnZ9Btx8pe__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__909(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__909\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBxuVRpIPzvUaXKnD3oW7KnjcseMsOLN7SQHt92YZ__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshl6LAYuCuDma8HkOC7brrkBpIAFzSpoAotCBGMKZl__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__910(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__910\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx290;
    __Vtableidx290 = 0;
    // Body
    __Vtableidx290 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshzkopzvzuSEIN85vDuzi3vbdHJAWJH9kVB6uUzqNb) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshrorq2U0iKLZE8DlMLklEAO9mS8lH5pie7Jm9dx4g 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx290];
}

void VysyxSoCFull___024root___act_comb__TOP__911(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__911\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh1tFBlCvzId17ndnsJ2yIb0QdRzp4i2HsXdioGjA6__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_472)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__C)))));
}

void VysyxSoCFull___024root___act_comb__TOP__912(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__912\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx335;
    __Vtableidx335 = 0;
    // Body
    __Vtableidx335 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshHDIw3DvH4BpV6CAVjNWmpAyR7ydBAnK4ElbIvzsD) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshdSNzAHExCJEg7N7QIKFhkuHFQSiKUaNvtGuYcZvN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx335];
}

void VysyxSoCFull___024root___act_comb__TOP__913(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__913\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_462)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshzYuD7UPNq4h2IApbOZNX6y4d7klGRseHcgWIaTFD__DOT__A1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__914(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__914\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    // Body
    __Vtableidx54 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b1__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_1___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx54];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_1___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_1___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__915(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__915\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshjNPEQe2halEbvIU7QHjyK0mUu2UkYsASG8eY2Qxw__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHYdzFxKW26DkwghWQAYAPzAY1f1sL4L4kOJBUWrn__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshqwoW36gBpUtqlMHiEpqupsNjg4dQ5KqGIDfV8GU2__DOT__A1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__916(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__916\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx226 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshfBpVZ1XvV0mqGOZGdX0nomsscR4kVNAo7FKPNW9a) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ523Nw72k4LVWUwain5YapIsU8yPHF365kLtAzKt__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx226];
}

void VysyxSoCFull___024root___act_comb__TOP__917(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__917\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx106 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ523Nw72k4LVWUwain5YapIsU8yPHF365kLtAzKt__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshChTXieBXVovvQfpjY3M8vBWcqYKOAE4Z1r2VNcKD)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshM8xT5GM5kwEnWlMhZiTjqVA2YmNYSKCIlCov05Ip 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx106];
}

void VysyxSoCFull___024root___act_comb__TOP__918(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__918\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx352;
    __Vtableidx352 = 0;
    // Body
    __Vtableidx352 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh1Cf7uAAxeoSw5nIaYAaRe7NeFfbYnAsClg8oaFjN) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshDJWbALxCS0VbABmK4RBU6J2Lk8iKs8o75LpVM8WX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx352];
}

void VysyxSoCFull___024root___act_comb__TOP__919(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__919\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    // Body
    __Vtableidx96 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshM4BpOKzdWZC2BadBWzRne5qY7WZchbGDcQC6z4Ek) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshA5hXRHWtHRhSJBvKisGiZxHf7SfYp5rbiS9eOrAJ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx96];
}

void VysyxSoCFull___024root___act_comb__TOP__920(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__920\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh8A9dq5zrvGBoN0M7V3qi125mTsVbxS0rzbLQDJ7J__DOT__C 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshzYuD7UPNq4h2IApbOZNX6y4d7klGRseHcgWIaTFD__DOT__A1) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_OAI21X0P5H7L_Y__DOT__A1));
}

void VysyxSoCFull___024root___act_comb__TOP__921(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__921\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx362 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBfhPBAkDLgjNbB5SMyPdByPwlUXfWHuqr5nK1npZ) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshKhIzcQap2HcwTDbwZ93c9RBCQPBziOUdVHNB6UYs)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshcdgAx9mVANtRY1VU44FylBOKDNzrdLFseT3KgCgO 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx362];
}

void VysyxSoCFull___024root___act_comb__TOP__922(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__922\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx182 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh24MXRYBaQ29DRIMa85jKTIjBG2gUzQAOLLBomZty) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBfhPBAkDLgjNbB5SMyPdByPwlUXfWHuqr5nK1npZ)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshACQy74hrwv7kApVNFgdegMxn05PhqHJkFp3FQv1t 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx182];
}

void VysyxSoCFull___024root___act_comb__TOP__923(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__923\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshzKV76V7APAT3PS4QvwA9WR93nIGdbKORk9SCstNt__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshWCpHWAZlAeUKyDY8gODSlzHVgulfzK68O8beWOB3__DOT__YN))));
}

void VysyxSoCFull___024root___act_comb__TOP__924(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__924\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgD7PiCziocuro6zMVVscBlxecLOCjYf5vdndBn9g__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__925(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__925\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshh7KOBfDI94i0BDq7bTvNSKp9nKEAEAnsS7GAj7BA__DOT__B 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__B0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__B0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__926(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__926\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx315;
    __Vtableidx315 = 0;
    // Body
    __Vtableidx315 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshGYR5QOjDsEPmv7ulTXBARCAv7KC5Ka2KLDIOOSFq) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D___Vhsh2ZpPkI6Y8QRZ7sAtlHvZB9lMdKqDSrhj0iA4z2pO__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshbFp2pTipSJ3CPQtdkYCI9eJXCBEZBpWcGFJ46Yqm 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx315];
}

void VysyxSoCFull___024root___act_comb__TOP__927(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__927\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshLpbDdQUVWPtEuubeyQwzQ531DsoyrBCf2SZ6bkAW__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___Vhsh5zfVDA0xRDTU7gIXBBu7rnXT30mR2hF9bL6I6Xtd__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_46)))));
}

void VysyxSoCFull___024root___act_comb__TOP__928(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__928\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx196 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshNqEAGUiRBmjr0CjghpNBgSPUePKANS7wI83Ydpr3) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshMwGBPzxXVj6nJg4bPM1LIbYIBiuAuAnGBxHggztD)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx196];
}

void VysyxSoCFull___024root___act_comb__TOP__929(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__929\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshvwN7AEnpB2ll8On3E9ZAOx2t0WB707Md9YoXJC1r__DOT__A0N 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A) 
                    & ((~ ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_46) 
                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_47))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__930(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__930\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx278;
    __Vtableidx278 = 0;
    // Body
    __Vtableidx278 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshl82XXatZcU4jSNtHibYvKKCLTyzRxbwBBPIfEGCB) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshukervBLgN2TVSmAPi3RLVFqXXkSZxiRkyBH0z46e 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx278];
}

void VysyxSoCFull___024root___act_comb__TOP__931(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__931\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx371 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh43xjuv4L47R4lEap3K1bQuxETgDV1shxzMEtlRVM) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshNqEAGUiRBmjr0CjghpNBgSPUePKANS7wI83Ydpr3)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshXUUAfIPv2YRweYt1ztlh79h0GBRAtsbeM7eyNwup 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx371];
}

void VysyxSoCFull___024root___act_comb__TOP__932(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__932\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx200 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshEgx1rWKvp4A5dtZYb59BsasxHA4TMY3X7L3FrKsL) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh43xjuv4L47R4lEap3K1bQuxETgDV1shxzMEtlRVM)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx200];
}

void VysyxSoCFull___024root___act_comb__TOP__933(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__933\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshyOpDWBpEN2FvqAoBexvzqQhBrgKPqa1ouGQELuA6__DOT__outA1 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A) 
                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__D) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshkFD1cWdi6B06OrReBxsStcmSDuC47g9KVgU225pr__DOT__C)) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshpt1Tr3WM7aaBjbIj48GvsQLsIy3Jp5nXenCO1COn__DOT__A0_inv))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B)))) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b15__05d_reg_p__DOT__n0) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b12__05d_reg_p__DOT__n0) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b13__05d_reg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b14__05d_reg_p__DOT__n0))))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__934(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__934\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx157;
    __Vtableidx157 = 0;
    // Body
    __Vtableidx157 = ((4U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__B0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__OUT0))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__A0) 
                                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshjy1movpObsehstoXnGruotcp2igkIAbqVnJAn0Up__DOT__Ax)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshNw2Yl8FndWU4WE7c43zH9ht4lGAal9UevQfbAkYz__DOT__B0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshWF74gTYRBYfuJDhDHWKEcFOBH63dhYQrcA4jUE79__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx157];
}

void VysyxSoCFull___024root___act_comb__TOP__935(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__935\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshAzZanqLtdxtNSYkI13vAbRaI4gTMBXlYMnpkAvbZ__DOT__A 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b7__05d_reg_p__DOT__n0) 
                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b6__05d_reg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b4__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b5__05d_reg_p__DOT__n0))))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshloaHWGygk5EcAA5u4BJm34ERB1TL2tjnZ9Btx8pe__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshxJejHzftUZtcCVxA9a3CRybURBxhfDVPJDyDxnTw__DOT__OUT0))));
}

void VysyxSoCFull___024root___act_comb__TOP__936(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__936\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOeaiuduzr4VISHNOOJw08Emg2DgBD58MoSmleCOa__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshciHHne6rhNekoZENkvUAW4I535VBpjzS17aXbjmV) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)))));
}

void VysyxSoCFull___024root___act_comb__TOP__937(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__937\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHGDUJchuLsKip2jMTk73AU6OVe0PHZlkwBXk4KLo__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshE5VhlL4SUzBtLAn7dACtIoccEDffRg30BYtfUD11)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqqbHLmrb7ZjIBKDwJI5O7KsO1zjY3TjEDcBrnChd__DOT__A0_inv)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__938(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__938\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_60 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__B0)));
}

void VysyxSoCFull___024root___act_comb__TOP__939(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__939\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__940(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__940\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx215 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshL4Jj9QASYvB8l6VwgESkzwBEPBPPzUAO1xr8YSU1) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshLHclwvTmW3x0g3oEL3gJPRrH86TC7mm9ODcpq4PJ)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx215];
}

void VysyxSoCFull___024root___act_comb__TOP__941(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__941\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx275;
    __Vtableidx275 = 0;
    // Body
    __Vtableidx275 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAjxy9xUcM4obe6s3NaQHAEsNZ8J55v1eANxOqLgL) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A1)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshWjqTcVlF5OUrDDz7IPP5m53w3NyBbBsAK9LUhzx9 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx275];
}

void VysyxSoCFull___024root___act_comb__TOP__942(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__942\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    // Body
    __Vtableidx87 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshFw0MbkjH4eKqcB19n2SgEA2PhN8KeHi0ymvk70ES) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn85Bn2EgD3ZQ7lAzhesi6Jl0lbzQwi9XELNEB8ED__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshOvTbPpwlquiaIYhsNqKqojz6kMWohtjBbY28QvhG 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx87];
}

void VysyxSoCFull___024root___act_comb__TOP__943(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__943\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A)) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B)) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshA7bkQaStG6MHbn0EMBDHEprAkikiHqwtRVoA700u__DOT__A1) 
                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_54))))) 
                 | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b24__05d_reg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b25__05d_reg_p__DOT__n0))) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__944(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__944\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshM9DFK05Z1q3DhPHJNO83AxIZODxevBg1gP5m8Khf__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__A0) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__B0) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh6R1V6RoxTMKXc1qsTLsgIyECu7NBBAl7oWB2WRo7__DOT__Z)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__B0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__A0) 
              & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshAmFKGCeeJ0B9j3mnEAP0tHBIajJDyNwHcNrbRCmQ__DOT__A0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__945(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__945\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx367 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHjZbXBtE9YXr5AAaBsfD8h7weyAtMuVH3nbrrQsg) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshyr9pDXFZLkWy0LgD5jwgpFvAMgbSmO9HnBywdYdC)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshQHyDKBjgLXEOwLOWoykPIfXUx1GiKjA7rLs45Ll5 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx367];
}

void VysyxSoCFull___024root___act_comb__TOP__946(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__946\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx178 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh78j4pVVi2f5KsI2tF5ZceGJNOiA0EJGcZktLm4wY) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshHjZbXBtE9YXr5AAaBsfD8h7weyAtMuVH3nbrrQsg)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx178];
}

void VysyxSoCFull___024root___act_comb__TOP__947(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__947\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx491;
    __Vtableidx491 = 0;
    // Body
    __Vtableidx491 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__C0) 
                        & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_505) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__B0))) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__B0) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshS6RmXYLZVCtGAkNBkSGOSPWXJ1GpbzlzmULyOryf__DOT__A1) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__C0)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshMvlUqEcrd2kKV3HNIZvbSmzqjUJa0tqa1AyOi6pF 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx491];
}

void VysyxSoCFull___024root___act_comb__TOP__948(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__948\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_B_AOI22X1P4H7L_Y_A1_XOR2X0P5H7L_Y_B_NAND2X0P5H7L_B__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHplHPsnG4W77kqGarqcVJHg30bVxzXoAvWe7h0My__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshK2knyZJYAq1PPItLalU6ZARgUpGBFO1ZInT4zzBc__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__949(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__949\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshZmB821YYP45xJNVqreFMdOZ0Z6jlofnrzapeHkCJ__DOT__A2 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshK2knyZJYAq1PPItLalU6ZARgUpGBFO1ZInT4zzBc__DOT__Y) 
                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_69))));
}

void VysyxSoCFull___024root___act_comb__TOP__950(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__950\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx342;
    __Vtableidx342 = 0;
    // Body
    __Vtableidx342 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)) 
                                 & (~ (IData)(((0x0c000000U 
                                                == 
                                                (0x0c000000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ 
                                                      ((~ 
                                                        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
                                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
                                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1)))) 
                                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshqL84HDNAVBF9sBzrjAGalvkLhW7wqrZMLj325Wg0__DOT__Ax)) 
                                                          | (~ (IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x0c000000U 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___Vhsh63x59GFGm2nuoIT9AAlAEWFyip9vpb4n5OtnUQpO__DOT__outA1))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshPsOTpBBmNTFJhlDJYuN0SBBMAxqTwgDB92S5a8pK 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx342];
}

void VysyxSoCFull___024root___act_comb__TOP__951(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__951\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx247;
    __Vtableidx247 = 0;
    // Body
    __Vtableidx247 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)) 
                                    | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1) 
                                          | (0U != 
                                             (0x00c00000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1))))))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & ((~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)) 
                                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)))) 
                                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshOLubj7pnrXhOv8r7C4ZH5je4JvglyaBhFhuBMsOm__DOT__Ax)) 
                                                    & (~ (IData)(
                                                                 ((0x00c00000U 
                                                                   == 
                                                                   (0x00c00000U 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshIYu1OkaiulMBMrpCPVeABxzrXNutV8Gg4QZOCu0m__DOT__outA1)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshgdMfuExfx0Flp5eADFAIkC0o3IA5doFcU0MIPYEX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx247];
}

void VysyxSoCFull___024root___act_comb__TOP__952(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__952\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx246;
    __Vtableidx246 = 0;
    // Body
    __Vtableidx246 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)) 
                                 & (~ (IData)(((0x00300000U 
                                                == 
                                                (0x00300000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ 
                                                      ((~ 
                                                        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1)))) 
                                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)) 
                                                          | (~ (IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x00300000U 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshJdDWt1gHABtI0hqsI7lFwsa12UL1cALG1TdaWAgQ__DOT__outA1))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhsheXA7qBKXJhmmiftdZF3TQAhlYTBbqf8bmFBVnXeS 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx246];
}

void VysyxSoCFull___024root___act_comb__TOP__953(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__953\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx156;
    __Vtableidx156 = 0;
    // Body
    __Vtableidx156 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)))) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)) 
                                    & (~ (IData)(((0x000c0000U 
                                                   == 
                                                   (0x000c0000U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1))))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshEibz7fhbePJPV7h5Jh5LbiLxwjJgYAmGzUU8hQf4__DOT__outA))) 
                                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshRyp0BmZK70hUJgb0tOwWscRzB4kQcTutvYBVeRBw__DOT__A0_inv)) 
                                                         | (~ (IData)(
                                                                      ((0U 
                                                                        != 
                                                                        (0x000c0000U 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshxPRGvi5FBYoZ4jpkvm5zrH7g1gKEhBsPauvqHUDP__DOT__outA1)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshTWoHgA6Tp0e3SOo9jdsRTAEMWgVHQg2OYscNycd7 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx156];
}

void VysyxSoCFull___024root___act_comb__TOP__954(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__954\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx128;
    __Vtableidx128 = 0;
    // Body
    __Vtableidx128 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)) 
                                 | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1) 
                                       | (0U != (0x0000c000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)))))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 ((~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax)) 
                                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)))) 
                                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshuZnb3xVOsLZqED56gsAjNahwVM1B3Wg4RqFHaaSp__DOT__Ax)) 
                                                     & (~ (IData)(
                                                                  ((0x0000c000U 
                                                                    == 
                                                                    (0x0000c000U 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshjpGiIbenqUS7qOdI4BEwH2fENR1rJpLMHVmUYlhD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx128];
}

void VysyxSoCFull___024root___act_comb__TOP__955(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__955\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx129;
    __Vtableidx129 = 0;
    // Body
    __Vtableidx129 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)) 
                                    & (~ (IData)(((0x00003000U 
                                                   == 
                                                   (0x00003000U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1))))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & ((~ (IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x00003000U 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))) 
                                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshlVVpvCAKrRqNQUKAYUzsAlTsmHwtfAXuVoRNmYFD__DOT__Ax)) 
                                                         & (~ 
                                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                                                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)) 
                                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh6G8RrUaajBhzo9JMKA3S9tQSd9TmBWsHVegCICmV__DOT__outA1)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh0Mny1BSAaJeAnpsj966SAKhAoGDuZYMGtLP0Ropc 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx129];
}

void VysyxSoCFull___024root___act_comb__TOP__956(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__956\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx492;
    __Vtableidx492 = 0;
    // Body
    __Vtableidx492 = ((4U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv)))) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)) 
                                    & (~ (IData)(((0x00000c00U 
                                                   == 
                                                   (0x00000c00U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv))))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshUxwXnlgWM0kQ3vJhO0bahioFyL7KNSOhLKfAZvBl__DOT__outA))) 
                                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshAm26NQj8W0cbp9MkxtzqvOkN018kamw31sMJ2jd4__DOT__A0_inv)) 
                                                         | (~ 
                                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshrN8EXeQqwUhGjCF3TBaABArhcravJ561CBiKONDR__DOT__A0_inv) 
                                                             | (0U 
                                                                != 
                                                                (0x00000c00U 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshIPQLKTZVTraGAlTcV0YkA7KwnutiUz2X5usOnJMw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx492];
}

void VysyxSoCFull___024root___act_comb__TOP__957(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__957\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx423;
    __Vtableidx423 = 0;
    // Body
    __Vtableidx423 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshkuGm4NIpiK0QcQGc7AbDGn1NPvmNDhfrWN1IX0pf__DOT__outA))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)) 
                                 | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1) 
                                       | (0U != (0x0000000cU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)))))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 ((~ 
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA))) 
                                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)) 
                                                     & (~ (IData)(
                                                                  ((0x0000000cU 
                                                                    == 
                                                                    (0x0000000cU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh2Jrph16DvpXkVJTNyODPXbMxav9os8g7hj1KDqRy__DOT__outA1))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhshcptngsxz9DVRwPPGjiAqDJAAJw1Dn3fJcSsfEVf5 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx423];
}

void VysyxSoCFull___024root___act_comb__TOP__958(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__958\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx355;
    __Vtableidx355 = 0;
    // Body
    __Vtableidx355 = ((4U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)) 
                                 & (~ (IData)(((0x30000000U 
                                                == 
                                                (0x30000000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                         << 1U) | (1U 
                                                   & (~ 
                                                      ((~ 
                                                        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax)) 
                                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)) 
                                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv)))) 
                                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshp3EhSD8sWgGxdMoUA3yegYf8D2UO8LDr6AAOu5Av__DOT__Ax)) 
                                                          | (~ 
                                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshkFLl2C2mrg4U7BiDLMvrCkVEOlwFsnqeE1qoC3zr__DOT__A0_inv) 
                                                              | (0U 
                                                                 != 
                                                                 (0x30000000U 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1))))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshUAcT9Pw0tixjrMWu8vrTOzIlOReRWq9PhegcXsRh 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx355];
}

void VysyxSoCFull___024root___act_comb__TOP__959(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__959\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    // Body
    __Vtableidx73 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b8__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_8___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_8___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx73];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_8___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_8___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__960(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__960\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx441 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshLHclwvTmW3x0g3oEL3gJPRrH86TC7mm9ODcpq4PJ) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshDhgphStBexP8jmSAy2CfbqUTuTmRxw6DICdpqOTW__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshuvheu6RT3ky8riscA0nmjgKyHS570i9zfYq4W0dX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx441];
}

void VysyxSoCFull___024root___act_comb__TOP__961(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__961\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx220 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshDhgphStBexP8jmSAy2CfbqUTuTmRxw6DICdpqOTW__DOT__A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhshs0L0NA88RUqoCxMMlqXGRanNu5pu5OwW7HWkTTKg__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshEHRwvSXewBIXASAfFXV5zeM1TAgBBaOvLWKMB26d__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx220];
}

void VysyxSoCFull___024root___act_comb__TOP__962(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__962\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshpAfKbEvnQjFTCGAyO1JuNRhIuhduQGTvTqGuOd2W) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__963(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__963\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshuha5eZhBA9toc2M68lfLaiexVi2uLBG6VBmgEwBA__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshNOHpNq2EKv57EbOoIhsAUmSdNmGdyVxYJj6TJo18__DOT__Ax)) 
                     | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b20__05d_reg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b21__05d_reg_p__DOT__n0))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))) 
                 | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshYTiU5uhXF3rxMRn8GiebLjozJqGbTwBhn0FmwKyN__DOT__A) 
                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_507))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__964(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__964\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    // Body
    __Vtableidx55 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b20__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_20___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_20___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx55];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_20___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_20___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__965(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__965\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__966(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__966\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    // Body
    __Vtableidx66 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b30__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_30___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_30___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx66];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_30___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_30___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__967(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__967\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    // Body
    __Vtableidx48 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b14__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_14___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_14___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx48];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_14___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_14___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__968(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__968\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    // Body
    __Vtableidx63 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b28__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_28___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_28___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx63];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_28___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_28___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__969(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__969\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__970(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__970\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    // Body
    __Vtableidx52 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b18__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_18___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_18___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx52];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_18___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_18___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__971(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__971\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    // Body
    __Vtableidx57 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b22__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_22___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_22___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx57];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_22___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_22___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__972(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__972\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    // Body
    __Vtableidx61 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b26__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_26___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_26___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx61];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_26___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_26___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__973(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__973\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    // Body
    __Vtableidx67 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b31__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause_31___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_31___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx67];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_31___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_31___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__974(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__974\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    __Vtableidx47 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b13__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_13___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_13___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx47];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_13___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_13___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__975(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__975\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    __Vtableidx49 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b15__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_15___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_15___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx49];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_15___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_15___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__976(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__976\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    // Body
    __Vtableidx50 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b16__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_16___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_16___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx50];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_16___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_16___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__977(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__977\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    __Vtableidx56 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b21__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_21___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_21___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx56];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_21___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_21___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__978(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__978\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    __Vtableidx60 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b25__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_25___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_25___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx60];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_25___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_25___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__979(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__979\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__980(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__980\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__981(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__981\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    // Body
    __Vtableidx45 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b11__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_11___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_11___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx45];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_11___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_11___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__982(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__982\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
    __Vtableidx46 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b12__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_12___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_12___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx46];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_12___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_12___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__983(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__983\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    // Body
    __Vtableidx51 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b17__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_17___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx51];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_17___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__984(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__984\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__985(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__985\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx304;
    __Vtableidx304 = 0;
    // Body
    __Vtableidx304 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshZxLPKrv9nk7nK4AQKFa5sMCBaB5pXTii4d3i6XCf) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcEopVxfJuyBD9PlhhI3qiWukLob7O0NmbMQTyF4J)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshSHiBTpAS9oNc534OWCI1fmFIXqnPUp1C1Os2YHAO 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx304];
}

void VysyxSoCFull___024root___act_comb__TOP__986(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__986\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx487;
    __Vtableidx487 = 0;
    // Body
    __Vtableidx487 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh0OXDSH4jTHBqdQn1UTnB4KGWWUMPvYud7btEPVxK) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshZxLPKrv9nk7nK4AQKFa5sMCBaB5pXTii4d3i6XCf)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshJBR2bziA2iBav3piuPahpBgryDrnZNKqoarFSkF1 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx487];
}

void VysyxSoCFull___024root___act_comb__TOP__987(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__987\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx309;
    __Vtableidx309 = 0;
    // Body
    __Vtableidx309 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh0OXDSH4jTHBqdQn1UTnB4KGWWUMPvYud7btEPVxK) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshRQCtIa9xHVhW5nm9e830MdmHi25LagplPkQJvShH)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshgabaGAerhJ3jiLTvKKm5UaEYlln2biVPXPpio1rE 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx309];
}

void VysyxSoCFull___024root___act_comb__TOP__988(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__988\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx258;
    __Vtableidx258 = 0;
    // Body
    __Vtableidx258 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__Y) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshxxkpQEALotsA4BBLOXBZHXtO7CkidFlEQVu8MHOW)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshsfiAHofGt1Jxjn16ZYjkzGL1nGTv8Vj5OxDF9JDY 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx258];
}

void VysyxSoCFull___024root___act_comb__TOP__989(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__989\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx490;
    __Vtableidx490 = 0;
    // Body
    __Vtableidx490 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshP5b5S1uKu38sh5K5SABItKCycGKAHYAII4tyWF8I) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh6pQi6bcyr6Nki5HQKOALNCBOJ7IO45gfIDjtqvkr)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHNENRYmAvlxBRvFpKtYUnLiAfmkvejmBMnxCl6aC 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx490];
}

void VysyxSoCFull___024root___act_comb__TOP__990(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__990\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx283;
    __Vtableidx283 = 0;
    // Body
    __Vtableidx283 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__Y) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshjD42LJroHwAX5imii3pgSbys5lr1smAAl86WGOTu)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshOOWfbWlGvx6lmbCzHATFWe3q26PFoEGVRtAiPTx0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx283];
}

void VysyxSoCFull___024root___act_comb__TOP__991(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__991\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx318;
    __Vtableidx318 = 0;
    // Body
    __Vtableidx318 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshnkUj8hIgn8RLhf7a7XUPimdwGUrLjqNWelpoBpLQ) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshP5b5S1uKu38sh5K5SABItKCycGKAHYAII4tyWF8I)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshVzPvXeSUKbEWDgFqWQYkTMToBaci2ABhk9AVTygc 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx318];
}

void VysyxSoCFull___024root___act_comb__TOP__992(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__992\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx477;
    __Vtableidx477 = 0;
    // Body
    __Vtableidx477 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshhdYNIVKhkdFlZLx3S7WsOsXxP8cyu8goiVcEXfSP__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshkzQoGPz6dPUiwKefMVKmzLlpge96XZ1zhNvxMzvW__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx477];
}

void VysyxSoCFull___024root___act_comb__TOP__993(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__993\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx301;
    __Vtableidx301 = 0;
    // Body
    __Vtableidx301 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4hebkZgAobvagyNsJDLbakwxKTvB4VmF4oxzPWGP) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshhdYNIVKhkdFlZLx3S7WsOsXxP8cyu8goiVcEXfSP__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshTq0z5MY3eWtnd3aUp1Js3rAb3XHTNiEL4O8Bm2tw 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx301];
}

void VysyxSoCFull___024root___act_comb__TOP__994(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__994\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx167;
    __Vtableidx167 = 0;
    // Body
    __Vtableidx167 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshnccO4Wn4Y9RUFgVIxHj5kfos8rvCdrrJvcfqKYOB__DOT__Y) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshbH3Igfgf22FYLuZAhlkDAcTre2QmX9IoJIjXE1Np)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshlhHC4zk3wtIuU4DJiNlF2pFzmxonSEqTJfAujfPH 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx167];
}

void VysyxSoCFull___024root___act_comb__TOP__995(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__995\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx478;
    __Vtableidx478 = 0;
    CData/*2:0*/ __Vtableidx479;
    __Vtableidx479 = 0;
    // Body
    __Vtableidx479 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh77AbyJeR86gtVd43CnaObxI7LJPJVFlJHygVwUXV__DOT__A1) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4hebkZgAobvagyNsJDLbakwxKTvB4VmF4oxzPWGP)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx479];
    __Vtableidx478 = ((4U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_460)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx478];
}

void VysyxSoCFull___024root___act_comb__TOP__996(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__996\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx522;
    __Vtableidx522 = 0;
    // Body
    __Vtableidx522 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshbH3Igfgf22FYLuZAhlkDAcTre2QmX9IoJIjXE1Np) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWGZj0IQFHY22BuvAPjaLwXYSqzR3Wd6q1LU9A21P)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUcjthnJNHSdFWxzXtexyCHy19NRw5cliAjBKDJSi 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx522];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshi1v4e8ESeE5RvrUMEA3ohlPVwmoKm3h0BweVYvOO__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUcjthnJNHSdFWxzXtexyCHy19NRw5cliAjBKDJSi) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshtdhzwKAE76grIWYYnexyuKM35L2eB6Xm5Ou9oSJu__DOT__Y)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__997(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__997\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx416;
    __Vtableidx416 = 0;
    // Body
    __Vtableidx416 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWGZj0IQFHY22BuvAPjaLwXYSqzR3Wd6q1LU9A21P) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshpgjxSJMlJx1B0kJ1CRxABqMHsPMV6a5OdFIb5n1x)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshUfZaAotOGFBVYUOCZ6qKX8ONV5wYy7ENSuT2cqhJ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx416];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR3X1P4H7L_Y_C_INVX0P5H7L_Y__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshUfZaAotOGFBVYUOCZ6qKX8ONV5wYy7ENSuT2cqhJ)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__998(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__998\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_460));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshtdhzwKAE76grIWYYnexyuKM35L2eB6Xm5Ou9oSJu__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__999(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__999\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__B0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_A1_MUX2X0P5H7L_Y_B) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_C0_AND2X1H7L_Y__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1000(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1000\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    // Body
    __Vtableidx69 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b4__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_4___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx69];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_4___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__1001(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1001\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx380 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshHjZlvC7bl5yrNe8YeFQePBIxUfybOWL1M5wYn6Ag) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshU59SEB0ARloAPM5pdEpv9CxeManB0kxDQ8DcCAGe)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx380];
}

void VysyxSoCFull___024root___act_comb__TOP__1002(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1002\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx415 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx415];
}

void VysyxSoCFull___024root___act_comb__TOP__1003(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1003\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx101 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshU59SEB0ARloAPM5pdEpv9CxeManB0kxDQ8DcCAGe) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshvB8HILf9o9lEcP9G6FUpsU9KIsMrtB0Rh39DSGcw)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_D_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx101];
}

void VysyxSoCFull___024root___act_comb__TOP__1004(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1004\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx376 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBMBhsatpzMBapBdzaLfNicQ3EgJ0dtMEECC0bNyX) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshfKLJ2gCrgxEcoMEObaLz0s6mh82GjGIHWe8Vs0qP)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx376];
}

void VysyxSoCFull___024root___act_comb__TOP__1005(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1005\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx412 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx412];
}

void VysyxSoCFull___024root___act_comb__TOP__1006(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1006\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx437 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshfKLJ2gCrgxEcoMEObaLz0s6mh82GjGIHWe8Vs0qP) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshAgVgkEKVyKgZoPyO1hKEBdmx4Zj09I3hSAZ8759W)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx437];
}

void VysyxSoCFull___024root___act_comb__TOP__1007(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1007\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx205 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx205];
}

void VysyxSoCFull___024root___act_comb__TOP__1008(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1008\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx374 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshAgVgkEKVyKgZoPyO1hKEBdmx4Zj09I3hSAZ8759W) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh01rCJ3safJ1IygbrsCggG0PAmXIYa9ylmBHJDXut)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx374];
}

void VysyxSoCFull___024root___act_comb__TOP__1009(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1009\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx430 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhshfl9RgUXRhMXkWmkEoz3XYrdo1tzGuCNFVpEZIj71) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBe6BFU1QLYQa8r0ZK19RW9w25DgMPTwKvRITqfkm)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshLOhrFntQIx7szY4jmT2wAdhgktDXLMeRUea2Zexb 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx430];
}

void VysyxSoCFull___024root___act_comb__TOP__1010(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1010\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx188 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx188];
}

void VysyxSoCFull___024root___act_comb__TOP__1011(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1011\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
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

void VysyxSoCFull___024root___act_comb__TOP__1012(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1012\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    // Body
    __Vtableidx44 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b10__05d_reg_p__DOT__n0) 
                      << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_ecall_NAND2BX1P4H7L_AN__DOT__Ax)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_10___05Freg_p_D_NOR2BX1P4H7L_Z__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_10___05Freg_p_D_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx44];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_10___05Freg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_10___05Freg_p_D_AND2X1H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__1013(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1013\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx476;
    __Vtableidx476 = 0;
    // Body
    __Vtableidx476 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshBg44vlLCxApTG6bCO1L5VzxjyqBAdawvsOAgIXRW) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshnkUj8hIgn8RLhf7a7XUPimdwGUrLjqNWelpoBpLQ)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4SZFLVBes9sDBkp1Hz3ZaZeNHvTyZGri4aAsJnnl 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx476];
}

void VysyxSoCFull___024root___act_comb__TOP__1014(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1014\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx298;
    __Vtableidx298 = 0;
    // Body
    __Vtableidx298 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshkzQoGPz6dPUiwKefMVKmzLlpge96XZ1zhNvxMzvW__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshBg44vlLCxApTG6bCO1L5VzxjyqBAdawvsOAgIXRW)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshnENePUVmSLc8h4xNFnnTDGIYD6sKpf8SrbZJOqFW 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx298];
}

void VysyxSoCFull___024root___act_comb__TOP__1015(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1015\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshmthFuojIFZ96Hz675M0zYmcX40E3Iap87AP9y2lB__DOT__OUT0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshSl5vu3tj7QADLeNKtHwo8tArZbjCf9ikhuTA1oR9__DOT__A0_inv)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1016(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1016\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__A1N 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBxuVRpIPzvUaXKnD3oW7KnjcseMsOLN7SQHt92YZ__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshleUOJ9WqYBVE5aOLvkbmdSjWCyLCwfgDnlyFo2jQ))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1017(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1017\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_A_AOI2BB1X0P5H7L_Y__DOT__A1N 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBxuVRpIPzvUaXKnD3oW7KnjcseMsOLN7SQHt92YZ__DOT__Y) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshOTJHTY7agLerK3AheT6SM1fTPH7sggJUlHcCWBBX))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1018(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1018\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx164;
    __Vtableidx164 = 0;
    // Body
    __Vtableidx164 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshjD42LJroHwAX5imii3pgSbys5lr1smAAl86WGOTu) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshrorq2U0iKLZE8DlMLklEAO9mS8lH5pie7Jm9dx4g)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshbHOQOZBq8y7Cds7nPVSnvKrJvdzsE1JFXRA1hzE5 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx164];
}

void VysyxSoCFull___024root___act_comb__TOP__1019(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1019\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx287;
    __Vtableidx287 = 0;
    // Body
    __Vtableidx287 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhshrorq2U0iKLZE8DlMLklEAO9mS8lH5pie7Jm9dx4g) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshMd68kfLo0fw9rNFQBW8ZfIENxxg5EdhBYwkdBCRV)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshdfmzKPkJezHrLApESekApM8jkJ4Au3BZbGcmTYDD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx287];
}

void VysyxSoCFull___024root___act_comb__TOP__1020(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1020\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx392;
    __Vtableidx392 = 0;
    // Body
    __Vtableidx392 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshCwP5X7Ka5VOeBXMiB8XIcrKHVqCLXiYK6TZhK0ke) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshdSNzAHExCJEg7N7QIKFhkuHFQSiKUaNvtGuYcZvN)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshC01hg1aKUlBxJeJ6b3iKXWsSlS18Ixu0hJB6Jk7Z 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx392];
}

void VysyxSoCFull___024root___act_comb__TOP__1021(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1021\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx334;
    __Vtableidx334 = 0;
    // Body
    __Vtableidx334 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcEopVxfJuyBD9PlhhI3qiWukLob7O0NmbMQTyF4J) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshdSNzAHExCJEg7N7QIKFhkuHFQSiKUaNvtGuYcZvN)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshDn57i6QVVlMqnahrLzDnIMRTC23wrmPAC8wqGPgI 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx334];
}

void VysyxSoCFull___024root___act_comb__TOP__1022(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1022\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx222 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx222];
}

void VysyxSoCFull___024root___act_comb__TOP__1023(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1023\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx104 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshM8xT5GM5kwEnWlMhZiTjqVA2YmNYSKCIlCov05Ip) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshHjZlvC7bl5yrNe8YeFQePBIxUfybOWL1M5wYn6Ag)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_D_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx104];
}

void VysyxSoCFull___024root___act_comb__TOP__1024(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1024\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx254;
    __Vtableidx254 = 0;
    // Body
    __Vtableidx254 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshXAgAdXKb4tzuRn8tdjqWvJGxdBWDvMReq4u79GA8) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshDJWbALxCS0VbABmK4RBU6J2Lk8iKs8o75LpVM8WX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshSGPOP22yq0tSuSZdnv1KhVBTcHR2fxVvZ4sf9cSX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx254];
}

void VysyxSoCFull___024root___act_comb__TOP__1025(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1025\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx349;
    __Vtableidx349 = 0;
    // Body
    __Vtableidx349 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshDJWbALxCS0VbABmK4RBU6J2Lk8iKs8o75LpVM8WX) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshnttL4RT5LYi41Pg8i8gAjgAavI0By1RdB90yNa9Q)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshdWN4AlDIgkkMWmsilVJw8YBbwixl6iCfXG1GyRm2 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx349];
}

void VysyxSoCFull___024root___act_comb__TOP__1026(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1026\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgD7PiCziocuro6zMVVscBlxecLOCjYf5vdndBn9g__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A)) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__B)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh8A9dq5zrvGBoN0M7V3qi125mTsVbxS0rzbLQDJ7J__DOT__C)))) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b29__05d_reg_p__DOT__n0) 
                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_462))));
}

void VysyxSoCFull___024root___act_comb__TOP__1027(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1027\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx361 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshIERLqvbdGB6gFAtOk8t9LYU9RW1ZZNJ84zNVtpNf) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshcdgAx9mVANtRY1VU44FylBOKDNzrdLFseT3KgCgO)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx361];
}

void VysyxSoCFull___024root___act_comb__TOP__1028(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1028\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshrUgozxE8O1P8MASN5VK7pgIQvLygicQHiVlNAbZP__DOT__A1N 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshcdgAx9mVANtRY1VU44FylBOKDNzrdLFseT3KgCgO) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshleUOJ9WqYBVE5aOLvkbmdSjWCyLCwfgDnlyFo2jQ)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1029(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1029\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A_AOI21X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshACQy74hrwv7kApVNFgdegMxn05PhqHJkFp3FQv1t))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshOTJHTY7agLerK3AheT6SM1fTPH7sggJUlHcCWBBX))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1030(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1030\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx181 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshACQy74hrwv7kApVNFgdegMxn05PhqHJkFp3FQv1t) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx181];
}

void VysyxSoCFull___024root___act_comb__TOP__1031(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1031\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx488;
    __Vtableidx488 = 0;
    // Body
    __Vtableidx488 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshbFp2pTipSJ3CPQtdkYCI9eJXCBEZBpWcGFJ46Yqm) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshRQCtIa9xHVhW5nm9e830MdmHi25LagplPkQJvShH)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshCAaOgehgvHa6trzUnknv2HxYdiMUaurtF9qipbM4 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx488];
}

void VysyxSoCFull___024root___act_comb__TOP__1032(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1032\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx314;
    __Vtableidx314 = 0;
    // Body
    __Vtableidx314 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhsh6pQi6bcyr6Nki5HQKOALNCBOJ7IO45gfIDjtqvkr) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshbFp2pTipSJ3CPQtdkYCI9eJXCBEZBpWcGFJ46Yqm)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhshyiqyd2Ga7ShmVt8SKhY79U9VbMOopI5CXfAq2DSM 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx314];
}

void VysyxSoCFull___024root___act_comb__TOP__1033(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1033\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx410 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx410];
}

void VysyxSoCFull___024root___act_comb__TOP__1034(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1034\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_51 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshXe2vB1MUTpEZ0Lo35MFeU1Lljn9BdaA2ufghOmal__DOT__Y)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshvwN7AEnpB2ll8On3E9ZAOx2t0WB707Md9YoXJC1r__DOT__A0N) 
                                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b19__05d_reg_p__DOT__n0)) 
                                                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b18__05d_reg_p__DOT__n0)) 
                                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1035(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1035\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx277;
    __Vtableidx277 = 0;
    // Body
    __Vtableidx277 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshxxkpQEALotsA4BBLOXBZHXtO7CkidFlEQVu8MHOW) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshukervBLgN2TVSmAPi3RLVFqXXkSZxiRkyBH0z46e)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshScChBUIFEclId1d8jNgn95LyY1GymjY25sB7je9u 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx277];
}

void VysyxSoCFull___024root___act_comb__TOP__1036(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1036\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx163;
    __Vtableidx163 = 0;
    // Body
    __Vtableidx163 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshukervBLgN2TVSmAPi3RLVFqXXkSZxiRkyBH0z46e) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshpaYfzOip1YsRxf584dton0WCLqLfh3CND20tbR17 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx163];
}

void VysyxSoCFull___024root___act_comb__TOP__1037(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1037\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx369 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshXUUAfIPv2YRweYt1ztlh79h0GBRAtsbeM7eyNwup) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___Vhshfl9RgUXRhMXkWmkEoz3XYrdo1tzGuCNFVpEZIj71)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx369];
}

void VysyxSoCFull___024root___act_comb__TOP__1038(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1038\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx434 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh01rCJ3safJ1IygbrsCggG0PAmXIYa9ylmBHJDXut) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshXUUAfIPv2YRweYt1ztlh79h0GBRAtsbeM7eyNwup)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx434];
}

void VysyxSoCFull___024root___act_comb__TOP__1039(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1039\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx195 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx195];
}

void VysyxSoCFull___024root___act_comb__TOP__1040(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1040\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx199 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh5n1YF9YXgKobmguiyIY7aMXPLmFawJhAXKdall1X 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx199];
}

void VysyxSoCFull___024root___act_comb__TOP__1041(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1041\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshvwN7AEnpB2ll8On3E9ZAOx2t0WB707Md9YoXJC1r__DOT__outA 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshWF74gTYRBYfuJDhDHWKEcFOBH63dhYQrcA4jUE79__DOT__YN)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshvwN7AEnpB2ll8On3E9ZAOx2t0WB707Md9YoXJC1r__DOT__A0N))));
}

void VysyxSoCFull___024root___act_comb__TOP__1042(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1042\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx166;
    __Vtableidx166 = 0;
    // Body
    __Vtableidx166 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshMd68kfLo0fw9rNFQBW8ZfIENxxg5EdhBYwkdBCRV) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOeaiuduzr4VISHNOOJw08Emg2DgBD58MoSmleCOa__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshypurAs5Az9FqF6dML7NTLe9eAd9gGr3F4FbxYEZ0 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx166];
}

void VysyxSoCFull___024root___act_comb__TOP__1043(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1043\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx520;
    __Vtableidx520 = 0;
    // Body
    __Vtableidx520 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOeaiuduzr4VISHNOOJw08Emg2DgBD58MoSmleCOa__DOT__Y) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshnccO4Wn4Y9RUFgVIxHj5kfos8rvCdrrJvcfqKYOB__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshsCeW9VBZrlukhfBAy4UZ3mkqcy8cBBDOQ5ptaYZB 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx520];
}

void VysyxSoCFull___024root___act_comb__TOP__1044(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1044\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx211 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx211];
}

void VysyxSoCFull___024root___act_comb__TOP__1045(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1045\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx274;
    __Vtableidx274 = 0;
    // Body
    __Vtableidx274 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshnttL4RT5LYi41Pg8i8gAjgAavI0By1RdB90yNa9Q) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshWjqTcVlF5OUrDDz7IPP5m53w3NyBbBsAK9LUhzx9)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshvaZrNxJjLFuyrSOmz1LejZZXurBT6Iu6zAL7L4MH 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx274];
}

void VysyxSoCFull___024root___act_comb__TOP__1046(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1046\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx272;
    __Vtableidx272 = 0;
    // Body
    __Vtableidx272 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshWjqTcVlF5OUrDDz7IPP5m53w3NyBbBsAK9LUhzx9) 
                       << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsho6xm4L20fPDMAJvLmdREaZBYgbzjoxsfcRxA08Iy__DOT__Y)) 
                                        << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshsnnuvNQsITsjGtRYid9IhrOGP3dx5b2c7rBUZ6ZD 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx272];
}

void VysyxSoCFull___024root___act_comb__TOP__1047(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1047\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx248;
    __Vtableidx248 = 0;
    CData/*2:0*/ __Vtableidx249;
    __Vtableidx249 = 0;
    // Body
    __Vtableidx248 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshM9DFK05Z1q3DhPHJNO83AxIZODxevBg1gP5m8Khf__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshBUOEaaqog4OcAtZmj1nhI8EMruQSEBBB3hoVWA2K 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx248];
    __Vtableidx249 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshpAKb5JohiSnNaNcDoFVnjw4FWYQ9Jbmvjj9v6hRk__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshM9DFK05Z1q3DhPHJNO83AxIZODxevBg1gP5m8Khf__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhsh1iJlQBtBlC8CqdxvPd0Nz7ZTFElXFxoET3a4ofgC__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx249];
}

void VysyxSoCFull___024root___act_comb__TOP__1048(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1048\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx366 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBe6BFU1QLYQa8r0ZK19RW9w25DgMPTwKvRITqfkm) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshQHyDKBjgLXEOwLOWoykPIfXUx1GiKjA7rLs45Ll5)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx366];
}

void VysyxSoCFull___024root___act_comb__TOP__1049(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1049\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx429 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshQHyDKBjgLXEOwLOWoykPIfXUx1GiKjA7rLs45Ll5) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshIERLqvbdGB6gFAtOk8t9LYU9RW1ZZNJ84zNVtpNf)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshuV46C6OsbxybqVf2cXp1PLHxCzuzdMKjFCoPBaMt 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx429];
}

void VysyxSoCFull___024root___act_comb__TOP__1050(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1050\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx177 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx177];
}

void VysyxSoCFull___024root___act_comb__TOP__1051(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1051\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx191 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshDUkXLdEBKXycm5yjSKYKkC5aQnYN8JBe8JKqbAcc 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx191];
}

void VysyxSoCFull___024root___act_comb__TOP__1052(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1052\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshSznLXGlZAmpmZnnzUeNVv3NheL03U9uioVlHuca0__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshPsOTpBBmNTFJhlDJYuN0SBBMAxqTwgDB92S5a8pK)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1053(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1053\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn5No71eFBZ5LiyNW9rBnylp6ac0z3BCswIFIT7VK__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhsheXA7qBKXJhmmiftdZF3TQAhlYTBbqf8bmFBVnXeS)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__1054(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1054\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshDM1FjBjZBnjvB9nAebP8reAyVci3RQS7Bn9HQOH4__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh0Mny1BSAaJeAnpsj966SAKhAoGDuZYMGtLP0Ropc) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__1055(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1055\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshXaycKk4awjPSToU25Z2FZXsWS5I0aFwmx5AFZh5c__DOT__A 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshIPQLKTZVTraGAlTcV0YkA7KwnutiUz2X5usOnJMw)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshSl5vu3tj7QADLeNKtHwo8tArZbjCf9ikhuTA1oR9__DOT__A0_inv)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshIPQLKTZVTraGAlTcV0YkA7KwnutiUz2X5usOnJMw)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshMvlUqEcrd2kKV3HNIZvbSmzqjUJa0tqa1AyOi6pF))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1056(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1056\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh0VdCrMx6oBl9dByhbQ1IUMBWNVWdmwxNBGDcMvtQ__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhshcptngsxz9DVRwPPGjiAqDJAAJw1Dn3fJcSsfEVf5)));
}

void VysyxSoCFull___024root___act_comb__TOP__1057(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1057\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshjbHlRqyX8o4f1mT10T65PMYCA70uH3AnS3yhIcvT__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshUAcT9Pw0tixjrMWu8vrTOzIlOReRWq9PhegcXsRh)));
}

void VysyxSoCFull___024root___act_comb__TOP__1058(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1058\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx379 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshvB8HILf9o9lEcP9G6FUpsU9KIsMrtB0Rh39DSGcw) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshuvheu6RT3ky8riscA0nmjgKyHS570i9zfYq4W0dX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx379];
}

void VysyxSoCFull___024root___act_comb__TOP__1059(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1059\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx440 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshuvheu6RT3ky8riscA0nmjgKyHS570i9zfYq4W0dX) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshBMBhsatpzMBapBdzaLfNicQ3EgJ0dtMEECC0bNyX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx440];
}

void VysyxSoCFull___024root___act_comb__TOP__1060(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1060\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx219 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx219];
}

void VysyxSoCFull___024root___act_comb__TOP__1061(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1061\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx414 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshCdBR8qegoKf21AkbbF8DUI8zUcWocKlHKoUoWood__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx414];
}

void VysyxSoCFull___024root___act_comb__TOP__1062(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1062\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshKeUCmSODotBBPDN67qOVYGjqK15Sda1tPkc3PHe4__DOT__Z 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh5oWsDwBzabBcUNeWNeTAyNSX1zytwh6OBQwJgkwH__DOT__Y)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1063(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1063\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx303;
    __Vtableidx303 = 0;
    // Body
    __Vtableidx303 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshgabaGAerhJ3jiLTvKKm5UaEYlln2biVPXPpio1rE) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshSHiBTpAS9oNc534OWCI1fmFIXqnPUp1C1Os2YHAO)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx303];
}

void VysyxSoCFull___024root___act_comb__TOP__1064(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1064\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshx5PV1HzfHdbI3zCupB6i1gx6S2XBaB7BdBuo0VlF__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshTq0z5MY3eWtnd3aUp1Js3rAb3XHTNiEL4O8Bm2tw) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshECVRWE0AjB75bkM1BR9E7Oah55ASm6JtB3j4SxH5__DOT__Y)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1065(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1065\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx474;
    __Vtableidx474 = 0;
    // Body
    __Vtableidx474 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx474];
}

void VysyxSoCFull___024root___act_comb__TOP__1066(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1066\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXuiyKAiw5o3y69ZKYY0NsS4p5OJX5GQhoFzxfkPH__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshlhHC4zk3wtIuU4DJiNlF2pFzmxonSEqTJfAujfPH) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshUfZaAotOGFBVYUOCZ6qKX8ONV5wYy7ENSuT2cqhJ)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1067(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1067\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx373 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx373];
}

void VysyxSoCFull___024root___act_comb__TOP__1068(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1068\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx489;
    __Vtableidx489 = 0;
    // Body
    __Vtableidx489 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4SZFLVBes9sDBkp1Hz3ZaZeNHvTyZGri4aAsJnnl) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHNENRYmAvlxBRvFpKtYUnLiAfmkvejmBMnxCl6aC)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx489];
}

void VysyxSoCFull___024root___act_comb__TOP__1069(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1069\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx475;
    __Vtableidx475 = 0;
    // Body
    __Vtableidx475 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___Vhsh4SZFLVBes9sDBkp1Hz3ZaZeNHvTyZGri4aAsJnnl)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx475];
}

void VysyxSoCFull___024root___act_comb__TOP__1070(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1070\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx136;
    __Vtableidx136 = 0;
    // Body
    __Vtableidx136 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshnENePUVmSLc8h4xNFnnTDGIYD6sKpf8SrbZJOqFW) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshVzPvXeSUKbEWDgFqWQYkTMToBaci2ABhk9AVTygc)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx136];
}

void VysyxSoCFull___024root___act_comb__TOP__1071(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1071\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx297;
    __Vtableidx297 = 0;
    // Body
    __Vtableidx297 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshTq0z5MY3eWtnd3aUp1Js3rAb3XHTNiEL4O8Bm2tw) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshnENePUVmSLc8h4xNFnnTDGIYD6sKpf8SrbZJOqFW)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx297];
}

void VysyxSoCFull___024root___act_comb__TOP__1072(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1072\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshZA52OnrJxjZBmqlKf960Vns02mA2RLONAkYb0Kvi__DOT__B 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b9__05d_reg_p__DOT__n0) 
                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b8__05d_reg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b10__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b11__05d_reg_p__DOT__n0))))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshZmB821YYP45xJNVqreFMdOZ0Z6jlofnrzapeHkCJ__DOT__A2) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshmthFuojIFZ96Hz675M0zYmcX40E3Iap87AP9y2lB__DOT__OUT0))));
}

void VysyxSoCFull___024root___act_comb__TOP__1073(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1073\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_AO21X1H7L_Y__DOT__A1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__A1N) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__B0_bar)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__OUT1));
}

void VysyxSoCFull___024root___act_comb__TOP__1074(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1074\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_AO21X1P4H7L_Y__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__OUT1) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_A_AOI2BB1X0P5H7L_Y__DOT__A1N) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__B0_bar)));
}

void VysyxSoCFull___024root___act_comb__TOP__1075(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1075\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx282;
    __Vtableidx282 = 0;
    // Body
    __Vtableidx282 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshdfmzKPkJezHrLApESekApM8jkJ4Au3BZbGcmTYDD) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshOOWfbWlGvx6lmbCzHATFWe3q26PFoEGVRtAiPTx0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx282];
}

void VysyxSoCFull___024root___act_comb__TOP__1076(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1076\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx391;
    __Vtableidx391 = 0;
    // Body
    __Vtableidx391 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshSHiBTpAS9oNc534OWCI1fmFIXqnPUp1C1Os2YHAO) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshC01hg1aKUlBxJeJ6b3iKXWsSlS18Ixu0hJB6Jk7Z)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X1P4H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx391];
}

void VysyxSoCFull___024root___act_comb__TOP__1077(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1077\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx333;
    __Vtableidx333 = 0;
    // Body
    __Vtableidx333 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshJBR2bziA2iBav3piuPahpBgryDrnZNKqoarFSkF1) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshDn57i6QVVlMqnahrLzDnIMRTC23wrmPAC8wqGPgI)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx333];
}

void VysyxSoCFull___024root___act_comb__TOP__1078(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1078\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx100 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_D_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_D_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_D 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx100];
}

void VysyxSoCFull___024root___act_comb__TOP__1079(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1079\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshfS7HeGfIs2bkfqaXJCfy55xz6PqVZnI7DCQwOtL7__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__C0) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgD7PiCziocuro6zMVVscBlxecLOCjYf5vdndBn9g__DOT__B))));
}

void VysyxSoCFull___024root___act_comb__TOP__1080(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1080\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx359 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__A1N)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx359];
}

void VysyxSoCFull___024root___act_comb__TOP__1081(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1081\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshsWyVpkl1PvUn8tRAwuX3pFqSoAub1OIRj2dbz4Bq__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__OUT1) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshrUgozxE8O1P8MASN5VK7pgIQvLygicQHiVlNAbZP__DOT__A1N) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshHJOLurfXpafvj1Zxoa7rXCWFDAoPwuYvwaMrKsn3__DOT__B0_bar)));
}

void VysyxSoCFull___024root___act_comb__TOP__1082(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1082\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_A0_NAND2BX0P5H7L_Y_AN_AO21X1H7L_Y__DOT__A1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A_AOI21X0P5H7L_Y__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshl6LAYuCuDma8HkOC7brrkBpIAFzSpoAotCBGMKZl__DOT__Y)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1083(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1083\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx120 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_A_AOI2BB1X0P5H7L_Y__DOT__A1N) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshgByJnhcN3LbtBQFsEJyBGgfKONQwsm4Lh4Rc1qh6 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx120];
}

void VysyxSoCFull___024root___act_comb__TOP__1084(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1084\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx486;
    __Vtableidx486 = 0;
    // Body
    __Vtableidx486 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshCAaOgehgvHa6trzUnknv2HxYdiMUaurtF9qipbM4) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshJBR2bziA2iBav3piuPahpBgryDrnZNKqoarFSkF1)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx486];
}

void VysyxSoCFull___024root___act_comb__TOP__1085(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1085\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx337;
    __Vtableidx337 = 0;
    // Body
    __Vtableidx337 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshHNENRYmAvlxBRvFpKtYUnLiAfmkvejmBMnxCl6aC) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshCAaOgehgvHa6trzUnknv2HxYdiMUaurtF9qipbM4)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx337];
}

void VysyxSoCFull___024root___act_comb__TOP__1086(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1086\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx395;
    __Vtableidx395 = 0;
    // Body
    __Vtableidx395 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhshyiqyd2Ga7ShmVt8SKhY79U9VbMOopI5CXfAq2DSM) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshgabaGAerhJ3jiLTvKKm5UaEYlln2biVPXPpio1rE)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx395];
}

void VysyxSoCFull___024root___act_comb__TOP__1087(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1087\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx313;
    __Vtableidx313 = 0;
    // Body
    __Vtableidx313 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshVzPvXeSUKbEWDgFqWQYkTMToBaci2ABhk9AVTygc) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___Vhshyiqyd2Ga7ShmVt8SKhY79U9VbMOopI5CXfAq2DSM)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx313];
}

void VysyxSoCFull___024root___act_comb__TOP__1088(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1088\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx408 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx408];
}

void VysyxSoCFull___024root___act_comb__TOP__1089(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1089\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshuha5eZhBA9toc2M68lfLaiexVi2uLBG6VBmgEwBA__DOT__Y)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_51)));
}

void VysyxSoCFull___024root___act_comb__TOP__1090(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1090\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx354;
    __Vtableidx354 = 0;
    // Body
    __Vtableidx354 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshOOWfbWlGvx6lmbCzHATFWe3q26PFoEGVRtAiPTx0) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshScChBUIFEclId1d8jNgn95LyY1GymjY25sB7je9u)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx354];
}

void VysyxSoCFull___024root___act_comb__TOP__1091(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1091\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx257;
    __Vtableidx257 = 0;
    // Body
    __Vtableidx257 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshpaYfzOip1YsRxf584dton0WCLqLfh3CND20tbR17) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshsfiAHofGt1Jxjn16ZYjkzGL1nGTv8Vj5OxDF9JDY)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshwAldmTgpnjE7bp1iIyjArO6o4UPqE3hVnQ8id6fy 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx257];
}

void VysyxSoCFull___024root___act_comb__TOP__1092(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1092\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx162;
    __Vtableidx162 = 0;
    // Body
    __Vtableidx162 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshbHOQOZBq8y7Cds7nPVSnvKrJvdzsE1JFXRA1hzE5) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshpaYfzOip1YsRxf584dton0WCLqLfh3CND20tbR17)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshnYVS2242g58PgDpv7splM2KiS4UnzlgR2BpacUuA 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx162];
}

void VysyxSoCFull___024root___act_comb__TOP__1093(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1093\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx459 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx459];
}

void VysyxSoCFull___024root___act_comb__TOP__1094(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1094\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx432 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx432];
}

void VysyxSoCFull___024root___act_comb__TOP__1095(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1095\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx433 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshLOhrFntQIx7szY4jmT2wAdhgktDXLMeRUea2Zexb)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx433];
}

void VysyxSoCFull___024root___act_comb__TOP__1096(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1096\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx450 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx450];
}

void VysyxSoCFull___024root___act_comb__TOP__1097(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1097\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx187 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx187];
}

void VysyxSoCFull___024root___act_comb__TOP__1098(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1098\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx409 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh5n1YF9YXgKobmguiyIY7aMXPLmFawJhAXKdall1X) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X8H7L_B_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx409];
}

void VysyxSoCFull___024root___act_comb__TOP__1099(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1099\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzgBIpnXJj1IZUAWV2ax3U6HSrh1AhGBRthVOcusK__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshvwN7AEnpB2ll8On3E9ZAOx2t0WB707Md9YoXJC1r__DOT__outA) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshTWoHgA6Tp0e3SOo9jdsRTAEMWgVHQg2OYscNycd7) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1100(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1100\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx165;
    __Vtableidx165 = 0;
    // Body
    __Vtableidx165 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshlhHC4zk3wtIuU4DJiNlF2pFzmxonSEqTJfAujfPH) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshypurAs5Az9FqF6dML7NTLe9eAd9gGr3F4FbxYEZ0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshWpzItNoDaWwjdz35Ojj2DNffkhvXABfo1KpaLyAX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx165];
}

void VysyxSoCFull___024root___act_comb__TOP__1101(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1101\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx259;
    __Vtableidx259 = 0;
    // Body
    __Vtableidx259 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshypurAs5Az9FqF6dML7NTLe9eAd9gGr3F4FbxYEZ0) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshbHOQOZBq8y7Cds7nPVSnvKrJvdzsE1JFXRA1hzE5)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshWvQbDmhKqvaVfZmaakyuN6Vyhq9d1TAUyccheApq 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx259];
}

void VysyxSoCFull___024root___act_comb__TOP__1102(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1102\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx346;
    __Vtableidx346 = 0;
    // Body
    __Vtableidx346 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshsCeW9VBZrlukhfBAy4UZ3mkqcy8cBBDOQ5ptaYZB) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshdfmzKPkJezHrLApESekApM8jkJ4Au3BZbGcmTYDD)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx346];
}

void VysyxSoCFull___024root___act_comb__TOP__1103(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1103\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx519;
    __Vtableidx519 = 0;
    // Body
    __Vtableidx519 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUcjthnJNHSdFWxzXtexyCHy19NRw5cliAjBKDJSi) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshsCeW9VBZrlukhfBAy4UZ3mkqcy8cBBDOQ5ptaYZB)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx519];
}

void VysyxSoCFull___024root___act_comb__TOP__1104(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1104\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx204 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx204];
}

void VysyxSoCFull___024root___act_comb__TOP__1105(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1105\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx253;
    __Vtableidx253 = 0;
    // Body
    __Vtableidx253 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshvaZrNxJjLFuyrSOmz1LejZZXurBT6Iu6zAL7L4MH) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshSGPOP22yq0tSuSZdnv1KhVBTcHR2fxVvZ4sf9cSX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh5ljAUUHy2ja3Uud5joLYeT5cqK4ENBjBbEhzsbAQ 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx253];
}

void VysyxSoCFull___024root___act_comb__TOP__1106(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1106\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx161;
    __Vtableidx161 = 0;
    // Body
    __Vtableidx161 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshsfiAHofGt1Jxjn16ZYjkzGL1nGTv8Vj5OxDF9JDY) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshvaZrNxJjLFuyrSOmz1LejZZXurBT6Iu6zAL7L4MH)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshglE8dGSYgD2qKNrIopBt1kriNLRBE0IIJ5j1m6AT 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx161];
}

void VysyxSoCFull___024root___act_comb__TOP__1107(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1107\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx271;
    __Vtableidx271 = 0;
    // Body
    __Vtableidx271 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshScChBUIFEclId1d8jNgn95LyY1GymjY25sB7je9u) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshsnnuvNQsITsjGtRYid9IhrOGP3dx5b2c7rBUZ6ZD)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx271];
}

void VysyxSoCFull___024root___act_comb__TOP__1108(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1108\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx348;
    __Vtableidx348 = 0;
    // Body
    __Vtableidx348 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshsnnuvNQsITsjGtRYid9IhrOGP3dx5b2c7rBUZ6ZD) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshuGTbXLARDDf6Sy1Pp2ny1CGYUAjKQ6uxoBWvhunS__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshdWN4AlDIgkkMWmsilVJw8YBbwixl6iCfXG1GyRm2)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx348];
}

void VysyxSoCFull___024root___act_comb__TOP__1109(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1109\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshtu9y4kxN8AFcsyk4wvTQA4LjOydtw93rlOEfuPxg__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhsh1iJlQBtBlC8CqdxvPd0Nz7ZTFElXFxoET3a4ofgC__DOT__YN)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1110(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1110\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx365 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx365];
}

void VysyxSoCFull___024root___act_comb__TOP__1111(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1111\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx142 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx142];
}

void VysyxSoCFull___024root___act_comb__TOP__1112(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1112\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx427 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshLOhrFntQIx7szY4jmT2wAdhgktDXLMeRUea2Zexb) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshuV46C6OsbxybqVf2cXp1PLHxCzuzdMKjFCoPBaMt)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_B_NAND2BX0P5H7L_Y_AN_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx427];
}

void VysyxSoCFull___024root___act_comb__TOP__1113(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1113\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx428 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshuV46C6OsbxybqVf2cXp1PLHxCzuzdMKjFCoPBaMt) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshrUgozxE8O1P8MASN5VK7pgIQvLygicQHiVlNAbZP__DOT__A1N)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx428];
}

void VysyxSoCFull___024root___act_comb__TOP__1114(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1114\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx127 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AOI211X2H7L_Y_A1_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx127];
}

void VysyxSoCFull___024root___act_comb__TOP__1115(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1115\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx174 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A_AOI21X0P5H7L_Y__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx174];
}

void VysyxSoCFull___024root___act_comb__TOP__1116(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1116\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx121 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshDUkXLdEBKXycm5yjSKYKkC5aQnYN8JBe8JKqbAcc) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh5n1YF9YXgKobmguiyIY7aMXPLmFawJhAXKdall1X)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_C_AOI21BX4H7L_Y_A1_AOI2BB1X0P5H7L_Y_A1N_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx121];
}

void VysyxSoCFull___024root___act_comb__TOP__1117(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1117\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx261 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y)) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshDUkXLdEBKXycm5yjSKYKkC5aQnYN8JBe8JKqbAcc)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx261];
}

void VysyxSoCFull___024root___act_comb__TOP__1118(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1118\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__B0_inv 
        = ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshjpGiIbenqUS7qOdI4BEwH2fENR1rJpLMHVmUYlhD)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshpt1Tr3WM7aaBjbIj48GvsQLsIy3Jp5nXenCO1COn__DOT__A0_inv)) 
            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshjpGiIbenqUS7qOdI4BEwH2fENR1rJpLMHVmUYlhD)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh0Mny1BSAaJeAnpsj966SAKhAoGDuZYMGtLP0Ropc))))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshyOpDWBpEN2FvqAoBexvzqQhBrgKPqa1ouGQELuA6__DOT__outA1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshXaycKk4awjPSToU25Z2FZXsWS5I0aFwmx5AFZh5c__DOT__A)));
}

void VysyxSoCFull___024root___act_comb__TOP__1119(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1119\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA8Zq7rcDht4NA1et4J3vK33gPbHqdEeU5NeQma9a__DOT__Y 
        = (1U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA8Zq7rcDht4NA1et4J3vK33gPbHqdEeU5NeQma9a__DOT__A1) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshpAfKbEvnQjFTCGAyO1JuNRhIuhduQGTvTqGuOd2W)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh0VdCrMx6oBl9dByhbQ1IUMBWNVWdmwxNBGDcMvtQ__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__1120(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1120\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgD7PiCziocuro6zMVVscBlxecLOCjYf5vdndBn9g__DOT__B)) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshjbHlRqyX8o4f1mT10T65PMYCA70uH3AnS3yhIcvT__DOT__Y) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshzKV76V7APAT3PS4QvwA9WR93nIGdbKORk9SCstNt__DOT__Y))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshzKV76V7APAT3PS4QvwA9WR93nIGdbKORk9SCstNt__DOT__Y) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxN1CUAsL0iDNCcXRagyN5E6dd3Ydp7WVIKBGc668__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__1121(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1121\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx378 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx378];
}

void VysyxSoCFull___024root___act_comb__TOP__1122(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1122\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx460 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx460];
}

void VysyxSoCFull___024root___act_comb__TOP__1123(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1123\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx439 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_D_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx439];
}

void VysyxSoCFull___024root___act_comb__TOP__1124(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1124\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx436 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND3X0P5H7L_Y_C_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_A_NAND2X3H7L_Y_B_MUX4X3H7L_Y_C 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx436];
}

void VysyxSoCFull___024root___act_comb__TOP__1125(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1125\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx218 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx218];
}

void VysyxSoCFull___024root___act_comb__TOP__1126(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1126\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx451 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx451];
}

void VysyxSoCFull___024root___act_comb__TOP__1127(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1127\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx413 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx413];
}

void VysyxSoCFull___024root___act_comb__TOP__1128(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1128\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx411 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A) 
                                 << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2BX0P5H7L_Y_AN_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_S0_BUFX5H7L_A__DOT__Y) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_OR2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_B_AND2X1H7L_Y_A_OAI211X1P4H7L_Y_A1_MUX2X8H7L_B_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [vlSelfRef.__Vtableidx411];
}

void VysyxSoCFull___024root___act_comb__TOP__1129(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1129\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYiGD71aaKO6L4revH6HzGRivEFdNLOt3vAlF7noX__DOT__B 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshyOpDWBpEN2FvqAoBexvzqQhBrgKPqa1ouGQELuA6__DOT__outA1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshZA52OnrJxjZBmqlKf960Vns02mA2RLONAkYb0Kvi__DOT__B));
}

void VysyxSoCFull___024root___act_comb__TOP__1130(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1130\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_461 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshfS7HeGfIs2bkfqaXJCfy55xz6PqVZnI7DCQwOtL7__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1131(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1131\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__C0_inv 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__C0))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
}

void VysyxSoCFull___024root___act_comb__TOP__1132(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1132\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshPWBh5t0B4o0rs9YtwTJoYtZoQM7VeRf0BeeRyaNs__DOT__outA 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzgBIpnXJj1IZUAWV2ax3U6HSrh1AhGBRthVOcusK__DOT__A) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshuha5eZhBA9toc2M68lfLaiexVi2uLBG6VBmgEwBA__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1133(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1133\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA8Zq7rcDht4NA1et4J3vK33gPbHqdEeU5NeQma9a__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___VhshSWA2vbhQ7AoaexUBV4O6IYDbUfXxFeeMKJ4Kzcto__DOT__A1)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1134(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1134\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv 
        = (1U & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwdDGfST9wtMDwzaSKwTAWnSIfwIp3zDuAJioHsvb__DOT__YN)) 
                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_58))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA8Zq7rcDht4NA1et4J3vK33gPbHqdEeU5NeQma9a__DOT__Y) 
                    | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___Vhsh0VdCrMx6oBl9dByhbQ1IUMBWNVWdmwxNBGDcMvtQ__DOT__B0) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshAzZanqLtdxtNSYkI13vAbRaI4gTMBXlYMnpkAvbZ__DOT__A))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1135(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1135\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNSE5a8QLBSeVBdBPpcX92ZLY1HAINWgPpBYV2udA__DOT__Y 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshAzZanqLtdxtNSYkI13vAbRaI4gTMBXlYMnpkAvbZ__DOT__A) 
            & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0)) 
                   | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b1__05d_reg_p__DOT__n0) 
                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b0__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwCy6jZu7AGojsJde1Yr8WIJstWeErOEooYk6nWAP__DOT__outA)))) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshqwoW36gBpUtqlMHiEpqupsNjg4dQ5KqGIDfV8GU2__DOT__A1) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B_NAND2X0P5H7L_Y_B_NOR3X0P5H7L_Y_C_NOR2X0P5H7L_B_Y_NAND2X0P5H7L_A_Y_OR2X1P4H7L_B_A_OAI21X0P5H7L_Y__DOT__A1) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshwCy6jZu7AGojsJde1Yr8WIJstWeErOEooYk6nWAP__DOT__outA)))))) 
               & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshA8Zq7rcDht4NA1et4J3vK33gPbHqdEeU5NeQma9a__DOT__A1) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___Vhsh4lgl67PdyArLIIUKaOhQwSXXH43I5a8dTraNWwIy__DOT__A) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b2__05d_reg_p__DOT__n0)))))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYiGD71aaKO6L4revH6HzGRivEFdNLOt3vAlF7noX__DOT__B) 
              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_461)));
}

void VysyxSoCFull___024root___act_comb__TOP__1136(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1136\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshHWC6RCM6huWu59NJjdgBFFNtlx9VB5fevLt0PPaG__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshPWBh5t0B4o0rs9YtwTJoYtZoQM7VeRf0BeeRyaNs__DOT__outA)) 
                    | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshgdMfuExfx0Flp5eADFAIkC0o3IA5doFcU0MIPYEX) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshBUOEaaqog4OcAtZmj1nhI8EMruQSEBBB3hoVWA2K) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhsheXA7qBKXJhmmiftdZF3TQAhlYTBbqf8bmFBVnXeS) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshYTiU5uhXF3rxMRn8GiebLjozJqGbTwBhn0FmwKyN__DOT__A))))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1137(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1137\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__OUT0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__A0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__A1));
}

void VysyxSoCFull___024root___act_comb__TOP__1138(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1138\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshXoMlUUpsGeDVAxBt7xJeSwBhjgTa6NI5V3YXEKa6__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshMvlUqEcrd2kKV3HNIZvbSmzqjUJa0tqa1AyOi6pF) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv)) 
                          & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshZmB821YYP45xJNVqreFMdOZ0Z6jlofnrzapeHkCJ__DOT__A2) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfxQVEbUG7AtnCaQwF6rbZBSGkMQfxNIuI0eBcMAu__DOT__Y) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b8__05d_reg_p__DOT__n0))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1139(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1139\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshXaycKk4awjPSToU25Z2FZXsWS5I0aFwmx5AFZh5c__DOT__Y 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshZA52OnrJxjZBmqlKf960Vns02mA2RLONAkYb0Kvi__DOT__B))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshXaycKk4awjPSToU25Z2FZXsWS5I0aFwmx5AFZh5c__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1140(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1140\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshcnAHcjj5YST4FJJ0whAfZsjIBLDBHjBhZ4PM9BTa__DOT__OUT0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYiGD71aaKO6L4revH6HzGRivEFdNLOt3vAlF7noX__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__B0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshcnAHcjj5YST4FJJ0whAfZsjIBLDBHjBhZ4PM9BTa__DOT__OUT0)));
}

void VysyxSoCFull___024root___act_comb__TOP__1141(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1141\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__A0 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__A0_inv) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__B0_inv)) 
           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYiGD71aaKO6L4revH6HzGRivEFdNLOt3vAlF7noX__DOT__B)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__B0_inv)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__C0_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshUK2mdOL6PopEm60Tn7tY1DJtmOAAjaft4eNTQo0p__DOT__Y 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__C0_inv)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshcnAHcjj5YST4FJJ0whAfZsjIBLDBHjBhZ4PM9BTa__DOT__OUT0)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__B0_inv)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh59FU6crlBBPmh7UinZAlVWJxEGh26uyadewko0aZ__DOT__C0_inv)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1142(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1142\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx109;
    __Vtableidx109 = 0;
    // Body
    __Vtableidx109 = ((4U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX0P5H7L_Y__DOT__A) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_42))) 
                             << 2U)) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNSE5a8QLBSeVBdBPpcX92ZLY1HAINWgPpBYV2udA__DOT__Y)) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y)) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_B_INVX0P5H7L_Y__DOT__A))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshnaysw0Qq1gilcWIVxG4Ikm8wCKIPk4TWv6kox6xr 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx109];
}

void VysyxSoCFull___024root___act_comb__TOP__1143(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1143\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshUAcT9Pw0tixjrMWu8vrTOzIlOReRWq9PhegcXsRh) 
                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshWCpHWAZlAeUKyDY8gODSlzHVgulfzK68O8beWOB3__DOT__YN)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshPsOTpBBmNTFJhlDJYuN0SBBMAxqTwgDB92S5a8pK)))) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshHWC6RCM6huWu59NJjdgBFFNtlx9VB5fevLt0PPaG__DOT__Y) 
                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0))) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__C0)) 
                          | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhsh1iJlQBtBlC8CqdxvPd0Nz7ZTFElXFxoET3a4ofgC__DOT__YN)))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1144(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1144\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhsh0ZuasBFmeRjnxYJAGBcXM0AQNqICTzdcir14Qr7t__DOT__B 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhshm7NU29ke1nf1BF5dWyHt0r9frYTjuq0x0tBEmUVk__DOT__OUT0)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhsh4rzhFJQl5CQqAHdG2MxRtjT6zAitrwD40B1xjBSo__DOT__Ax))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___VhshwzFQxgXlDNXq3qUrV3WopfIIXLefv8Jc8TpmiEkf__DOT__B)));
}

void VysyxSoCFull___024root___act_comb__TOP__1145(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1145\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshvZyAAKcu53hcAvxkRuACtP4BMOYCPi9xLn5K2oSI) 
                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshlC5TNdHYAvf3nI9pGOMzCkHRXlSrm3LCj974GH9r)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___VhshnfpSGaeLL8rAh54eauR6A0k2KBvfvgPTdcMCPRI6__DOT__A) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D___VhshXoMlUUpsGeDVAxBt7xJeSwBhjgTa6NI5V3YXEKa6__DOT__Y))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1146(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1146\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh1tFBlCvzId17ndnsJ2yIb0QdRzp4i2HsXdioGjA6__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshXaycKk4awjPSToU25Z2FZXsWS5I0aFwmx5AFZh5c__DOT__Y) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D___VhshqJdwXGPUSMcEmjLx6tB8EoO2o7OwsIIta5lL4YsF__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__1147(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1147\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshLpbDdQUVWPtEuubeyQwzQ531DsoyrBCf2SZ6bkAW__DOT__B 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshWF74gTYRBYfuJDhDHWKEcFOBH63dhYQrcA4jUE79__DOT__YN) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D___VhshXe2vB1MUTpEZ0Lo35MFeU1Lljn9BdaA2ufghOmal__DOT__Y))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1148(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1148\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshnkzfWiO2Vs90fAch7rQfMEh33ARYxpocB181WfmL__DOT__Ax)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1149(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1149\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzgBIpnXJj1IZUAWV2ax3U6HSrh1AhGBRthVOcusK__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzgBIpnXJj1IZUAWV2ax3U6HSrh1AhGBRthVOcusK__DOT__A) 
           & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_51)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1150(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1150\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh1ye0h125yWkBehlX6xp8wtBHNSQ06pOJDbSmAldu__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y))) 
                    & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn5No71eFBZ5LiyNW9rBnylp6ac0z3BCswIFIT7VK__DOT__Y) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshYTiU5uhXF3rxMRn8GiebLjozJqGbTwBhn0FmwKyN__DOT__A))) 
                           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshgdMfuExfx0Flp5eADFAIkC0o3IA5doFcU0MIPYEX)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshPWBh5t0B4o0rs9YtwTJoYtZoQM7VeRf0BeeRyaNs__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1151(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1151\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0) 
                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_461))) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___VhshPAZcanicPdZQYcleD587yRyAHIHeAfCwtSu6AFfY__DOT__Y))) 
                 & ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                            | ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshqPc33XB5mXaBQtu6gNa3A25cn1klGYkeTlb3qhpK__DOT__Ax))) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)) 
                                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshqPc33XB5mXaBQtu6gNa3A25cn1klGYkeTlb3qhpK__DOT__Ax))))))) 
                               | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsht3hBCUmczsJVatnf2PtXTtIOWS0jRANul07ry801__DOT__A) 
                                     | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshQxIvbsKykw851TAIk3udVHMePy8tqHHUuPAYoTCb__DOT__A1)) 
                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshQxIvbsKykw851TAIk3udVHMePy8tqHHUuPAYoTCb__DOT__A1) 
                                            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshA9slnEjIOmLuXhUVSnjBoevXPBBDZCZORZR62tuw__DOT__Ax))) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar)))))))) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN) 
                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A)) 
                              & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhsh8A9dq5zrvGBoN0M7V3qi125mTsVbxS0rzbLQDJ7J__DOT__C)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshSznLXGlZAmpmZnnzUeNVv3NheL03U9uioVlHuca0__DOT__Y)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshUAcT9Pw0tixjrMWu8vrTOzIlOReRWq9PhegcXsRh)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A))))))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshfS7HeGfIs2bkfqaXJCfy55xz6PqVZnI7DCQwOtL7__DOT__A)) 
                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___VhshHWC6RCM6huWu59NJjdgBFFNtlx9VB5fevLt0PPaG__DOT__Y) 
                          | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshtu9y4kxN8AFcsyk4wvTQA4LjOydtw93rlOEfuPxg__DOT__Ax) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1152(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1152\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__Y 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__B) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__A0) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__B) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1))));
}

void VysyxSoCFull___024root___act_comb__TOP__1153(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1153\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__A0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1154(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1154\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshDM1FjBjZBnjvB9nAebP8reAyVci3RQS7Bn9HQOH4__DOT__Y 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh1tFBlCvzId17ndnsJ2yIb0QdRzp4i2HsXdioGjA6__DOT__B) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhsh1tFBlCvzId17ndnsJ2yIb0QdRzp4i2HsXdioGjA6__DOT__A))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___VhshDM1FjBjZBnjvB9nAebP8reAyVci3RQS7Bn9HQOH4__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1155(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1155\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshOIVtF2ljAwJ0ce6HluTgKk0IFQ3BNAC0mbkh4b7U__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___VhshzgBIpnXJj1IZUAWV2ax3U6HSrh1AhGBRthVOcusK__DOT__Y) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D___Vhshf2cqjnmrLS0ln5EEen0j3XGtPOL8FvJfqatBpj08__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__1156(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1156\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__A 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhsh1ye0h125yWkBehlX6xp8wtBHNSQ06pOJDbSmAldu__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__B0))) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshtu9y4kxN8AFcsyk4wvTQA4LjOydtw93rlOEfuPxg__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1157(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1157\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrDVUBHy2vFD393oIqZRgAv9qYDBlAQLD5BumkAKN__DOT__Ax)) 
                 & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0_A1_AND2X1H7L_Y_A_NAND2BX0P5H7L_Y__DOT__Ax))) 
                    & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y)))) 
                          & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2FnuPipmeEKz4X6ltxWh8RtxOB5shbrZ4zzpmRfE__DOT__Y)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1))) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxjlBu4B3QhsIMcWRng2g5z9SQzAJphxKgZzoLyjq__DOT__Y))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXiW9Zb3aM0IRCM9ehv1EEiytWFdl9pu6dECCCzh5__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshJochtljbuABYQHeqciy4SPOPhMlGOdrT6DLXU7L8__DOT__Y) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_AN__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_AOI221X4H7L_B0__DOT__outA)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_B0_NAND2BX0P5H7L_Y__DOT__Ax));
}

void VysyxSoCFull___024root___act_comb__TOP__1158(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1158\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJCI2VLfZjYexKU2yAdP95xiGYMIxngSjvaUGb5lp__DOT__A 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshnch5KA4rdyAfc5oF4qVayB8R6IGNAnGYAjjxMaJz__DOT__A) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshnaysw0Qq1gilcWIVxG4Ikm8wCKIPk4TWv6kox6xr) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshnch5KA4rdyAfc5oF4qVayB8R6IGNAnGYAjjxMaJz__DOT__A) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNSE5a8QLBSeVBdBPpcX92ZLY1HAINWgPpBYV2udA__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1159(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1159\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshTpqdMdPb9MjsaBMxA7nBEBRpNp35OMTaB7GAGKam__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1160(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1160\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx401;
    __Vtableidx401 = 0;
    // Body
    __Vtableidx401 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y) 
                                         << 1U) | (
                                                   ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNSE5a8QLBSeVBdBPpcX92ZLY1HAINWgPpBYV2udA__DOT__Y)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhshk7xvc8gOeQFAy6aUr5PLyt5CfOgKWIr54JlErTPX 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx401];
}

void VysyxSoCFull___024root___act_comb__TOP__1161(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1161\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__outA1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshlScnBxQaYucTTGyR5jp0HntSJBAr4KP3PkaADLCy__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__outA1)) 
                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshUK2mdOL6PopEm60Tn7tY1DJtmOAAjaft4eNTQo0p__DOT__Y)) 
                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_A_INVX1P4H7L_A__DOT__A)) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshjbHlRqyX8o4f1mT10T65PMYCA70uH3AnS3yhIcvT__DOT__Y)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgD7PiCziocuro6zMVVscBlxecLOCjYf5vdndBn9g__DOT__B)))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshzKV76V7APAT3PS4QvwA9WR93nIGdbKORk9SCstNt__DOT__Y))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1162(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1162\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshHY9V2PgzqJPefROUg5WScupPHyfsdJ6c6IWMVERl__DOT__B 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshOIVtF2ljAwJ0ce6HluTgKk0IFQ3BNAC0mbkh4b7U__DOT__B) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshOIVtF2ljAwJ0ce6HluTgKk0IFQ3BNAC0mbkh4b7U__DOT__A))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D___Vhshn5No71eFBZ5LiyNW9rBnylp6ac0z3BCswIFIT7VK__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1163(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1163\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshF4Z9dDLjtn6ak34zgcNLcvRx2JfBH43VcKBPFY53__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshSznLXGlZAmpmZnnzUeNVv3NheL03U9uioVlHuca0__DOT__Y)) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_C_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND2X1H7L_B__DOT__A) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___Vhshj8cNeqz2hsTwcQr86vWkRAzzkWgDzaCvll86Tu06__DOT__C0))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1164(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1164\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx108;
    __Vtableidx108 = 0;
    // Body
    __Vtableidx108 = ((4U & ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__A0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxN1CUAsL0iDNCcXRagyN5E6dd3Ydp7WVIKBGc668__DOT__B0_inv)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshxN1CUAsL0iDNCcXRagyN5E6dd3Ydp7WVIKBGc668__DOT__B0_inv)))) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXiW9Zb3aM0IRCM9ehv1EEiytWFdl9pu6dECCCzh5__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNf8CgF7diEX0DhRGhsNaf9nqDeply29hAzND9a5W 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx108];
}

void VysyxSoCFull___024root___act_comb__TOP__1165(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1165\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A1 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y)))) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJCI2VLfZjYexKU2yAdP95xiGYMIxngSjvaUGb5lp__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__1166(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1166\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshf6oLGBoHWEsipzV6OScIpPlDW8zKun2CXqVEEbrb__DOT__outA 
        = (1U & ((~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__A0)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A))) 
                      | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A))) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshR6ZZ6kOiZkLvIGZv56O6mV8WpVnFAZQRKh7j9ZxG__DOT__C0_inv))) 
                     & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshrFGwuSovjzM0B7i3pcqlnPEWwrDf8fAiwVspQbcq__DOT__A1)) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshUK2mdOL6PopEm60Tn7tY1DJtmOAAjaft4eNTQo0p__DOT__Y))) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__B0)) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshUQTautA19Yxv98i3kY8dDAA0ZK2Q0fgAjKyQs8AA__DOT__A))))) 
                 | (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y) 
                        | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh8NSzBCFaljCEM6LkATI2rBfncorkBR9BcakDf0FR__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y))) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y))) 
                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y))) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshTpqdMdPb9MjsaBMxA7nBEBRpNp35OMTaB7GAGKam__DOT__A))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshBV7CQzRN2qeo4aaJATWzGzLlRHRzuBdBBBGl3ish__DOT__Y 
        = (1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshTpqdMdPb9MjsaBMxA7nBEBRpNp35OMTaB7GAGKam__DOT__A) 
                      & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y)) 
                            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshR6ZZ6kOiZkLvIGZv56O6mV8WpVnFAZQRKh7j9ZxG__DOT__C0_inv)))))) 
                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y) 
                         ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhsh6d2bhXZYHU2ZAcBwdgLVv4eBILihRLSJXYxHojKl__DOT__Y))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y))) 
                 ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshXiW9Zb3aM0IRCM9ehv1EEiytWFdl9pu6dECCCzh5__DOT__Y) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshq6xx8PqGe87jzLZOWH2xK34PBsaDK9zWy6wK4fuF__DOT__outA 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNf8CgF7diEX0DhRGhsNaf9nqDeply29hAzND9a5W) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshf6oLGBoHWEsipzV6OScIpPlDW8zKun2CXqVEEbrb__DOT__outA))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNf8CgF7diEX0DhRGhsNaf9nqDeply29hAzND9a5W) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshf6oLGBoHWEsipzV6OScIpPlDW8zKun2CXqVEEbrb__DOT__outA)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_C_NAND3X0P5H7L_Y_A_INVX0P5H7L_Y__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshq6xx8PqGe87jzLZOWH2xK34PBsaDK9zWy6wK4fuF__DOT__outA))));
}

void VysyxSoCFull___024root___act_comb__TOP__1167(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1167\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A0 
        = ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh6o42KkMiklLuTf9S6BgUoeL5a7qxBEqRrdPxUM2r__DOT__Y)) 
                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_NOR2X0P5H7L_A_Y_NAND2X0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y)))) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y))) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___Vhshk7xvc8gOeQFAy6aUr5PLyt5CfOgKWIr54JlErTPX) 
               | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNSE5a8QLBSeVBdBPpcX92ZLY1HAINWgPpBYV2udA__DOT__Y)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshJochtljbuABYQHeqciy4SPOPhMlGOdrT6DLXU7L8__DOT__Y)) 
                  | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNSE5a8QLBSeVBdBPpcX92ZLY1HAINWgPpBYV2udA__DOT__Y)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshmeD3et8dQu6sj22NwnNYkk8QDc3HD5boBNviquk3__DOT__Y)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y)))) 
              & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshAG79JKjFZaFTuLTneh6XGaXD1iJKnSPf2O9h4CV9__DOT__Y)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshlScnBxQaYucTTGyR5jp0HntSJBAr4KP3PkaADLCy__DOT__outA))) 
                 | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__B0) 
                       | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshxRo19RmRRXNcqAWvEGeTKLZhXTurw2ldnaygBC1m__DOT__YN)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___VhshMClhY7frsHGfNQWdxoX5GyL1Wgz1O1E7ERNc8kU2__DOT__Y))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D___VhshywjFGVGBjkNQ1aADHV0R8BpR0gfAqGVipM3pqDTj__DOT__outA1)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__A1_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A1)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A0))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A1));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh80WO9w8SAWv2uOsQ6P4UOi51ph2YusGkPyyBgwui__DOT__A1_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0)));
}

void VysyxSoCFull___024root___act_comb__TOP__1168(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1168\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_NAND2X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshF4Z9dDLjtn6ak34zgcNLcvRx2JfBH43VcKBPFY53__DOT__Y) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshgD7PiCziocuro6zMVVscBlxecLOCjYf5vdndBn9g__DOT__B))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshjbHlRqyX8o4f1mT10T65PMYCA70uH3AnS3yhIcvT__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1169(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1169\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_Y__DOT__A) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshF4Z9dDLjtn6ak34zgcNLcvRx2JfBH43VcKBPFY53__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1170(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1170\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshmdZoYoQqZU9DglEipO8CzUv13MkvvmwaI2gK8aw1__DOT__A)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJCI2VLfZjYexKU2yAdP95xiGYMIxngSjvaUGb5lp__DOT__A))) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__A0)) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh2afmlntxq2v6PBAAm9IvStFK722Nzh0Cdu33BdEz__DOT__C0 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaHub9vOBtrVRSVAFRNjpq2M2LASE8e9BNZzmcvI8)) 
                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaHub9vOBtrVRSVAFRNjpq2M2LASE8e9BNZzmcvI8) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__A1_inv)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshxkKqoFILPvRWwxY6YscdI6MvATRC3cdo2nCcABgF__DOT__Y))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_473 = ((~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__A1_inv) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshcmYw8Eku0iRtsYx2esiiUrlrr3a1sGOXgBqfWsI1__DOT__A))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__A1_inv)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshbisn4xE3TaDDDwM5UmcsAy5SB7AtEjjPS45e8ChE__DOT__A1 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshrvmejWHV6aPbJ3gncxuHoBVuj3klWIHBIwm9EvTV)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshrvmejWHV6aPbJ3gncxuHoBVuj3klWIHBIwm9EvTV)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdChZf1BCsaqA6LoAvyhp1S3R903GzibrEgXaN9IT__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh80WO9w8SAWv2uOsQ6P4UOi51ph2YusGkPyyBgwui__DOT__A1_inv)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhshn5kWcGnBgm2VAToxrPVqqypXvoSUJCXpnAqAcvJo__DOT__B 
        = (1U & (~ ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0))) 
                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshshtLrNph1pNzw4Nc0x5CworthHDnhSHklAfcybO8)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_XNOR2X0P5H7L_Y_B_OAI21X1P4H7L_Y_A0_AND2X1P4H7L_Y__DOT__Y 
        = ((((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshRxxJAHjBFhsSsXcf8Vux1Fk5ZWzG6UUE4fvBjlyp__DOT__Y))) 
             & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b6__05d_reg_p__DOT__n0)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__B0_inv)) 
                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__C0)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__B0_inv) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgRCsotvpkBfbGBAby4iy1vksSZ7i3sNBgx1DZtaM__DOT__A1_inv))))) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh8EiSm5JvMBqqRx9gloTundAVSnspYGvAHjRsJUxt__DOT__C0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0))) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshaKJ2jjJqB9fDuBUTHqo07o54twG0KJr1tUBCJqPV)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh8EiSm5JvMBqqRx9gloTundAVSnspYGvAHjRsJUxt__DOT__C0_inv))));
}

void VysyxSoCFull___024root___act_comb__TOP__1171(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1171\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__A1 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B) 
                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshKaExxsctAJogCt2PCTdpHNNIL8AhoF63uiyB4U71__DOT__A)) 
                       | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b3__05d_reg_p__DOT__n0)))) 
                             | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkgveiXYbFuPpFli0fYrErpu8QFgLd7AqAcod8zxu__DOT__outA))))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1172(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1172\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtniiTdQXwv7BZinoz55aNmnrbNTKXM7J48BjD4a1__DOT__B0 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1XA0AeXBRKbxOErrpR7i4pLXm2BVnCV4V9XZTih2__DOT__B)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1XA0AeXBRKbxOErrpR7i4pLXm2BVnCV4V9XZTih2__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1173(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1173\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__A1 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B) 
                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh80WO9w8SAWv2uOsQ6P4UOi51ph2YusGkPyyBgwui__DOT__A1_inv))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh3bspnj0e1Fl9r1OruzX8uJAgOMp5UvpiAA9uBbzz__DOT__AN)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1174(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1174\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p__DOT__n0)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1175(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1175\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_473));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_473));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_473));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ5n5ODAHhu6BaBF2nN6aMDjPFqgx8MOlZRRUdrbF__DOT__Y_row1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__A0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)));
}

void VysyxSoCFull___024root___act_comb__TOP__1176(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1176\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshJxcAq5hD2R5tyGNySbgHrJ3AYaXCEv1jmUBeXLN8__DOT__C0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                    | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)) 
                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh0nAfmzTTpVpV8z7stN8ow7fThT3XHqlfSC8uCMtc__DOT__Y)))) 
                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_473)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfoxXM7nGfoU94lkZfye2XNP4H7AxuHMJjjZVh34d__DOT__Ax 
        = (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y)) 
                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b4__05d_reg_p__DOT__n0)))) 
            | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)) 
                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkgveiXYbFuPpFli0fYrErpu8QFgLd7AqAcod8zxu__DOT__outA))))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdChZf1BCsaqA6LoAvyhp1S3R903GzibrEgXaN9IT__DOT__outA));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshJxcAq5hD2R5tyGNySbgHrJ3AYaXCEv1jmUBeXLN8__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshfoxXM7nGfoU94lkZfye2XNP4H7AxuHMJjjZVh34d__DOT__Ax)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshJxcAq5hD2R5tyGNySbgHrJ3AYaXCEv1jmUBeXLN8__DOT__C0))) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh0nAfmzTTpVpV8z7stN8ow7fThT3XHqlfSC8uCMtc__DOT__Y)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshJxcAq5hD2R5tyGNySbgHrJ3AYaXCEv1jmUBeXLN8__DOT__C0)));
}

void VysyxSoCFull___024root___act_comb__TOP__1177(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1177\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhshlt5cAwsNAxo9oOCB28c3p40LNySKxgo91meJpJyS__DOT__A0_inv 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D___VhshFcYFcOlZcWsjdxVRDvgXXCAW9nPoHDvq2awWGZfd__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhshlt5cAwsNAxo9oOCB28c3p40LNySKxgo91meJpJyS__DOT__A1_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshSx4iepX9hJCOPx75KDKX2h9IeiCpb911QcBA4pVy) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshVS0s5CRn720stKWXDl3AY0Vmn9oWBfLU4M9kkZfB__DOT__B 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhshlt5cAwsNAxo9oOCB28c3p40LNySKxgo91meJpJyS__DOT__A0_inv)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhshlt5cAwsNAxo9oOCB28c3p40LNySKxgo91meJpJyS__DOT__A1_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh57VKRF08YJvH1kiTDeNaDR12KRPelTSEaRnvs2XA__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh4L41boTkQBaHYR0fxAH6icuBM5c7kuKOlxBxLHib__DOT__Y) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshVS0s5CRn720stKWXDl3AY0Vmn9oWBfLU4M9kkZfB__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshVS0s5CRn720stKWXDl3AY0Vmn9oWBfLU4M9kkZfB__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshVS0s5CRn720stKWXDl3AY0Vmn9oWBfLU4M9kkZfB__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh4L41boTkQBaHYR0fxAH6icuBM5c7kuKOlxBxLHib__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1178(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1178\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__A0_inv 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshutA21GxARBnk3aPJdZVOr1FwvBtxNcRVpc5b1Iio__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__A1_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___Vhsh3CtZnGvyvEPu37X5UALbHgD5b93jbZhyFT0MrQI7) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__Y 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__A0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__A1_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh57VKRF08YJvH1kiTDeNaDR12KRPelTSEaRnvs2XA__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__Y) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshaKV28oEtcdAghB2MZAUAtdRGbaKLkdaEdtuLor9L__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1179(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1179\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh8YpAlobbCtaMknk6vr4746IX98ZhFdSAnys25RcU__DOT__A0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshDYSK1mDXXVqTfBXeK9o9Cm897vU1vztVtc5ZJVqh)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1pcS6bG0jpQugNAHoOlAldibGOfXBt9QOykwB6NA__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___Vhsh9E0AokeN7gXy4KzzBH9rCK2aQuLrmxCltAiQSVyR__DOT__Ax)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ5n5ODAHhu6BaBF2nN6aMDjPFqgx8MOlZRRUdrbF__DOT__Y_row1));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh8YpAlobbCtaMknk6vr4746IX98ZhFdSAnys25RcU__DOT__A0_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1pcS6bG0jpQugNAHoOlAldibGOfXBt9QOykwB6NA__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshIHu3b5ga2BjvhgHIN5FRt41qqMHQ4ADvV9YT4ZSs__DOT__B 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__A1_inv)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__B0_inv))) 
                 | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__B0_inv)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSrK94xUooZwh8MlZcmUMBNG4dFk1OQ9WZPZ6MjBB__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1180(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1180\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx507;
    __Vtableidx507 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshyl4Uj1j54ICcIXMVFuOrsjaIMd6I7nWyICnvB0Tg__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheBAhscNiyrn7MvHoaDe2zQQtBNSdEgQB80VKp2wz) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))));
    __Vtableidx507 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheBAhscNiyrn7MvHoaDe2zQQtBNSdEgQB80VKp2wz) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQu49jRqx64HYnl6SAIsoZ59jmNwTvdsqEEx0ceR9 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx507];
}

void VysyxSoCFull___024root___act_comb__TOP__1181(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1181\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsht1f0AWcvu2ysr89439T6Mfh0lS3KABlGYBb9clOy__DOT__Y 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                            | (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b1__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))))) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKZGCC9H19t4rMUEvrEsZnhUaVe6T7xamrAuUOWpc__DOT__A0)))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__A1 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsht1f0AWcvu2ysr89439T6Mfh0lS3KABlGYBb9clOy__DOT__Y) 
                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                          & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1182(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1182\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaHub9vOBtrVRSVAFRNjpq2M2LASE8e9BNZzmcvI8) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshFCARzHYRmE2Q8cLmkd5opeSWFb5vYn4M185SGmSj__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshfh8uQB9rwnWAtO6jXMzi25hl0tj0lg2PUEB1Oiat__DOT__Y) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshxkKqoFILPvRWwxY6YscdI6MvATRC3cdo2nCcABgF__DOT__Y)))) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__A0_inv)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                             | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZUcvLTAUIE1wB1k85lEixcXOHIm0AfBrPOAvX5Kz__DOT__A 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshfh8uQB9rwnWAtO6jXMzi25hl0tj0lg2PUEB1Oiat__DOT__Y)) 
           & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__A0_inv) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__B0_inv)) 
               | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshxkKqoFILPvRWwxY6YscdI6MvATRC3cdo2nCcABgF__DOT__Y)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__B0_inv)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv))) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                 | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaHub9vOBtrVRSVAFRNjpq2M2LASE8e9BNZzmcvI8) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))) 
                     & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5JMoT6ROFH3MO2oMsdmkpYUEUmD0fdWZ33tvbNWs__DOT__C0_inv)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh2afmlntxq2v6PBAAm9IvStFK722Nzh0Cdu33BdEz__DOT__C0))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh2afmlntxq2v6PBAAm9IvStFK722Nzh0Cdu33BdEz__DOT__C0) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshxkKqoFILPvRWwxY6YscdI6MvATRC3cdo2nCcABgF__DOT__Y))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1183(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1183\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx512;
    __Vtableidx512 = 0;
    // Body
    __Vtableidx512 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheTLk8OXBIAAH2yfkGqAqrUg4NtsCmFqYfNP5IjXT) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshf89ZCOvEw0LVY8IGmZ3NxyfTZBD2BJL8IrbdFIET 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx512];
}

void VysyxSoCFull___024root___act_comb__TOP__1184(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1184\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_NOR2BX1P4H7L_Z_AN_NAND3X0P5H7L_Y_C_NAND2X0P5H7L_Y__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D___VhshIc6yeKfatrIwrEAFIrWRnV6BGqzLRcBxAA9YQmlI__DOT__B0_bar))) 
                    & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
                          | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshrukUMwB2mX348lk4BEaLTkm3ZrFBNyVSUIyxC3ki))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y__DOT__B0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_NOR2BX1P4H7L_Z_AN_NAND3X0P5H7L_Y_C_NAND2X0P5H7L_Y__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_B0_OAOI211X4H7L_B0_Y_NAND2X0P5H7L_B__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y__DOT__B0_inv)) 
                    ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A0_NOR2BX1P4H7L_Z_AN_NAND3X0P5H7L_Y_B_AND2X1P4H7L_Y__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1185(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1185\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshSzprMgQ2SiYYNBJHVf0S0T2bWgATpoqESiKQL7gI__DOT__B 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshbisn4xE3TaDDDwM5UmcsAy5SB7AtEjjPS45e8ChE__DOT__A1)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshbisn4xE3TaDDDwM5UmcsAy5SB7AtEjjPS45e8ChE__DOT__A1)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshbisn4xE3TaDDDwM5UmcsAy5SB7AtEjjPS45e8ChE__DOT__A1)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__C0_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshDsHASBxTVgpCb2i9j0cWF4T5dIYX4JeYPhxudTTd__DOT__B0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshOvcl65xu0rKE85Dl9NOp6e5rXdAWIJoJZ85l923C__DOT__Y)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshS5eMObAXUiAvBGG3KeQAKCOyb6aTGJRcAxByps2F__DOT__OUT0)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshSzprMgQ2SiYYNBJHVf0S0T2bWgATpoqESiKQL7gI__DOT__B)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshDsHASBxTVgpCb2i9j0cWF4T5dIYX4JeYPhxudTTd__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshDsHASBxTVgpCb2i9j0cWF4T5dIYX4JeYPhxudTTd__DOT__B0) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__C0_inv)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshSzprMgQ2SiYYNBJHVf0S0T2bWgATpoqESiKQL7gI__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1186(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1186\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtNeD3AkW4RFebBw5RbVNo5GWqg3g1ry1C30IgDRS__DOT__C0_inv 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))) 
                 & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshF8ej5CAsOXZJU8cWMA1HuBwDMendGirBJBbgyJpu__DOT__Y)) 
                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)))) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCfzs3dlXKSvnXBH8rUet19GHeim8olV2sovHYnWQ__DOT__C0_inv))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshyl4Uj1j54ICcIXMVFuOrsjaIMd6I7nWyICnvB0Tg__DOT__Y) 
                    | ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshF8ej5CAsOXZJU8cWMA1HuBwDMendGirBJBbgyJpu__DOT__Y)))) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0)))) 
                       | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1)) 
                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)))) 
                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCfzs3dlXKSvnXBH8rUet19GHeim8olV2sovHYnWQ__DOT__C0_inv) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshBe44tB0luI2sNdjTOwhXo1qr9aviKMIrJz2lgdL6__DOT__outA1))) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCfzs3dlXKSvnXBH8rUet19GHeim8olV2sovHYnWQ__DOT__C0_inv) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A0N 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtNeD3AkW4RFebBw5RbVNo5GWqg3g1ry1C30IgDRS__DOT__C0_inv)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtNeD3AkW4RFebBw5RbVNo5GWqg3g1ry1C30IgDRS__DOT__B0_inv)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQu49jRqx64HYnl6SAIsoZ59jmNwTvdsqEEx0ceR9)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A1N 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQu49jRqx64HYnl6SAIsoZ59jmNwTvdsqEEx0ceR9)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtNeD3AkW4RFebBw5RbVNo5GWqg3g1ry1C30IgDRS__DOT__C0_inv))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtNeD3AkW4RFebBw5RbVNo5GWqg3g1ry1C30IgDRS__DOT__B0_inv) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtNeD3AkW4RFebBw5RbVNo5GWqg3g1ry1C30IgDRS__DOT__C0_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A1N)) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A0N)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A0N) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A1N));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_NOR2X0P5H7L_B__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y__DOT__outA) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_72 = (1U 
                                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y__DOT__outA)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_72)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_ar_payload_addr_MUX2X0P5H7L_A_1__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__A)) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_payload_addr_NOR2BX0P5H7L_Z__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A))));
}

void VysyxSoCFull___024root___act_comb__TOP__1187(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1187\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuYBQde0oFWQsvHnltzwrEINGQA1SRFGoTNgnj3fa__DOT__C 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshUFsBagCc70xLg9u2tehe5pZPxGQMgAFBgCyQv1Ag)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_A_AND2X1P4H7L_A__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                        & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8O9yBI8h2dbmVNgbAPhH4rpm8MyROioBt7Qmk57P__DOT__Ax))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuYBQde0oFWQsvHnltzwrEINGQA1SRFGoTNgnj3fa__DOT__C)))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y__DOT__A1_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_A_AND2X1P4H7L_A__DOT__A) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_A_AND2X1P4H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_A_AND2X1P4H7L_A__DOT__A) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_B0_NOR2BX2H7L_Z__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y__DOT__A1_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_AN_AOAI211X0P5H7L_Y_C0_AOAI211X0P5H7L_Y_A1_NOR2X0P5H7L_Y_A_AND2X1P4H7L_A__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1188(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1188\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshP3npGbgib9MKJF2ZV8CsgLjXn3nv3iHXKQf8VWvl__DOT__Y 
        = ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh8Hk7NoAmcymBxaCXYEaGrxaCB4dDA246IB3dcB5R__DOT__Ax))) 
               & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshA5hXRHWtHRhSJBvKisGiZxHf7SfYp5rbiS9eOrAJ) 
                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshuv2AQqZPnxJYNbB3ZC2CAJZTN49Ne3rUFGhVyf3Z__DOT__B 
        = (1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshP3npGbgib9MKJF2ZV8CsgLjXn3nv3iHXKQf8VWvl__DOT__Y) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshXQMFA0g7WbGSBTApmWC2i2ALMWo2NaK7GIjoN0FY__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1189(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1189\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx93;
    __Vtableidx93 = 0;
    // Body
    __Vtableidx93 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshH9PRuqh3hvSnXAZ9SrCBIgvI2u8JAsXM7YZfGfer) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D___VhshwzG43HlApxYYC9UJZyAQq4TVqUKzvAt21w5BbeVn__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshcJv4ekGx8AYJOpNiWwdMkQPbzIlaVjW9pS47UW79 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx93];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshIpfpUe1dVEDr9myWcKDhgKbAwbyvsCatYQEUyKj5__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshcJv4ekGx8AYJOpNiWwdMkQPbzIlaVjW9pS47UW79))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_B0_NOR2BX2H7L_Z_B_AOAI211X1H7L_Y__DOT__A0_inv 
        = (1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshIpfpUe1dVEDr9myWcKDhgKbAwbyvsCatYQEUyKj5__DOT__Y) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQW5Fw6jvYJhTLgYhaBaFdDcq3REmeIOlrAcj0Cup__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshr4MQCsXynAZqyOZJ0vJNcAQKx6vPB8GAxSRfzeHB__DOT__B0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshIpfpUe1dVEDr9myWcKDhgKbAwbyvsCatYQEUyKj5__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQW5Fw6jvYJhTLgYhaBaFdDcq3REmeIOlrAcj0Cup__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1190(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1190\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx237;
    __Vtableidx237 = 0;
    // Body
    __Vtableidx237 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_A1_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_A1 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx237];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsht0WpzNnkdrq6deGPOuw9nakob8Ks7I90X8UDL52h__DOT__A 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshgtlBlDWp8fzhk0WtJIPCB7b7bPSPTAXZKULeKDlp__DOT__C0_inv)) 
           & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_A1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_C0_AND2X1H7L_Y__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1191(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1191\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    // Body
    __Vtableidx86 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshOvTbPpwlquiaIYhsNqKqojz6kMWohtjBbY28QvhG) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshZq5QfoEDgUHSC1qyrAhkUuIYRoAtPW2zStb4M0ui__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshCXbcY8Mit8WvTP5J05wOqcN7WxWQgPk6sTRbe8Xa 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx86];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y__DOT__A 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshCXbcY8Mit8WvTP5J05wOqcN7WxWQgPk6sTRbe8Xa))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdXykQc8SE3zsMvMFYDdN3FDp10A5OOFAAFwiCtXo__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y__DOT__A) 
           ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_AOI21X0P5H7L_A0__DOT__A0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y__DOT__A) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_AOI21X0P5H7L_A0__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y__DOT__A) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND2X1P4H7L_Y_B_AND2X1H7L_Y__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1192(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1192\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh8EDO3RqBGOjtuhLnBXXsC4nq0o0xkRfhmvaKNtkk__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                 | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__C) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ3Abnd64iJdFKBne7NOAD3C2tBa2KoBh78RUMisT) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshIBjlwiAKdxwKze9lZYWhLoIBX9vBooXHoQgY2w13__DOT__A 
        = (1U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A) 
                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHHcsmGzA7yFAAivzQB1lox43zJJYmrYo5AwWXI2Z__DOT__Y)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__C))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                 & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ3Abnd64iJdFKBne7NOAD3C2tBa2KoBh78RUMisT) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHHcsmGzA7yFAAivzQB1lox43zJJYmrYo5AwWXI2Z__DOT__Y)))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshIBjlwiAKdxwKze9lZYWhLoIBX9vBooXHoQgY2w13__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh8EDO3RqBGOjtuhLnBXXsC4nq0o0xkRfhmvaKNtkk__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHHcsmGzA7yFAAivzQB1lox43zJJYmrYo5AwWXI2Z__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1193(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1193\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    // Body
    __Vtableidx89 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshF5TALYavtIMEXHkBWpAQJcr2PIbAVfHJWeE2MHGI) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___VhshcCwJCD4uEZu4LCpWceXY9ovlpWgEOyU79m8iEMIz__DOT__A0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshiCpMZtCY1T81NoHGAAib4vAX9jmEfID9dqDkLLD1 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx89];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2WeJ2y6Ne91sPZRI4pCJA34PJYph1pu1XRx9pAJW__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshiCpMZtCY1T81NoHGAAib4vAX9jmEfID9dqDkLLD1))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0HnkFBbp4S7dx6dWhqJb4ujc90fAdrx8BcSakqJr__DOT__C0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2WeJ2y6Ne91sPZRI4pCJA34PJYph1pu1XRx9pAJW__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshMfrWjpykhDDQDeJLgXlFl5hoSmlR0AlORT5zUpWw__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshE5JBc3OhXI2YBGOBeYU1osJwnAFds11AqE9x4kCK__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshMfrWjpykhDDQDeJLgXlFl5hoSmlR0AlORT5zUpWw__DOT__Y)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2WeJ2y6Ne91sPZRI4pCJA34PJYph1pu1XRx9pAJW__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0HnkFBbp4S7dx6dWhqJb4ujc90fAdrx8BcSakqJr__DOT__B0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshE5JBc3OhXI2YBGOBeYU1osJwnAFds11AqE9x4kCK__DOT__Ax) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0HnkFBbp4S7dx6dWhqJb4ujc90fAdrx8BcSakqJr__DOT__C0_inv));
}

void VysyxSoCFull___024root___act_comb__TOP__1194(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1194\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    // Body
    __Vtableidx83 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshs3KPgnu6R4GsOQLGmO7LKIHqyibQdW1DJhgTmug0) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b24__05d_reg_p_D___VhshYgJsdSuWUPpbBh4maap2FguElLIXYpcLCI10f6DS__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshPKdLmHwRe0CYWhyN9kAoGiadf5MVMEPLXLcxbTuq 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx83];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshtGJekD3YAHOgAZ5JnukugPWL2RhPBhs7RaeV0Aet__DOT__Y 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshPKdLmHwRe0CYWhyN9kAoGiadf5MVMEPLXLcxbTuq))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshj5H56VOYazeHYVoKSGpGLkBXfDJ4NsNae3aAQb36__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshtGJekD3YAHOgAZ5JnukugPWL2RhPBhs7RaeV0Aet__DOT__Y) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshXD79dQTBmJvJzIbE3VQ7oZAUXJiuuleW0s2jTLmc__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAhLRvbekTIBn7oInJSTOPvGJu8PFN9lonMHFQEs3__DOT__Ax 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshtGJekD3YAHOgAZ5JnukugPWL2RhPBhs7RaeV0Aet__DOT__Y) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshXD79dQTBmJvJzIbE3VQ7oZAUXJiuuleW0s2jTLmc__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh1BIM99RH37y3iLcpAWlyMoKOZAAI4yzjmDfrtND7__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshj5H56VOYazeHYVoKSGpGLkBXfDJ4NsNae3aAQb36__DOT__B0) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAhLRvbekTIBn7oInJSTOPvGJu8PFN9lonMHFQEs3__DOT__Ax))));
}

void VysyxSoCFull___024root___act_comb__TOP__1195(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1195\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    // Body
    __Vtableidx91 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshBG3UQwNmy2rAI76lrbYquj6XJ6AyBYZtyFelIy1s) 
                      << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh52w4RW3NNAAGwnvmzdifhDLHyb9EwUjMaItXHrjB__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshaqwOclZcrBpFmGIHYsvsHnHB9peAjusg68lg8ODP 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx91];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshF7Fju5qi79urp3LhMRBdP1krALPGAPOeIhavtFcg__DOT__Y 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshjo1fvSAxiLcv39buJAX9rPtXZVmJE7WBArWfwAhT__DOT__Y)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshaqwOclZcrBpFmGIHYsvsHnHB9peAjusg68lg8ODP)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh69ZYHI6j8G87ZEYqUQ20zh7Ac0sBchhABqQgDWOB__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshaqwOclZcrBpFmGIHYsvsHnHB9peAjusg68lg8ODP) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh69ZYHI6j8G87ZEYqUQ20zh7Ac0sBchhABqQgDWOB__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshjo1fvSAxiLcv39buJAX9rPtXZVmJE7WBArWfwAhT__DOT__Y) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh69ZYHI6j8G87ZEYqUQ20zh7Ac0sBchhABqQgDWOB__DOT__outA)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshsJvEoegRAX3WH22O653XBALfHbsotTOFGWwvkznw__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh69ZYHI6j8G87ZEYqUQ20zh7Ac0sBchhABqQgDWOB__DOT__Y) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshF7Fju5qi79urp3LhMRBdP1krALPGAPOeIhavtFcg__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1196(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1196\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx510;
    __Vtableidx510 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshhcByc4EklpSFmxMs0QKnRflfLqU7MBPVbD6qLtxR__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpmIFL1dXpVYQnWQ9Nr38yTLj3Z66rJ5GjD7jby5a)));
    __Vtableidx510 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpmIFL1dXpVYQnWQ9Nr38yTLj3Z66rJ5GjD7jby5a) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJ1nCtQAFbBeAQFnYZGIkMUn5bLA6B4Apap4pMCYw__DOT__Ax)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBPwipxv3YxdA3AA5bAh5Zw4tJ4B72T08omQ47tjl 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx510];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshPiR9vE4ciA40PkiBC19lhbNFIGdvSJzvpXD86J4e__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshgtlBlDWp8fzhk0WtJIPCB7b7bPSPTAXZKULeKDlp__DOT__C0_inv)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBPwipxv3YxdA3AA5bAh5Zw4tJ4B72T08omQ47tjl))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHaRyBkLYwWRbQvC4J2tHdyAXx5T5XjyBo70nmF7E__DOT__C0_inv 
        = (1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjiPdyBNBi77AqitpHvIh2whiRXfCwAz5l8PNBIx__DOT__Y) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshPiR9vE4ciA40PkiBC19lhbNFIGdvSJzvpXD86J4e__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshd0QrtiPywA40GTi2AcT3l69WGpfjkrKkwOnP76yS__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjiPdyBNBi77AqitpHvIh2whiRXfCwAz5l8PNBIx__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshPiR9vE4ciA40PkiBC19lhbNFIGdvSJzvpXD86J4e__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1197(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1197\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhshg6NMp7lofGAH84dedjNwDCERe8Qwbg2gZyC8ZmRw__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXTceVIH7QeNycZSPeOAdrPRj3uoV1S5BPzS8QDsr__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh406lJoTamVIvQPnUPKkVq5A2gU0LNu8AUpae25AP__DOT__A0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhshg6NMp7lofGAH84dedjNwDCERe8Qwbg2gZyC8ZmRw__DOT__Ax)) 
                 & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshXU4NyurXrms2ZLFEHNOsUYoxgYV1Eq8AP6qatjQH__DOT__Ax))) 
                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMDyq34nMWgz816tqdt8vyDtESTEOgzpg14zef26G__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh406lJoTamVIvQPnUPKkVq5A2gU0LNu8AUpae25AP__DOT__A0)) 
                    ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh406lJoTamVIvQPnUPKkVq5A2gU0LNu8AUpae25AP__DOT__B0))));
}

void VysyxSoCFull___024root___act_comb__TOP__1198(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1198\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshuIP8lT4ad9z8NtWOhsmwWfcLFFhfAINdd9P3dmB6__DOT__B 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtCsEnvuIe61fV0AvVwSetWZVg6dzjXAwYUFsXA6c__DOT__A1)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshbBIcYPRaG1qyl85V750XDUl55e7fH258UTpfUDxF__DOT__Y 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshMGVXPMTlTHAyfAKb0E7u2o2pveduLKD3LAk37jRZ__DOT__B0_inv) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__A0_inv)) 
            | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshUKMN37aPtcsm8K4b3emeAhMHgenwYWJZpYvOXxML__DOT__Y)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshMGVXPMTlTHAyfAKb0E7u2o2pveduLKD3LAk37jRZ__DOT__B0_inv)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0))) 
           & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshMGVXPMTlTHAyfAKb0E7u2o2pveduLKD3LAk37jRZ__DOT__B0_inv)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtCsEnvuIe61fV0AvVwSetWZVg6dzjXAwYUFsXA6c__DOT__A1) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)))) 
              | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshUKMN37aPtcsm8K4b3emeAhMHgenwYWJZpYvOXxML__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshuIP8lT4ad9z8NtWOhsmwWfcLFFhfAINdd9P3dmB6__DOT__Y 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshuIP8lT4ad9z8NtWOhsmwWfcLFFhfAINdd9P3dmB6__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshk85L9OcjQDqJITyDqxXA0aXOpt1sdfipyNADCCKG__DOT__A0 
        = (1U & (~ ((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshUKMN37aPtcsm8K4b3emeAhMHgenwYWJZpYvOXxML__DOT__Y)))) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0)) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh7GxCXPW6KlMguddjYHUt5jw94hhIuiXimVAgpz4D__DOT__OUT0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAAlPzcyQEIkIDsARmnzBkWX6mBCuFXsRrXhKCXqQ__DOT__A0)))) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshUKMN37aPtcsm8K4b3emeAhMHgenwYWJZpYvOXxML__DOT__Y) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshuIP8lT4ad9z8NtWOhsmwWfcLFFhfAINdd9P3dmB6__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1199(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1199\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshVxafDuw5khxFuRK6BW7bJUp2U56gRRxiztzdCzVS__DOT__A0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshlmZBX6LyxjVwdjG0UtNi2dAkBjG7galohwFxynpo__DOT__C0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshXItg0ysJgBtJpmKWIGBSqLyDrXZATsoTAl4ZTkx2) 
                        ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshEOOE3TtAcFWOaFtyMKNFhDxXJ9L2dX9MK0WcwwTT__DOT__Y))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_XNOR2X0P5H7L_Y_B_NAND2X0P5H7L_B_Y_AND2X1H7L_B__DOT__A 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshVxafDuw5khxFuRK6BW7bJUp2U56gRRxiztzdCzVS__DOT__A0_inv) 
            & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshXItg0ysJgBtJpmKWIGBSqLyDrXZATsoTAl4ZTkx2)) 
                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshVxafDuw5khxFuRK6BW7bJUp2U56gRRxiztzdCzVS__DOT__C0_inv))) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshEOOE3TtAcFWOaFtyMKNFhDxXJ9L2dX9MK0WcwwTT__DOT__Y)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshVxafDuw5khxFuRK6BW7bJUp2U56gRRxiztzdCzVS__DOT__C0_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCGgTSKe94o0UiBd0xXfswmBMBpXXkFLZEoddPyR6__DOT__Y 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__A0_inv) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__B0_inv)) 
            | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshEOOE3TtAcFWOaFtyMKNFhDxXJ9L2dX9MK0WcwwTT__DOT__Y)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__B0_inv)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv))) 
           & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshEOOE3TtAcFWOaFtyMKNFhDxXJ9L2dX9MK0WcwwTT__DOT__Y)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0)))) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshdUNupqGZDXGzKVajgQyPAHvUblnMqBeIRUd8FdA4__DOT__A) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshlmZBX6LyxjVwdjG0UtNi2dAkBjG7galohwFxynpo__DOT__C0))) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__C0_inv)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshlmZBX6LyxjVwdjG0UtNi2dAkBjG7galohwFxynpo__DOT__C0))));
}

void VysyxSoCFull___024root___act_comb__TOP__1200(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1200\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshn17pgYAGA0wmdzttFI2W4nRatRhAA0WlsAYETP1S__DOT__Ax 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh49EtzMHZ20LYrTrdB8Uhdfe8m6difb47Wd1UqTbP__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpisL1g4iFrVXAmuvqbX06DAAJZ2u11TrZiBxhCox__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshn17pgYAGA0wmdzttFI2W4nRatRhAA0WlsAYETP1S__DOT__Ax)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4FnJmNs5zUih4U02p1YsAwMqSOUmegyojWp04zJ4__DOT__A1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshXBJO1pF39RnOyfB2PRu1AjRMvE6Qd1fgplk3buev__DOT__C0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpisL1g4iFrVXAmuvqbX06DAAJZ2u11TrZiBxhCox__DOT__Y)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshV3rXOTLhTTLuzrRZIT84UAyER4YlkFxRMcarMhTt__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyglAuA2qrBaDhA5CJWBYxsA632TX0ASlApA1Nam5__DOT__C0_inv 
        = (1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpisL1g4iFrVXAmuvqbX06DAAJZ2u11TrZiBxhCox__DOT__Y) 
                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshV3rXOTLhTTLuzrRZIT84UAyER4YlkFxRMcarMhTt__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1201(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1201\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshgkswySFUr0fPzK3aiMbxXDoqqpWYBQeuNWPOIdi6__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                 | ((~ ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZRLCzad9eZTXCx2Uc2K4tpMGt119S02PL0GQidfX)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b13__05d_reg_p_D___Vhshi7BQCCImMPMPy4Ctrg0v3BkLcO47yoHFwPdp4pBL__DOT__outA1)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)))) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                       & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D___VhshsmFJnJLpQT0mpWDUCBUJ6wJAJmkiGdLi7iSsiE4D__DOT__Ax)))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyglAuA2qrBaDhA5CJWBYxsA632TX0ASlApA1Nam5__DOT__A1_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshgkswySFUr0fPzK3aiMbxXDoqqpWYBQeuNWPOIdi6__DOT__Y)) 
                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshjl4wTNNsQJHjihPYCM4udHrGbOi3ov6sfoT5Nj7G__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshAQhlq7x6WmdfguYVQF5BNK9uuLNdI5FaYjF8L12x__DOT__D 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshgkswySFUr0fPzK3aiMbxXDoqqpWYBQeuNWPOIdi6__DOT__Y)) 
                    ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshjl4wTNNsQJHjihPYCM4udHrGbOi3ov6sfoT5Nj7G__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1202(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1202\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjKGV0sAPyPmeD0VRvGvoDN2Ly6Ak66LAzfA6i8B__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshz8AqZswrrEt6f6jzicPCt9WIoogIwD2zwyHmSq3H) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_64 = ((~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjKGV0sAPyPmeD0VRvGvoDN2Ly6Ak66LAzfA6i8B__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjKGV0sAPyPmeD0VRvGvoDN2Ly6Ak66LAzfA6i8B__DOT__Y 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshDBMOBbMmnPKB9hAwIA3dar1cXSVmQOmP4NWJZVTb__DOT__outB)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_64));
}

void VysyxSoCFull___024root___act_comb__TOP__1203(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1203\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5ct94RdOBSjLfjBG99pCBJlY7LU70qu4fIwxlGBw__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMQZka6X6vERmBlbsMXWp2BvFwWmv5RBIGo5Ml5sT) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_61 = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5ct94RdOBSjLfjBG99pCBJlY7LU70qu4fIwxlGBw__DOT__B) 
                                                 & ((~ 
                                                     ((~ 
                                                       ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshhRJkufGfxKWz3UdZyBGHdfPQkrCOLObBml61VSwo__DOT__outA))) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A1N 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshcBebEGS4GOgHcyDWiF4TqZJ9hv0eKEX1lhGHvA15__DOT__Y) 
                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_61))));
}

void VysyxSoCFull___024root___act_comb__TOP__1204(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1204\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshdpByrI1t6tlwfHfhMZLkcVcyGCH4jf3eWM95c715) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))) 
                       & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                              & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)))) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1205(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1205\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqhIJSe4Aci8fDioAgMUx83xjxsK5GiZ670vZ9CB4__DOT__Y 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b4__05d_reg_p__DOT__n0)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))) 
                 | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b4__05d_reg_p_D___Vhshb1M4FgYuHqXslzGvLBJWAaHMIvCVgwQoccHYrYhZ__DOT__Ax)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                    & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshfyw26yb6AFsATZLqROCBAxAK1RbbcQlpqUp9FZRT) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1206(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1206\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheePdwG0at8dNyZRhoCi1PO1xPwSDuvUZRSAUKE0D__DOT__A 
        = (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshLRiqBA7DJyMnA6ZKVYFN9KgJi2HtwMwEi3A6g45n__DOT__Y)) 
                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b2__05d_reg_p__DOT__n0)))) 
            | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)) 
                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y))) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshSa7XlcugwCDu3PbXBuB9cNWIXAJRlgNvAk1cR5s0__DOT__Ax)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y))))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshdChZf1BCsaqA6LoAvyhp1S3R903GzibrEgXaN9IT__DOT__outA));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A0N 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)) 
               | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_sel__05b2__05d_reg_p__DOT__n0))))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__Y) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheePdwG0at8dNyZRhoCi1PO1xPwSDuvUZRSAUKE0D__DOT__A) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshmEQhalXZGsOHFJArget5Mk1ATTDB8pLzo8HeyelN__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A1N) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A0N));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUcjJKDy32rYaYnlOT80VCXd4CA9AcGkroKZX5KWj__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_61)) 
                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshcBebEGS4GOgHcyDWiF4TqZJ9hv0eKEX1lhGHvA15__DOT__Y) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A0N))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__Y 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A1N) 
            & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUcjJKDy32rYaYnlOT80VCXd4CA9AcGkroKZX5KWj__DOT__Y))) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUcjJKDy32rYaYnlOT80VCXd4CA9AcGkroKZX5KWj__DOT__Y)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtlnCtB78qxQyZjCTVWDWFQ3Js04omAOTAxTumoua__DOT__A0N)));
}

void VysyxSoCFull___024root___act_comb__TOP__1207(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1207\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh0AhKSwBYcI3FSPYVdbp5NhJW04RptcmXbZaHVPtB__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhshn5kWcGnBgm2VAToxrPVqqypXvoSUJCXpnAqAcvJo__DOT__B) 
                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshRxxJAHjBFhsSsXcf8Vux1Fk5ZWzG6UUE4fvBjlyp__DOT__Y) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh8I9Vty1RtLNO6Avuu8WqFRNUrn2G8G61Lq8v7JjL__DOT__OUT0))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1208(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1208\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__A 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtniiTdQXwv7BZinoz55aNmnrbNTKXM7J48BjD4a1__DOT__B0)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0)) 
                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshtniiTdQXwv7BZinoz55aNmnrbNTKXM7J48BjD4a1__DOT__B0)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D___Vhsh0jMPFsivhO4dAGWUJDDNz8bdPFGSUvHQQ1Bd871D__DOT__Ax)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHaRyBkLYwWRbQvC4J2tHdyAXx5T5XjyBo70nmF7E__DOT__A0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__B) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1209(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1209\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__E 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__E 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__E) 
         & (~ (IData)(vlSelfRef.clock)))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__P0001 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__E)) 
               & (~ (IData)(vlSelfRef.clock))))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__P0001 = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p_D_AND2X1H7L_Y__DOT__Y 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__E) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__u_vaild_0_reg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p__DOT__n0))));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__E) 
         & (~ (IData)(vlSelfRef.clock)))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__P0001 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__E)) 
               & (~ (IData)(vlSelfRef.clock))))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__P0001 = 0U;
    }
}

void VysyxSoCFull___024root___act_comb__TOP__1210(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1210\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaphFTUEME6FxruMSQWTM3ZvqquCoZ8H963IAVaYA__DOT__A0_inv 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__A0_inv)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__A1))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__B0_inv));
}

void VysyxSoCFull___024root___act_comb__TOP__1211(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1211\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__Y 
        = (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__A0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__B0_inv)) 
                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__A1)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__B0_inv)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D___VhshAEJpdXZPw8TiYK5QqgwxqfyT5SyT829EItKOAzeW__DOT__A0)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshTeoTbAvaV95wpf9Db0XBffBkAsBn4zYHsdsBuxSe__DOT__outA 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__A1) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__OUT0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__A1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1212(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1212\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshObqAMVOgwiwdxYqEjPP86T2iP1PHosSx9X6kRAaP__DOT__B 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)) 
                    | ((~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y) 
                                   & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshuERoob5qpAHBw9gb0rcV2siO7AmFUUawdzT2ckWh__DOT__Y)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b21__05d_reg_p__DOT__n0)))))) 
                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsht5H00pb8KK5ui0kBZlxldFpLXc8B3GY9cItoiuZf__DOT__Ax)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshTn0tGi8gRufTrVmAbtCMTZEyEUadhmPFDST9JnCe__DOT__Y)))) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshJbaNIRt29u6XDj7zKJFdMcBKhb5A7a8LY18F1Mm1__DOT__Ax)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ5n5ODAHhu6BaBF2nN6aMDjPFqgx8MOlZRRUdrbF__DOT__Y_row1))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMjAR67ZtiMGGdwJhVBK1bvQ0XVrCUtEbMW7HC605__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1fXOjuZjTIFUdIiaraP1m9Viu1zrdy6WNG9lzz6f__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshObqAMVOgwiwdxYqEjPP86T2iP1PHosSx9X6kRAaP__DOT__B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkzUEUo4aMsCRs0JZP5STbbqdAdFI2jq5A3x3vhxL__DOT__A 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1fXOjuZjTIFUdIiaraP1m9Viu1zrdy6WNG9lzz6f__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshObqAMVOgwiwdxYqEjPP86T2iP1PHosSx9X6kRAaP__DOT__B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_A_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshkzUEUo4aMsCRs0JZP5STbbqdAdFI2jq5A3x3vhxL__DOT__A) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMjAR67ZtiMGGdwJhVBK1bvQ0XVrCUtEbMW7HC605__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1213(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1213\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_65 = ((~ 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOogqR0Cs8siGzBj2qzRXWDWdu7ScTXMzK3o616lq__DOT__Ax) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshMrIVvnSfjKc0t3yJi1I1eQfCZTQ0VqbvFsBZCrK5__DOT__OUT0))) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZ5n5ODAHhu6BaBF2nN6aMDjPFqgx8MOlZRRUdrbF__DOT__Y_row1) 
                                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshP38DQDYEkDEBYmLzz9n09iFGWCNXAxEa8hYpTAqM__DOT__A1)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshKGtBYPkJpqepBYOr5TBiNxu0cKy2Flv4XfCjYMhe))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCB9blQArhzk3wSKqbbzPvwsbYG2WvBzalRYNNUF3__DOT__C0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzB3kuExCplb2RO3gh0MP50WGdATRFZ02P8mBMg2k__DOT__Y)) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_65)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshAQhlq7x6WmdfguYVQF5BNK9uuLNdI5FaYjF8L12x__DOT__B 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCB9blQArhzk3wSKqbbzPvwsbYG2WvBzalRYNNUF3__DOT__C0) 
            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_65)) 
           | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzB3kuExCplb2RO3gh0MP50WGdATRFZ02P8mBMg2k__DOT__Y)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCB9blQArhzk3wSKqbbzPvwsbYG2WvBzalRYNNUF3__DOT__C0)));
}

void VysyxSoCFull___024root___act_comb__TOP__1214(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1214\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLFACczJBmizAKFAXkdLMKfVTwAPh8K2W2BZldos__DOT__B0 
        = (1U & ((~ ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_A_NOR4X1H7L_Y_D_AOI21X0P5H7L_Y__DOT__A1) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___Vhsh4m1WRbyRRYTfWGv9GY6ATrblCCfO5ptjyxNyQCvd__DOT__AN_bar)))) 
                         | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D___VhshcW0pODGoYUX9ScBPTQon1uXusUJ7hxjuMQSmu5WV__DOT__Ax)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_A_NOR4X1H7L_Y_D_AOI21X0P5H7L_Y__DOT__A1)))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__A0_inv))) 
                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__B0_inv)) 
                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__B0_inv) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__A1_inv)) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A)) 
                          & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b11__05d_reg_p__DOT__n0) 
                                ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_B0_NOR3X0P5H7L_Y_A_OA211X1P4H7L_Y_C0_AND2X1H7L_Y__DOT__Y))))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3vti6AiSQyUNngr9HW4WGQsgulD7agxOKABIJcMu__DOT__outA 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D___VhshBvsWtfPeMuzPHAhElFCybnz1BkwuiSDtT9pnjea9__DOT__Ax)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__A0_inv))) 
                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B)) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheTLk8OXBIAAH2yfkGqAqrUg4NtsCmFqYfNP5IjXT))) 
                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhsheTLk8OXBIAAH2yfkGqAqrUg4NtsCmFqYfNP5IjXT)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_B0_OAI31X0P5H7L_Y_A0_NOR2X1P4H7L_Y_B_AOAI211X1P4H7L_Y__DOT__A1_inv)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshgtlBlDWp8fzhk0WtJIPCB7b7bPSPTAXZKULeKDlp__DOT__C0_inv)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5eej8POhhL4pAh7Yktk0I8k0CzW1MJWf35bUhtqp__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshNRBgMwlJ1VFtgqjXr766DcIU9k5cGOBZ5AeBY4yQ__DOT__Ax)) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshOyJ4VMgm53tVTHo0rHvkqNA1UvxP8fEuycdo2JDD__DOT__A0_inv)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshddqNGAJs0jbv4UMmwMpoj0ZiPLujYydhj53I2L6k__DOT__B) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5e0tUjdmf5X4DitAaagFhPuh83klTAWgeys8bWaP__DOT__C0_inv) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGx9VFqIEXt07UlqEZYKhOBuhxTGBYTsSjoCMmZ8c__DOT__OUT0))) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5e0tUjdmf5X4DitAaagFhPuh83klTAWgeys8bWaP__DOT__C0_inv) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHGDUJchuLsKip2jMTk73AU6OVe0PHZlkwBXk4KLo__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1215(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1215\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh57VKRF08YJvH1kiTDeNaDR12KRPelTSEaRnvs2XA__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh57VKRF08YJvH1kiTDeNaDR12KRPelTSEaRnvs2XA__DOT__A) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh57VKRF08YJvH1kiTDeNaDR12KRPelTSEaRnvs2XA__DOT__B));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_B_INVX1P4H7L_Y__DOT__Y 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__Y) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshaKV28oEtcdAghB2MZAUAtdRGbaKLkdaEdtuLor9L__DOT__Y))) 
                 & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh57VKRF08YJvH1kiTDeNaDR12KRPelTSEaRnvs2XA__DOT__A) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshVS0s5CRn720stKWXDl3AY0Vmn9oWBfLU4M9kkZfB__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1216(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1216\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A0N)) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__A1N)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1__DOT__C0_inv))) 
           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1__DOT__C0_inv)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A_OA31X3H7L_B0__DOT__outA 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_C_AOI21X1H7L_Y__DOT__A0) 
                     | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_72))) 
                 | ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___Vhsh1I6W6VJs10A9xCHAuggieu5w3fsj2czlzmVApOol__DOT__A0_inv)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh2UuYlX3abqtHJnSRciKBopLKCpFrsprMAMR5w1sb__DOT__B))) 
                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___Vhsh4bZO9OZLAAPUeEdz9r29ECd9pe2ewBsP4IoS6BQY__DOT__Y) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshDSTYJPcK3cOfCwGc0BSgEzf8fLrIu8J1RhOh3rom))))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_AOI2BB1X4H7L_A1N__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1217(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1217\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (((~ 
                                                  ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0))) 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1218(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1218\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_ar_payload_addr_MUX2X0P5H7L_A_1__DOT__B) 
                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel_0___05Freg_p__DOT__n0) 
                                << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p__DOT__n0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT____Vcellout__AxiIn_0_ar_payload_addr_MUX2X0P5H7L_A_1__Y 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx2];
}

void VysyxSoCFull___024root___act_comb__TOP__1219(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1219\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshr2NtPuAlxFP44dZVeqNi9x3Rna2X7oh7aABbcVaL__DOT__D 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshuv2AQqZPnxJYNbB3ZC2CAJZTN49Ne3rUFGhVyf3Z__DOT__B) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_B0_NOR2BX2H7L_Z_B_AOAI211X1H7L_Y__DOT__A0_inv))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh35vENfzzsHwxOm86lgk6lFKh3aXG8Sd5oxtAeXkR__DOT__B0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshr4MQCsXynAZqyOZJ0vJNcAQKx6vPB8GAxSRfzeHB__DOT__B0)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshuv2AQqZPnxJYNbB3ZC2CAJZTN49Ne3rUFGhVyf3Z__DOT__B))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_B0_NOR2BX2H7L_Z_B_AOAI211X1H7L_Y__DOT__B0_inv 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshr4MQCsXynAZqyOZJ0vJNcAQKx6vPB8GAxSRfzeHB__DOT__B0)) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshP3npGbgib9MKJF2ZV8CsgLjXn3nv3iHXKQf8VWvl__DOT__Y)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshXQMFA0g7WbGSBTApmWC2i2ALMWo2NaK7GIjoN0FY__DOT__Y)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1220(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1220\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshjnaFLbBztTQNzKhFLrJH5wn6N8kAJqJqVNi9gN09__DOT__A0 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshHHcsmGzA7yFAAivzQB1lox43zJJYmrYo5AwWXI2Z__DOT__Y)) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh8EDO3RqBGOjtuhLnBXXsC4nq0o0xkRfhmvaKNtkk__DOT__Y))) 
                 & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D___Vhsh4rljwQMAVFAqg3lsY4NhmMcGaQnmEfUoGHzVLSMf__DOT__A0)) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSrK94xUooZwh8MlZcmUMBNG4dFk1OQ9WZPZ6MjBB__DOT__Y))) 
                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh8YpAlobbCtaMknk6vr4746IX98ZhFdSAnys25RcU__DOT__A0_inv) 
                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh1pcS6bG0jpQugNAHoOlAldibGOfXBt9QOykwB6NA__DOT__Y)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))) 
                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSrK94xUooZwh8MlZcmUMBNG4dFk1OQ9WZPZ6MjBB__DOT__Y)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A)))) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshV3rXOTLhTTLuzrRZIT84UAyER4YlkFxRMcarMhTt__DOT__Y)) 
                       | (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh49EtzMHZ20LYrTrdB8Uhdfe8m6difb47Wd1UqTbP__DOT__Y)))) 
                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4FnJmNs5zUih4U02p1YsAwMqSOUmegyojWp04zJ4__DOT__A1))))))));
}

void VysyxSoCFull___024root___act_comb__TOP__1221(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1221\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__C0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSrK94xUooZwh8MlZcmUMBNG4dFk1OQ9WZPZ6MjBB__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshIBjlwiAKdxwKze9lZYWhLoIBX9vBooXHoQgY2w13__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzvAh0Z5rlir7XkaOyIS3OSyH6qVQx2G2oHxkA9ct__DOT__C0 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__A1_inv) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__C0_inv) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshIBjlwiAKdxwKze9lZYWhLoIBX9vBooXHoQgY2w13__DOT__A))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__B0_inv) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshpb214oQQCgiVHtKudq3B1jlV6PxiUlXjZ2klv9Gq__DOT__C0_inv)));
}

void VysyxSoCFull___024root___act_comb__TOP__1222(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1222\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshj5H56VOYazeHYVoKSGpGLkBXfDJ4NsNae3aAQb36__DOT__Y 
        = (1U & (((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh69ZYHI6j8G87ZEYqUQ20zh7Ac0sBchhABqQgDWOB__DOT__outA)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh7c4e6hjhGl4NZO0LIvYZDOkCdv5FfKdjbuMyQL10__DOT__A))) 
                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshE5JBc3OhXI2YBGOBeYU1osJwnAFds11AqE9x4kCK__DOT__Ax)) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshjo1fvSAxiLcv39buJAX9rPtXZVmJE7WBArWfwAhT__DOT__Y)))) 
                  & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshE5JBc3OhXI2YBGOBeYU1osJwnAFds11AqE9x4kCK__DOT__Ax)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshjo1fvSAxiLcv39buJAX9rPtXZVmJE7WBArWfwAhT__DOT__Y))) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAhLRvbekTIBn7oInJSTOPvGJu8PFN9lonMHFQEs3__DOT__Ax)))) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshj5H56VOYazeHYVoKSGpGLkBXfDJ4NsNae3aAQb36__DOT__B0) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAhLRvbekTIBn7oInJSTOPvGJu8PFN9lonMHFQEs3__DOT__Ax)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1223(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1223\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_A1_OAO211X3H7L_Y_A0_NAND3X0P5H7L_Y_C_NAND4X4H7L_A_D_AND2X1H7L_Y__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshF7Fju5qi79urp3LhMRBdP1krALPGAPOeIhavtFcg__DOT__Y) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshMfrWjpykhDDQDeJLgXlFl5hoSmlR0AlORT5zUpWw__DOT__Y)) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh2WeJ2y6Ne91sPZRI4pCJA34PJYph1pu1XRx9pAJW__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh69ZYHI6j8G87ZEYqUQ20zh7Ac0sBchhABqQgDWOB__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshWhpCvAvLrX2u3QsEEzzkBfDMbBnAerfdFFY0uHCw__DOT__B0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshsJvEoegRAX3WH22O653XBALfHbsotTOFGWwvkznw__DOT__A) 
           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0HnkFBbp4S7dx6dWhqJb4ujc90fAdrx8BcSakqJr__DOT__B0)));
}

void VysyxSoCFull___024root___act_comb__TOP__1224(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1224\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgIVeVLScxrK5gW3uZ6BnweD1QHG3dAo4sivX55z2__DOT__B0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_XNOR2X0P5H7L_Y_B_NAND2X0P5H7L_B_Y_AND2X1H7L_B__DOT__A) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshbBIcYPRaG1qyl85V750XDUl55e7fH258UTpfUDxF__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1225(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1225\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshQAnlpQ6tTaykGBjC7fS5FIbBGdoexGdr8J9d8i9D__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_XNOR2X0P5H7L_Y_B_OAI21X1P4H7L_Y_A0_AND2X1P4H7L_Y__DOT__Y)) 
           & (((~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A0_inv)) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshS5eMObAXUiAvBGG3KeQAKCOyb6aTGJRcAxByps2F__DOT__OUT0)))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__A1_inv)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshOvcl65xu0rKE85Dl9NOp6e5rXdAWIJoJZ85l923C__DOT__Y))) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshS5eMObAXUiAvBGG3KeQAKCOyb6aTGJRcAxByps2F__DOT__OUT0)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshbisn4xE3TaDDDwM5UmcsAy5SB7AtEjjPS45e8ChE__DOT__A1))) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCGgTSKe94o0UiBd0xXfswmBMBpXXkFLZEoddPyR6__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1226(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1226\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaphFTUEME6FxruMSQWTM3ZvqquCoZ8H963IAVaYA__DOT__C0_inv 
        = (1U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhoFjEp4QZvXnUMU9BovYtJYpmF8PyKgYBX17eE3i__DOT__A) 
                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_64)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshDBMOBbMmnPKB9hAwIA3dar1cXSVmQOmP4NWJZVTb__DOT__outB))) 
                 & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__A0_inv) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__B0_inv)) 
                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__A1)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyD7wjKAhcuq10TgJKIvdWQkiIIeM8eB2WnxfAqmM__DOT__B0_inv)) 
                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D___VhshLsUQhRT3vJebI6BP0FSHXtaEBw8pq6ac3ZSUtldZ__DOT__Ax)) 
                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b27__05d_reg_p_D___VhshHoZxuij5FYPuAh7IAE2VBg4fhFNjlqPOh9NBW2Fe__DOT__B0_inv)))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_63 = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaphFTUEME6FxruMSQWTM3ZvqquCoZ8H963IAVaYA__DOT__A0_inv)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshzjKGV0sAPyPmeD0VRvGvoDN2Ly6Ak66LAzfA6i8B__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpkChW8Cj3heqP4IteUe9BsZss5P7NIIUEv8EwjjQ__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshaphFTUEME6FxruMSQWTM3ZvqquCoZ8H963IAVaYA__DOT__C0_inv)) 
                 & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_63))));
}

void VysyxSoCFull___024root___act_comb__TOP__1227(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1227\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshYgP2QYH7kSMUUpHXTNPAAH3pdDvkjw1BYGRoNpsL__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqhIJSe4Aci8fDioAgMUx83xjxsK5GiZ670vZ9CB4__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshJxcAq5hD2R5tyGNySbgHrJ3AYaXCEv1jmUBeXLN8__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshYgP2QYH7kSMUUpHXTNPAAH3pdDvkjw1BYGRoNpsL__DOT__B 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshqhIJSe4Aci8fDioAgMUx83xjxsK5GiZ670vZ9CB4__DOT__Y) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshJxcAq5hD2R5tyGNySbgHrJ3AYaXCEv1jmUBeXLN8__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshYgP2QYH7kSMUUpHXTNPAAH3pdDvkjw1BYGRoNpsL__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshYgP2QYH7kSMUUpHXTNPAAH3pdDvkjw1BYGRoNpsL__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshYgP2QYH7kSMUUpHXTNPAAH3pdDvkjw1BYGRoNpsL__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1228(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1228\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshgIVeVLScxrK5gW3uZ6BnweD1QHG3dAo4sivX55z2__DOT__A1_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___Vhsh0AhKSwBYcI3FSPYVdbp5NhJW04RptcmXbZaHVPtB__DOT__Y) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_XNOR2X0P5H7L_Y_B_OAI21X1P4H7L_Y_A0_AND2X1P4H7L_Y__DOT__Y) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D___VhshtXiVpBfRihZAjMBfaxDXueShKpr0kATD31RbQXqM__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1229(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1229\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshUJpWncpK6EZi9ALzL9KAsQW3W4UIoiIEAsNcNhsz__DOT__C0_inv 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshSLE8oYdchg3LjT2kxiz0cLpSHCMM1e5McMckZBId__DOT__A) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshZUcvLTAUIE1wB1k85lEixcXOHIm0AfBrPOAvX5Kz__DOT__A));
}

void VysyxSoCFull___024root___act_comb__TOP__1230(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1230\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__CK 
        = ((IData)(vlSelfRef.clock) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__P0001));
}

void VysyxSoCFull___024root___act_comb__TOP__1231(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1231\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p__DOT__CK 
        = ((IData)(vlSelfRef.clock) & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__P0001));
}

void VysyxSoCFull___024root___act_comb__TOP__1232(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1232\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__B0) 
           ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__A1) 
              ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh4CsgalUvHRr01LY4YFbFIcYUgsP3GaBwfnU3Nise__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__Y 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__B0) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__OUT0))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshpcgOLkkpNQUVTOWcmcYJNwYsO4iMARlNzpoaW9P1__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_NOR2X0P5H7L_B_A_AND2X1H7L_B__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_1__DOT__A));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NOR2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshFLUSR7BiUAaS2VNY5k8AxFTRFBODi8rTg5c7u5h7__DOT__A 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshWLz8ot18t6B2ttJm0452HyI4JLuFqAUTjIb5q7MA__DOT__Y) 
                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshTeoTbAvaV95wpf9Db0XBffBkAsBn4zYHsdsBuxSe__DOT__outA)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_w_payload_strb_NOR2BX1P4H7L_Z_3__DOT__Ax 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__OUT0)) 
                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NOR2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__B0)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NOR2X0P5H7L_B_Y_AND2X1H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NOR2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                 & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_40))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_Y_BUFX3P5H7L_A__DOT__Y 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__OUT0)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NOR2X0P5H7L_B_Y_NAND2BX0P5H7L_B__DOT__Ax)) 
                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_40)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_w_payload_strb_NOR2BX1P4H7L_Z__DOT__AN 
        = (1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_B0__DOT__OUT0)) 
                     & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0)) 
                               | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_A1_BUFX3H7L_A__DOT__Y)))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B))))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_A1_NOR2X0P5H7L_B_Y_AND2X1H7L_A__DOT__Y)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_w_payload_strb_NOR2BX1P4H7L_Z_1__DOT__AN 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_Y_BUFX3P5H7L_A__DOT__Y) 
                 | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_NOR2X0P5H7L_B__DOT__B) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_w_payload_strb_NOR2BX1P4H7L_Z_2__DOT__AN 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_NAND2X0P5H7L_Y_A_OAI31X0P5H7L_B0_Y_BUFX3P5H7L_A__DOT__Y) 
                 | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__fence_i_NOR3X0P5H7L_Y_B___VhshpcgOLkkpNQUVTOWcmcYJNwYsO4iMARlNzpoaW9P1__DOT__outA)))));
}

void VysyxSoCFull___024root___act_comb__TOP__1233(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1233\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshXBJO1pF39RnOyfB2PRu1AjRMvE6Qd1fgplk3buev__DOT__B0_inv 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshV3rXOTLhTTLuzrRZIT84UAyER4YlkFxRMcarMhTt__DOT__Y) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshpisL1g4iFrVXAmuvqbX06DAAJZ2u11TrZiBxhCox__DOT__Y))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCB9blQArhzk3wSKqbbzPvwsbYG2WvBzalRYNNUF3__DOT__C0));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshXBJO1pF39RnOyfB2PRu1AjRMvE6Qd1fgplk3buev__DOT__Y_row1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshAQhlq7x6WmdfguYVQF5BNK9uuLNdI5FaYjF8L12x__DOT__B)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshXBJO1pF39RnOyfB2PRu1AjRMvE6Qd1fgplk3buev__DOT__B0_inv));
}

void VysyxSoCFull___024root___act_comb__TOP__1234(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1234\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyglAuA2qrBaDhA5CJWBYxsA632TX0ASlApA1Nam5__DOT__Y 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshAQhlq7x6WmdfguYVQF5BNK9uuLNdI5FaYjF8L12x__DOT__B)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCB9blQArhzk3wSKqbbzPvwsbYG2WvBzalRYNNUF3__DOT__C0)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCB9blQArhzk3wSKqbbzPvwsbYG2WvBzalRYNNUF3__DOT__C0) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyglAuA2qrBaDhA5CJWBYxsA632TX0ASlApA1Nam5__DOT__A1_inv)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshyglAuA2qrBaDhA5CJWBYxsA632TX0ASlApA1Nam5__DOT__C0_inv)));
}

void VysyxSoCFull___024root___act_comb__TOP__1235(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1235\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshxUPvIAiczGAatsKFeUunD5MQpWpCx8OU1vJiWVEO__DOT__A0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshwl4wkfGXOlLB17TAzYPCRB6xwqskpfKPXkFkiaSQ__DOT__Y)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3vti6AiSQyUNngr9HW4WGQsgulD7agxOKABIJcMu__DOT__outA))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshCUUVRDlgJ09SaBhmeHgbcULLP2KwNlmShKYYkXxx__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshwl4wkfGXOlLB17TAzYPCRB6xwqskpfKPXkFkiaSQ__DOT__Y)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh3vti6AiSQyUNngr9HW4WGQsgulD7agxOKABIJcMu__DOT__outA)));
}

void VysyxSoCFull___024root___act_comb__TOP__1236(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1236\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshk85L9OcjQDqJITyDqxXA0aXOpt1sdfipyNADCCKG__DOT__B0 
        = (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBld0eDAnaatOzycYwd4Keril3UpTGyej1dk7FJ9u__DOT__A) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5eej8POhhL4pAh7Yktk0I8k0CzW1MJWf35bUhtqp__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBld0eDAnaatOzycYwd4Keril3UpTGyej1dk7FJ9u__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBld0eDAnaatOzycYwd4Keril3UpTGyej1dk7FJ9u__DOT__A) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhsh5eej8POhhL4pAh7Yktk0I8k0CzW1MJWf35bUhtqp__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_INVX0P5H7L_Y_A_XNOR2X1P4H7L_Y_A_INVX0P5H7L_Y__DOT__A 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___Vhshk85L9OcjQDqJITyDqxXA0aXOpt1sdfipyNADCCKG__DOT__B0) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshBld0eDAnaatOzycYwd4Keril3UpTGyej1dk7FJ9u__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1237(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1237\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx232;
    __Vtableidx232 = 0;
    // Body
    __Vtableidx232 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D_OAI31X1H7L_Y_B0_NOR3BX1P4H7L_Y_B_NOR2BX1P4H7L_Z_AN_AOI21X0P5H7L_Y_B0_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx232];
}

void VysyxSoCFull___024root___act_comb__TOP__1238(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1238\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx252;
    __Vtableidx252 = 0;
    // Body
    __Vtableidx252 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshwAldmTgpnjE7bp1iIyjArO6o4UPqE3hVnQ8id6fy) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___Vhsh5ljAUUHy2ja3Uud5joLYeT5cqK4ENBjBbEhzsbAQ)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_A_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx252];
}

void VysyxSoCFull___024root___act_comb__TOP__1239(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1239\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx390;
    __Vtableidx390 = 0;
    // Body
    __Vtableidx390 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X1P4H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X1P4H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx390];
}

void VysyxSoCFull___024root___act_comb__TOP__1240(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1240\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx485;
    __Vtableidx485 = 0;
    // Body
    __Vtableidx485 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx485];
}

void VysyxSoCFull___024root___act_comb__TOP__1241(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1241\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx150;
    __Vtableidx150 = 0;
    // Body
    __Vtableidx150 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_Y_B0_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx150];
}

void VysyxSoCFull___024root___act_comb__TOP__1242(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1242\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx240;
    __Vtableidx240 = 0;
    // Body
    __Vtableidx240 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b21__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND3X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y_B0_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx240];
}

void VysyxSoCFull___024root___act_comb__TOP__1243(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1243\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx332;
    __Vtableidx332 = 0;
    // Body
    __Vtableidx332 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx332];
}

void VysyxSoCFull___024root___act_comb__TOP__1244(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1244\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx159;
    __Vtableidx159 = 0;
    // Body
    __Vtableidx159 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshWpzItNoDaWwjdz35Ojj2DNffkhvXABfo1KpaLyAX) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshnYVS2242g58PgDpv7splM2KiS4UnzlgR2BpacUuA)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D_NAND3X1P4H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y_B0_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx159];
}

void VysyxSoCFull___024root___act_comb__TOP__1245(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1245\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx160;
    __Vtableidx160 = 0;
    // Body
    __Vtableidx160 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshnYVS2242g58PgDpv7splM2KiS4UnzlgR2BpacUuA) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshglE8dGSYgD2qKNrIopBt1kriNLRBE0IIJ5j1m6AT)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X1P4H7L_A_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx160];
}

void VysyxSoCFull___024root___act_comb__TOP__1246(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1246\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx155;
    __Vtableidx155 = 0;
    // Body
    __Vtableidx155 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b18__05d_reg_p_D_OAI31X1H7L_Y_B0_AND3X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_INVX0P5H7L_Y_A_MUXI2X0P5H7L_Y__DOT__YN 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx155];
}

void VysyxSoCFull___024root___act_comb__TOP__1247(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1247\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx245;
    __Vtableidx245 = 0;
    // Body
    __Vtableidx245 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b30__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X1P4H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_B_AOI21BX0P5H7L_Y_A0_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx245];
}

void VysyxSoCFull___024root___act_comb__TOP__1248(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1248\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx302;
    __Vtableidx302 = 0;
    // Body
    __Vtableidx302 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx302];
}

void VysyxSoCFull___024root___act_comb__TOP__1249(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1249\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx251;
    __Vtableidx251 = 0;
    // Body
    __Vtableidx251 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshWvQbDmhKqvaVfZmaakyuN6Vyhq9d1TAUyccheApq) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshwAldmTgpnjE7bp1iIyjArO6o4UPqE3hVnQ8id6fy)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y_B0_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx251];
}

void VysyxSoCFull___024root___act_comb__TOP__1250(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1250\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx270;
    __Vtableidx270 = 0;
    // Body
    __Vtableidx270 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx270];
}

void VysyxSoCFull___024root___act_comb__TOP__1251(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1251\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx347;
    __Vtableidx347 = 0;
    // Body
    __Vtableidx347 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx347];
}

void VysyxSoCFull___024root___act_comb__TOP__1252(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1252\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx526;
    __Vtableidx526 = 0;
    // Body
    __Vtableidx526 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b25__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_B_MUX2X0P5H7L_Y_B)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b17__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AOI21BX0P7H7L_Y_A0_AOI21X0P5H7L_Y_B0_NOR2X0P5H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx526];
}

void VysyxSoCFull___024root___act_comb__TOP__1253(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1253\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx114;
    __Vtableidx114 = 0;
    // Body
    __Vtableidx114 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR3X1P4H7L_Y_C_INVX0P5H7L_Y__DOT__Y)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D___VhshWpzItNoDaWwjdz35Ojj2DNffkhvXABfo1KpaLyAX)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx114];
}

void VysyxSoCFull___024root___act_comb__TOP__1254(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1254\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b20__05d_reg_p_D_OAI31X1H7L_Y_B0_NOR3BX1P4H7L_Y_B_NOR2BX1P4H7L_Z_AN_AOI21X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B));
}

void VysyxSoCFull___024root___act_comb__TOP__1255(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1255\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_NOR2X0P5H7L_Y_B_OAI31X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshi1v4e8ESeE5RvrUMEA3ohlPVwmoKm3h0BweVYvOO__DOT__Y));
}

void VysyxSoCFull___024root___act_comb__TOP__1256(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1256\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b19__05d_reg_p_D_NAND3X1P4H7L_Y_C_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AOI21X1P4H7L_Y__DOT__A1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR3X1P4H7L_Y_C_INVX0P5H7L_Y__DOT__Y) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_INVX1P4H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_AOI21X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y))));
}

void VysyxSoCFull___024root___act_comb__TOP__1257(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1257\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshx5PV1HzfHdbI3zCupB6i1gx6S2XBaB7BdBuo0VlF__DOT__Y) 
           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1258(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1258\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx135;
    __Vtableidx135 = 0;
    // Body
    __Vtableidx135 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D___Vhshx5PV1HzfHdbI3zCupB6i1gx6S2XBaB7BdBuo0VlF__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X1P4H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx135];
}

void VysyxSoCFull___024root___act_comb__TOP__1259(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1259\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b7__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X3H7L_Y_B_AOI21BX0P5H7L_Y_B0N_OA31X1H7L_Y_A1_INVX0P5H7L_A__DOT__Y 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXuiyKAiw5o3y69ZKYY0NsS4p5OJX5GQhoFzxfkPH__DOT__Y) 
           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y)));
}

void VysyxSoCFull___024root___act_comb__TOP__1260(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1260\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx144;
    __Vtableidx144 = 0;
    // Body
    __Vtableidx144 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D___VhshXuiyKAiw5o3y69ZKYY0NsS4p5OJX5GQhoFzxfkPH__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b23__05d_reg_p_D___VhshWvQbDmhKqvaVfZmaakyuN6Vyhq9d1TAUyccheApq)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_C_AND3X1P4H7L_Y_A_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx144];
}

void VysyxSoCFull___024root___act_comb__TOP__1261(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1261\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx473;
    __Vtableidx473 = 0;
    // Body
    __Vtableidx473 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b8__05d_reg_p_D_OAI211X1P4H7L_Y_B0_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx473];
}

void VysyxSoCFull___024root___act_comb__TOP__1262(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1262\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx296;
    __Vtableidx296 = 0;
    // Body
    __Vtableidx296 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b26__05d_reg_p_D_OAI21X1P4H7L_Y_B0_AND4X1P4H7L_Y_B_NAND2X0P5H7L_Y_A_MUX2X0P5H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx296];
}

void VysyxSoCFull___024root___act_comb__TOP__1263(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1263\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx338;
    __Vtableidx338 = 0;
    // Body
    __Vtableidx338 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_B) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b28__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X1P4H7L_Y_A_MUX2X1P4H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx338];
}

void VysyxSoCFull___024root___act_comb__TOP__1264(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1264\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx345;
    __Vtableidx345 = 0;
    // Body
    __Vtableidx345 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D___Vhshi1v4e8ESeE5RvrUMEA3ohlPVwmoKm3h0BweVYvOO__DOT__Y) 
                       << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                  << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b29__05d_reg_p_D_OAI211X1P4H7L_Y_C0_AND2X1H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_MUX2X1P4H7L_Y_A 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx345];
}

void VysyxSoCFull___024root___act_comb__TOP__1265(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___act_comb__TOP__1265\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx518;
    __Vtableidx518 = 0;
    // Body
    __Vtableidx518 = ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b1__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_NOR2X0P5H7L_Y_B_NAND2BX0P5H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag_OA21X0P7H7L_A0_B0_OAI21X0P5H7L_Y_A1_OAOI211X2H7L_A1_Y_BUFX7H7L_A_Y_BUFX12H7L_A__DOT__Y) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_A)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND3X8H7L_Y_B_AND2X1H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_Y_B 
        = VysyxSoCFull__ConstPool__TABLE_hf053abcd_0
        [__Vtableidx518];
}
