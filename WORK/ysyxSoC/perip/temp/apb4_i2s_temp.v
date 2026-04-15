module apb4_i2s_temp(
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
  output        i2s_mclk_o,
  output        i2s_sck_o,
  input         i2s_sck_i,
  output        i2s_sck_en_o,
  output        i2s_ws_o,
  input         i2s_ws_i,
  output        i2s_ws_en_o,
  output        i2s_sd_o,
  input         i2s_sd_i,
  output        i2s_irq_o
);

  // Set all outputs to 0
  assign apb4_pready = 1'b0;
  assign apb4_pslverr = 1'b0;
  assign apb4_prdata = 32'b0;
  assign i2s_mclk_o = 1'b0;
  assign i2s_sck_o = 1'b0;
  assign i2s_sck_en_o = 1'b0;
  assign i2s_ws_o = 1'b0;
  assign i2s_ws_en_o = 1'b0;
  assign i2s_sd_o = 1'b0;
  assign i2s_irq_o = 1'b0;

endmodule