// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rst,0,0);
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT__Decode_area_encode_com_grp_rd_vaild;
        CData/*0:0*/ top__DOT__Decode_area_encode_com_pc_nPC_vaild;
        CData/*0:0*/ top__DOT__Decode_area_encode_com_exmem_w_vaild;
        CData/*1:0*/ top__DOT__Decode_area_encode_com_exmem_w_len;
        CData/*0:0*/ top__DOT__Decode_area_encode_com_exmem_r_ready;
        CData/*1:0*/ top__DOT__Decode_area_encode_com_exmem_r_len;
        CData/*0:0*/ top__DOT__pip_ctrl_3_up_valid;
        CData/*0:0*/ top__DOT__pip_ctrl_2_up_valid;
        CData/*0:0*/ top__DOT__pip_ctrl_1_up_valid;
        CData/*0:0*/ top__DOT__jump;
        CData/*0:0*/ top__DOT__Decode_area_encode__DOT__ErrorReg;
        CData/*0:0*/ top__DOT__Decode_area_encode__DOT__ebreak;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        IData/*31:0*/ top__DOT__Decode_area_encode_com_grp_rd;
        IData/*31:0*/ top__DOT__Decode_area_encode_com_pc_nPC;
        IData/*31:0*/ top__DOT__Decode_area_encode_com_exmem_w_data;
        IData/*31:0*/ top__DOT__Decode_area_encode_com_exmem_w_addr;
        IData/*31:0*/ top__DOT__Decode_area_encode_com_exmem_r_addr;
        IData/*31:0*/ top__DOT__Pc_area_pc__DOT__rom_code;
        IData/*31:0*/ top__DOT__Pc_area_pc__DOT__PC_cnt;
        IData/*31:0*/ top__DOT__Decode_area_encode__DOT__com_grp_rs1;
        IData/*31:0*/ top__DOT__Decode_area_encode__DOT__com_grp_rs2;
        IData/*31:0*/ top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1;
        IData/*31:0*/ top__DOT__Decode_area_encode__DOT___zz_com_exmem_w_addr;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_0;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_1;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_2;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_3;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_4;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_5;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_6;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_7;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_8;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_9;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_10;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_11;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_12;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_13;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_14;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_15;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_16;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_17;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_18;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_19;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_20;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_21;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_22;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_23;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_24;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_25;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_26;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_27;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_28;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_29;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_30;
        IData/*31:0*/ top__DOT__Grp_area_grp__DOT__reg_31;
        IData/*31:0*/ top__DOT__Exmem_area_exmem__DOT__mem_r_data;
        IData/*31:0*/ __Vfunc_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r__0__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
