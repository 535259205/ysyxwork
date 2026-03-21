// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

extern const VlUnpacked<CData/*0:0*/, 128> VTOPmod__ConstPool__TABLE_hb21d3c4f_0;
extern const VlUnpacked<CData/*7:0*/, 256> VTOPmod__ConstPool__TABLE_h65cd9ac3_0;
extern const VlUnpacked<SData/*9:0*/, 256> VTOPmod__ConstPool__TABLE_h53d02be3_0;

void VTOPmod___024root___nba_sequent__TOP__8(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__8\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss 
        = (0x000000ffU & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                             & ((- (IData)(((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                            & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                               >> 0x0000000dU)))) 
                                | (- (IData)((1U & 
                                              (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                  >> 0x0000000dU)))))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hce86519e_0_0)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h31b5436a_0_0)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hfa426b9b_0_0)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_ha0f11ae3_0_0)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q;
    if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_d 
            = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q)));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl 
            = (0x00ffU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl));
    } else {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
            if ((0x00000080U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0x00ffU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
            if ((0x00000080U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i));
            }
        }
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_data_i 
               >> 0x00000018U);
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = ((0x00000040U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                ? (0x0000007fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q) 
                                  >> 1U)) : (0x000000feU 
                                             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q) 
                                                << 1U)));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((2U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)))))))))) {
            if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                               >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 6U)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_TX_SHIFT_ONE_BLOCK[1].u_i2s_tx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                          >> 6U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
                }
            }
        }
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_data_i 
               >> 0x00000010U);
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = ((0x00000040U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                ? (0x00007fffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q) 
                                  >> 1U)) : (0x0000fffeU 
                                             & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q) 
                                                << 1U)));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((2U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)))))))))) {
            if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                               >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 6U)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_TX_SHIFT_ONE_BLOCK[2].u_i2s_tx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                          >> 6U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
                }
            }
        }
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_data_i 
               >> 8U);
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = ((0x00000040U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                ? (0x007fffffU & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q 
                                  >> 1U)) : (0x00fffffeU 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q 
                                                << 1U)));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((2U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)))))))))) {
            if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                               >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 6U)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_TX_SHIFT_ONE_BLOCK[3].u_i2s_tx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                          >> 6U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
                }
            }
        }
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_data_i;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_d 
            = ((0x00000040U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                ? (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q 
                   >> 1U) : (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q 
                             << 1U));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((2U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)))))))))) {
            if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                               >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 6U)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_TX_SHIFT_ONE_BLOCK[4].u_i2s_tx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                          >> 6U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
                }
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cmd_stop = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
        vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_clk_en = 1U;
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_pscr_q = 0xffffU;
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_ctrl_q = 0U;
    } else {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_clk_en) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cmd_stop 
                = (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_cmd));
        }
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
        }
        if ((1U & (((~ (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt))) 
                    | (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_ctrl_q) 
                          >> 7U))) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSCL) 
                                      & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSCL)) 
                                         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__i2c_scl_dir_o)))))) {
            vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt 
                = vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_pscr_q;
            vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_clk_en = 1U;
        } else if (vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_slave_wait) {
            vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt 
                = vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt;
            vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_clk_en = 0U;
        } else {
            vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt 
                = (0x0000ffffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt) 
                                  - (IData)(1U)));
            vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_clk_en = 0U;
        }
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_apb4_wr_hdshk) 
             & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_pscr_q 
                = (0x0000ffffU & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata);
        }
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_apb4_wr_hdshk) 
             & (0U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_ctrl_q 
                = (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata);
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sck_re 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__u_sck_edge_det_sync_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__i2s_sck_i));
    vlSelfRef.__Vtableidx29 = ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_out__BRA__0__KET__) 
                                   << 3U) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o) 
                                     << 1U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o))) 
                                << 3U) | ((6U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 7U))));
    vlSelfRef.TOPmod__DOT__asic__DOT__i2s_sd_o = VTOPmod__ConstPool__TABLE_hb21d3c4f_0
        [vlSelfRef.__Vtableidx29];
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sda_chk 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sda_chk;
    vlSelfRef.TOPmod__DOT__asic__DOT__i2c_sda_dir_o 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__i2c_sda_dir_o;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_c_state 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_c_state;
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_data_tx_ready = 0U;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_mux))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_mux) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_mux)))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_data_tx_ready 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__data_to_tx_ready;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_data_tx_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__ctrl_data_mux)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_data_tx_ready = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) {
                    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en 
                        = ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) 
                           && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__rx_clk_en));
                } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) {
                    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en 
                        = vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__tx_clk_en;
                    if (vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__tx_done) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 0U;
                    }
                } else {
                    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 1U;
                    if (vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__tx_done) {
                        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_len))) {
                            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__do_rx)))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en 
                                    = vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__tx_clk_en;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 1U;
            } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 1U;
            } else if (((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_rd) 
                          | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_wr)) 
                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qrd)) 
                        | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qwr))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_clock_en = 1U;
            }
        }
    }
    vlSelfRef.TOPmod__DOT__u_flash__DOT__reset = (1U 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h93f44fe1_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h8b57dc78_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_pready));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sck_re));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q) 
            >> 1U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q) 
            >> 1U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al) 
           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q) 
                  >> 7U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_3 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_done));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sto_cond 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSDA) 
                                                    & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSDA))) 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSCL)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h93f44fe1_0_0)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h8b57dc78_0_0)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_normal_mode) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d 
            = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q) 
                >= ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cmp_q) 
                    - (IData)(1U))) ? 0U : (0x0000ffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_normal_mode) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d 
            = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q) 
                >= ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cmp_q) 
                    - (IData)(1U))) ? 0U : (0x0000ffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_d 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q)) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_3) 
              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_cmd 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_cmd;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT____VdfgRegularize_h311b3097_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_o) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSDA 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSDA));
    vlSelfRef.__Vtableidx6 = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_value 
        = VTOPmod__ConstPool__TABLE_h65cd9ac3_0[vlSelfRef.__Vtableidx6];
    vlSelfRef.__Vtableidx9 = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VTOPmod__ConstPool__TABLE_h53d02be3_0[vlSelfRef.__Vtableidx9];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_cnt;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_slave_wait 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_slave_wait;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = ((0x00000010U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

void VTOPmod___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

void VTOPmod___024root___nba_sequent__TOP__9(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__9\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_flash_read__46__data;
    __Vtask_flash_read__46__data = 0;
    // Body
    if (((1U == (IData)(vlSelfRef.TOPmod__DOT__u_flash__DOT__state)) 
         & (0x17U == (IData)(vlSelfRef.TOPmod__DOT__u_flash__DOT__counter)))) {
        if (VL_LIKELY(((3U == (IData)(vlSelfRef.TOPmod__DOT__u_flash__DOT__cmd))))) {
            VTOPmod___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                      ((0x00fffffeU 
                                                                        & (vlSelfRef.TOPmod__DOT__u_flash__DOT__addr 
                                                                           << 1U)) 
                                                                       | (IData)(vlSelfRef.TOPmod__DOT__externalPins_spi_mosi)), __Vtask_flash_read__46__data);
            vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                = __Vtask_flash_read__46__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",0,
                          8,vlSelfRef.TOPmod__DOT__u_flash__DOT__cmd);
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:122: Assertion failed in %NTOPmod.u_flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/flash/flash.v", 122, "", false);
        }
    }
    vlSelfRef.TOPmod__DOT__u_flash__DOT__data_bswap 
        = ((((0x0000ff00U & (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                                               >> 8U)) 
                               | (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                                  >> 0x00000018U)));
}

void VTOPmod___024root____Vdpiimwrap_TOPmod__DOT__u_psram__DOT__psram_ctr_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ write, IData/*31:0*/ &psram_ctr__Vfuncrtn);

