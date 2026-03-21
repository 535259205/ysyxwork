// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOPmod.h for the primary calling header

#ifndef VERILATED_VTOPMOD___024UNIT_H_
#define VERILATED_VTOPMOD___024UNIT_H_  // guard

#include "verilated.h"


class VTOPmod__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOPmod___024unit final {
  public:

    // INTERNAL VARIABLES
    VTOPmod__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTOPmod___024unit() = default;
    ~VTOPmod___024unit() = default;
    void ctor(VTOPmod__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTOPmod___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
