module apb4_rcu(
  input         apb4_pclk,
  input         apb4_presetn,
  input         apb4_psel,
  input         apb4_penable,
  input         apb4_pwrite,
  input  [31:0] apb4_paddr,
  input  [2:0]  apb4_pprot,
  input  [31:0] apb4_pwdata,
  input  [3:0]  apb4_pstrb,
  output        apb4_pready,
  output        apb4_pslverr,
  output [31:0] apb4_prdata,
  input         rcu_ext_lfosc_clk_i,
  input         rcu_ext_hfosc_clk_i,
  input         rcu_ext_audosc_clk_i,
  input         rcu_ext_rst_n_i,
  input         rcu_wdt_rst_n_i,
  input         rcu_pll_en_i,
  input  [31:0] rcu_clk_cfg_i,
  input         rcu_core_sel_i,
  output        rcu_core_sel_o,
  output        rcu_clk_o,
  output        rcu_rst_n_o
);

  // Set all outputs to 0
  assign apb4_pready = 1'b0;
  assign apb4_pslverr = 1'b0;
  assign apb4_prdata = 32'b0;
  assign rcu_core_sel_o = 1'b0;
  assign rcu_clk_o = 1'b0;
  assign rcu_rst_n_o = 1'b0;

endmodule