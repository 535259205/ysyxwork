// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

void VTOPmod_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, VTOPmod__Syms* __restrict vlSymsp, VlClassRef<VTOPmod_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VTOPmod_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<VTOPmod_std__03a__03aprocess> p;
    p = VL_NEW(VTOPmod_std__03a__03aprocess, vlSymsp);
    self__Vfuncrtn = p;
}

void VTOPmod_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(VTOPmod__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VTOPmod_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VTOPmod_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_set_status(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_status(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 1U;
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_kill(VTOPmod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_suspend(VTOPmod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:168: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("/home/ylqt/environment/oss_cad_suite/oss-cad-suite/share/verilator/include/verilated_std.sv", 168, "");
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_resume(VTOPmod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_get_randstate(VTOPmod__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /home/ylqt/environment/oss_cad_suite/oss-cad-suite/share/verilator/include/verilated_std.sv:230:26
0
    );

// $c statement at /home/ylqt/environment/oss_cad_suite/oss-cad-suite/share/verilator/include/verilated_std.sv:232:7
    s = this->__PVT__m_process->randstate();
    get_randstate__Vfuncrtn = s;
}

void VTOPmod_std__03a__03aprocess::__VnoInFunc_set_randstate(VTOPmod__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /home/ylqt/environment/oss_cad_suite/oss-cad-suite/share/verilator/include/verilated_std.sv:237:7
    this->__PVT__m_process->randstate(s);
}

VTOPmod_std__03a__03aprocess::VTOPmod_std__03a__03aprocess(VTOPmod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VTOPmod_std__03a__03aprocess::_ctor_var_reset(VTOPmod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<VTOPmod_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string VTOPmod_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string VTOPmod_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOPmod_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return (out);
}
