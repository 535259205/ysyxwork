// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOPmod.h for the primary calling header

#ifndef VERILATED_VTOPMOD_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTOPMOD_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"


class VTOPmod__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOPmod_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTOPmod__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTOPmod_std__03a__03asemaphore__Vclpkg();
    ~VTOPmod_std__03a__03asemaphore__Vclpkg();
    void ctor(VTOPmod__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTOPmod_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VTOPmod__Syms;

class VTOPmod_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new VTOPmod_std__03a__03asemaphore(*this); }
    void __VnoInFunc_get(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VTOPmod__Syms* __restrict vlSymsp);
  public:
    VTOPmod_std__03a__03asemaphore() = default;
    void init(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTOPmod_std__03a__03asemaphore() {}
};


#endif  // guard