void VTOPmod___024root___nba_sequent__TOP__10(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__10\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_TOPmod__DOT__u_psram__DOT__psram_ctr__48__Vfuncout;
    __Vtask_TOPmod__DOT__u_psram__DOT__psram_ctr__48__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en)))) {
        VTOPmod___024root____Vdpiimwrap_TOPmod__DOT__u_psram__DOT__psram_ctr_TOP(vlSelfRef.TOPmod__DOT__u_psram__DOT__addr_z, 
                                                                                (((((0x000000f0U 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 0x00000014U)) 
                                                                                | (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 0x0000001cU)) 
                                                                                << 0x00000018U) 
                                                                                | (((0x000000f0U 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 0x0000000cU)) 
                                                                                | (0x0000000fU 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 0x00000014U))) 
                                                                                << 0x00000010U)) 
                                                                                | ((((0x000000f0U 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 4U)) 
                                                                                | (0x0000000fU 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 0x0000000cU))) 
                                                                                << 8U) 
                                                                                | ((0x000000f0U 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                << 4U)) 
                                                                                | (0x0000000fU 
                                                                                & (vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data 
                                                                                >> 4U))))), (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt), __Vtask_TOPmod__DOT__u_psram__DOT__psram_ctr__48__Vfuncout);
    }
}

void VTOPmod___024root___nba_sequent__TOP__11(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__11\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_TOPmod__DOT__u_psram__DOT__psram_ctr__47__Vfuncout;
    __Vfunc_TOPmod__DOT__u_psram__DOT__psram_ctr__47__Vfuncout = 0;
    // Body
    if (((0x0fU == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt)) 
         & (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en))) {
        VTOPmod___024root____Vdpiimwrap_TOPmod__DOT__u_psram__DOT__psram_ctr_TOP(vlSelfRef.TOPmod__DOT__u_psram__DOT__addr_z, 0U, 0U, __Vfunc_TOPmod__DOT__u_psram__DOT__psram_ctr__47__Vfuncout);
        vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
            = __Vfunc_TOPmod__DOT__u_psram__DOT__psram_ctr__47__Vfuncout;
    }
    if (((0x14U <= (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt)) 
         & (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en))) {
        if (((((((((0x14U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt)) 
                   | (0x15U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) 
                  | (0x16U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) 
                 | (0x17U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) 
                | (0x18U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) 
               | (0x19U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) 
              | (0x1aU == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) 
             | (0x1bU == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt)))) {
            vlSelfRef.TOPmod__DOT__u_psram__DOT__out_data 
                = (0x0000000fU & ((0x14U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                   ? vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata
                                   : ((0x15U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                       ? (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                          >> 4U) : 
                                      ((0x16U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                        ? (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                           >> 8U) : 
                                       ((0x17U == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                         ? (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                            >> 0x0cU)
                                         : ((0x18U 
                                             == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                             ? (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                                >> 0x10U)
                                             : ((0x19U 
                                                 == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                                 ? 
                                                (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                                 >> 0x14U)
                                                 : 
                                                ((0x1aU 
                                                  == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))
                                                  ? 
                                                 (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                                  >> 0x18U)
                                                  : 
                                                 (vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
                                                  >> 0x1cU)))))))));
        }
    }
    vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
        = (((((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                              >> 0x00000014U)) | (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                  >> 0x0000001cU)) 
             << 0x00000018U) | (((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                 >> 0x0000000cU)) 
                                 | (0x0000000fU & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                   >> 0x00000014U))) 
                                << 0x00000010U)) | 
           ((((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                              >> 4U)) | (0x0000000fU 
                                         & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                            >> 0x0000000cU))) 
             << 8U) | ((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                       << 4U)) | (0x0000000fU 
                                                  & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                     >> 4U)))));
}

void VTOPmod___024root___nba_sequent__TOP__12(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__12\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i));
    if (vlSelfRef.reset) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q = 0U;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d;
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d;
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) 
             | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_normal_mode) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d;
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_pready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid)
                  ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
}

