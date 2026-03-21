// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

void VTOPmod___024unit___ctor_var_reset(VTOPmod___024unit* vlSelf);

void VTOPmod___024unit::ctor(VTOPmod__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VTOPmod___024unit___ctor_var_reset(this);
}

void VTOPmod___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTOPmod___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
