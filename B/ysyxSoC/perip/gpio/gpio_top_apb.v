module gpio_top_apb(
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

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

  // Instantiate my_gpio module
  my_gpio u_my_gpio(
    .apb_in_paddr    (in_paddr),
    .apb_in_psel     (in_psel),
    .apb_in_penable  (in_penable),
    .apb_in_pprot    (in_pprot),
    .apb_in_pwrite   (in_pwrite),
    .apb_in_pwdata   (in_pwdata),
    .apb_in_pstrb    (in_pstrb),
    .apb_in_pready   (in_pready),
    .apb_in_prdata   (in_prdata),
    .apb_in_pslverr  (in_pslverr),
    .gpio_out        (gpio_out),
    .gpio_in         (gpio_in),
    .gpio_seg_0      (gpio_seg_0[7:0]),  // Connect lower 4 bits
    .gpio_seg_1      (gpio_seg_1[7:0]),
    .gpio_seg_2      (gpio_seg_2[7:0]),
    .gpio_seg_3      (gpio_seg_3[7:0]),
    .gpio_seg_4      (gpio_seg_4[7:0]),
    .gpio_seg_5      (gpio_seg_5[7:0]),
    .gpio_seg_6      (gpio_seg_6[7:0]),
    .gpio_seg_7      (gpio_seg_7[7:0]),
    .clk             (clock),
    .reset           (reset)
  );
 

endmodule