void VTOPmod___024root___nba_sequent__TOP__13(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__13\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ TOPmod__DOT__asic__DOT__apbxbar__DOT____VdfgRegularize_h0aed5153_0_0;
    TOPmod__DOT__asic__DOT__apbxbar__DOT____VdfgRegularize_h0aed5153_0_0 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT____VdfgRegularize_hddb67a7e_0_9;
    TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT____VdfgRegularize_hddb67a7e_0_9 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0;
    TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT____VdfgRegularize_h506daadf_0_5;
    TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT____VdfgRegularize_h506daadf_0_5 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgRegularize_hf2964a5a_0_5;
    TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgRegularize_hf2964a5a_0_5 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10;
    TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10;
    TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10;
    TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT____VdfgRegularize_h49a9cc1e_0_3;
    TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT____VdfgRegularize_h49a9cc1e_0_3 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8;
    TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8;
    TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4;
    TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4;
    TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4;
    TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4;
    TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_axiregs__DOT____VdfgRegularize_h536a0669_0_0;
    TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_axiregs__DOT____VdfgRegularize_h536a0669_0_0 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT____VdfgRegularize_he5cb3e31_0_4;
    TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT____VdfgRegularize_he5cb3e31_0_4 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_5;
    TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_5 = 0;
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
        = ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
            ? ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                ? ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                    ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                    : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                        : ((IData)(2U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg)))
                : ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                    ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                    : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                        : ((IData)(3U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg))))
            : ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                ? ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                    ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                    : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                        : ((IData)(2U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg)))
                : ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                    ? ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg
                        : ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg))
                    : vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite 
        = ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelfRef.TOPmod__DOT__divReg = vlSelfRef.__Vdly__TOPmod__DOT__divReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready)
            ? vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata
            : vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dscl_dir 
        = vlSelfRef.TOPmod__DOT__asic__DOT__i2c_scl_dir_o;
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSCL) 
         & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSCL)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__core_rxd 
            = vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSDA;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data8_wr_rev 
        = (((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                     << 1U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                      >> 1U))) << 6U) 
            | (((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                       >> 1U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                        >> 3U))) << 4U)) 
           | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                       >> 3U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                        >> 5U))) << 2U) 
              | ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                        >> 5U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                         >> 7U)))));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pstrb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb;
            vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr;
        } else {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pstrb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
            vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pstrb = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
            = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready)
                ? vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr
                : vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r);
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w 
        = (0x000000ffU & ((2U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                           ? ((1U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                               ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                  >> 0x00000018U) : 
                              (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                               >> 0x00000010U)) : (
                                                   (1U 
                                                    & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                    >> 8U)
                                                    : vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_19 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000020U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                               >> 0x0000000cU)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_6 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                             >> 0x00000010U)) 
                             | (0x0000000fU & (6U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgExtracted_h7bc7cde9__0 
        = (0U != (((2U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U))) 
                   << 2U) | (((1U == (0x0000000fU & 
                                      (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                       >> 2U))) << 1U) 
                             | (0U == (0x0000000fU 
                                       & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = (0U == ((0x00000020U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                  >> 0x0000001aU)) 
                  | ((0x0000001cU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                     >> 0x00000019U)) 
                     | (3U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                              >> 0x00000014U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_7 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                               >> 0x0000000cU)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_8 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (1U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_9 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (2U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_21 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                 >> 0x00000014U)) 
                                             << 4U)) 
                             | (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                               >> 0x0000000cU)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_11 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (4U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_12 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (5U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_15 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (8U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_16 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (9U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_17 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (0x0aU 
                                               ^ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                  >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_18 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (0x0bU 
                                               ^ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                  >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_13 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (6U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_14 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (7U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                             >> 0x00000010U)) 
                             | (0x0000000fU & (5U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_22 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                 >> 0x00000014U)) 
                                             << 4U)) 
                             | (0x0000000fU & (1U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_10 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000010U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (3U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_20 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (0x00000020U 
                                             ^ (0x0000fff0U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x00000010U)))) 
                             | (0x0000000fU & (1U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_24 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                             >> 0x00000010U)) 
                             | (0x0000000fU & (2U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = ((0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                            >> 0x0000001cU)) | ((4U 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 0x0000001bU)) 
                                                | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                       >> 0x0000001bU))))) 
                    << 6U) | ((0x00000030U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 0x00000010U)) 
                              | (0x0000000fU & (1U 
                                                ^ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000000cU)))))) 
           | (0U == ((4U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                            >> 0x0000001dU)) | (3U 
                                                & (~ 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 0x0000001cU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_23 
        = (0U == ((8U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                             >> 0x0000001fU)) << 3U)) 
                  | (7U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001bU))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr 
        = (((8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
             ? 0U : ((6U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                      ? 4U : ((5U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                               ? 6U : ((4U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                        ? 5U : ((3U 
                                                 == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                                 ? 1U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                                  ? 0U
                                                  : 
                                                 (7U 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                     >> 2U)))))))) 
           << 2U);
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((((8U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x0000001cU)) | ((4U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 0x0000001bU)) 
                                               | (3U 
                                                  & (2U 
                                                     ^ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 0x0000001bU))))) 
                   << 6U) | ((0x00000030U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                             >> 0x00000010U)) 
                             | (0x0000000fU & (4U ^ 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 0x0000000cU))))));
    TOPmod__DOT__asic__DOT__apbxbar__DOT____VdfgRegularize_h0aed5153_0_0 
        = ((0x00000030U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                           >> 0x00000010U)) | (0x0000000fU 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                  >> 0x0000000cU)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data16_wr_rev 
        = (((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                     >> 7U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                      >> 9U))) << 0x0000000eU) 
            | (((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                       >> 9U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                        >> 0x0000000bU))) 
               << 0x0000000cU)) | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                              >> 0x0000000dU))) 
                                    << 0x0000000aU) 
                                   | ((0x00000200U 
                                       & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                          >> 5U)) | 
                                      ((0x00000100U 
                                        & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                           >> 7U)) 
                                       | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data8_wr_rev)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_19_psel 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_19) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_19_penable 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_19) 
           & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgRegularize_hac0b0c7e_0_3 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_6) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT____VdfgRegularize_ha7dfeca7_0_3 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_7) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_8) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_9) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT____VdfgRegularize_h82da046b_0_1 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_21) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_4 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_11) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgRegularize_h721d21bd_0_3 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_12) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_15) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_16) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_17) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_18) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_13) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_14) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgRegularize_hf2964a5a_0_5 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_5) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_5 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_22) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT____VdfgRegularize_h49a9cc1e_0_3 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_10) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT____VdfgRegularize_he5cb3e31_0_4 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_20) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__setup 
        = ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_23) 
               & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state)))) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_23) 
              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag 
        = ((0x30000000U <= vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr) 
           & (0x3fffffffU >= vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr));
    TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT____VdfgRegularize_h506daadf_0_5 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_4) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x00000200U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                  >> 0x00000016U)) 
                  | ((0x00000180U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                     >> 0x00000015U)) 
                     | ((0x00000040U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                            >> 0x0000001bU)) 
                                        << 6U)) | (IData)(TOPmod__DOT__asic__DOT__apbxbar__DOT____VdfgRegularize_h0aed5153_0_0)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x00000200U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                  >> 0x00000016U)) 
                  | ((0x00000100U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                     >> 0x00000015U)) 
                     | ((0x000000c0U & (0x00000080U 
                                        ^ (0x000007c0U 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 0x00000015U)))) 
                        | (IData)(TOPmod__DOT__asic__DOT__apbxbar__DOT____VdfgRegularize_h0aed5153_0_0)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data24_wr_rev 
        = (((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                     >> 0x0000000fU)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                               >> 0x00000011U))) 
             << 0x00000016U) | (((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                        >> 0x00000011U)) 
                                 | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                          >> 0x00000013U))) 
                                << 0x00000014U)) | 
           ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                     >> 0x00000013U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                               >> 0x00000015U))) 
             << 0x00000012U) | ((0x00020000U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                >> 5U)) 
                                | ((0x00010000U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                   >> 7U)) 
                                   | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data16_wr_rev)))));
    TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_axiregs__DOT____VdfgRegularize_h536a0669_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_19_penable) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_19_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgRegularize_hac0b0c7e_0_3) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT____VdfgRegularize_ha7dfeca7_0_3) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgRegularize_hb6d5f14f_0_10));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT____VdfgRegularize_h82da046b_0_1) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgRegularize_h721d21bd_0_3));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgRegularize_h62365a0d_0_4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgRegularize_he7139fb9_0_8));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgRegularize_hf2964a5a_0_5) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgRegularize_hf2964a5a_0_5));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_5) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_5));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT____VdfgRegularize_h49a9cc1e_0_3) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT____VdfgRegularize_h49a9cc1e_0_3));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT____VdfgRegularize_he5cb3e31_0_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT____VdfgRegularize_he5cb3e31_0_4));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb;
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata;
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr;
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite;
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel;
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable;
    } else {
        if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
                = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pstrb;
            vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite 
                = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite;
        } else {
            vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel = 0x0fU;
            vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite 
                = (8U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state));
        }
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
            = ((6U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                ? 0x00003540U : ((5U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                  ? 1U : ((4U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                           ? 0U : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                                    ? 
                                                   (0x03000000U 
                                                    | (0x00fffffcU 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))
                                                     ? 0U
                                                     : vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)))));
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr;
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel 
            = (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_state));
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT____VdfgRegularize_h506daadf_0_5) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT____VdfgRegularize_h506daadf_0_5));
    TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT____VdfgRegularize_hddb67a7e_0_9 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_1) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_penable 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_tx_valid 
        = (((IData)(TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_axiregs__DOT____VdfgRegularize_h536a0669_0_0) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (0x00000018U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_rx_ready 
        = (((IData)(TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_axiregs__DOT____VdfgRegularize_h536a0669_0_0) 
            & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite))) 
           & (0x00000020U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_4 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (0x0000000cU == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_push_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (8U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_clr_int = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_ready = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_rd_hdshk) {
        if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                      >> 5U)))) {
            if ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
                if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                  >> 2U)))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_clr_int = 1U;
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                          >> 4U)))) {
                if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
                    if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                  >> 2U)))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_ready = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_tx_push_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (8U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_rd_hdshk) {
        if ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready = 0U;
        } else if ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
                vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready = 0U;
            } else if ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
                vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready = 0U;
            }
        } else if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready 
                = (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                         >> 2U));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__src_data_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_rd_hdshk) 
           & (8U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_rd_hdshk 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT____VdfgRegularize_hddb67a7e_0_9));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_wr_hdshk 
        = ((IData)(TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT____VdfgRegularize_hddb67a7e_0_9) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_penable)) 
                                           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x0000000cU == (0x0000001cU & vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
              << 3U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                         & (8U == (0x0000001cU & vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
                        << 2U)) | ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                     & (4U == (0x0000001cU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
                                    << 1U) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                              & (0U 
                                                 == 
                                                 (0x0000001cU 
                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))))) 
           & (- (IData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_rd_hdshk) {
        if ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_wr_hdshk) 
           & (0x00000024U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we 
        = ((IData)(TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__id_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__comp_i)
            ? (0x0000001fU & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)
            : 0U);
}

void VTOPmod___024root___nba_sequent__TOP__14(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__14\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_flash__DOT__data = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__data;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__addr = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__addr;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__cmd = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__cmd;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__counter = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__counter;
    vlSelfRef.TOPmod__DOT__u_flash__DOT__state = vlSelfRef.__Vdly__TOPmod__DOT__u_flash__DOT__state;
}

extern const VlUnpacked<CData/*2:0*/, 2048> VTOPmod__ConstPool__TABLE_hb6a53d5b_0;
extern const VlUnpacked<CData/*0:0*/, 512> VTOPmod__ConstPool__TABLE_hc27068bc_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 8> VTOPmod__ConstPool__TABLE_h2c495b23_0;

void VTOPmod___024root___nba_comb__TOP__0(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__0\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1;
    TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3;
    TOPmod__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*0:0*/ TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0;
    TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 0;
    CData/*2:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    SData/*10:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0x000000ffU & ((IData)(0x0dU) 
                                             + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_re));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_dout 
        = (0x0000000fU & ((8U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                           ? (1U & (0x38U >> (7U & 
                                              ((IData)(7U) 
                                               - (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter)))))
                           : ((8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                               ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr 
                                  >> 0x00000014U) : 
                              ((9U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr 
                                   >> 0x00000010U) : 
                               ((0x0aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                 ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr 
                                    >> 0x0000000cU)
                                 : ((0x0bU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                     ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr 
                                        >> 8U) : ((0x0cU 
                                                   == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0x0dU 
                                                    == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((0x0eU 
                                                     == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((0x0fU 
                                                      == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                                                         >> 0x00000014U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                                                          >> 0x00000010U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                                                           >> 0x0000001cU)
                                                           : 
                                                          (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                                                           >> 0x00000018U))))))))))))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1 
        = ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    if ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
        if ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata = 0U;
        } else if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata 
                = ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? 0U : (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_rise_int_rx) 
                             << 1U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_rise_int_tx)));
        } else if ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) {
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata = 0U;
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata 
                = ((0xffffff80U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata) 
                   | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_th_tx));
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata 
                = ((0xffff80ffU & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata) 
                   | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_th_rx) 
                      << 8U));
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata 
                = ((0x7fffffffU & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata) 
                   | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_int_en) 
                      << 0x0000001fU));
        } else {
            vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata 
                = ((0x20U >= (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__pointer_out))
                    ? vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__buffer
                   [vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__pointer_out]
                    : 0U);
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_19_prdata 
            = ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_dummy_wr) 
                                 << 0x00000010U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_dummy_rd))
                             : (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_len) 
                                 << 0x00000010U) | 
                                (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_addr_len) 
                                  << 8U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_cmd_len)))))
                : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_addr
                        : vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_cmd)
                    : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_clk_div)
                        : (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__elements) 
                            << 0x00000018U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__elements) 
                                                << 0x00000010U) 
                                               | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_6_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we) {
        vlSelfRef.TOPmod__DOT__psram_sck = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_sck;
        vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelfRef.TOPmod__DOT__psram_sck = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_sck;
        vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((0x0eU > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter)))));
    }
    if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgRegularize_hac0b0c7e_0_3))) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_6_prdata 
            = ((0U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U))) ? ((0xfff00000U 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_6_prdata) 
                                                  | vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_arch_sys_q)
                : ((1U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U))) ? vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_arch_idl_q
                    : ((2U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 2U)))
                        ? ((0xff000000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_6_prdata) 
                           | vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT__s_arch_idh_q)
                        : 0U)));
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 2U))) 
                                   << 2U) | (((1U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 2U))))))))) {
            if (vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgExtracted_h7bc7cde9__0) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb4_archinfo.sv:74: Assertion failed in %NTOPmod.asic.larchinfo.m: unique case, but multiple matches found for '4'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 4,(0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 2U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/archinfo/rtl/apb4_archinfo.sv", 74, "");
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_0_prdata = 0U;
    if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT____VdfgRegularize_ha7dfeca7_0_3))) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_0_prdata 
            = ((0U == (0x00003fffU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U))) ? ((0xfffffffeU 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_0_prdata) 
                                                  | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_msip_q))
                : ((0x2ffeU == (0x00003fffU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                               >> 2U)))
                    ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtime_q)
                    : ((0x2fffU == (0x00003fffU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 2U)))
                        ? (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtime_q 
                                   >> 0x20U)) : ((0x1000U 
                                                  == 
                                                  (0x00003fffU 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 2U)))
                                                  ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q)
                                                  : 
                                                 ((0x1001U 
                                                   == 
                                                   (0x00003fffU 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                       >> 2U)))
                                                   ? (IData)(
                                                             (vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q 
                                                              >> 0x20U))
                                                   : 0U)))));
        if ((1U & (~ VL_ONEHOT_I(((((0x1001U == (0x00003fffU 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 2U))) 
                                    << 4U) | (((0x1000U 
                                                == 
                                                (0x00003fffU 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 2U))) 
                                               << 3U) 
                                              | ((0x2fffU 
                                                  == 
                                                  (0x00003fffU 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 2U))) 
                                                 << 2U))) 
                                  | (((0x2ffeU == (0x00003fffU 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 2U))) 
                                      << 1U) | (0U 
                                                == 
                                                (0x00003fffU 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 2U))))))))) {
            if ((0U != ((((0x1001U == (0x00003fffU 
                                       & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U))) 
                          << 4U) | (((0x1000U == (0x00003fffU 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                     >> 2U))) 
                                     << 3U) | ((0x2fffU 
                                                == 
                                                (0x00003fffU 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 2U))) 
                                               << 2U))) 
                        | (((0x2ffeU == (0x00003fffU 
                                         & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                            >> 2U))) 
                            << 1U) | (0U == (0x00003fffU 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb4_clint.sv:93: Assertion failed in %NTOPmod.asic.lclint.m: unique case, but multiple matches found for '14'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 14,(0x00003fffU & 
                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/clint/rtl/apb4_clint.sv", 93, "");
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_21_prdata = 0U;
    if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT____VdfgRegularize_h82da046b_0_1))) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_21_prdata 
            = ((0U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U))) ? ((0xfffffffeU 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_21_prdata) 
                                                  | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__s_rng_ctrl_q))
                : ((2U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U))) ? vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q
                    : 0U));
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 2U))) 
                                   << 1U) | (0U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                 >> 2U)))))))) {
            if ((0U != (((2U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                >> 2U))) 
                         << 1U) | (0U == (0x0000000fU 
                                          & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                             >> 2U)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb4_rng.sv:60: Assertion failed in %NTOPmod.asic.lrng.m: unique case, but multiple matches found for '4'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 4,(0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 2U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/rng/rtl/apb4_rng.sv", 60, "");
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata = 0U;
    if (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? ((0xffffff00U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata) 
                                         | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_rxack_q) 
                                             << 7U) 
                                            | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_busy) 
                                                << 6U) 
                                               | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_q) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_tip_q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_q))))))
                                      : 0U)) : ((8U 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                 ? 
                                                ((0xffffff00U 
                                                  & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata) 
                                                 | ((4U 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                     ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__sr)
                                                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_txr_q)))
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata) 
                                                  | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_pscr_q))
                                                  : 
                                                 ((0xffffff00U 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_11_prdata) 
                                                  | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_ctrl_q))))));
    }
    __Vtableidx19 = ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart) 
                       << 0x0000000aU) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag) 
                                           << 8U))) 
                     | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt) 
                         << 4U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i) 
                                    << 3U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext 
        = VTOPmod__ConstPool__TABLE_hb6a53d5b_0[__Vtableidx19];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata = 0U;
    if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_prdata_i;
    }
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))) {
                if ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                            if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                    = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vtableidx17 = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt) 
                      << 5U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg) 
                                 << 2U) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = VTOPmod__ConstPool__TABLE_hc27068bc_0[__Vtableidx17];
    vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_apb4_wr_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_d 
            = ((0x1000U == (0x00003fffU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                           >> 2U)))
                ? (((QData)((IData)((vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q 
                                     >> 0x20U))) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)))
                : ((0x1001U == (0x00003fffU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                               >> 2U)))
                    ? (((QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q)))
                    : vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtimecmp_q));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((0x1001U 
                                                 == 
                                                 (0x00003fffU 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                     >> 2U))) 
                                                << 1U) 
                                               | (0x1000U 
                                                  == 
                                                  (0x00003fffU 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                      >> 2U)))))))))) {
            if ((0U != (((0x1001U == (0x00003fffU & 
                                      (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                       >> 2U))) << 1U) 
                        | (0x1000U == (0x00003fffU 
                                       & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb4_clint.sv:72: Assertion failed in %NTOPmod.asic.lclint.m: unique case, but multiple matches found for '14'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 14,(0x00003fffU & 
                                     (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/clint/rtl/apb4_clint.sv", 72, "");
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgExtracted_h0a66584e__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_apb4_rd_hdshk) 
            & (0x00000018U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgExtracted_h0a66584e__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_apb4_rd_hdshk) 
            & (0x00000018U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgExtracted_h0a66584e__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_apb4_rd_hdshk) 
            & (0x00000018U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__s_apb4_wr_hdshk) 
            & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__s_rng_ctrl_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgExtracted_h5bbf88c4__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_apb4_wr_hdshk) 
            & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_ctrl_q) 
              >> 7U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgExtracted_hced033f8__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (8U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__pop_hdshk 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_apb4_rd_hdshk) 
            & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata 
            = ((0U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U))) ? ((0xfffffffcU 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata) 
                                                  | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q))
                : ((1U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                          >> 2U))) ? 
                   ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata) 
                    | ((1U & ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_q)) 
                              | (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q) 
                                    >> 1U)))) ? 0U : 
                       (0x000000ffU & (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4 
                                               >> (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_q), 3U)))))))
                    : ((2U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 2U)))
                        ? ((0xfffffffeU & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_12_prdata) 
                           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q))
                        : 0U)));
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                              >> 2U))) 
                                   << 2U) | (((1U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                    >> 2U))))))))) {
            if (vlSelfRef.TOPmod__DOT__asic__DOT__larchinfo__DOT__m__DOT____VdfgExtracted_h7bc7cde9__0) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: apb4_ps2.sv:159: Assertion failed in %NTOPmod.asic.lps2.m: unique case, but multiple matches found for '4'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 4,(0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                   >> 2U)));
                    VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/ps2/rtl/apb4_ps2.sv", 159, "");
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__dout 
        = (0x0000000fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we)
                           ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_dout)
                           : ((8U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                               ? (1U & (0xebU >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter)))))
                               : ((8U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                                   ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr 
                                      >> 0x00000014U)
                                   : ((9U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                                       ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr 
                                          >> 0x00000010U)
                                       : ((0x0aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                                           ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr 
                                              >> 0x0000000cU)
                                           : ((0x0bU 
                                               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                                               ? (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                               : ((0x0cU 
                                                   == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0x0dU 
                                                    == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U)))))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_cmp_q
                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q))
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? ((0xfff00000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata) 
                                    | vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_q)
                                 : ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_15_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_cmp_q
                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q))
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? ((0xfff00000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata) 
                                    | vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_q)
                                 : ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_16_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_cmp_q
                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q))
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? ((0xfff00000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata) 
                                    | vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_q)
                                 : ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_17_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgExtracted_hbc9544f1__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_cmp_q
                                 : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q))
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? ((0xfff00000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata) 
                                    | vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_q)
                                 : ((0xffffff00U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_18_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000020U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? 0U : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q)))))
                : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata) 
                       | ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                           ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                               ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr3_q)
                               : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr2_q))
                           : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                               ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr1_q)
                               : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cr0_q))))
                    : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                        ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                            ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata) 
                               | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cmp_q))
                            : 0U) : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? ((0xffff0000U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_q))
                                      : ((0xfffffff8U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_13_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000020U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? 0U : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q)))))
                : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata) 
                       | ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                           ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                               ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr3_q)
                               : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr2_q))
                           : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                               ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr1_q)
                               : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cr0_q))))
                    : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                        ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                            ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata) 
                               | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cmp_q))
                            : 0U) : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? ((0xffff0000U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_q))
                                      : ((0xfffffff8U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_14_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_key_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_wr_hdshk)
            ? ((5U == (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                      >> 2U))) ? vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata
                : 0U) : vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_key_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_en 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_wr_hdshk) 
            & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (0x5f3759dfU == vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_key_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgExtracted_hbc9544f1__1 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_q) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_rd_hdshk)) 
           & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? 0U : ((0xfffffffeU 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_feed_q)))
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_key_q
                                 : ((0xfffffffeU & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cmp_q
                                 : 0U) : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                           ? ((0xfff00000U 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata) 
                                              | vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_q)
                                           : ((0xfffffff8U 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_5_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_q;
    if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
          & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_q)) 
         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_d = 0U;
    } else if (((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
                  & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_q))) 
                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_wr_hdshk)) 
                & (0x0000000cU == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_start_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_q;
    if (((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_q)) 
          & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_rd_hdshk)) 
         & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_d = 0U;
    } else if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
                 & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_q))) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_22_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_22_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_22_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q
                                 : vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_xorv_q)
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_init_q
                                 : ((0xffffff80U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_22_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xfffffe00U 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lsr_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? 0U : ((0xffffff00U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata) 
                                         | (0x000000ffU 
                                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_data))))
                             : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? ((0xffff0000U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_div_q))
                                 : ((0xfffffe00U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_10_prdata) 
                                    | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_d 
        = ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_q) 
             << 5U) | (((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q)) 
                        << 4U) | ((0x40U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)) 
                                  << 3U))) | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__busy_o) 
                                               << 2U) 
                                              | ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__irq_o) 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_rd_hdshk)) 
                                                  & (0x00000010U 
                                                     == 
                                                     (0x0000003cU 
                                                      & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                         & ((vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                             >> 1U) 
                                                            & ((0x0000001fU 
                                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                                   >> 0x00000010U)) 
                                                               > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)))))
                                                      ? 
                                                     (1U 
                                                      | (2U 
                                                         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q)))
                                                      : 
                                                     (((~ 
                                                        ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q) 
                                                         >> 1U)) 
                                                       & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                          & ((vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                              >> 2U) 
                                                             & ((0x0000001fU 
                                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                                    >> 0x00000015U)) 
                                                                < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q)))))
                                                       ? 
                                                      (2U 
                                                       | (1U 
                                                          & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q)))
                                                       : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? 0U : ((0xffffffc0U 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? (((0U == (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q), 5U)))
                                      ? 0U : (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                                              (((IData)(0x0000001fU) 
                                                + (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q), 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q), 5U))))) 
                                    | (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                                       (0x0000003fU 
                                        & (VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q), 5U) 
                                           >> 5U))] 
                                       >> (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q), 5U))))
                                 : 0U) : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                           ? ((0xffff0000U 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata) 
                                              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_div_q))
                                           : ((0xfc000000U 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_20_prdata) 
                                              | vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_en 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_wr_hdshk) 
            & (4U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_wr_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q;
    if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_rd_hdshk) 
          & (0x00000010U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
         & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d = 0U;
    } else if ((IData)((((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q) 
                             >> 2U)) & (0x18U == (0x18U 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q)))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d 
            = (4U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d));
    } else if ((IData)((((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q) 
                             >> 1U)) & (0x14U == (0x14U 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q)))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d 
            = (2U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d));
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q)) 
                  & (0x12U == (0x12U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q)))) 
                 & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__s_dat_q))) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d 
            = (1U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_d));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? 0U : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                         ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? ((0xfffffffcU 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ssta_q))
                                      : ((0xfffffff8U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q))))
                         : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                 ? vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_alrm_q
                                 : ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_tmp_q
                                     : 0U)) : ((4U 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                ? (
                                                   (0xfff00000U 
                                                    & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata) 
                                                   | vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q)
                                                : (
                                                   (0xffffffe0U 
                                                    & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_4_prdata) 
                                                   | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgExtracted_h4037c933__0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT____VdfgRegularize_haa6edec2_0_4));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk 
        = ((0x20U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_push_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_clr_int) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_d = 0U;
    } else if ((1U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q) 
                       >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lsr_q) 
                                 >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_d = 4U;
    } else if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q) 
                 >> 1U) & (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_d = 2U;
    } else if ((1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q) 
                      & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_trg_level_done) 
                         | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lsr_q) 
                            >> 5U))))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_ip_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk 
        = ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_ready));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__push_hdshk 
        = ((0x40U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_tx_push_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__pop_hdshk 
        = ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_pop_ready));
    vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_apb4_rd_hdshk) {
        vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata 
            = ((0x00000020U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                ? ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? 0U : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                             ? 0U : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                      ? ((0xffffffe0U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q))
                                      : ((0xfffffff0U 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata) 
                                         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_thold_q)))))
                : ((0x00000010U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                    ? ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                        ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                            ? vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ie_q
                            : vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ip_q)
                        : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                            ? vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q
                            : vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q))
                    : ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                        ? ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                            ? vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q
                            : vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q)
                        : ((4U & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                            ? vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_tm_q
                            : ((0xfffffff0U & vlSelfRef.TOPmod__DOT__asic__DOT___apbxbar_auto_anon_out_1_prdata) 
                               | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q))))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_clam_in)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_q)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_clam_q));
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
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__state)
                  ? (~ (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_done) 
                         & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we)) 
                        | ((0x1cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter)) 
                           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_re))))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__active)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__in_pready 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we)
             ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_done)
             : (0x1cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__active));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__state)
            ? (0x1cU != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_rd));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_done))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_wr)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    __Vtableidx11 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext_string[0U] 
        = VTOPmod__ConstPool__TABLE_h2c495b23_0[__Vtableidx11][0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext_string[1U] 
        = VTOPmod__ConstPool__TABLE_h2c495b23_0[__Vtableidx11][1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext_string[2U] 
        = VTOPmod__ConstPool__TABLE_h2c495b23_0[__Vtableidx11][2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_ack 
        = ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_state)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgExtracted_h0a66584e__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgExtracted_h8b551abc__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_is_int_all;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgExtracted_h0a66584e__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgExtracted_h8b551abc__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_is_int_all;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgExtracted_h0a66584e__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgExtracted_h8b551abc__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_is_int_all;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__u_shift_dffr__DOT__dat_i 
        = ((((((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                          ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                             >> 0x0000001fU) : vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q) 
                        << 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                          ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                             >> 0x0000001eU)
                                          : ((vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                              >> 0x0000001fU) 
                                             ^ vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q)))) 
                << 6U) | (((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                    ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                       >> 0x0000001dU)
                                    : ((vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                        >> 0x0000001eU) 
                                       ^ vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q)) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                    ? 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                    >> 0x0000001cU)
                                                    : 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                    >> 0x0000001dU)))) 
                          << 4U)) | ((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                   >> 0x0000001bU)
                                                : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                   >> 0x0000001cU)) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                 ? 
                                                (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                 >> 0x0000001aU)
                                                 : 
                                                (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                 >> 0x0000001bU)))) 
                                      << 2U) | ((2U 
                                                 & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                      ? 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                      >> 0x00000019U)
                                                      : 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                       ? 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                       >> 0x00000018U)
                                                       : 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                       >> 0x00000019U)))))) 
             << 0x00000018U) | ((((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                             ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                >> 0x00000017U)
                                             : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                >> 0x00000018U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                              ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                 >> 0x00000016U)
                                              : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                 >> 0x00000017U)))) 
                                   << 6U) | (((2U & 
                                               (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                  ? 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                  >> 0x00000015U)
                                                  : 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                  >> 0x00000016U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                     ? 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                     >> 0x00000014U)
                                                     : 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                     >> 0x00000015U)))) 
                                             << 4U)) 
                                 | ((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                               ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                  >> 0x00000013U)
                                               : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                  >> 0x00000014U)) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                   >> 0x00000012U)
                                                : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                   >> 0x00000013U)))) 
                                     << 2U) | ((2U 
                                                & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                     ? 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                     >> 0x00000011U)
                                                     : 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                     >> 0x00000012U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                      ? 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                      >> 0x00000010U)
                                                      : 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                      >> 0x00000011U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                          ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                             >> 0x0000000fU) : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                >> 0x00000010U)) 
                        << 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                          ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                             >> 0x0000000eU)
                                          : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                             >> 0x0000000fU)))) 
                << 6U) | (((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                    ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                       >> 0x0000000dU)
                                    : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                       >> 0x0000000eU)) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                    ? 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                    >> 0x0000000cU)
                                                    : 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                    >> 0x0000000dU)))) 
                          << 4U)) | ((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                   >> 0x0000000bU)
                                                : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                   >> 0x0000000cU)) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                 ? 
                                                (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                 >> 0x0000000aU)
                                                 : 
                                                (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                 >> 0x0000000bU)))) 
                                      << 2U) | ((2U 
                                                 & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                      ? 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                      >> 9U)
                                                      : 
                                                     ((vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                       >> 0x0000000aU) 
                                                      ^ vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                       ? 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                       >> 8U)
                                                       : 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                       >> 9U)))))) 
             << 8U) | (((((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                   ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                      >> 7U) : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                >> 8U)) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                   ? 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                   >> 6U)
                                                   : 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                   >> 7U)))) 
                         << 6U) | (((2U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                             ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                >> 5U)
                                             : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                >> 6U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                              ? (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                 >> 4U)
                                              : (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                 >> 5U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                      ? 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                      >> 3U)
                                                      : 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                      >> 4U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                       ? 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                       >> 2U)
                                                       : 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                       >> 3U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                       ? 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata 
                                                       >> 1U)
                                                       : 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                       >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__wr_i)
                                                        ? vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata
                                                        : 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lrng__DOT__m__DOT__u_lfsr_galois__DOT__s_shift_q 
                                                        >> 1U))))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d 
        = (0xf8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_done) 
         | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d 
            = (0x0fU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d));
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgExtracted_h5bbf88c4__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_d 
            = (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata);
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgExtracted_hced033f8__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgExtracted_h1c0d4ea0__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_q;
    if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q))) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__pop_hdshk) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_q)));
            vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_d 
                = (0x0000000fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_q) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_rd_ptr_d = 0U;
        vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                     >> 2U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                  >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                     >> 2U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                  >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                     >> 2U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                  >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                     >> 2U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT____VdfgExtracted_hbc9544f1__0) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                  >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q) 
                     >> 1U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q) 
                  >> 1U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q) 
                     >> 1U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT____VdfgExtracted_hbc8f85f6__0) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q) 
                  >> 1U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_en) 
           & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgExtracted_hbc9544f1__1) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_d = 0U;
    } else if (((((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_q)) 
                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q) 
                     >> 2U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q)) 
                & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_en 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT____VdfgExtracted_hbc9544f1__1) 
           | ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_stat_q)) 
              & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q) 
                  >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q) 
                            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__src_data_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_en) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_in_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_in_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_in_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_in_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_in_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_in_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_in_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_in_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_in_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_in_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_in_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_in_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_tc_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q)));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_valid) 
         | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_tc_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_valid)) 
                 & ((((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_q)) 
                      & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q) 
                         == VL_SHIFTR_III(32,32,32, 
                                          ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_q) 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_tc_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
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
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.TOPmod__DOT__psram_dio__strong__out2 
        = ((0x0eU & (IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out2)) 
           | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__dout))));
    vlSelfRef.TOPmod__DOT__psram_dio__strong__out3 
        = ((0x0dU & (IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out3)) 
           | (2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__dout))));
    vlSelfRef.TOPmod__DOT__psram_dio__strong__out4 
        = ((0x0bU & (IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out4)) 
           | (4U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__dout))));
    vlSelfRef.TOPmod__DOT__psram_dio__strong__out5 
        = ((7U & (IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out5)) 
           | (8U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__dout))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (((~ 
                                                   (((1U 
                                                      == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state)) 
                                                     | (8U 
                                                        == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__cmd_state))) 
                                                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_ack))) 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                                                 | (((~ 
                                                      ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_penable) 
                                                       & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel))) 
                                                     & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                    | (((~ 
                                                         ((2U 
                                                           != 
                                                           (0x0000000fU 
                                                            & (vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr 
                                                               >> 2U))) 
                                                          | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)
                                                              ? 
                                                             ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__s_dat_q)) 
                                                              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))
                                                              : 
                                                             ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__s_dat_q)) 
                                                              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))))) 
                                                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                       | (((~ 
                                                            ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__active)) 
                                                             | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__in_pready))) 
                                                           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_23)) 
                                                          | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__apbxbar__DOT__sel_24)))));
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
    TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
            & (1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)) 
           & (IData)(TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite) 
           & (IData)(TOPmod__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
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

void VTOPmod___024root___nba_sequent__TOP__15(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__15\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__externalPins_spi_mosi = vlSelfRef.__Vdly__TOPmod__DOT__externalPins_spi_mosi;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q) 
            >> 4U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__i2c_scl_dir_o 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__i2c_scl_dir_o;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSDA 
        = ((IData)(vlSelfRef.reset) || (1U & (((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA) 
                                                    >> 1U))) 
                                               | (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA)))) 
                                              | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_dSCL 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSCL));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSDA;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_pready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_sSCL 
        = ((IData)(vlSelfRef.reset) || (1U & (((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL) 
                                                    >> 1U))) 
                                               | (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL)))) 
                                              | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid)
                  ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL 
        = vlSelfRef.__Vdly__TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__u_i2c_master_bit_ctrl__DOT__r_fSCL;
}

void VTOPmod___024root___nba_sequent__TOP__16(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__16\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_psram__DOT__w_data = vlSelfRef.__Vdly__TOPmod__DOT__u_psram__DOT__w_data;
}

void VTOPmod___024root___nba_sequent__TOP__17(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_sequent__TOP__17\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__u_psram__DOT__addr_z = vlSelfRef.__Vdly__TOPmod__DOT__u_psram__DOT__addr_z;
    if (vlSelfRef.TOPmod__DOT__u_psram__DOT__start_flag) {
        vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en = 0U;
    } else if ((0x0eU == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) {
        vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en 
            = (0xebU == (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cmd_data));
    }
    if (vlSelfRef.TOPmod__DOT____Vcellinp__u_psram__ce_n) {
        vlSelfRef.TOPmod__DOT__u_psram__DOT__cmd_data = 0U;
    } else if ((8U > (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))) {
        vlSelfRef.TOPmod__DOT__u_psram__DOT__cmd_data 
            = (((~ ((IData)(1U) << (7U & ((IData)(7U) 
                                          - (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))))) 
                & (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cmd_data)) 
               | (0x00ffU & ((1U & (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__dio)) 
                             << (7U & ((IData)(7U) 
                                       - (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt))))));
    }
    vlSelfRef.TOPmod__DOT__u_psram__DOT__cnt = vlSelfRef.__Vdly__TOPmod__DOT__u_psram__DOT__cnt;
}

void VTOPmod___024root___nba_comb__TOP__1(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__1\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q
            : vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_normal_mode) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d 
            = ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q);
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q
            : vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg) 
                & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
        = (1U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) 
                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg))
                  ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__src_valid_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg));
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__src_valid_i) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_pready;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0 = 0U;
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q;
    }
}

void VTOPmod___024root___nba_comb__TOP__2(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__2\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__src_data_i) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
              == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h93611447_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__src_data_i) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
              == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0 
        = ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_apb4_wr_hdshk) 
             & (8U == (0x0000003cU & vlSelfRef.TOPmod__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
            & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_wr_valid)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_pready));
    vlSelfRef.TOPmod__DOT____Vcellinp__u_psram__ce_n 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_ce_n)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_ce_n));
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
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT____VdfgRegularize_h8c98200f_0_0) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_req_src_dffr__DOT__dat_i 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_data_src_dffr__DOT__dat_i 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q;
    }
    vlSelfRef.TOPmod__DOT__u_psram__DOT__start_flag 
        = (1U & (~ ((IData)(vlSelfRef.TOPmod__DOT____Vcellinp__u_psram__ce_n) 
                    | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we)
                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mw_sck)
                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_sck)))));
}

extern const VlUnpacked<CData/*3:0*/, 256> VTOPmod__ConstPool__TABLE_hba29e809_0;

void VTOPmod___024root___nba_comb__TOP__3(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___nba_comb__TOP__3\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelfRef.TOPmod__DOT__u_psram__DOT__dio = ((((IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en)
                                                   ? 0x0fU
                                                   : 0U) 
                                                 & (((IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en)
                                                      ? (IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_data)
                                                      : 0U) 
                                                    & ((IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__out_en)
                                                        ? 0x0fU
                                                        : 0U))) 
                                                | ((1U 
                                                    & ((IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out2) 
                                                       & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten))) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out3) 
                                                          & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten))) 
                                                      | ((4U 
                                                          & ((IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out4) 
                                                             & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten))) 
                                                         | (8U 
                                                            & ((IData)(vlSelfRef.TOPmod__DOT__psram_dio__strong__out5) 
                                                               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten)))))));
    __Vtableidx31 = (((IData)(vlSelfRef.TOPmod__DOT__u_psram__DOT__dio) 
                      << 4U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__douten));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_din 
        = VTOPmod__ConstPool__TABLE_hba29e809_0[__Vtableidx31];
}

