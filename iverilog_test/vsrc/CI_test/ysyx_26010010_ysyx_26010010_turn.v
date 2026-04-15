// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyx_26010010_ysyx_26010010_turn

`timescale 1ns/1ps 
module ysyx_26010010_ysyx_26010010_turn (
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
  output wire          axi_s_r_payload_last,
  input  wire          clock,
  input  wire          reset
);

  wire                ysyx_io_master_awvalid;
  wire       [31:0]   ysyx_io_master_awaddr;
  wire       [3:0]    ysyx_io_master_awid;
  wire       [7:0]    ysyx_io_master_awlen;
  wire       [2:0]    ysyx_io_master_awsize;
  wire       [1:0]    ysyx_io_master_awburst;
  wire                ysyx_io_master_wvalid;
  wire       [31:0]   ysyx_io_master_wdata;
  wire       [3:0]    ysyx_io_master_wstrb;
  wire                ysyx_io_master_wlast;
  wire                ysyx_io_master_bready;
  wire                ysyx_io_master_arvalid;
  wire       [31:0]   ysyx_io_master_araddr;
  wire       [3:0]    ysyx_io_master_arid;
  wire       [7:0]    ysyx_io_master_arlen;
  wire       [2:0]    ysyx_io_master_arsize;
  wire       [1:0]    ysyx_io_master_arburst;
  wire                ysyx_io_master_rready;
  wire                ysyx_io_slave_awready;
  wire                ysyx_io_slave_wready;
  wire                ysyx_io_slave_bvalid;
  wire       [1:0]    ysyx_io_slave_bresp;
  wire       [3:0]    ysyx_io_slave_bid;
  wire                ysyx_io_slave_arready;
  wire                ysyx_io_slave_rvalid;
  wire       [1:0]    ysyx_io_slave_rresp;
  wire       [31:0]   ysyx_io_slave_rdata;
  wire                ysyx_io_slave_rlast;
  wire       [3:0]    ysyx_io_slave_rid;
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

  ysyx_26010010 ysyx (
    .io_master_awready (turn_io_master_awready     ), //i
    .io_master_awvalid (ysyx_io_master_awvalid     ), //o
    .io_master_awaddr  (ysyx_io_master_awaddr[31:0]), //o
    .io_master_awid    (ysyx_io_master_awid[3:0]   ), //o
    .io_master_awlen   (ysyx_io_master_awlen[7:0]  ), //o
    .io_master_awsize  (ysyx_io_master_awsize[2:0] ), //o
    .io_master_awburst (ysyx_io_master_awburst[1:0]), //o
    .io_master_wready  (turn_io_master_wready      ), //i
    .io_master_wvalid  (ysyx_io_master_wvalid      ), //o
    .io_master_wdata   (ysyx_io_master_wdata[31:0] ), //o
    .io_master_wstrb   (ysyx_io_master_wstrb[3:0]  ), //o
    .io_master_wlast   (ysyx_io_master_wlast       ), //o
    .io_master_bready  (ysyx_io_master_bready      ), //o
    .io_master_bvalid  (turn_io_master_bvalid      ), //i
    .io_master_bresp   (turn_io_master_bresp[1:0]  ), //i
    .io_master_bid     (turn_io_master_bid[3:0]    ), //i
    .io_master_arready (turn_io_master_arready     ), //i
    .io_master_arvalid (ysyx_io_master_arvalid     ), //o
    .io_master_araddr  (ysyx_io_master_araddr[31:0]), //o
    .io_master_arid    (ysyx_io_master_arid[3:0]   ), //o
    .io_master_arlen   (ysyx_io_master_arlen[7:0]  ), //o
    .io_master_arsize  (ysyx_io_master_arsize[2:0] ), //o
    .io_master_arburst (ysyx_io_master_arburst[1:0]), //o
    .io_master_rready  (ysyx_io_master_rready      ), //o
    .io_master_rvalid  (turn_io_master_rvalid      ), //i
    .io_master_rresp   (turn_io_master_rresp[1:0]  ), //i
    .io_master_rdata   (turn_io_master_rdata[31:0] ), //i
    .io_master_rlast   (turn_io_master_rlast       ), //i
    .io_master_rid     (turn_io_master_rid[3:0]    ), //i
    .io_slave_awready  (ysyx_io_slave_awready      ), //o
    .io_slave_awvalid  (turn_io_slave_awvalid      ), //i
    .io_slave_awaddr   (turn_io_slave_awaddr[31:0] ), //i
    .io_slave_awid     (turn_io_slave_awid[3:0]    ), //i
    .io_slave_awlen    (turn_io_slave_awlen[7:0]   ), //i
    .io_slave_awsize   (turn_io_slave_awsize[2:0]  ), //i
    .io_slave_awburst  (turn_io_slave_awburst[1:0] ), //i
    .io_slave_wready   (ysyx_io_slave_wready       ), //o
    .io_slave_wvalid   (turn_io_slave_wvalid       ), //i
    .io_slave_wdata    (turn_io_slave_wdata[31:0]  ), //i
    .io_slave_wstrb    (turn_io_slave_wstrb[3:0]   ), //i
    .io_slave_wlast    (turn_io_slave_wlast        ), //i
    .io_slave_bready   (turn_io_slave_bready       ), //i
    .io_slave_bvalid   (ysyx_io_slave_bvalid       ), //o
    .io_slave_bresp    (ysyx_io_slave_bresp[1:0]   ), //o
    .io_slave_bid      (ysyx_io_slave_bid[3:0]     ), //o
    .io_slave_arready  (ysyx_io_slave_arready      ), //o
    .io_slave_arvalid  (turn_io_slave_arvalid      ), //i
    .io_slave_araddr   (turn_io_slave_araddr[31:0] ), //i
    .io_slave_arid     (turn_io_slave_arid[3:0]    ), //i
    .io_slave_arlen    (turn_io_slave_arlen[7:0]   ), //i
    .io_slave_arsize   (turn_io_slave_arsize[2:0]  ), //i
    .io_slave_arburst  (turn_io_slave_arburst[1:0] ), //i
    .io_slave_rready   (turn_io_slave_rready       ), //i
    .io_slave_rvalid   (ysyx_io_slave_rvalid       ), //o
    .io_slave_rresp    (ysyx_io_slave_rresp[1:0]   ), //o
    .io_slave_rdata    (ysyx_io_slave_rdata[31:0]  ), //o
    .io_slave_rlast    (ysyx_io_slave_rlast        ), //o
    .io_slave_rid      (ysyx_io_slave_rid[3:0]     ), //o
    .io_interrupt      (1'b0                       ), //i
    .clock             (clock                      ), //i
    .reset             (reset                      )  //i
  );
  ysyx_26010010_AXITrun turn (
    .io_master_awready      (turn_io_master_awready          ), //o
    .io_master_awvalid      (ysyx_io_master_awvalid          ), //i
    .io_master_awaddr       (ysyx_io_master_awaddr[31:0]     ), //i
    .io_master_awid         (ysyx_io_master_awid[3:0]        ), //i
    .io_master_awlen        (ysyx_io_master_awlen[7:0]       ), //i
    .io_master_awsize       (ysyx_io_master_awsize[2:0]      ), //i
    .io_master_awburst      (ysyx_io_master_awburst[1:0]     ), //i
    .io_master_wready       (turn_io_master_wready           ), //o
    .io_master_wvalid       (ysyx_io_master_wvalid           ), //i
    .io_master_wdata        (ysyx_io_master_wdata[31:0]      ), //i
    .io_master_wstrb        (ysyx_io_master_wstrb[3:0]       ), //i
    .io_master_wlast        (ysyx_io_master_wlast            ), //i
    .io_master_bready       (ysyx_io_master_bready           ), //i
    .io_master_bvalid       (turn_io_master_bvalid           ), //o
    .io_master_bresp        (turn_io_master_bresp[1:0]       ), //o
    .io_master_bid          (turn_io_master_bid[3:0]         ), //o
    .io_master_arready      (turn_io_master_arready          ), //o
    .io_master_arvalid      (ysyx_io_master_arvalid          ), //i
    .io_master_araddr       (ysyx_io_master_araddr[31:0]     ), //i
    .io_master_arid         (ysyx_io_master_arid[3:0]        ), //i
    .io_master_arlen        (ysyx_io_master_arlen[7:0]       ), //i
    .io_master_arsize       (ysyx_io_master_arsize[2:0]      ), //i
    .io_master_arburst      (ysyx_io_master_arburst[1:0]     ), //i
    .io_master_rready       (ysyx_io_master_rready           ), //i
    .io_master_rvalid       (turn_io_master_rvalid           ), //o
    .io_master_rresp        (turn_io_master_rresp[1:0]       ), //o
    .io_master_rdata        (turn_io_master_rdata[31:0]      ), //o
    .io_master_rlast        (turn_io_master_rlast            ), //o
    .io_master_rid          (turn_io_master_rid[3:0]         ), //o
    .io_slave_awready       (ysyx_io_slave_awready           ), //i
    .io_slave_awvalid       (turn_io_slave_awvalid           ), //o
    .io_slave_awaddr        (turn_io_slave_awaddr[31:0]      ), //o
    .io_slave_awid          (turn_io_slave_awid[3:0]         ), //o
    .io_slave_awlen         (turn_io_slave_awlen[7:0]        ), //o
    .io_slave_awsize        (turn_io_slave_awsize[2:0]       ), //o
    .io_slave_awburst       (turn_io_slave_awburst[1:0]      ), //o
    .io_slave_wready        (ysyx_io_slave_wready            ), //i
    .io_slave_wvalid        (turn_io_slave_wvalid            ), //o
    .io_slave_wdata         (turn_io_slave_wdata[31:0]       ), //o
    .io_slave_wstrb         (turn_io_slave_wstrb[3:0]        ), //o
    .io_slave_wlast         (turn_io_slave_wlast             ), //o
    .io_slave_bready        (turn_io_slave_bready            ), //o
    .io_slave_bvalid        (ysyx_io_slave_bvalid            ), //i
    .io_slave_bresp         (ysyx_io_slave_bresp[1:0]        ), //i
    .io_slave_bid           (ysyx_io_slave_bid[3:0]          ), //i
    .io_slave_arready       (ysyx_io_slave_arready           ), //i
    .io_slave_arvalid       (turn_io_slave_arvalid           ), //o
    .io_slave_araddr        (turn_io_slave_araddr[31:0]      ), //o
    .io_slave_arid          (turn_io_slave_arid[3:0]         ), //o
    .io_slave_arlen         (turn_io_slave_arlen[7:0]        ), //o
    .io_slave_arsize        (turn_io_slave_arsize[2:0]       ), //o
    .io_slave_arburst       (turn_io_slave_arburst[1:0]      ), //o
    .io_slave_rready        (turn_io_slave_rready            ), //o
    .io_slave_rvalid        (ysyx_io_slave_rvalid            ), //i
    .io_slave_rresp         (ysyx_io_slave_rresp[1:0]        ), //i
    .io_slave_rdata         (ysyx_io_slave_rdata[31:0]       ), //i
    .io_slave_rlast         (ysyx_io_slave_rlast             ), //i
    .io_slave_rid           (ysyx_io_slave_rid[3:0]          ), //i
    .axi_m_aw_valid         (turn_axi_m_aw_valid             ), //o
    .axi_m_aw_ready         (axi_m_aw_ready                  ), //i
    .axi_m_aw_payload_addr  (turn_axi_m_aw_payload_addr[31:0]), //o
    .axi_m_aw_payload_id    (turn_axi_m_aw_payload_id[3:0]   ), //o
    .axi_m_aw_payload_len   (turn_axi_m_aw_payload_len[7:0]  ), //o
    .axi_m_aw_payload_size  (turn_axi_m_aw_payload_size[2:0] ), //o
    .axi_m_aw_payload_burst (turn_axi_m_aw_payload_burst[1:0]), //o
    .axi_m_w_valid          (turn_axi_m_w_valid              ), //o
    .axi_m_w_ready          (axi_m_w_ready                   ), //i
    .axi_m_w_payload_data   (turn_axi_m_w_payload_data[31:0] ), //o
    .axi_m_w_payload_strb   (turn_axi_m_w_payload_strb[3:0]  ), //o
    .axi_m_w_payload_last   (turn_axi_m_w_payload_last       ), //o
    .axi_m_b_valid          (axi_m_b_valid                   ), //i
    .axi_m_b_ready          (turn_axi_m_b_ready              ), //o
    .axi_m_b_payload_id     (axi_m_b_payload_id[3:0]         ), //i
    .axi_m_b_payload_resp   (axi_m_b_payload_resp[1:0]       ), //i
    .axi_m_ar_valid         (turn_axi_m_ar_valid             ), //o
    .axi_m_ar_ready         (axi_m_ar_ready                  ), //i
    .axi_m_ar_payload_addr  (turn_axi_m_ar_payload_addr[31:0]), //o
    .axi_m_ar_payload_id    (turn_axi_m_ar_payload_id[3:0]   ), //o
    .axi_m_ar_payload_len   (turn_axi_m_ar_payload_len[7:0]  ), //o
    .axi_m_ar_payload_size  (turn_axi_m_ar_payload_size[2:0] ), //o
    .axi_m_ar_payload_burst (turn_axi_m_ar_payload_burst[1:0]), //o
    .axi_m_r_valid          (axi_m_r_valid                   ), //i
    .axi_m_r_ready          (turn_axi_m_r_ready              ), //o
    .axi_m_r_payload_data   (axi_m_r_payload_data[31:0]      ), //i
    .axi_m_r_payload_id     (axi_m_r_payload_id[3:0]         ), //i
    .axi_m_r_payload_resp   (axi_m_r_payload_resp[1:0]       ), //i
    .axi_m_r_payload_last   (axi_m_r_payload_last            ), //i
    .axi_s_aw_valid         (axi_s_aw_valid                  ), //i
    .axi_s_aw_ready         (turn_axi_s_aw_ready             ), //o
    .axi_s_aw_payload_addr  (axi_s_aw_payload_addr[31:0]     ), //i
    .axi_s_aw_payload_id    (axi_s_aw_payload_id[3:0]        ), //i
    .axi_s_aw_payload_len   (axi_s_aw_payload_len[7:0]       ), //i
    .axi_s_aw_payload_size  (axi_s_aw_payload_size[2:0]      ), //i
    .axi_s_aw_payload_burst (axi_s_aw_payload_burst[1:0]     ), //i
    .axi_s_w_valid          (axi_s_w_valid                   ), //i
    .axi_s_w_ready          (turn_axi_s_w_ready              ), //o
    .axi_s_w_payload_data   (axi_s_w_payload_data[31:0]      ), //i
    .axi_s_w_payload_strb   (axi_s_w_payload_strb[3:0]       ), //i
    .axi_s_w_payload_last   (axi_s_w_payload_last            ), //i
    .axi_s_b_valid          (turn_axi_s_b_valid              ), //o
    .axi_s_b_ready          (axi_s_b_ready                   ), //i
    .axi_s_b_payload_id     (turn_axi_s_b_payload_id[3:0]    ), //o
    .axi_s_b_payload_resp   (turn_axi_s_b_payload_resp[1:0]  ), //o
    .axi_s_ar_valid         (axi_s_ar_valid                  ), //i
    .axi_s_ar_ready         (turn_axi_s_ar_ready             ), //o
    .axi_s_ar_payload_addr  (axi_s_ar_payload_addr[31:0]     ), //i
    .axi_s_ar_payload_id    (axi_s_ar_payload_id[3:0]        ), //i
    .axi_s_ar_payload_len   (axi_s_ar_payload_len[7:0]       ), //i
    .axi_s_ar_payload_size  (axi_s_ar_payload_size[2:0]      ), //i
    .axi_s_ar_payload_burst (axi_s_ar_payload_burst[1:0]     ), //i
    .axi_s_r_valid          (turn_axi_s_r_valid              ), //o
    .axi_s_r_ready          (axi_s_r_ready                   ), //i
    .axi_s_r_payload_data   (turn_axi_s_r_payload_data[31:0] ), //o
    .axi_s_r_payload_id     (turn_axi_s_r_payload_id[3:0]    ), //o
    .axi_s_r_payload_resp   (turn_axi_s_r_payload_resp[1:0]  ), //o
    .axi_s_r_payload_last   (turn_axi_s_r_payload_last       )  //o
  );
  assign axi_s_aw_ready = turn_axi_s_aw_ready;
  assign axi_s_w_ready = turn_axi_s_w_ready;
  assign axi_s_b_valid = turn_axi_s_b_valid;
  assign axi_s_b_payload_id = turn_axi_s_b_payload_id;
  assign axi_s_b_payload_resp = turn_axi_s_b_payload_resp;
  assign axi_s_ar_ready = turn_axi_s_ar_ready;
  assign axi_s_r_valid = turn_axi_s_r_valid;
  assign axi_s_r_payload_data = turn_axi_s_r_payload_data;
  assign axi_s_r_payload_id = turn_axi_s_r_payload_id;
  assign axi_s_r_payload_resp = turn_axi_s_r_payload_resp;
  assign axi_s_r_payload_last = turn_axi_s_r_payload_last;
  assign axi_m_aw_valid = turn_axi_m_aw_valid;
  assign axi_m_aw_payload_addr = turn_axi_m_aw_payload_addr;
  assign axi_m_aw_payload_id = turn_axi_m_aw_payload_id;
  assign axi_m_aw_payload_len = turn_axi_m_aw_payload_len;
  assign axi_m_aw_payload_size = turn_axi_m_aw_payload_size;
  assign axi_m_aw_payload_burst = turn_axi_m_aw_payload_burst;
  assign axi_m_w_valid = turn_axi_m_w_valid;
  assign axi_m_w_payload_data = turn_axi_m_w_payload_data;
  assign axi_m_w_payload_strb = turn_axi_m_w_payload_strb;
  assign axi_m_w_payload_last = turn_axi_m_w_payload_last;
  assign axi_m_b_ready = turn_axi_m_b_ready;
  assign axi_m_ar_valid = turn_axi_m_ar_valid;
  assign axi_m_ar_payload_addr = turn_axi_m_ar_payload_addr;
  assign axi_m_ar_payload_id = turn_axi_m_ar_payload_id;
  assign axi_m_ar_payload_len = turn_axi_m_ar_payload_len;
  assign axi_m_ar_payload_size = turn_axi_m_ar_payload_size;
  assign axi_m_ar_payload_burst = turn_axi_m_ar_payload_burst;
  assign axi_m_r_ready = turn_axi_m_r_ready;

endmodule
