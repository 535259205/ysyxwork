// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull___024root;
class VerilatedVcdC;
class VysyxSoCFull___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VysyxSoCFull__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&externalPins_spi_sck,0,0);
    VL_IN8(&externalPins_uart0_rx,0,0);
    VL_OUT8(&externalPins_uart0_tx,0,0);
    VL_IN8(&externalPins_uart1_uart_rx_i,0,0);
    VL_OUT8(&externalPins_uart1_uart_tx_o,0,0);
    VL_OUT8(&externalPins_spi_ss,7,0);
    VL_OUT8(&externalPins_spi_mosi,0,0);
    VL_IN8(&externalPins_spi_miso,0,0);
    VL_OUT8(&externalPins_vga_vgalcd_ro,4,0);
    VL_OUT8(&externalPins_vga_vgalcd_g_o,5,0);
    VL_OUT8(&externalPins_vga_vgalcd_bo,4,0);
    VL_OUT8(&externalPins_vga_vgalcd_hsync_o,0,0);
    VL_OUT8(&externalPins_vga_vgalcd_vsync_o,0,0);
    VL_OUT8(&externalPins_vga_vgalcd_pclk_o,0,0);
    VL_OUT8(&externalPins_vga_vgalcd_de_o,0,0);
    VL_OUT8(&externalPins_vga_irq_o,0,0);
    VL_IN8(&externalPins_core_sel,1,0);
    VL_IN8(&externalPins_core_irq,0,0);
    VL_OUT8(&externalPins_pwm0_pwm_o,3,0);
    VL_OUT8(&externalPins_pwm1_pwm_o,3,0);
    VL_IN8(&externalPins_i2c_scl_i,0,0);
    VL_OUT8(&externalPins_i2c_scl_o,0,0);
    VL_OUT8(&externalPins_i2c_scl_dir_o,0,0);
    VL_IN8(&externalPins_i2c_sda_i,0,0);
    VL_OUT8(&externalPins_i2c_sda_o,0,0);
    VL_OUT8(&externalPins_i2c_sda_dir_o,0,0);
    VL_IN8(&externalPins_timer0_exclk_i,0,0);
    VL_IN8(&externalPins_timer0_capch_i,0,0);
    VL_IN8(&externalPins_timer1_exclk_i,0,0);
    VL_IN8(&externalPins_timer1_capch_i,0,0);
    VL_IN8(&externalPins_timer2_exclk_i,0,0);
    VL_IN8(&externalPins_timer2_capch_i,0,0);
    VL_IN8(&externalPins_timer3_exclk_i,0,0);
    VL_IN8(&externalPins_timer3_capch_i,0,0);
    VL_IN8(&externalPins_ps2_ps2_clk_i,0,0);
    VL_IN8(&externalPins_ps2_ps2_dat_i,0,0);
    VL_OUT8(&externalPins_i2s_mclk_o,0,0);
    VL_OUT8(&externalPins_i2s_sck_o,0,0);
    VL_IN8(&externalPins_i2s_sck_i,0,0);
    VL_OUT8(&externalPins_i2s_sck_en_o,0,0);
    VL_OUT8(&externalPins_i2s_ws_o,0,0);
    VL_IN8(&externalPins_i2s_ws_i,0,0);
    VL_OUT8(&externalPins_i2s_ws_en_o,0,0);
    VL_OUT8(&externalPins_i2s_sd_o,0,0);
    VL_IN8(&externalPins_i2s_sd_i,0,0);
    VL_IN8(&externalPins_rcu_ext_lfosc_clk_i,0,0);
    VL_IN8(&externalPins_rcu_ext_hfosc_clk_i,0,0);
    VL_IN8(&externalPins_rcu_ext_audosc_clk_i,0,0);
    VL_IN8(&externalPins_rcu_ext_rst_n_i,0,0);
    VL_IN8(&externalPins_rcu_wdt_rst_n_i,0,0);
    VL_IN8(&externalPins_rcu_pll_en_i,0,0);
    VL_IN8(&externalPins_rcu_clk_cfg_i,2,0);
    VL_IN8(&externalPins_rcu_core_sel_i,4,0);
    VL_OUT8(&externalPins_rcu_core_sel_o,4,0);
    VL_OUT8(&externalPins_rcu_clk_o,6,0);
    VL_OUT8(&externalPins_rcu_rst_n_o,6,0);
    VL_IN(&externalPins_gpio0_gpio_in_i,31,0);
    VL_OUT(&externalPins_gpio0_gpio_out_o,31,0);
    VL_OUT(&externalPins_gpio0_gpio_dir_o,31,0);
    VL_OUT(&externalPins_gpio0_gpio_alt_in_o,31,0);
    VL_IN(&externalPins_gpio0_gpio_alt_0_out_i,31,0);
    VL_IN(&externalPins_gpio0_gpio_alt_0_dir_i,31,0);
    VL_IN(&externalPins_gpio0_gpio_alt_1_out_i,31,0);
    VL_IN(&externalPins_gpio0_gpio_alt_1_dir_i,31,0);
    VL_IN(&externalPins_gpio1_gpio_in_i,31,0);
    VL_OUT(&externalPins_gpio1_gpio_out_o,31,0);
    VL_OUT(&externalPins_gpio1_gpio_dir_o,31,0);
    VL_OUT(&externalPins_gpio1_gpio_alt_in_o,31,0);
    VL_IN(&externalPins_gpio1_gpio_alt_0_out_i,31,0);
    VL_IN(&externalPins_gpio1_gpio_alt_0_dir_i,31,0);
    VL_IN(&externalPins_gpio1_gpio_alt_1_out_i,31,0);
    VL_IN(&externalPins_gpio1_gpio_alt_1_dir_i,31,0);
    VL_IN(&externalPins_gpio2_gpio_in_i,31,0);
    VL_OUT(&externalPins_gpio2_gpio_out_o,31,0);
    VL_OUT(&externalPins_gpio2_gpio_dir_o,31,0);
    VL_OUT(&externalPins_gpio2_gpio_alt_in_o,31,0);
    VL_IN(&externalPins_gpio2_gpio_alt_0_out_i,31,0);
    VL_IN(&externalPins_gpio2_gpio_alt_0_dir_i,31,0);
    VL_IN(&externalPins_gpio2_gpio_alt_1_out_i,31,0);
    VL_IN(&externalPins_gpio2_gpio_alt_1_dir_i,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VysyxSoCFull___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VysyxSoCFull___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VysyxSoCFull(VerilatedContext* contextp, const char* name = "TOP");
    explicit VysyxSoCFull(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VysyxSoCFull();
  private:
    VL_UNCOPYABLE(VysyxSoCFull);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
