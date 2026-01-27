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
        CData/*0:0*/ top__DOT__other_encode_com_grp_rd_vaild;
        CData/*0:0*/ top__DOT__other_encode_com_pc_nPC_vaild;
        CData/*0:0*/ top__DOT__other_encode_com_csr_vaild;
        CData/*0:0*/ top__DOT__other_encode_com_csr_ecall;
        CData/*0:0*/ top__DOT__other_encode_com_csr_mret;
        CData/*2:0*/ top__DOT__other_encode_axi4lite_aw_payload_prot;
        CData/*0:0*/ top__DOT__other_encode_axi4lite_w_valid;
        CData/*3:0*/ top__DOT__other_encode_axi4lite_w_payload_strb;
        CData/*0:0*/ top__DOT__other_encode_axi4lite_b_ready;
        CData/*2:0*/ top__DOT__other_encode_axi4lite_ar_payload_prot;
        CData/*0:0*/ top__DOT__other_encode_axi4lite_r_ready;
        CData/*0:0*/ top__DOT__ctrl_u_vaild_1;
        CData/*0:0*/ top__DOT__ctrl_u_vaild_3;
        CData/*0:0*/ top__DOT__other_encode__DOT___zz_com_grp_rd_17;
        CData/*0:0*/ top__DOT__other_encode__DOT__ErrorReg;
        CData/*0:0*/ top__DOT__other_encode__DOT__ebreak;
        CData/*0:0*/ top__DOT__other_encode__DOT____VdfgExtracted_hf015dc25__0;
        CData/*1:0*/ top__DOT__aximem_1__DOT__mem_w_len;
        CData/*0:0*/ top__DOT__aximem_1__DOT__mem__DOT__wen;
        CData/*0:0*/ top__DOT__axiarbiter_1__DOT__AxiOut_r_ready;
        CData/*0:0*/ top__DOT__axiarbiter_1__DOT__wsel;
        CData/*0:0*/ top__DOT__axiarbiter_1__DOT__rsel;
        CData/*0:0*/ top__DOT__ctrl__DOT___zz_when;
        CData/*0:0*/ top__DOT__ctrl__DOT__step;
        CData/*0:0*/ top__DOT__ctrl__DOT__test;
        CData/*0:0*/ top__DOT__ctrl__DOT__s_wantStart;
        CData/*3:0*/ top__DOT__ctrl__DOT__s_mem_cnt;
        CData/*1:0*/ top__DOT__ctrl__DOT__s_stateReg;
        CData/*1:0*/ top__DOT__ctrl__DOT__s_stateNext;
        CData/*3:0*/ __Vtableidx1;
        CData/*1:0*/ __Vtableidx2;
        CData/*1:0*/ __Vtableidx3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__ctrl__DOT__step__0;
        IData/*31:0*/ top__DOT__other_encode_com_grp_rd;
        IData/*31:0*/ top__DOT__other_encode_com_pc_nPC;
        IData/*31:0*/ top__DOT__other_encode_com_csr_w_data;
        IData/*31:0*/ top__DOT__other_encode_axi4lite_aw_payload_addr;
        IData/*31:0*/ top__DOT__other_encode_axi4lite_w_payload_data;
        IData/*31:0*/ top__DOT__other_encode_axi4lite_ar_payload_addr;
        IData/*31:0*/ top__DOT__other_csr_com_encode_r_pc;
        IData/*31:0*/ top__DOT__axiarbiter_1_AxiIn_0_r_payload_data;
        IData/*31:0*/ top__DOT__axiarbiter_1_AxiIn_1_r_payload_data;
        IData/*31:0*/ top__DOT__pc_pc__DOT__PC_cnt;
        IData/*31:0*/ top__DOT__other_encode__DOT__com_grp_rs1;
        IData/*31:0*/ top__DOT__other_encode__DOT__com_grp_rs2;
        IData/*31:0*/ top__DOT__other_encode__DOT___zz_com_grp_rd_21;
        IData/*31:0*/ top__DOT__other_encode__DOT___zz_com_grp_rd_36;
        IData/*31:0*/ top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
        IData/*31:0*/ top__DOT__other_encode__DOT__imm_I;
        IData/*31:0*/ top__DOT__other_encode__DOT__imm_S;
        IData/*31:0*/ top__DOT__other_csr__DOT__com_encode_r_data;
        IData/*31:0*/ top__DOT__other_csr__DOT__mstatus;
        IData/*31:0*/ top__DOT__other_csr__DOT__mcause;
        IData/*31:0*/ top__DOT__other_csr__DOT__mepc;
        IData/*31:0*/ top__DOT__other_csr__DOT__mtvec;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_0;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_1;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_2;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_3;
    };
    struct {
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_4;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_5;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_6;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_7;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_8;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_9;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_10;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_11;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_12;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_13;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_14;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_15;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_16;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_17;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_18;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_19;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_20;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_21;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_22;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_23;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_24;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_25;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_26;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_27;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_28;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_29;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_30;
        IData/*31:0*/ top__DOT__other_grp__DOT__reg_31;
        IData/*31:0*/ top__DOT__aximem_1__DOT__mem_r_data;
        IData/*31:0*/ __Vdly__top__DOT__pc_pc__DOT__PC_cnt;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__other_csr__DOT___zz_mcycle;
        QData/*63:0*/ top__DOT__other_csr__DOT__mcycle;
        QData/*39:0*/ top__DOT__ctrl__DOT__s_stateReg_string;
        QData/*39:0*/ top__DOT__ctrl__DOT__s_stateNext_string;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
