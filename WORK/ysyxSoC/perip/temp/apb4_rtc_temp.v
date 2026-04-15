// module apb4_rtc_temp(
//   input         apb4_pclk,
//   input         apb4_presetn,
//   input         apb4_psel,
//   input         apb4_penable,
//   input         apb4_pwrite,
//   input  [31:0] apb4_paddr,
//   input  [2:0]  apb4_pprot,
//   input  [31:0] apb4_pwdata,
//   input  [3:0]  apb4_pstrb,
//   output        apb4_pready,
//   output        apb4_pslverr,
//   output [31:0] apb4_prdata,
//   input         rtc_rtc_clk_i,
//   input         rtc_rtc_rst_n_i,
//   output        rtc_irq_o
// );

//   // Set all outputs to 0
//   assign apb4_pready = 1'b0;
//   assign apb4_pslverr = 1'b0;
//   assign apb4_prdata = 32'b0;
//   assign rtc_irq_o = 1'b0;

// endmodule
