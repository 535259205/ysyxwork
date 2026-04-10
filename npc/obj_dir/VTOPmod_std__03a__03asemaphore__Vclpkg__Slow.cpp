// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"


VTOPmod_std__03a__03asemaphore__Vclpkg::VTOPmod_std__03a__03asemaphore__Vclpkg() = default;
VTOPmod_std__03a__03asemaphore__Vclpkg::~VTOPmod_std__03a__03asemaphore__Vclpkg() = default;

void VTOPmod_std__03a__03asemaphore__Vclpkg::ctor(VTOPmod__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VTOPmod_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTOPmod_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
