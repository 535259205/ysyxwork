// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL___024ROOT_H_
#define VERILATED_VYSYXSOCFULL___024ROOT_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid;
        CData/*1:0*/ ysyxSoCFull__DOT__aximem_1_axi4lite_r_payload_resp;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_ar_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd_vaild;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_ecall;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_mret;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid;
        CData/*3:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready;
        CData/*3:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_ar_size;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_fence_i;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl_r_sel;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_aw_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_w_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_b_valid;
        CData/*1:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_b_payload_resp;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__finish;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l137;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l150;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l153;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_24;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_27;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ErrorReg;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_b_fire;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_1;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_3;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_5;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__rd_vaild;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid;
        CData/*1:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_wantStart;
        CData/*2:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg;
    };
    struct {
        CData/*2:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT___zz_when_MyCpu_l792;
        CData/*0:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__step_fun_1__DOT__step;
        CData/*1:0*/ ysyxSoCFull__DOT__uart1__DOT__mmio_w_len;
        CData/*0:0*/ ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
        CData/*0:0*/ ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire;
        CData/*1:0*/ ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp;
        CData/*0:0*/ ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rValid;
        CData/*2:0*/ ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_prot;
        CData/*1:0*/ ysyxSoCFull__DOT__uart2__DOT__mmio_w_len;
        CData/*0:0*/ ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
        CData/*0:0*/ ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire;
        CData/*1:0*/ ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp;
        CData/*0:0*/ ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid;
        CData/*2:0*/ ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_prot;
        CData/*1:0*/ ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_w_fire;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_b_fire;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_r_fire;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__wen;
        CData/*0:0*/ ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren;
        CData/*1:0*/ ysyxSoCFull__DOT__axint__DOT__mmio_w_len;
        CData/*0:0*/ ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
        CData/*0:0*/ ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire;
        CData/*1:0*/ ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp;
        CData/*0:0*/ ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rValid;
        CData/*2:0*/ ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_prot;
        CData/*2:0*/ __Vtableidx1;
        CData/*2:0*/ __Vtableidx2;
        CData/*2:0*/ __Vtableidx3;
        CData/*3:0*/ __Vtableidx4;
        CData/*2:0*/ __Vtableidx5;
        CData/*7:0*/ __Vtableidx6;
        CData/*3:0*/ __Vtableidx7;
        CData/*3:0*/ __Vtableidx9;
        CData/*3:0*/ __Vtableidx11;
        CData/*3:0*/ __Vtableidx12;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_payload_addr;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__PC_cnt;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__code_reg;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_28;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_32;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__imm_S;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__pc_pc;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus;
    };
    struct {
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_0;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg_string;
        IData/*31:0*/ ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext_string;
        IData/*31:0*/ ysyxSoCFull__DOT__uart1__DOT__mmio_r_data;
        IData/*31:0*/ ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_addr;
        IData/*31:0*/ ysyxSoCFull__DOT__uart1__DOT__slaveFactory_readRsp_data;
        IData/*31:0*/ ysyxSoCFull__DOT__uart1__DOT__uart_reg;
        IData/*31:0*/ ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data;
        IData/*31:0*/ ysyxSoCFull__DOT__uart2__DOT__mmio_r_data;
        IData/*31:0*/ ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr;
        IData/*31:0*/ ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data;
        IData/*31:0*/ ysyxSoCFull__DOT__uart2__DOT__uart_reg;
        IData/*31:0*/ ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data;
        IData/*31:0*/ ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data;
        IData/*31:0*/ ysyxSoCFull__DOT__axint__DOT__mmio_r_data;
        IData/*31:0*/ ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_addr;
        IData/*31:0*/ ysyxSoCFull__DOT__axint__DOT__slaveFactory_readRsp_data;
        IData/*31:0*/ ysyxSoCFull__DOT__axint__DOT___zz_slaveFactory_readRsp_data;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle;
        QData/*63:0*/ ysyxSoCFull__DOT__axint__DOT__mtime;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VysyxSoCFull___024root(VysyxSoCFull__Syms* symsp, const char* namep);
    ~VysyxSoCFull___024root();
    VL_UNCOPYABLE(VysyxSoCFull___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
