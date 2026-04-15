// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyx_26010010_AXITrun

`timescale 1ns/1ps 
module ysyx_26010010_AXITrun (
  output wire          io_master_awready,
  input  wire          io_master_awvalid,
  input  wire [31:0]   io_master_awaddr,
  input  wire [3:0]    io_master_awid,
  input  wire [7:0]    io_master_awlen,
  input  wire [2:0]    io_master_awsize,
  input  wire [1:0]    io_master_awburst,
  output wire          io_master_wready,
  input  wire          io_master_wvalid,
  input  wire [31:0]   io_master_wdata,
  input  wire [3:0]    io_master_wstrb,
  input  wire          io_master_wlast,
  input  wire          io_master_bready,
  output wire          io_master_bvalid,
  output wire [1:0]    io_master_bresp,
  output wire [3:0]    io_master_bid,
  output wire          io_master_arready,
  input  wire          io_master_arvalid,
  input  wire [31:0]   io_master_araddr,
  input  wire [3:0]    io_master_arid,
  input  wire [7:0]    io_master_arlen,
  input  wire [2:0]    io_master_arsize,
  input  wire [1:0]    io_master_arburst,
  input  wire          io_master_rready,
  output wire          io_master_rvalid,
  output wire [1:0]    io_master_rresp,
  output wire [31:0]   io_master_rdata,
  output wire          io_master_rlast,
  output wire [3:0]    io_master_rid,
  input  wire          io_slave_awready,
  output wire          io_slave_awvalid,
  output wire [31:0]   io_slave_awaddr,
  output wire [3:0]    io_slave_awid,
  output wire [7:0]    io_slave_awlen,
  output wire [2:0]    io_slave_awsize,
  output wire [1:0]    io_slave_awburst,
  input  wire          io_slave_wready,
  output wire          io_slave_wvalid,
  output wire [31:0]   io_slave_wdata,
  output wire [3:0]    io_slave_wstrb,
  output wire          io_slave_wlast,
  output wire          io_slave_bready,
  input  wire          io_slave_bvalid,
  input  wire [1:0]    io_slave_bresp,
  input  wire [3:0]    io_slave_bid,
  input  wire          io_slave_arready,
  output wire          io_slave_arvalid,
  output wire [31:0]   io_slave_araddr,
  output wire [3:0]    io_slave_arid,
  output wire [7:0]    io_slave_arlen,
  output wire [2:0]    io_slave_arsize,
  output wire [1:0]    io_slave_arburst,
  output wire          io_slave_rready,
  input  wire          io_slave_rvalid,
  input  wire [1:0]    io_slave_rresp,
  input  wire [31:0]   io_slave_rdata,
  input  wire          io_slave_rlast,
  input  wire [3:0]    io_slave_rid,
  output wire          axi_m_aw_valid,
  input  wire          axi_m_aw_ready,
  output wire [31:0]   axi_m_aw_payload_addr,
  output wire [3:0]    axi_m_aw_payload_id,
  output wire [7:0]    axi_m_aw_payload_len,
  output wire [2:0]    axi_m_aw_payload_size,
  output wire [1:0]    axi_m_aw_payload_burst,
  output wire          axi_m_w_valid,
  input  wire          axi_m_w_ready,
  output wire [31:0]   axi_m_w_payload_data,
  output wire [3:0]    axi_m_w_payload_strb,
  output wire          axi_m_w_payload_last,
  input  wire          axi_m_b_valid,
  output wire          axi_m_b_ready,
  input  wire [3:0]    axi_m_b_payload_id,
  input  wire [1:0]    axi_m_b_payload_resp,
  output wire          axi_m_ar_valid,
  input  wire          axi_m_ar_ready,
  output wire [31:0]   axi_m_ar_payload_addr,
  output wire [3:0]    axi_m_ar_payload_id,
  output wire [7:0]    axi_m_ar_payload_len,
  output wire [2:0]    axi_m_ar_payload_size,
  output wire [1:0]    axi_m_ar_payload_burst,
  input  wire          axi_m_r_valid,
  output wire          axi_m_r_ready,
  input  wire [31:0]   axi_m_r_payload_data,
  input  wire [3:0]    axi_m_r_payload_id,
  input  wire [1:0]    axi_m_r_payload_resp,
  input  wire          axi_m_r_payload_last,
  input  wire          axi_s_aw_valid,
  output wire          axi_s_aw_ready,
  input  wire [31:0]   axi_s_aw_payload_addr,
  input  wire [3:0]    axi_s_aw_payload_id,
  input  wire [7:0]    axi_s_aw_payload_len,
  input  wire [2:0]    axi_s_aw_payload_size,
  input  wire [1:0]    axi_s_aw_payload_burst,
  input  wire          axi_s_w_valid,
  output wire          axi_s_w_ready,
  input  wire [31:0]   axi_s_w_payload_data,
  input  wire [3:0]    axi_s_w_payload_strb,
  input  wire          axi_s_w_payload_last,
  output wire          axi_s_b_valid,
  input  wire          axi_s_b_ready,
  output wire [3:0]    axi_s_b_payload_id,
  output wire [1:0]    axi_s_b_payload_resp,
  input  wire          axi_s_ar_valid,
  output wire          axi_s_ar_ready,
  input  wire [31:0]   axi_s_ar_payload_addr,
  input  wire [3:0]    axi_s_ar_payload_id,
  input  wire [7:0]    axi_s_ar_payload_len,
  input  wire [2:0]    axi_s_ar_payload_size,
  input  wire [1:0]    axi_s_ar_payload_burst,
  output wire          axi_s_r_valid,
  input  wire          axi_s_r_ready,
  output wire [31:0]   axi_s_r_payload_data,
  output wire [3:0]    axi_s_r_payload_id,
  output wire [1:0]    axi_s_r_payload_resp,
  output wire          axi_s_r_payload_last
);


  assign io_master_awready = axi_m_aw_ready;
  assign axi_m_aw_valid = io_master_awvalid;
  assign axi_m_aw_payload_id = io_master_awid;
  assign axi_m_aw_payload_len = io_master_awlen;
  assign axi_m_aw_payload_size = io_master_awsize;
  assign axi_m_aw_payload_burst = io_master_awburst;
  assign axi_m_aw_payload_addr = io_master_awaddr;
  assign io_master_wready = axi_m_w_ready;
  assign axi_m_w_valid = io_master_wvalid;
  assign axi_m_w_payload_data = io_master_wdata;
  assign axi_m_w_payload_strb = io_master_wstrb;
  assign axi_m_w_payload_last = io_master_wlast;
  assign axi_m_b_ready = io_master_bready;
  assign io_master_bvalid = axi_m_b_valid;
  assign io_master_bresp = axi_m_b_payload_resp;
  assign io_master_bid = axi_m_b_payload_id;
  assign io_master_arready = axi_m_ar_ready;
  assign axi_m_ar_valid = io_master_arvalid;
  assign axi_m_ar_payload_addr = io_master_araddr;
  assign axi_m_ar_payload_id = io_master_arid;
  assign axi_m_ar_payload_len = io_master_arlen;
  assign axi_m_ar_payload_size = io_master_arsize;
  assign axi_m_ar_payload_burst = io_master_arburst;
  assign axi_m_r_ready = io_master_rready;
  assign io_master_rvalid = axi_m_r_valid;
  assign io_master_rresp = axi_m_r_payload_resp;
  assign io_master_rdata = axi_m_r_payload_data;
  assign io_master_rlast = axi_m_r_payload_last;
  assign io_master_rid = axi_m_r_payload_id;
  assign axi_s_aw_ready = io_slave_awready;
  assign io_slave_awvalid = axi_s_aw_valid;
  assign io_slave_awaddr = axi_s_aw_payload_addr;
  assign io_slave_awid = axi_s_aw_payload_id;
  assign io_slave_awlen = axi_s_aw_payload_len;
  assign io_slave_awsize = axi_s_aw_payload_size;
  assign io_slave_awburst = axi_s_aw_payload_burst;
  assign axi_s_w_ready = io_slave_wready;
  assign io_slave_wvalid = axi_s_w_valid;
  assign io_slave_wdata = axi_s_w_payload_data;
  assign io_slave_wstrb = axi_s_w_payload_strb;
  assign io_slave_wlast = axi_s_w_payload_last;
  assign io_slave_bready = axi_s_b_ready;
  assign axi_s_b_valid = io_slave_bvalid;
  assign axi_s_b_payload_resp = io_slave_bresp;
  assign axi_s_b_payload_id = io_slave_bid;
  assign axi_s_ar_ready = io_slave_arready;
  assign io_slave_arvalid = axi_s_ar_valid;
  assign io_slave_araddr = axi_s_ar_payload_addr;
  assign io_slave_arid = axi_s_ar_payload_id;
  assign io_slave_arlen = axi_s_ar_payload_len;
  assign io_slave_arsize = axi_s_ar_payload_size;
  assign io_slave_arburst = axi_s_ar_payload_burst;
  assign io_slave_rready = axi_s_r_ready;
  assign axi_s_r_valid = io_slave_rvalid;
  assign axi_s_r_payload_resp = io_slave_rresp;
  assign axi_s_r_payload_data = io_slave_rdata;
  assign axi_s_r_payload_last = io_slave_rlast;
  assign axi_s_r_payload_id = io_slave_rid;

endmodule
