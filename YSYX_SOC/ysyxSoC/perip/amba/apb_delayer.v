
module apb_delayer (
  input  wire [31:0]   in_paddr,
  input  wire          in_psel,
  input  wire          in_penable,
  input  wire [2:0]    in_pprot,
  input  wire          in_pwrite,
  input  wire [31:0]   in_pwdata,
  input  wire [3:0]    in_pstrb,
  output reg           in_pready,
  output reg  [31:0]   in_prdata,
  output wire          in_pslverr,
  output reg  [31:0]   out_paddr,
  output reg           out_psel,
  output reg           out_penable,
  output reg  [2:0]    out_pprot,
  output reg           out_pwrite,
  output reg  [31:0]   out_pwdata,
  output reg  [3:0]    out_pstrb,
  input  wire          out_pready,
  input  wire [31:0]   out_prdata,
  input  wire          out_pslverr,
  input  wire          clock,
  input  wire          reset
);

  apb_delayer_my apb_delayer_my_inst(
    .in_in_paddr    (in_paddr),
    .in_in_psel     (in_psel),
    .in_in_penable  (in_penable),
    .in_in_pprot    (in_pprot),
    .in_in_pwrite   (in_pwrite),
    .in_in_pwdata   (in_pwdata),
    .in_in_pstrb    (in_pstrb),
    .in_in_pready   (in_pready),
    .in_in_prdata   (in_prdata),
    .in_in_pslverr  (in_pslverr),
    .out_in_paddr   (out_paddr),
    .out_in_psel    (out_psel),
    .out_in_penable (out_penable),
    .out_in_pprot   (out_pprot),
    .out_in_pwrite  (out_pwrite),
    .out_in_pwdata  (out_pwdata),
    .out_in_pstrb   (out_pstrb),
    .out_in_pready  (out_pready),
    .out_in_prdata  (out_prdata),
    .out_in_pslverr (out_pslverr),
    .clock          (clock),
    .reset          (reset)
  );

endmodule
