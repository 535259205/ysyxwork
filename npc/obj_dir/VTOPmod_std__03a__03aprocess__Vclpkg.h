// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOPmod.h for the primary calling header

#ifndef VERILATED_VTOPMOD_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTOPMOD_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
class VTOPmod_std__03a__03aprocess;


class VTOPmod__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOPmod_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTOPmod__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTOPmod_std__03a__03aprocess__Vclpkg();
    ~VTOPmod_std__03a__03aprocess__Vclpkg();
    void ctor(VTOPmod__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTOPmod_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(VTOPmod__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VTOPmod_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VTOPmod__Syms* __restrict vlSymsp, VlClassRef<VTOPmod_std__03a__03aprocess> &self__Vfuncrtn);
};


class VTOPmod__Syms;

class VTOPmod_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VTOPmod_std__03a__03aprocess(*this); }
    void __VnoInFunc_await(VTOPmod__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_get_randstate(VTOPmod__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VTOPmod__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VTOPmod__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VTOPmod__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VTOPmod__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VTOPmod__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VTOPmod__Syms* __restrict vlSymsp);
  public:
    VTOPmod_std__03a__03aprocess() = default;
    void init(VTOPmod__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTOPmod_std__03a__03aprocess() {}
};


#endif  // guard
