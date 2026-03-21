// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTOPmod__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTOPmod::VTOPmod(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTOPmod__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VTOPmod::VTOPmod(const char* _vcname__)
    : VTOPmod(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTOPmod::~VTOPmod() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTOPmod___024root___eval_debug_assertions(VTOPmod___024root* vlSelf);
#endif  // VL_DEBUG
void VTOPmod___024root___eval_static(VTOPmod___024root* vlSelf);
void VTOPmod___024root___eval_initial(VTOPmod___024root* vlSelf);
void VTOPmod___024root___eval_settle(VTOPmod___024root* vlSelf);
void VTOPmod___024root___eval(VTOPmod___024root* vlSelf);

void VTOPmod::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTOPmod::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTOPmod___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTOPmod___024root___eval_static(&(vlSymsp->TOP));
        VTOPmod___024root___eval_initial(&(vlSymsp->TOP));
        VTOPmod___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTOPmod___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTOPmod::eventsPending() { return false; }

uint64_t VTOPmod::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTOPmod::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTOPmod___024root___eval_final(VTOPmod___024root* vlSelf);

VL_ATTR_COLD void VTOPmod::final() {
    VTOPmod___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTOPmod::hierName() const { return vlSymsp->name(); }
const char* VTOPmod::modelName() const { return "VTOPmod"; }
unsigned VTOPmod::threads() const { return 1; }
void VTOPmod::prepareClone() const { contextp()->prepareClone(); }
void VTOPmod::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTOPmod::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTOPmod___024root__trace_decl_types(VerilatedVcd* tracep);

void VTOPmod___024root__trace_init_top(VTOPmod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTOPmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOPmod___024root*>(voidSelf);
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VTOPmod___024root__trace_decl_types(tracep);
    VTOPmod___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTOPmod___024root__trace_register(VTOPmod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOPmod::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTOPmod::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTOPmod___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
