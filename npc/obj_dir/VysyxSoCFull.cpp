// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VysyxSoCFull__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VysyxSoCFull::VysyxSoCFull(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VysyxSoCFull__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , externalPins_spi_sck{vlSymsp->TOP.externalPins_spi_sck}
    , externalPins_uart0_rx{vlSymsp->TOP.externalPins_uart0_rx}
    , externalPins_uart0_tx{vlSymsp->TOP.externalPins_uart0_tx}
    , externalPins_uart1_uart_rx_i{vlSymsp->TOP.externalPins_uart1_uart_rx_i}
    , externalPins_uart1_uart_tx_o{vlSymsp->TOP.externalPins_uart1_uart_tx_o}
    , externalPins_spi_ss{vlSymsp->TOP.externalPins_spi_ss}
    , externalPins_spi_mosi{vlSymsp->TOP.externalPins_spi_mosi}
    , externalPins_spi_miso{vlSymsp->TOP.externalPins_spi_miso}
    , externalPins_vga_vgalcd_ro{vlSymsp->TOP.externalPins_vga_vgalcd_ro}
    , externalPins_vga_vgalcd_g_o{vlSymsp->TOP.externalPins_vga_vgalcd_g_o}
    , externalPins_vga_vgalcd_bo{vlSymsp->TOP.externalPins_vga_vgalcd_bo}
    , externalPins_vga_vgalcd_hsync_o{vlSymsp->TOP.externalPins_vga_vgalcd_hsync_o}
    , externalPins_vga_vgalcd_vsync_o{vlSymsp->TOP.externalPins_vga_vgalcd_vsync_o}
    , externalPins_vga_vgalcd_pclk_o{vlSymsp->TOP.externalPins_vga_vgalcd_pclk_o}
    , externalPins_vga_vgalcd_de_o{vlSymsp->TOP.externalPins_vga_vgalcd_de_o}
    , externalPins_vga_irq_o{vlSymsp->TOP.externalPins_vga_irq_o}
    , externalPins_core_sel{vlSymsp->TOP.externalPins_core_sel}
    , externalPins_core_irq{vlSymsp->TOP.externalPins_core_irq}
    , externalPins_pwm0_pwm_o{vlSymsp->TOP.externalPins_pwm0_pwm_o}
    , externalPins_pwm1_pwm_o{vlSymsp->TOP.externalPins_pwm1_pwm_o}
    , externalPins_i2c_scl_i{vlSymsp->TOP.externalPins_i2c_scl_i}
    , externalPins_i2c_scl_o{vlSymsp->TOP.externalPins_i2c_scl_o}
    , externalPins_i2c_scl_dir_o{vlSymsp->TOP.externalPins_i2c_scl_dir_o}
    , externalPins_i2c_sda_i{vlSymsp->TOP.externalPins_i2c_sda_i}
    , externalPins_i2c_sda_o{vlSymsp->TOP.externalPins_i2c_sda_o}
    , externalPins_i2c_sda_dir_o{vlSymsp->TOP.externalPins_i2c_sda_dir_o}
    , externalPins_timer0_exclk_i{vlSymsp->TOP.externalPins_timer0_exclk_i}
    , externalPins_timer0_capch_i{vlSymsp->TOP.externalPins_timer0_capch_i}
    , externalPins_timer1_exclk_i{vlSymsp->TOP.externalPins_timer1_exclk_i}
    , externalPins_timer1_capch_i{vlSymsp->TOP.externalPins_timer1_capch_i}
    , externalPins_timer2_exclk_i{vlSymsp->TOP.externalPins_timer2_exclk_i}
    , externalPins_timer2_capch_i{vlSymsp->TOP.externalPins_timer2_capch_i}
    , externalPins_timer3_exclk_i{vlSymsp->TOP.externalPins_timer3_exclk_i}
    , externalPins_timer3_capch_i{vlSymsp->TOP.externalPins_timer3_capch_i}
    , externalPins_ps2_ps2_clk_i{vlSymsp->TOP.externalPins_ps2_ps2_clk_i}
    , externalPins_ps2_ps2_dat_i{vlSymsp->TOP.externalPins_ps2_ps2_dat_i}
    , externalPins_i2s_mclk_o{vlSymsp->TOP.externalPins_i2s_mclk_o}
    , externalPins_i2s_sck_o{vlSymsp->TOP.externalPins_i2s_sck_o}
    , externalPins_i2s_sck_i{vlSymsp->TOP.externalPins_i2s_sck_i}
    , externalPins_i2s_sck_en_o{vlSymsp->TOP.externalPins_i2s_sck_en_o}
    , externalPins_i2s_ws_o{vlSymsp->TOP.externalPins_i2s_ws_o}
    , externalPins_i2s_ws_i{vlSymsp->TOP.externalPins_i2s_ws_i}
    , externalPins_i2s_ws_en_o{vlSymsp->TOP.externalPins_i2s_ws_en_o}
    , externalPins_i2s_sd_o{vlSymsp->TOP.externalPins_i2s_sd_o}
    , externalPins_i2s_sd_i{vlSymsp->TOP.externalPins_i2s_sd_i}
    , externalPins_rcu_ext_lfosc_clk_i{vlSymsp->TOP.externalPins_rcu_ext_lfosc_clk_i}
    , externalPins_rcu_ext_hfosc_clk_i{vlSymsp->TOP.externalPins_rcu_ext_hfosc_clk_i}
    , externalPins_rcu_ext_audosc_clk_i{vlSymsp->TOP.externalPins_rcu_ext_audosc_clk_i}
    , externalPins_rcu_ext_rst_n_i{vlSymsp->TOP.externalPins_rcu_ext_rst_n_i}
    , externalPins_rcu_wdt_rst_n_i{vlSymsp->TOP.externalPins_rcu_wdt_rst_n_i}
    , externalPins_rcu_pll_en_i{vlSymsp->TOP.externalPins_rcu_pll_en_i}
    , externalPins_rcu_clk_cfg_i{vlSymsp->TOP.externalPins_rcu_clk_cfg_i}
    , externalPins_rcu_core_sel_i{vlSymsp->TOP.externalPins_rcu_core_sel_i}
    , externalPins_rcu_core_sel_o{vlSymsp->TOP.externalPins_rcu_core_sel_o}
    , externalPins_rcu_clk_o{vlSymsp->TOP.externalPins_rcu_clk_o}
    , externalPins_rcu_rst_n_o{vlSymsp->TOP.externalPins_rcu_rst_n_o}
    , externalPins_gpio0_gpio_in_i{vlSymsp->TOP.externalPins_gpio0_gpio_in_i}
    , externalPins_gpio0_gpio_out_o{vlSymsp->TOP.externalPins_gpio0_gpio_out_o}
    , externalPins_gpio0_gpio_dir_o{vlSymsp->TOP.externalPins_gpio0_gpio_dir_o}
    , externalPins_gpio0_gpio_alt_in_o{vlSymsp->TOP.externalPins_gpio0_gpio_alt_in_o}
    , externalPins_gpio0_gpio_alt_0_out_i{vlSymsp->TOP.externalPins_gpio0_gpio_alt_0_out_i}
    , externalPins_gpio0_gpio_alt_0_dir_i{vlSymsp->TOP.externalPins_gpio0_gpio_alt_0_dir_i}
    , externalPins_gpio0_gpio_alt_1_out_i{vlSymsp->TOP.externalPins_gpio0_gpio_alt_1_out_i}
    , externalPins_gpio0_gpio_alt_1_dir_i{vlSymsp->TOP.externalPins_gpio0_gpio_alt_1_dir_i}
    , externalPins_gpio1_gpio_in_i{vlSymsp->TOP.externalPins_gpio1_gpio_in_i}
    , externalPins_gpio1_gpio_out_o{vlSymsp->TOP.externalPins_gpio1_gpio_out_o}
    , externalPins_gpio1_gpio_dir_o{vlSymsp->TOP.externalPins_gpio1_gpio_dir_o}
    , externalPins_gpio1_gpio_alt_in_o{vlSymsp->TOP.externalPins_gpio1_gpio_alt_in_o}
    , externalPins_gpio1_gpio_alt_0_out_i{vlSymsp->TOP.externalPins_gpio1_gpio_alt_0_out_i}
    , externalPins_gpio1_gpio_alt_0_dir_i{vlSymsp->TOP.externalPins_gpio1_gpio_alt_0_dir_i}
    , externalPins_gpio1_gpio_alt_1_out_i{vlSymsp->TOP.externalPins_gpio1_gpio_alt_1_out_i}
    , externalPins_gpio1_gpio_alt_1_dir_i{vlSymsp->TOP.externalPins_gpio1_gpio_alt_1_dir_i}
    , externalPins_gpio2_gpio_in_i{vlSymsp->TOP.externalPins_gpio2_gpio_in_i}
    , externalPins_gpio2_gpio_out_o{vlSymsp->TOP.externalPins_gpio2_gpio_out_o}
    , externalPins_gpio2_gpio_dir_o{vlSymsp->TOP.externalPins_gpio2_gpio_dir_o}
    , externalPins_gpio2_gpio_alt_in_o{vlSymsp->TOP.externalPins_gpio2_gpio_alt_in_o}
    , externalPins_gpio2_gpio_alt_0_out_i{vlSymsp->TOP.externalPins_gpio2_gpio_alt_0_out_i}
    , externalPins_gpio2_gpio_alt_0_dir_i{vlSymsp->TOP.externalPins_gpio2_gpio_alt_0_dir_i}
    , externalPins_gpio2_gpio_alt_1_out_i{vlSymsp->TOP.externalPins_gpio2_gpio_alt_1_out_i}
    , externalPins_gpio2_gpio_alt_1_dir_i{vlSymsp->TOP.externalPins_gpio2_gpio_alt_1_dir_i}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VysyxSoCFull::VysyxSoCFull(const char* _vcname__)
    : VysyxSoCFull(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VysyxSoCFull::~VysyxSoCFull() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VysyxSoCFull::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VysyxSoCFull___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VysyxSoCFull___024root___eval_static(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval_initial(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VysyxSoCFull___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VysyxSoCFull::eventsPending() { return false; }

uint64_t VysyxSoCFull::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VysyxSoCFull::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull::final() {
    VysyxSoCFull___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VysyxSoCFull::hierName() const { return vlSymsp->name(); }
const char* VysyxSoCFull::modelName() const { return "VysyxSoCFull"; }
unsigned VysyxSoCFull::threads() const { return 1; }
void VysyxSoCFull::prepareClone() const { contextp()->prepareClone(); }
void VysyxSoCFull::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VysyxSoCFull::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VysyxSoCFull___024root__trace_decl_types(VerilatedVcd* tracep);

void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_decl_types(tracep);
    VysyxSoCFull___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VysyxSoCFull::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VysyxSoCFull___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
