module axi4_delayer(
  input         clock,
  input         reset,

  output        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output        in_rvalid,
  output [3:0]  in_rid,
  output [31:0] in_rdata,
  output [1:0]  in_rresp,
  output        in_rlast,
  output        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output        in_wready,
  input         in_wvalid,
  input  [31:0] in_wdata,
  input  [3:0]  in_wstrb,
  input         in_wlast,
                in_bready,
  output        in_bvalid,
  output [3:0]  in_bid,
  output [1:0]  in_bresp,

  input         out_arready,
  output        out_arvalid,
  output [3:0]  out_arid,
  output [31:0] out_araddr,
  output [7:0]  out_arlen,
  output [2:0]  out_arsize,
  output [1:0]  out_arburst,
  output        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [31:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output        out_awvalid,
  output [3:0]  out_awid,
  output [31:0] out_awaddr,
  output [7:0]  out_awlen,
  output [2:0]  out_awsize,
  output [1:0]  out_awburst,
  input         out_wready,
  output        out_wvalid,
  output [31:0] out_wdata,
  output [3:0]  out_wstrb,
  output        out_wlast,
                out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);

  // axi4_delayer_my u_axi4_delayer_my(
  //   .clock       (clock),
  //   .reset       (reset),
  //   .in_arready  (in_arready),
  //   .in_arvalid  (in_arvalid),
  //   .in_arid     (in_arid),
  //   .in_araddr   (in_araddr),
  //   .in_arlen    (in_arlen),
  //   .in_arsize   (in_arsize),
  //   .in_arburst  (in_arburst),
  //   .in_rready   (in_rready),
  //   .in_rvalid   (in_rvalid),
  //   .in_rid      (in_rid),
  //   .in_rdata    (in_rdata),
  //   .in_rresp    (in_rresp),
  //   .in_rlast    (in_rlast),
  //   .in_awready  (in_awready),
  //   .in_awvalid  (in_awvalid),
  //   .in_awid     (in_awid),
  //   .in_awaddr   (in_awaddr),
  //   .in_awlen    (in_awlen),
  //   .in_awsize   (in_awsize),
  //   .in_awburst  (in_awburst),
  //   .in_wready   (in_wready),
  //   .in_wvalid   (in_wvalid),
  //   .in_wdata    (in_wdata),
  //   .in_wstrb    (in_wstrb),
  //   .in_wlast    (in_wlast),
  //   .in_bready   (in_bready),
  //   .in_bvalid   (in_bvalid),
  //   .in_bid      (in_bid),
  //   .in_bresp    (in_bresp),
  //   .out_arready (out_arready),
  //   .out_arvalid (out_arvalid),
  //   .out_arid    (out_arid),
  //   .out_araddr  (out_araddr),
  //   .out_arlen   (out_arlen),
  //   .out_arsize  (out_arsize),
  //   .out_arburst (out_arburst),
  //   .out_rready  (out_rready),
  //   .out_rvalid  (out_rvalid),
  //   .out_rid     (out_rid),
  //   .out_rdata   (out_rdata),
  //   .out_rresp   (out_rresp),
  //   .out_rlast   (out_rlast),
  //   .out_awready (out_awready),
  //   .out_awvalid (out_awvalid),
  //   .out_awid    (out_awid),
  //   .out_awaddr  (out_awaddr),
  //   .out_awlen   (out_awlen),
  //   .out_awsize  (out_awsize),
  //   .out_awburst (out_awburst),
  //   .out_wready  (out_wready),
  //   .out_wvalid  (out_wvalid),
  //   .out_wdata   (out_wdata),
  //   .out_wstrb   (out_wstrb),
  //   .out_wlast   (out_wlast),
  //   .out_bready  (out_bready),
  //   .out_bvalid  (out_bvalid),
  //   .out_bid     (out_bid),
  //   .out_bresp   (out_bresp)
  // );
  assign in_arready = out_arready;
  assign out_arvalid = in_arvalid;
  assign out_arid = in_arid;
  assign out_araddr = in_araddr;
  assign out_arlen = in_arlen;
  assign out_arsize = in_arsize;
  assign out_arburst = in_arburst;
  assign out_rready = in_rready;
  assign in_rvalid = out_rvalid;
  assign in_rid = out_rid;
  assign in_rdata = out_rdata;
  assign in_rresp = out_rresp;
  assign in_rlast = out_rlast;
  assign in_awready = out_awready;
  assign out_awvalid = in_awvalid;
  assign out_awid = in_awid;
  assign out_awaddr = in_awaddr;
  assign out_awlen = in_awlen;
  assign out_awsize = in_awsize;
  assign out_awburst = in_awburst;
  assign in_wready = out_wready;
  assign out_wvalid = in_wvalid;
  assign out_wdata = in_wdata;
  assign out_wstrb = in_wstrb;
  assign out_wlast = in_wlast;
  assign out_bready = in_bready;
  assign in_bvalid = out_bvalid;
  assign in_bid = out_bid;
  assign in_bresp = out_bresp;

endmodule