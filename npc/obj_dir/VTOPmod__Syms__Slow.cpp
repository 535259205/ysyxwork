// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTOPmod__pch.h"

VTOPmod__Syms::VTOPmod__Syms(VerilatedContext* contextp, const char* namep, VTOPmod* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(2614);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    TOP__std.ctor(this, "std");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__std = &TOP__std;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOPmod__u_flash = new VerilatedScope{this, "TOPmod.u_flash", "u_flash", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_TOPmod__u_flash__flash_cmd_i = new VerilatedScope{this, "TOPmod.u_flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_std__process = new VerilatedScope{this, "std.process", "process", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_std__process__suspend = new VerilatedScope{this, "std.process.suspend", "suspend", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
}

VTOPmod__Syms::~VTOPmod__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOPmod__u_flash, __Vscopep_TOPmod__u_flash = nullptr);
    VL_DO_CLEAR(delete __Vscopep_TOPmod__u_flash__flash_cmd_i, __Vscopep_TOPmod__u_flash__flash_cmd_i = nullptr);
    VL_DO_CLEAR(delete __Vscopep_std__process, __Vscopep_std__process = nullptr);
    VL_DO_CLEAR(delete __Vscopep_std__process__suspend, __Vscopep_std__process__suspend = nullptr);
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std.dtor();
    TOP____024unit.dtor();
}
