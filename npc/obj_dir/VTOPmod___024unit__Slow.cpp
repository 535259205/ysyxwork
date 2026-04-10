// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"


VTOPmod___024unit::VTOPmod___024unit() = default;
VTOPmod___024unit::~VTOPmod___024unit() = default;

void VTOPmod___024unit::ctor(VTOPmod__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VTOPmod___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTOPmod___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
