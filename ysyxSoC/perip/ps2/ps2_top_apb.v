module ps2_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  input         ps2_clk,
  input         ps2_data
);

  my_ps2 my_ps2_inst(
    .apb_in_paddr  (in_paddr),
    .apb_in_psel   (in_psel),
    .apb_in_penable(in_penable),
    .apb_in_pprot  (in_pprot),
    .apb_in_pwrite (in_pwrite),
    .apb_in_pwdata (in_pwdata),
    .apb_in_pstrb  (in_pstrb),
    .apb_in_pready (in_pready),
    .apb_in_prdata (in_prdata),
    .apb_in_pslverr(in_pslverr),
    .ps2_clk       (ps2_clk),
    .ps2_data      (ps2_data),
    .clk           (clock),
    .reset         (reset)
  );

endmodule
