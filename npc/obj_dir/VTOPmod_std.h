// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOPmod.h for the primary calling header

#ifndef VERILATED_VTOPMOD_STD_H_
#define VERILATED_VTOPMOD_STD_H_  // guard

#include "verilated.h"


class VTOPmod__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOPmod_std final {
  public:

    // INTERNAL VARIABLES
    VTOPmod__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTOPmod_std();
    ~VTOPmod_std();
    void ctor(VTOPmod__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTOPmod_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
