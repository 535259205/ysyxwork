// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

void VTOPmod_std___ctor_var_reset(VTOPmod_std* vlSelf);

void VTOPmod_std::ctor(VTOPmod__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VTOPmod_std___ctor_var_reset(this);
}

void VTOPmod_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTOPmod_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
