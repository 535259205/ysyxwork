// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

void VTOPmod_std__03a__03aprocess__Vclpkg___ctor_var_reset(VTOPmod_std__03a__03aprocess__Vclpkg* vlSelf);

void VTOPmod_std__03a__03aprocess__Vclpkg::ctor(VTOPmod__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VTOPmod_std__03a__03aprocess__Vclpkg___ctor_var_reset(this);
}

void VTOPmod_std__03a__03aprocess__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTOPmod_std__03a__03aprocess__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
