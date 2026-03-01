module vga_top_apb(
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

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);
  // assign vga_b=8'hff;
  my_vga my_vga_inst(
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
    .vga_r         (vga_r),
    .vga_g         (vga_g),
    .vga_b         (vga_b),
    .vga_hsync     (vga_hsync),
    .vga_vsync     (vga_vsync),
    .vga_valid     (vga_valid),
    .clk           (clock),
    .reset         (reset)
  );

endmodule