void VTOPmod___024root___nba_sequent__TOP__0(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__1(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__2(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__3(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__4(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__5(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__6(VTOPmod___024root* vlSelf);
void VTOPmod___024root___nba_sequent__TOP__7(VTOPmod___024root* vlSelf);

void VTOPmod___024root___eval_nba(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_nba\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VTOPmod___024root___nba_sequent__TOP__7(vlSelf);
        VTOPmod___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__11(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_sequent__TOP__13(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__14(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_sequent__TOP__15(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_sequent__TOP__17(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x0000000aU] = 1U;
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x0000000bU] = 1U;
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTOPmod___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x0000000cU] = 1U;
    }
    if ((0x0000000000000389ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        VTOPmod___024root___nba_comb__TOP__3(vlSelf);
    }
}

void VTOPmod___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void VTOPmod___024root___eval_triggers__act(VTOPmod___024root* vlSelf);

bool VTOPmod___024root___eval_phase__act(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_phase__act\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTOPmod___024root___eval_triggers__act(vlSelf);
    VTOPmod___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VTOPmod___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VTOPmod___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool VTOPmod___024root___eval_phase__nba(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_phase__nba\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VTOPmod___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VTOPmod___024root___eval_nba(vlSelf);
        VTOPmod___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOPmod___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VTOPmod___024root___eval_phase__ico(VTOPmod___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOPmod___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VTOPmod___024root___eval(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VTOPmod___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/temp/TOPmod.v", 3, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VTOPmod___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTOPmod___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/temp/TOPmod.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTOPmod___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/temp/TOPmod.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VTOPmod___024root___eval_phase__act(vlSelf));
    } while (VTOPmod___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VTOPmod___024root___eval_debug_assertions(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_debug_assertions\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
