// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyx_26010010

`timescale 1ns/1ps 
module ysyx_26010010 (
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
  input  wire          reset
);


  assign io_slave_awready = io_master_awready;
  assign io_master_awvalid = io_slave_awvalid;
  assign io_master_awaddr = io_slave_awaddr;
  assign io_master_awid = io_slave_awid;
  assign io_master_awlen = io_slave_awlen;
  assign io_master_awsize = io_slave_awsize;
  assign io_master_awburst = io_slave_awburst;
  assign io_slave_wready = io_master_wready;
  assign io_master_wvalid = io_slave_wvalid;
  assign io_master_wdata = io_slave_wdata;
  assign io_master_wstrb = io_slave_wstrb;
  assign io_master_wlast = io_slave_wlast;
  assign io_master_bready = io_slave_bready;
  assign io_slave_bvalid = io_master_bvalid;
  assign io_slave_bresp = io_master_bresp;
  assign io_slave_bid = io_master_bid;
  assign io_slave_arready = io_master_arready;
  assign io_master_arvalid = io_slave_arvalid;
  assign io_master_araddr = io_slave_araddr;
  assign io_master_arid = io_slave_arid;
  assign io_master_arlen = io_slave_arlen;
  assign io_master_arsize = io_slave_arsize;
  assign io_master_arburst = io_slave_arburst;
  assign io_master_rready = io_slave_rready;
  assign io_slave_rvalid = io_master_rvalid;
  assign io_slave_rresp = io_master_rresp;
  assign io_slave_rdata = io_master_rdata;
  assign io_slave_rlast = io_master_rlast;
  assign io_slave_rid = io_master_rid;

endmodule
