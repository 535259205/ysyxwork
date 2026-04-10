// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyx_26010010

`timescale 1ns/1ps 
module core_wrapper (
  input  wire          io_master_awready,
  output wire          io_master_awvalid,
  output wire [31:0]   io_master_awaddr,
  output wire [3:0]    io_master_awid,
  output wire [7:0]    io_master_awlen,
  output wire [2:0]    io_master_awsize,
  output wire [1:0]    io_master_awburst,
  input  wire          io_master_wready,
  output wire          io_master_wvalid,
  output wire [31:0]   io_master_wdata,
  output wire [3:0]    io_master_wstrb,
  output wire          io_master_wlast,
  output wire          io_master_bready,
  input  wire          io_master_bvalid,
  input  wire [1:0]    io_master_bresp,
  input  wire [3:0]    io_master_bid,
  input  wire          io_master_arready,
  output wire          io_master_arvalid,
  output wire [31:0]   io_master_araddr,
  output wire [3:0]    io_master_arid,
  output wire [7:0]    io_master_arlen,
  output wire [2:0]    io_master_arsize,
  output wire [1:0]    io_master_arburst,
  output wire          io_master_rready,
  input  wire          io_master_rvalid,
  input  wire [1:0]    io_master_rresp,
  input  wire [31:0]   io_master_rdata,
  input  wire          io_master_rlast,
  input  wire [3:0]    io_master_rid,
  output wire          io_slave_awready,
  input  wire          io_slave_awvalid,
  input  wire [31:0]   io_slave_awaddr,
  input  wire [3:0]    io_slave_awid,
  input  wire [7:0]    io_slave_awlen,
  input  wire [2:0]    io_slave_awsize,
  input  wire [1:0]    io_slave_awburst,
  output wire          io_slave_wready,
  input  wire          io_slave_wvalid,
  input  wire [31:0]   io_slave_wdata,
  input  wire [3:0]    io_slave_wstrb,
  input  wire          io_slave_wlast,
  input  wire          io_slave_bready,
  output wire          io_slave_bvalid,
  output wire [1:0]    io_slave_bresp,
  output wire [3:0]    io_slave_bid,
  output wire          io_slave_arready,
  input  wire          io_slave_arvalid,
  input  wire [31:0]   io_slave_araddr,
  input  wire [3:0]    io_slave_arid,
  input  wire [7:0]    io_slave_arlen,
  input  wire [2:0]    io_slave_arsize,
  input  wire [1:0]    io_slave_arburst,
  input  wire          io_slave_rready,
  output wire          io_slave_rvalid,
  output wire [1:0]    io_slave_rresp,
  output wire [31:0]   io_slave_rdata,
  output wire          io_slave_rlast,
  output wire [3:0]    io_slave_rid,
  input  wire          io_interrupt,
  input  wire          clock,
  input  wire          reset,
  input  wire [1:0]    core_sel
);

// Internal signals for 64-bit AXI interface
  wire        nutshell_awready;
  wire        nutshell_awvalid;
  wire [31:0] nutshell_awaddr;
  wire [3:0]  nutshell_awid;
  wire [7:0]  nutshell_awlen;
  wire [2:0]  nutshell_awsize;
  wire [1:0]  nutshell_awburst;
  
  wire        nutshell_wready;
  wire        nutshell_wvalid;
  wire [63:0] nutshell_wdata;
  wire [7:0]  nutshell_wstrb;
  wire        nutshell_wlast;
  
  wire        nutshell_bready;
  wire        nutshell_bvalid;
  wire [1:0]  nutshell_bresp;
  wire [3:0]  nutshell_bid;
  
  wire        nutshell_arready;
  wire        nutshell_arvalid;
  wire [31:0] nutshell_araddr;
  wire [3:0]  nutshell_arid;
  wire [7:0]  nutshell_arlen;
  wire [2:0]  nutshell_arsize;
  wire [1:0]  nutshell_arburst;
  
  wire        nutshell_rready;
  wire        nutshell_rvalid;
  wire [1:0]  nutshell_rresp;
  wire [63:0] nutshell_rdata;
  wire        nutshell_rlast;
  wire [3:0]  nutshell_rid;
 
  // Instantiate NutShell CPU (64-bit AXI)
  NutShell nutshell_cpu (
    .clock(clock),
    .reset(reset),
    .io_interrupt(io_interrupt),
    
    // Master interface (64-bit AXI)
    .io_master_awready(nutshell_awready),
    .io_master_awvalid(nutshell_awvalid),
    .io_master_awaddr(nutshell_awaddr),
    .io_master_awid(nutshell_awid),
    .io_master_awlen(nutshell_awlen),
    .io_master_awsize(nutshell_awsize),
    .io_master_awburst(nutshell_awburst),
    
    .io_master_wready(nutshell_wready),
    .io_master_wvalid(nutshell_wvalid),
    .io_master_wdata(nutshell_wdata),
    .io_master_wstrb(nutshell_wstrb),
    .io_master_wlast(nutshell_wlast),
    
    .io_master_bready(nutshell_bready),
    .io_master_bvalid(nutshell_bvalid),
    .io_master_bresp(nutshell_bresp),
    .io_master_bid(nutshell_bid),
    
    .io_master_arready(nutshell_arready),
    .io_master_arvalid(nutshell_arvalid),
    .io_master_araddr(nutshell_araddr),
    .io_master_arid(nutshell_arid),
    .io_master_arlen(nutshell_arlen),
    .io_master_arsize(nutshell_arsize),
    .io_master_arburst(nutshell_arburst),
    
    .io_master_rready(nutshell_rready),
    .io_master_rvalid(nutshell_rvalid),
    .io_master_rresp(nutshell_rresp),
    .io_master_rdata(nutshell_rdata),
    .io_master_rlast(nutshell_rlast),
    .io_master_rid(nutshell_rid),
    
    // Slave interface (64-bit AXI) - not used, tie off
    .io_slave_awready(),
    .io_slave_awvalid(1'b0),
    .io_slave_awaddr(32'b0),
    .io_slave_awid(4'b0),
    .io_slave_awlen(8'b0),
    .io_slave_awsize(3'b0),
    .io_slave_awburst(2'b0),
    
    .io_slave_wready(),
    .io_slave_wvalid(1'b0),
    .io_slave_wdata(64'b0),
    .io_slave_wstrb(8'b0),
    .io_slave_wlast(1'b0),
    
    .io_slave_bready(1'b0),
    .io_slave_bvalid(),
    .io_slave_bresp(),
    .io_slave_bid(),
    
    .io_slave_arready(),
    .io_slave_arvalid(1'b0),
    .io_slave_araddr(32'b0),
    .io_slave_arid(4'b0),
    .io_slave_arlen(8'b0),
    .io_slave_arsize(3'b0),
    .io_slave_arburst(2'b0),
    
    .io_slave_rready(1'b0),
    .io_slave_rvalid(),
    .io_slave_rresp(),
    .io_slave_rdata(),
    .io_slave_rlast(),
    .io_slave_rid()
  );
 
  // Instantiate AXI64to32 bridge
  AXI64to32 axi_bridge (
    .clock(clock),
    .reset(reset),
    
    // /init side (connecting to NutShell)
    .io_in_aw_ready(nutshell_awready),
    .io_in_aw_valid(nutshell_awvalid),
    .io_in_aw_payload_addr(nutshell_awaddr),
    .io_in_aw_payload_id(nutshell_awid),
    .io_in_aw_payload_len(nutshell_awlen),
    .io_in_aw_payload_size(nutshell_awsize),
    .io_in_aw_payload_burst(nutshell_awburst),

    .io_in_w_ready(nutshell_wready),
    .io_in_w_valid(nutshell_wvalid),
    .io_in_w_payload_data(nutshell_wdata),
    .io_in_w_payload_strb(nutshell_wstrb),
    .io_in_w_payload_last(nutshell_wlast),

    .io_in_b_ready(nutshell_bready),
    .io_in_b_valid(nutshell_bvalid),
    .io_in_b_payload_resp(nutshell_bresp),
    .io_in_b_payload_id(nutshell_bid),

    .io_in_ar_ready(nutshell_arready),
    .io_in_ar_valid(nutshell_arvalid),
    .io_in_ar_payload_addr(nutshell_araddr),
    .io_in_ar_payload_id(nutshell_arid),
    .io_in_ar_payload_len(nutshell_arlen),
    .io_in_ar_payload_size(nutshell_arsize),
    .io_in_ar_payload_burst(nutshell_arburst),

    .io_in_r_ready(nutshell_rready),
    .io_in_r_valid(nutshell_rvalid),
    .io_in_r_payload_resp(nutshell_rresp),
    .io_in_r_payload_data(nutshell_rdata),
    .io_in_r_payload_last(nutshell_rlast),
    .io_in_r_payload_id(nutshell_rid),

    // 32-bit side - these are the actual core_wrapper interface signals
    .io_out_aw_ready(io_master_awready),
    .io_out_aw_valid(io_master_awvalid),
    .io_out_aw_payload_addr(io_master_awaddr),
    .io_out_aw_payload_id(io_master_awid[3:0]),
    .io_out_aw_payload_len(io_master_awlen),
    .io_out_aw_payload_size(io_master_awsize),
    .io_out_aw_payload_burst(io_master_awburst),
    
    .io_out_w_ready(io_master_wready),
    .io_out_w_valid(io_master_wvalid),
    .io_out_w_payload_data(io_master_wdata),
    .io_out_w_payload_strb(io_master_wstrb),
    .io_out_w_payload_last(io_master_wlast),

    .io_out_b_ready(io_master_bready),
    .io_out_b_valid(io_master_bvalid),
    .io_out_b_payload_resp(io_master_bresp),
    .io_out_b_payload_id(io_master_bid[3:0]),

    .io_out_ar_ready(io_master_arready),
    .io_out_ar_valid(io_master_arvalid),
    .io_out_ar_payload_addr(io_master_araddr),
    .io_out_ar_payload_id(io_master_arid[3:0]),
    .io_out_ar_payload_len(io_master_arlen),
    .io_out_ar_payload_size(io_master_arsize),
    .io_out_ar_payload_burst(io_master_arburst),

    .io_out_r_ready(io_master_rready),
    .io_out_r_valid(io_master_rvalid),
    .io_out_r_payload_resp(io_master_rresp),
    .io_out_r_payload_data(io_master_rdata),
    .io_out_r_payload_last(io_master_rlast),
    .io_out_r_payload_id(io_master_rid[3:0])
  );


endmodule
