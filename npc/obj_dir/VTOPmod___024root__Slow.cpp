// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

void VTOPmod___024root___ctor_var_reset(VTOPmod___024root* vlSelf);

VTOPmod___024root::VTOPmod___024root(VTOPmod__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VTOPmod___024root___ctor_var_reset(this);
}

void VTOPmod___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTOPmod___024root::~VTOPmod___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
