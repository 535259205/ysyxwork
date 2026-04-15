`timescale 1ns/1ns

module TOPmod(
    input clock,
    input reset
);

  wire        _asic_fpga_io_b2c_clk = 1'h0;
  wire        _asic_fpga_io_b2c_rst = 1'h0;
  wire        _asic_fpga_io_b2c_send = 1'h0;
  wire [7:0]  _asic_fpga_io_b2c_data = 8'h0;
  wire        _asic_oldIPClock = clock;
  wire        _asic_oldIPReset = reset;
  wire [3:0]  _asic_qspi_in_i = 4'h0;
  wire [3:0]  _asic_psram_in_i = 4'h0;
  wire        _asic_intr_from_chipSlave = 1'h0;
  wire [15:0] _asic_sdram_data_i = 16'h0;

  // SDRAM wires
  // wire sdram_clk;
  // wire sdram_cke;
  // wire sdram_cs;
  // wire sdram_ras;
  // wire sdram_cas;
  // wire sdram_we;
  // wire [12:0] sdram_a;
  // wire [1:0] sdram_ba;
  // wire [1:0] sdram_dqm;
  // wire sdram_en;
  // wire [15:0] sdram_data_o;
  // wire [15:0] sdram_data_i;
  // wire [15:0] sdram_dq;


  reg         divReg;
  always @(posedge clock) begin
    if (reset)
      divReg <= 1'h0;
    else
      divReg <= ~divReg;
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:0];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM[/*Zero width*/ 1'b0] = `RANDOM;
        divReg = _RANDOM[/*Zero width*/ 1'b0][0];
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_

  wire spi_miso;
  wire externalPins_spi_sck;
  wire [7:0]externalPins_spi_ss;
  wire externalPins_spi_mosi;


  wire        psram_sck;
  wire [1:0]  psram_nss;
  wire [3:0]  psram_en_o;
  wire [3:0]  psram_in_i;
  wire [3:0]  psram_out_o;

  ysyxSoCASIC asic (
    .clock                    (clock),
    .reset                    (reset),
    // .fpga_io_c2b_clk          (/* unused */),
    // .fpga_io_c2b_rst          (/* unused */),
    // .fpga_io_c2b_send         (/* unused */),
    // .fpga_io_c2b_data         (/* unused */),
    // .fpga_io_b2c_clk          (1'h0),
    // .fpga_io_b2c_rst          (1'h0),
    // .fpga_io_b2c_send         (1'h0),
    // .fpga_io_b2c_data         (8'h0),
    .clock_half               (divReg),
    .oldIPClock               (clock),
    .oldIPReset               (reset),
    .qspi_sck_o               (/* unused */),
    .qspi_nss_o               (/* unused */),
    .qspi_en_o                (/* unused */),
    .qspi_out_o               (/* unused */),
    .qspi_in_i                (1'h0),

    .psram_sck                (psram_sck),
    .psram_nss                (psram_nss),
    .psram_en_o               (psram_en_o),
    .psram_in_i               (psram_in_i),
    .psram_out_o              (psram_out_o),

    .intr_from_chipSlave      (1'h0),
    .uart0_rx                 (1'h1),
    .uart0_tx                 ( ),
    .uart1_uart_rx_i          (1'h1),
    .uart1_uart_tx_o          ( ),
    .spi_sck                  (externalPins_spi_sck),
    .spi_ss                   (externalPins_spi_ss),
    .spi_mosi                 (externalPins_spi_mosi),
    .spi_miso                 (spi_miso),
    // .sdram_clk                (sdram_clk),
    // .sdram_cke                (sdram_cke),
    // .sdram_cs                 (sdram_cs),
    // .sdram_ras                (sdram_ras),
    // .sdram_cas                (sdram_cas),
    // .sdram_we                 (sdram_we),
    // .sdram_a                  (sdram_a),
    // .sdram_ba                 (sdram_ba),
    // .sdram_dqm                (sdram_dqm),
    // .sdram_en                 (sdram_en),
    // .sdram_data_o             (sdram_data_o),
    // .sdram_data_i             (sdram_data_i),	// home/ylqt/study/YSYX_data/ysyx-workbench/WORK/ysyxSoC/src/SoC.scala:256:24

    // .vga_vgalcd_ro           ( ),
    // .vga_vgalcd_g_o           ( ),
    // .vga_vgalcd_bo           ( ),
    // .vga_vgalcd_hsync_o       ( ),
    // .vga_vgalcd_vsync_o       ( ),
    // .vga_vgalcd_pclk_o        ( ),
    // .vga_vgalcd_de_o          ( ),
    // .vga_irq_o                ( ),
    .ps2_ps2_clk_i            (1'h0),
    .ps2_ps2_dat_i            (1'h0),
    .gpio0_gpio_in_i          (32'h0),
    .gpio0_gpio_out_o         ( ),
    .gpio0_gpio_dir_o         ( ),
    .gpio0_gpio_alt_in_o      ( ),
    .gpio0_gpio_alt_0_out_i   (32'h0),
    .gpio0_gpio_alt_0_dir_i   (32'h0),
    .gpio0_gpio_alt_1_out_i   (32'h0),
    .gpio0_gpio_alt_1_dir_i   (32'h0),
    .gpio1_i_gpio_in_i        (32'h0),
    .gpio1_i_gpio_out_o       ( ),
    .gpio1_i_gpio_dir_o       ( ),
    .gpio1_i_gpio_alt_in_o    ( ),
    .gpio1_i_gpio_alt_0_out_i (32'h0),
    .gpio1_i_gpio_alt_0_dir_i (32'h0),
    .gpio1_i_gpio_alt_1_out_i (32'h0),
    .gpio1_i_gpio_alt_1_dir_i (32'h0),
    .gpio2_i_gpio_in_i        (32'h0),
    .gpio2_i_gpio_out_o       ( ),
    .gpio2_i_gpio_dir_o       ( ),
    .gpio2_i_gpio_alt_in_o    ( ),
    .gpio2_i_gpio_alt_0_out_i (32'h0),
    .gpio2_i_gpio_alt_0_dir_i (32'h0),
    .gpio2_i_gpio_alt_1_out_i (32'h0),
    .gpio2_i_gpio_alt_1_dir_i (32'h0),
    .pwm0_pwm_o               ( ),
    .pwm1_pwm_o               ( ),
    .i2c_scl_i                (1'h1),
    .i2c_scl_o                ( ),
    .i2c_scl_dir_o            ( ),
    .i2c_sda_i                (1'h1),
    .i2c_sda_o                ( ),
    .i2c_sda_dir_o            ( ),
    .i2s_mclk_o               ( ),
    .i2s_sck_o                ( ),
    .i2s_sck_i                (1'h1),
    .i2s_sck_en_o             ( ),
    .i2s_ws_o                 ( ),
    .i2s_ws_i                 (1'h1),
    .i2s_ws_en_o              ( ),
    .i2s_sd_o                 ( ),
    .i2s_sd_i                 (1'h0),
    .timer0_exclk_i           (1'h0),
    .timer0_capch_i           (1'h0),
    .timer1_exclk_i           (1'h0),
    .timer1_capch_i           (1'h0),
    .timer2_exclk_i           (1'h0),
    .timer2_capch_i           (1'h0),
    .timer3_exclk_i           (1'h0),
    .timer3_capch_i           (1'h0),
    .rcu_ext_lfosc_clk_i      (1'h0),
    .rcu_ext_hfosc_clk_i      (1'h0),
    .rcu_ext_audosc_clk_i     (1'h0),
    .rcu_ext_rst_n_i          (1'h0),
    .rcu_wdt_rst_n_i          (1'h0),
    .rcu_pll_en_i             (1'h0),
    .rcu_clk_cfg_i            (3'h0),
    .rcu_core_sel_i           (5'h0),
    .rcu_core_sel_o           ( ),
    .rcu_clk_o                ( ),
    .rcu_rst_n_o              ( ),
    .core_sel                 (2'h0),
    .core_irq                 (1'h0)
  );
`ifndef SYNTHESIS
flash u_flash(
  .sck(externalPins_spi_sck),
  .ss(externalPins_spi_ss[0]),
  .mosi(externalPins_spi_mosi),
  .miso(spi_miso)
  );
`endif
wire [3:0]psram_dio;
assign psram_dio[0] = psram_en_o[0]?psram_out_o[0]:1'bz;
assign psram_dio[1] = psram_en_o[1]?psram_out_o[1]:1'bz;
assign psram_dio[2] = psram_en_o[2]?psram_out_o[2]:1'bz;
assign psram_dio[3] = psram_en_o[3]?psram_out_o[3]:1'bz;

assign psram_in_i[0] = psram_en_o[0]?1'b0:psram_dio[0];
assign psram_in_i[1] = psram_en_o[1]?1'b0:psram_dio[1];
assign psram_in_i[2] = psram_en_o[2]?1'b0:psram_dio[2];
assign psram_in_i[3] = psram_en_o[3]?1'b0:psram_dio[3];

`ifndef SYNTHESIS
psram u_psram(
  .sck(psram_sck),
  .ce_n(psram_nss[0]),
  .dio(psram_dio)
);
`endif

// assign sdram_dq = sdram_en?sdram_data_o:16'bz;
// assign sdram_data_i = sdram_en?16'd0:sdram_dq;
// sdram u_sdram(
//   .clk(sdram_clk),
//   .cke(sdram_cke),
//   .cs(sdram_cs),
//   .ras(sdram_ras),
//   .cas(sdram_cas),
//   .we(sdram_we),
//   .a(sdram_a),
//   .ba(sdram_ba),
//   .dqm(sdram_dqm),
//   .dq(sdram_dq)
// );


endmodule