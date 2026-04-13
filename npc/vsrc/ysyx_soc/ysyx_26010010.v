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

  wire                turn_io_master_awready;
  wire                turn_io_master_wready;
  wire                turn_io_master_bvalid;
  wire       [1:0]    turn_io_master_bresp;
  wire       [3:0]    turn_io_master_bid;
  wire                turn_io_master_arready;
  wire                turn_io_master_rvalid;
  wire       [1:0]    turn_io_master_rresp;
  wire       [31:0]   turn_io_master_rdata;
  wire                turn_io_master_rlast;
  wire       [3:0]    turn_io_master_rid;
  wire                turn_io_slave_awvalid;
  wire       [31:0]   turn_io_slave_awaddr;
  wire       [3:0]    turn_io_slave_awid;
  wire       [7:0]    turn_io_slave_awlen;
  wire       [2:0]    turn_io_slave_awsize;
  wire       [1:0]    turn_io_slave_awburst;
  wire                turn_io_slave_wvalid;
  wire       [31:0]   turn_io_slave_wdata;
  wire       [3:0]    turn_io_slave_wstrb;
  wire                turn_io_slave_wlast;
  wire                turn_io_slave_bready;
  wire                turn_io_slave_arvalid;
  wire       [31:0]   turn_io_slave_araddr;
  wire       [3:0]    turn_io_slave_arid;
  wire       [7:0]    turn_io_slave_arlen;
  wire       [2:0]    turn_io_slave_arsize;
  wire       [1:0]    turn_io_slave_arburst;
  wire                turn_io_slave_rready;
  wire                turn_axi_m_ar_valid;
  wire       [31:0]   turn_axi_m_ar_payload_addr;
  wire       [3:0]    turn_axi_m_ar_payload_id;
  wire       [7:0]    turn_axi_m_ar_payload_len;
  wire       [2:0]    turn_axi_m_ar_payload_size;
  wire       [1:0]    turn_axi_m_ar_payload_burst;
  wire                turn_axi_m_aw_valid;
  wire       [31:0]   turn_axi_m_aw_payload_addr;
  wire       [3:0]    turn_axi_m_aw_payload_id;
  wire       [7:0]    turn_axi_m_aw_payload_len;
  wire       [2:0]    turn_axi_m_aw_payload_size;
  wire       [1:0]    turn_axi_m_aw_payload_burst;
  wire                turn_axi_m_w_valid;
  wire       [31:0]   turn_axi_m_w_payload_data;
  wire       [3:0]    turn_axi_m_w_payload_strb;
  wire                turn_axi_m_w_payload_last;
  wire                turn_axi_m_r_ready;
  wire                turn_axi_m_b_ready;
  wire                turn_axi_s_ar_ready;
  wire                turn_axi_s_aw_ready;
  wire                turn_axi_s_w_ready;
  wire                turn_axi_s_r_valid;
  wire       [31:0]   turn_axi_s_r_payload_data;
  wire       [3:0]    turn_axi_s_r_payload_id;
  wire       [1:0]    turn_axi_s_r_payload_resp;
  wire                turn_axi_s_r_payload_last;
  wire                turn_axi_s_b_valid;
  wire       [3:0]    turn_axi_s_b_payload_id;
  wire       [1:0]    turn_axi_s_b_payload_resp;
  wire                soc_1_axi_m_ar_valid;
  wire       [31:0]   soc_1_axi_m_ar_payload_addr;
  wire       [3:0]    soc_1_axi_m_ar_payload_id;
  wire       [7:0]    soc_1_axi_m_ar_payload_len;
  wire       [2:0]    soc_1_axi_m_ar_payload_size;
  wire       [1:0]    soc_1_axi_m_ar_payload_burst;
  wire                soc_1_axi_m_aw_valid;
  wire       [31:0]   soc_1_axi_m_aw_payload_addr;
  wire       [3:0]    soc_1_axi_m_aw_payload_id;
  wire       [7:0]    soc_1_axi_m_aw_payload_len;
  wire       [2:0]    soc_1_axi_m_aw_payload_size;
  wire       [1:0]    soc_1_axi_m_aw_payload_burst;
  wire                soc_1_axi_m_w_valid;
  wire       [31:0]   soc_1_axi_m_w_payload_data;
  wire       [3:0]    soc_1_axi_m_w_payload_strb;
  wire                soc_1_axi_m_w_payload_last;
  wire                soc_1_axi_m_r_ready;
  wire                soc_1_axi_m_b_ready;
  wire                soc_1_axi_s_ar_ready;
  wire                soc_1_axi_s_aw_ready;
  wire                soc_1_axi_s_w_ready;
  wire                soc_1_axi_s_r_valid;
  wire       [31:0]   soc_1_axi_s_r_payload_data;
  wire       [3:0]    soc_1_axi_s_r_payload_id;
  wire       [1:0]    soc_1_axi_s_r_payload_resp;
  wire                soc_1_axi_s_r_payload_last;
  wire                soc_1_axi_s_b_valid;
  wire       [3:0]    soc_1_axi_s_b_payload_id;
  wire       [1:0]    soc_1_axi_s_b_payload_resp;

  AXITrun turn (
    .io_master_awready      (turn_io_master_awready           ), //o
    .io_master_awvalid      (io_slave_awvalid                 ), //i
    .io_master_awaddr       (io_slave_awaddr[31:0]            ), //i
    .io_master_awid         (io_slave_awid[3:0]               ), //i
    .io_master_awlen        (io_slave_awlen[7:0]              ), //i
    .io_master_awsize       (io_slave_awsize[2:0]             ), //i
    .io_master_awburst      (io_slave_awburst[1:0]            ), //i
    .io_master_wready       (turn_io_master_wready            ), //o
    .io_master_wvalid       (io_slave_wvalid                  ), //i
    .io_master_wdata        (io_slave_wdata[31:0]             ), //i
    .io_master_wstrb        (io_slave_wstrb[3:0]              ), //i
    .io_master_wlast        (io_slave_wlast                   ), //i
    .io_master_bready       (io_slave_bready                  ), //i
    .io_master_bvalid       (turn_io_master_bvalid            ), //o
    .io_master_bresp        (turn_io_master_bresp[1:0]        ), //o
    .io_master_bid          (turn_io_master_bid[3:0]          ), //o
    .io_master_arready      (turn_io_master_arready           ), //o
    .io_master_arvalid      (io_slave_arvalid                 ), //i
    .io_master_araddr       (io_slave_araddr[31:0]            ), //i
    .io_master_arid         (io_slave_arid[3:0]               ), //i
    .io_master_arlen        (io_slave_arlen[7:0]              ), //i
    .io_master_arsize       (io_slave_arsize[2:0]             ), //i
    .io_master_arburst      (io_slave_arburst[1:0]            ), //i
    .io_master_rready       (io_slave_rready                  ), //i
    .io_master_rvalid       (turn_io_master_rvalid            ), //o
    .io_master_rresp        (turn_io_master_rresp[1:0]        ), //o
    .io_master_rdata        (turn_io_master_rdata[31:0]       ), //o
    .io_master_rlast        (turn_io_master_rlast             ), //o
    .io_master_rid          (turn_io_master_rid[3:0]          ), //o
    .io_slave_awready       (io_master_awready                ), //i
    .io_slave_awvalid       (turn_io_slave_awvalid            ), //o
    .io_slave_awaddr        (turn_io_slave_awaddr[31:0]       ), //o
    .io_slave_awid          (turn_io_slave_awid[3:0]          ), //o
    .io_slave_awlen         (turn_io_slave_awlen[7:0]         ), //o
    .io_slave_awsize        (turn_io_slave_awsize[2:0]        ), //o
    .io_slave_awburst       (turn_io_slave_awburst[1:0]       ), //o
    .io_slave_wready        (io_master_wready                 ), //i
    .io_slave_wvalid        (turn_io_slave_wvalid             ), //o
    .io_slave_wdata         (turn_io_slave_wdata[31:0]        ), //o
    .io_slave_wstrb         (turn_io_slave_wstrb[3:0]         ), //o
    .io_slave_wlast         (turn_io_slave_wlast              ), //o
    .io_slave_bready        (turn_io_slave_bready             ), //o
    .io_slave_bvalid        (io_master_bvalid                 ), //i
    .io_slave_bresp         (io_master_bresp[1:0]             ), //i
    .io_slave_bid           (io_master_bid[3:0]               ), //i
    .io_slave_arready       (io_master_arready                ), //i
    .io_slave_arvalid       (turn_io_slave_arvalid            ), //o
    .io_slave_araddr        (turn_io_slave_araddr[31:0]       ), //o
    .io_slave_arid          (turn_io_slave_arid[3:0]          ), //o
    .io_slave_arlen         (turn_io_slave_arlen[7:0]         ), //o
    .io_slave_arsize        (turn_io_slave_arsize[2:0]        ), //o
    .io_slave_arburst       (turn_io_slave_arburst[1:0]       ), //o
    .io_slave_rready        (turn_io_slave_rready             ), //o
    .io_slave_rvalid        (io_master_rvalid                 ), //i
    .io_slave_rresp         (io_master_rresp[1:0]             ), //i
    .io_slave_rdata         (io_master_rdata[31:0]            ), //i
    .io_slave_rlast         (io_master_rlast                  ), //i
    .io_slave_rid           (io_master_rid[3:0]               ), //i
    .axi_m_aw_valid         (turn_axi_m_aw_valid              ), //o
    .axi_m_aw_ready         (soc_1_axi_s_aw_ready             ), //i
    .axi_m_aw_payload_addr  (turn_axi_m_aw_payload_addr[31:0] ), //o
    .axi_m_aw_payload_id    (turn_axi_m_aw_payload_id[3:0]    ), //o
    .axi_m_aw_payload_len   (turn_axi_m_aw_payload_len[7:0]   ), //o
    .axi_m_aw_payload_size  (turn_axi_m_aw_payload_size[2:0]  ), //o
    .axi_m_aw_payload_burst (turn_axi_m_aw_payload_burst[1:0] ), //o
    .axi_m_w_valid          (turn_axi_m_w_valid               ), //o
    .axi_m_w_ready          (soc_1_axi_s_w_ready              ), //i
    .axi_m_w_payload_data   (turn_axi_m_w_payload_data[31:0]  ), //o
    .axi_m_w_payload_strb   (turn_axi_m_w_payload_strb[3:0]   ), //o
    .axi_m_w_payload_last   (turn_axi_m_w_payload_last        ), //o
    .axi_m_b_valid          (soc_1_axi_s_b_valid              ), //i
    .axi_m_b_ready          (turn_axi_m_b_ready               ), //o
    .axi_m_b_payload_id     (soc_1_axi_s_b_payload_id[3:0]    ), //i
    .axi_m_b_payload_resp   (soc_1_axi_s_b_payload_resp[1:0]  ), //i
    .axi_m_ar_valid         (turn_axi_m_ar_valid              ), //o
    .axi_m_ar_ready         (soc_1_axi_s_ar_ready             ), //i
    .axi_m_ar_payload_addr  (turn_axi_m_ar_payload_addr[31:0] ), //o
    .axi_m_ar_payload_id    (turn_axi_m_ar_payload_id[3:0]    ), //o
    .axi_m_ar_payload_len   (turn_axi_m_ar_payload_len[7:0]   ), //o
    .axi_m_ar_payload_size  (turn_axi_m_ar_payload_size[2:0]  ), //o
    .axi_m_ar_payload_burst (turn_axi_m_ar_payload_burst[1:0] ), //o
    .axi_m_r_valid          (soc_1_axi_s_r_valid              ), //i
    .axi_m_r_ready          (turn_axi_m_r_ready               ), //o
    .axi_m_r_payload_data   (soc_1_axi_s_r_payload_data[31:0] ), //i
    .axi_m_r_payload_id     (soc_1_axi_s_r_payload_id[3:0]    ), //i
    .axi_m_r_payload_resp   (soc_1_axi_s_r_payload_resp[1:0]  ), //i
    .axi_m_r_payload_last   (soc_1_axi_s_r_payload_last       ), //i
    .axi_s_aw_valid         (soc_1_axi_m_aw_valid             ), //i
    .axi_s_aw_ready         (turn_axi_s_aw_ready              ), //o
    .axi_s_aw_payload_addr  (soc_1_axi_m_aw_payload_addr[31:0]), //i
    .axi_s_aw_payload_id    (soc_1_axi_m_aw_payload_id[3:0]   ), //i
    .axi_s_aw_payload_len   (soc_1_axi_m_aw_payload_len[7:0]  ), //i
    .axi_s_aw_payload_size  (soc_1_axi_m_aw_payload_size[2:0] ), //i
    .axi_s_aw_payload_burst (soc_1_axi_m_aw_payload_burst[1:0]), //i
    .axi_s_w_valid          (soc_1_axi_m_w_valid              ), //i
    .axi_s_w_ready          (turn_axi_s_w_ready               ), //o
    .axi_s_w_payload_data   (soc_1_axi_m_w_payload_data[31:0] ), //i
    .axi_s_w_payload_strb   (soc_1_axi_m_w_payload_strb[3:0]  ), //i
    .axi_s_w_payload_last   (soc_1_axi_m_w_payload_last       ), //i
    .axi_s_b_valid          (turn_axi_s_b_valid               ), //o
    .axi_s_b_ready          (soc_1_axi_m_b_ready              ), //i
    .axi_s_b_payload_id     (turn_axi_s_b_payload_id[3:0]     ), //o
    .axi_s_b_payload_resp   (turn_axi_s_b_payload_resp[1:0]   ), //o
    .axi_s_ar_valid         (soc_1_axi_m_ar_valid             ), //i
    .axi_s_ar_ready         (turn_axi_s_ar_ready              ), //o
    .axi_s_ar_payload_addr  (soc_1_axi_m_ar_payload_addr[31:0]), //i
    .axi_s_ar_payload_id    (soc_1_axi_m_ar_payload_id[3:0]   ), //i
    .axi_s_ar_payload_len   (soc_1_axi_m_ar_payload_len[7:0]  ), //i
    .axi_s_ar_payload_size  (soc_1_axi_m_ar_payload_size[2:0] ), //i
    .axi_s_ar_payload_burst (soc_1_axi_m_ar_payload_burst[1:0]), //i
    .axi_s_r_valid          (turn_axi_s_r_valid               ), //o
    .axi_s_r_ready          (soc_1_axi_m_r_ready              ), //i
    .axi_s_r_payload_data   (turn_axi_s_r_payload_data[31:0]  ), //o
    .axi_s_r_payload_id     (turn_axi_s_r_payload_id[3:0]     ), //o
    .axi_s_r_payload_resp   (turn_axi_s_r_payload_resp[1:0]   ), //o
    .axi_s_r_payload_last   (turn_axi_s_r_payload_last        )  //o
  );
  Soc soc_1 (
    .axi_m_aw_valid         (soc_1_axi_m_aw_valid             ), //o
    .axi_m_aw_ready         (turn_axi_s_aw_ready              ), //i
    .axi_m_aw_payload_addr  (soc_1_axi_m_aw_payload_addr[31:0]), //o
    .axi_m_aw_payload_id    (soc_1_axi_m_aw_payload_id[3:0]   ), //o
    .axi_m_aw_payload_len   (soc_1_axi_m_aw_payload_len[7:0]  ), //o
    .axi_m_aw_payload_size  (soc_1_axi_m_aw_payload_size[2:0] ), //o
    .axi_m_aw_payload_burst (soc_1_axi_m_aw_payload_burst[1:0]), //o
    .axi_m_w_valid          (soc_1_axi_m_w_valid              ), //o
    .axi_m_w_ready          (turn_axi_s_w_ready               ), //i
    .axi_m_w_payload_data   (soc_1_axi_m_w_payload_data[31:0] ), //o
    .axi_m_w_payload_strb   (soc_1_axi_m_w_payload_strb[3:0]  ), //o
    .axi_m_w_payload_last   (soc_1_axi_m_w_payload_last       ), //o
    .axi_m_b_valid          (turn_axi_s_b_valid               ), //i
    .axi_m_b_ready          (soc_1_axi_m_b_ready              ), //o
    .axi_m_b_payload_id     (turn_axi_s_b_payload_id[3:0]     ), //i
    .axi_m_b_payload_resp   (turn_axi_s_b_payload_resp[1:0]   ), //i
    .axi_m_ar_valid         (soc_1_axi_m_ar_valid             ), //o
    .axi_m_ar_ready         (turn_axi_s_ar_ready              ), //i
    .axi_m_ar_payload_addr  (soc_1_axi_m_ar_payload_addr[31:0]), //o
    .axi_m_ar_payload_id    (soc_1_axi_m_ar_payload_id[3:0]   ), //o
    .axi_m_ar_payload_len   (soc_1_axi_m_ar_payload_len[7:0]  ), //o
    .axi_m_ar_payload_size  (soc_1_axi_m_ar_payload_size[2:0] ), //o
    .axi_m_ar_payload_burst (soc_1_axi_m_ar_payload_burst[1:0]), //o
    .axi_m_r_valid          (turn_axi_s_r_valid               ), //i
    .axi_m_r_ready          (soc_1_axi_m_r_ready              ), //o
    .axi_m_r_payload_data   (turn_axi_s_r_payload_data[31:0]  ), //i
    .axi_m_r_payload_id     (turn_axi_s_r_payload_id[3:0]     ), //i
    .axi_m_r_payload_resp   (turn_axi_s_r_payload_resp[1:0]   ), //i
    .axi_m_r_payload_last   (turn_axi_s_r_payload_last        ), //i
    .axi_s_aw_valid         (turn_axi_m_aw_valid              ), //i
    .axi_s_aw_ready         (soc_1_axi_s_aw_ready             ), //o
    .axi_s_aw_payload_addr  (turn_axi_m_aw_payload_addr[31:0] ), //i
    .axi_s_aw_payload_id    (turn_axi_m_aw_payload_id[3:0]    ), //i
    .axi_s_aw_payload_len   (turn_axi_m_aw_payload_len[7:0]   ), //i
    .axi_s_aw_payload_size  (turn_axi_m_aw_payload_size[2:0]  ), //i
    .axi_s_aw_payload_burst (turn_axi_m_aw_payload_burst[1:0] ), //i
    .axi_s_w_valid          (turn_axi_m_w_valid               ), //i
    .axi_s_w_ready          (soc_1_axi_s_w_ready              ), //o
    .axi_s_w_payload_data   (turn_axi_m_w_payload_data[31:0]  ), //i
    .axi_s_w_payload_strb   (turn_axi_m_w_payload_strb[3:0]   ), //i
    .axi_s_w_payload_last   (turn_axi_m_w_payload_last        ), //i
    .axi_s_b_valid          (soc_1_axi_s_b_valid              ), //o
    .axi_s_b_ready          (turn_axi_m_b_ready               ), //i
    .axi_s_b_payload_id     (soc_1_axi_s_b_payload_id[3:0]    ), //o
    .axi_s_b_payload_resp   (soc_1_axi_s_b_payload_resp[1:0]  ), //o
    .axi_s_ar_valid         (turn_axi_m_ar_valid              ), //i
    .axi_s_ar_ready         (soc_1_axi_s_ar_ready             ), //o
    .axi_s_ar_payload_addr  (turn_axi_m_ar_payload_addr[31:0] ), //i
    .axi_s_ar_payload_id    (turn_axi_m_ar_payload_id[3:0]    ), //i
    .axi_s_ar_payload_len   (turn_axi_m_ar_payload_len[7:0]   ), //i
    .axi_s_ar_payload_size  (turn_axi_m_ar_payload_size[2:0]  ), //i
    .axi_s_ar_payload_burst (turn_axi_m_ar_payload_burst[1:0] ), //i
    .axi_s_r_valid          (soc_1_axi_s_r_valid              ), //o
    .axi_s_r_ready          (turn_axi_m_r_ready               ), //i
    .axi_s_r_payload_data   (soc_1_axi_s_r_payload_data[31:0] ), //o
    .axi_s_r_payload_id     (soc_1_axi_s_r_payload_id[3:0]    ), //o
    .axi_s_r_payload_resp   (soc_1_axi_s_r_payload_resp[1:0]  ), //o
    .axi_s_r_payload_last   (soc_1_axi_s_r_payload_last       ), //o
    .clock                  (clock                            ), //i
    .reset                  (reset                            )  //i
  );
  assign io_master_awvalid = turn_io_slave_awvalid;
  assign io_master_awaddr = turn_io_slave_awaddr;
  assign io_master_awid = turn_io_slave_awid;
  assign io_master_awlen = turn_io_slave_awlen;
  assign io_master_awsize = turn_io_slave_awsize;
  assign io_master_awburst = turn_io_slave_awburst;
  assign io_master_wvalid = turn_io_slave_wvalid;
  assign io_master_wdata = turn_io_slave_wdata;
  assign io_master_wstrb = turn_io_slave_wstrb;
  assign io_master_wlast = turn_io_slave_wlast;
  assign io_master_bready = turn_io_slave_bready;
  assign io_master_arvalid = turn_io_slave_arvalid;
  assign io_master_araddr = turn_io_slave_araddr;
  assign io_master_arid = turn_io_slave_arid;
  assign io_master_arlen = turn_io_slave_arlen;
  assign io_master_arsize = turn_io_slave_arsize;
  assign io_master_arburst = turn_io_slave_arburst;
  assign io_master_rready = turn_io_slave_rready;
  assign io_slave_awready = turn_io_master_awready;
  assign io_slave_wready = turn_io_master_wready;
  assign io_slave_bvalid = turn_io_master_bvalid;
  assign io_slave_bresp = turn_io_master_bresp;
  assign io_slave_bid = turn_io_master_bid;
  assign io_slave_arready = turn_io_master_arready;
  assign io_slave_rvalid = turn_io_master_rvalid;
  assign io_slave_rresp = turn_io_master_rresp;
  assign io_slave_rdata = turn_io_master_rdata;
  assign io_slave_rlast = turn_io_master_rlast;
  assign io_slave_rid = turn_io_master_rid;

endmodule
