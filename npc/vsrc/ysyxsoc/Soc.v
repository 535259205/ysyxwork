// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : Soc

`timescale 1ns/1ps 
module Soc (
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

  wire                cpu_axi_if_ar_valid;
  wire       [31:0]   cpu_axi_if_ar_payload_addr;
  wire       [3:0]    cpu_axi_if_ar_payload_id;
  wire       [7:0]    cpu_axi_if_ar_payload_len;
  wire       [2:0]    cpu_axi_if_ar_payload_size;
  wire       [1:0]    cpu_axi_if_ar_payload_burst;
  wire                cpu_axi_if_aw_valid;
  wire       [31:0]   cpu_axi_if_aw_payload_addr;
  wire       [3:0]    cpu_axi_if_aw_payload_id;
  wire       [7:0]    cpu_axi_if_aw_payload_len;
  wire       [2:0]    cpu_axi_if_aw_payload_size;
  wire       [1:0]    cpu_axi_if_aw_payload_burst;
  wire                cpu_axi_if_w_valid;
  wire       [31:0]   cpu_axi_if_w_payload_data;
  wire       [3:0]    cpu_axi_if_w_payload_strb;
  wire                cpu_axi_if_w_payload_last;
  wire                cpu_axi_if_r_ready;
  wire                cpu_axi_if_b_ready;
  wire                cpu_axi_mem_ar_valid;
  wire       [31:0]   cpu_axi_mem_ar_payload_addr;
  wire       [3:0]    cpu_axi_mem_ar_payload_id;
  wire       [7:0]    cpu_axi_mem_ar_payload_len;
  wire       [2:0]    cpu_axi_mem_ar_payload_size;
  wire       [1:0]    cpu_axi_mem_ar_payload_burst;
  wire                cpu_axi_mem_aw_valid;
  wire       [31:0]   cpu_axi_mem_aw_payload_addr;
  wire       [3:0]    cpu_axi_mem_aw_payload_id;
  wire       [7:0]    cpu_axi_mem_aw_payload_len;
  wire       [2:0]    cpu_axi_mem_aw_payload_size;
  wire       [1:0]    cpu_axi_mem_aw_payload_burst;
  wire                cpu_axi_mem_w_valid;
  wire       [31:0]   cpu_axi_mem_w_payload_data;
  wire       [3:0]    cpu_axi_mem_w_payload_strb;
  wire                cpu_axi_mem_w_payload_last;
  wire                cpu_axi_mem_r_ready;
  wire                cpu_axi_mem_b_ready;
  wire                xbar_axi_m_0_ar_ready;
  wire                xbar_axi_m_0_aw_ready;
  wire                xbar_axi_m_0_w_ready;
  wire                xbar_axi_m_0_r_valid;
  wire       [31:0]   xbar_axi_m_0_r_payload_data;
  wire       [3:0]    xbar_axi_m_0_r_payload_id;
  wire       [1:0]    xbar_axi_m_0_r_payload_resp;
  wire                xbar_axi_m_0_r_payload_last;
  wire                xbar_axi_m_0_b_valid;
  wire       [3:0]    xbar_axi_m_0_b_payload_id;
  wire       [1:0]    xbar_axi_m_0_b_payload_resp;
  wire                xbar_axi_m_1_ar_ready;
  wire                xbar_axi_m_1_aw_ready;
  wire                xbar_axi_m_1_w_ready;
  wire                xbar_axi_m_1_r_valid;
  wire       [31:0]   xbar_axi_m_1_r_payload_data;
  wire       [3:0]    xbar_axi_m_1_r_payload_id;
  wire       [1:0]    xbar_axi_m_1_r_payload_resp;
  wire                xbar_axi_m_1_r_payload_last;
  wire                xbar_axi_m_1_b_valid;
  wire       [3:0]    xbar_axi_m_1_b_payload_id;
  wire       [1:0]    xbar_axi_m_1_b_payload_resp;
  wire                xbar_axi_s_0_ar_valid;
  wire       [31:0]   xbar_axi_s_0_ar_payload_addr;
  wire       [3:0]    xbar_axi_s_0_ar_payload_id;
  wire       [7:0]    xbar_axi_s_0_ar_payload_len;
  wire       [2:0]    xbar_axi_s_0_ar_payload_size;
  wire       [1:0]    xbar_axi_s_0_ar_payload_burst;
  wire                xbar_axi_s_0_aw_valid;
  wire       [31:0]   xbar_axi_s_0_aw_payload_addr;
  wire       [3:0]    xbar_axi_s_0_aw_payload_id;
  wire       [7:0]    xbar_axi_s_0_aw_payload_len;
  wire       [2:0]    xbar_axi_s_0_aw_payload_size;
  wire       [1:0]    xbar_axi_s_0_aw_payload_burst;
  wire                xbar_axi_s_0_w_valid;
  wire       [31:0]   xbar_axi_s_0_w_payload_data;
  wire       [3:0]    xbar_axi_s_0_w_payload_strb;
  wire                xbar_axi_s_0_w_payload_last;
  wire                xbar_axi_s_0_r_ready;
  wire                xbar_axi_s_0_b_ready;
  wire                xbar_axi_s_1_ar_valid;
  wire       [31:0]   xbar_axi_s_1_ar_payload_addr;
  wire       [3:0]    xbar_axi_s_1_ar_payload_id;
  wire       [7:0]    xbar_axi_s_1_ar_payload_len;
  wire       [2:0]    xbar_axi_s_1_ar_payload_size;
  wire       [1:0]    xbar_axi_s_1_ar_payload_burst;
  wire                xbar_axi_s_1_aw_valid;
  wire       [31:0]   xbar_axi_s_1_aw_payload_addr;
  wire       [3:0]    xbar_axi_s_1_aw_payload_id;
  wire       [7:0]    xbar_axi_s_1_aw_payload_len;
  wire       [2:0]    xbar_axi_s_1_aw_payload_size;
  wire       [1:0]    xbar_axi_s_1_aw_payload_burst;
  wire                xbar_axi_s_1_w_valid;
  wire       [31:0]   xbar_axi_s_1_w_payload_data;
  wire       [3:0]    xbar_axi_s_1_w_payload_strb;
  wire                xbar_axi_s_1_w_payload_last;
  wire                xbar_axi_s_1_r_ready;
  wire                xbar_axi_s_1_b_ready;
  wire                clint_axi_ar_ready;
  wire                clint_axi_aw_ready;
  wire                clint_axi_w_ready;
  wire                clint_axi_r_valid;
  wire       [31:0]   clint_axi_r_payload_data;
  wire       [3:0]    clint_axi_r_payload_id;
  wire       [1:0]    clint_axi_r_payload_resp;
  wire                clint_axi_r_payload_last;
  wire                clint_axi_b_valid;
  wire       [3:0]    clint_axi_b_payload_id;
  wire       [1:0]    clint_axi_b_payload_resp;

  test_cpu cpu (
    .axi_if_aw_valid          (cpu_axi_if_aw_valid              ), //o
    .axi_if_aw_ready          (xbar_axi_m_0_aw_ready            ), //i
    .axi_if_aw_payload_addr   (cpu_axi_if_aw_payload_addr[31:0] ), //o
    .axi_if_aw_payload_id     (cpu_axi_if_aw_payload_id[3:0]    ), //o
    .axi_if_aw_payload_len    (cpu_axi_if_aw_payload_len[7:0]   ), //o
    .axi_if_aw_payload_size   (cpu_axi_if_aw_payload_size[2:0]  ), //o
    .axi_if_aw_payload_burst  (cpu_axi_if_aw_payload_burst[1:0] ), //o
    .axi_if_w_valid           (cpu_axi_if_w_valid               ), //o
    .axi_if_w_ready           (xbar_axi_m_0_w_ready             ), //i
    .axi_if_w_payload_data    (cpu_axi_if_w_payload_data[31:0]  ), //o
    .axi_if_w_payload_strb    (cpu_axi_if_w_payload_strb[3:0]   ), //o
    .axi_if_w_payload_last    (cpu_axi_if_w_payload_last        ), //o
    .axi_if_b_valid           (xbar_axi_m_0_b_valid             ), //i
    .axi_if_b_ready           (cpu_axi_if_b_ready               ), //o
    .axi_if_b_payload_id      (xbar_axi_m_0_b_payload_id[3:0]   ), //i
    .axi_if_b_payload_resp    (xbar_axi_m_0_b_payload_resp[1:0] ), //i
    .axi_if_ar_valid          (cpu_axi_if_ar_valid              ), //o
    .axi_if_ar_ready          (xbar_axi_m_0_ar_ready            ), //i
    .axi_if_ar_payload_addr   (cpu_axi_if_ar_payload_addr[31:0] ), //o
    .axi_if_ar_payload_id     (cpu_axi_if_ar_payload_id[3:0]    ), //o
    .axi_if_ar_payload_len    (cpu_axi_if_ar_payload_len[7:0]   ), //o
    .axi_if_ar_payload_size   (cpu_axi_if_ar_payload_size[2:0]  ), //o
    .axi_if_ar_payload_burst  (cpu_axi_if_ar_payload_burst[1:0] ), //o
    .axi_if_r_valid           (xbar_axi_m_0_r_valid             ), //i
    .axi_if_r_ready           (cpu_axi_if_r_ready               ), //o
    .axi_if_r_payload_data    (xbar_axi_m_0_r_payload_data[31:0]), //i
    .axi_if_r_payload_id      (xbar_axi_m_0_r_payload_id[3:0]   ), //i
    .axi_if_r_payload_resp    (xbar_axi_m_0_r_payload_resp[1:0] ), //i
    .axi_if_r_payload_last    (xbar_axi_m_0_r_payload_last      ), //i
    .axi_mem_aw_valid         (cpu_axi_mem_aw_valid             ), //o
    .axi_mem_aw_ready         (xbar_axi_m_1_aw_ready            ), //i
    .axi_mem_aw_payload_addr  (cpu_axi_mem_aw_payload_addr[31:0]), //o
    .axi_mem_aw_payload_id    (cpu_axi_mem_aw_payload_id[3:0]   ), //o
    .axi_mem_aw_payload_len   (cpu_axi_mem_aw_payload_len[7:0]  ), //o
    .axi_mem_aw_payload_size  (cpu_axi_mem_aw_payload_size[2:0] ), //o
    .axi_mem_aw_payload_burst (cpu_axi_mem_aw_payload_burst[1:0]), //o
    .axi_mem_w_valid          (cpu_axi_mem_w_valid              ), //o
    .axi_mem_w_ready          (xbar_axi_m_1_w_ready             ), //i
    .axi_mem_w_payload_data   (cpu_axi_mem_w_payload_data[31:0] ), //o
    .axi_mem_w_payload_strb   (cpu_axi_mem_w_payload_strb[3:0]  ), //o
    .axi_mem_w_payload_last   (cpu_axi_mem_w_payload_last       ), //o
    .axi_mem_b_valid          (xbar_axi_m_1_b_valid             ), //i
    .axi_mem_b_ready          (cpu_axi_mem_b_ready              ), //o
    .axi_mem_b_payload_id     (xbar_axi_m_1_b_payload_id[3:0]   ), //i
    .axi_mem_b_payload_resp   (xbar_axi_m_1_b_payload_resp[1:0] ), //i
    .axi_mem_ar_valid         (cpu_axi_mem_ar_valid             ), //o
    .axi_mem_ar_ready         (xbar_axi_m_1_ar_ready            ), //i
    .axi_mem_ar_payload_addr  (cpu_axi_mem_ar_payload_addr[31:0]), //o
    .axi_mem_ar_payload_id    (cpu_axi_mem_ar_payload_id[3:0]   ), //o
    .axi_mem_ar_payload_len   (cpu_axi_mem_ar_payload_len[7:0]  ), //o
    .axi_mem_ar_payload_size  (cpu_axi_mem_ar_payload_size[2:0] ), //o
    .axi_mem_ar_payload_burst (cpu_axi_mem_ar_payload_burst[1:0]), //o
    .axi_mem_r_valid          (xbar_axi_m_1_r_valid             ), //i
    .axi_mem_r_ready          (cpu_axi_mem_r_ready              ), //o
    .axi_mem_r_payload_data   (xbar_axi_m_1_r_payload_data[31:0]), //i
    .axi_mem_r_payload_id     (xbar_axi_m_1_r_payload_id[3:0]   ), //i
    .axi_mem_r_payload_resp   (xbar_axi_m_1_r_payload_resp[1:0] ), //i
    .axi_mem_r_payload_last   (xbar_axi_m_1_r_payload_last      ), //i
    .clock                    (clock                            ), //i
    .reset                    (reset                            )  //i
  );
  AXIXbar_new xbar (
    .axi_m_0_aw_valid         (cpu_axi_if_aw_valid               ), //i
    .axi_m_0_aw_ready         (xbar_axi_m_0_aw_ready             ), //o
    .axi_m_0_aw_payload_addr  (cpu_axi_if_aw_payload_addr[31:0]  ), //i
    .axi_m_0_aw_payload_id    (cpu_axi_if_aw_payload_id[3:0]     ), //i
    .axi_m_0_aw_payload_len   (cpu_axi_if_aw_payload_len[7:0]    ), //i
    .axi_m_0_aw_payload_size  (cpu_axi_if_aw_payload_size[2:0]   ), //i
    .axi_m_0_aw_payload_burst (cpu_axi_if_aw_payload_burst[1:0]  ), //i
    .axi_m_0_w_valid          (cpu_axi_if_w_valid                ), //i
    .axi_m_0_w_ready          (xbar_axi_m_0_w_ready              ), //o
    .axi_m_0_w_payload_data   (cpu_axi_if_w_payload_data[31:0]   ), //i
    .axi_m_0_w_payload_strb   (cpu_axi_if_w_payload_strb[3:0]    ), //i
    .axi_m_0_w_payload_last   (cpu_axi_if_w_payload_last         ), //i
    .axi_m_0_b_valid          (xbar_axi_m_0_b_valid              ), //o
    .axi_m_0_b_ready          (cpu_axi_if_b_ready                ), //i
    .axi_m_0_b_payload_id     (xbar_axi_m_0_b_payload_id[3:0]    ), //o
    .axi_m_0_b_payload_resp   (xbar_axi_m_0_b_payload_resp[1:0]  ), //o
    .axi_m_0_ar_valid         (cpu_axi_if_ar_valid               ), //i
    .axi_m_0_ar_ready         (xbar_axi_m_0_ar_ready             ), //o
    .axi_m_0_ar_payload_addr  (cpu_axi_if_ar_payload_addr[31:0]  ), //i
    .axi_m_0_ar_payload_id    (cpu_axi_if_ar_payload_id[3:0]     ), //i
    .axi_m_0_ar_payload_len   (cpu_axi_if_ar_payload_len[7:0]    ), //i
    .axi_m_0_ar_payload_size  (cpu_axi_if_ar_payload_size[2:0]   ), //i
    .axi_m_0_ar_payload_burst (cpu_axi_if_ar_payload_burst[1:0]  ), //i
    .axi_m_0_r_valid          (xbar_axi_m_0_r_valid              ), //o
    .axi_m_0_r_ready          (cpu_axi_if_r_ready                ), //i
    .axi_m_0_r_payload_data   (xbar_axi_m_0_r_payload_data[31:0] ), //o
    .axi_m_0_r_payload_id     (xbar_axi_m_0_r_payload_id[3:0]    ), //o
    .axi_m_0_r_payload_resp   (xbar_axi_m_0_r_payload_resp[1:0]  ), //o
    .axi_m_0_r_payload_last   (xbar_axi_m_0_r_payload_last       ), //o
    .axi_m_1_aw_valid         (cpu_axi_mem_aw_valid              ), //i
    .axi_m_1_aw_ready         (xbar_axi_m_1_aw_ready             ), //o
    .axi_m_1_aw_payload_addr  (cpu_axi_mem_aw_payload_addr[31:0] ), //i
    .axi_m_1_aw_payload_id    (cpu_axi_mem_aw_payload_id[3:0]    ), //i
    .axi_m_1_aw_payload_len   (cpu_axi_mem_aw_payload_len[7:0]   ), //i
    .axi_m_1_aw_payload_size  (cpu_axi_mem_aw_payload_size[2:0]  ), //i
    .axi_m_1_aw_payload_burst (cpu_axi_mem_aw_payload_burst[1:0] ), //i
    .axi_m_1_w_valid          (cpu_axi_mem_w_valid               ), //i
    .axi_m_1_w_ready          (xbar_axi_m_1_w_ready              ), //o
    .axi_m_1_w_payload_data   (cpu_axi_mem_w_payload_data[31:0]  ), //i
    .axi_m_1_w_payload_strb   (cpu_axi_mem_w_payload_strb[3:0]   ), //i
    .axi_m_1_w_payload_last   (cpu_axi_mem_w_payload_last        ), //i
    .axi_m_1_b_valid          (xbar_axi_m_1_b_valid              ), //o
    .axi_m_1_b_ready          (cpu_axi_mem_b_ready               ), //i
    .axi_m_1_b_payload_id     (xbar_axi_m_1_b_payload_id[3:0]    ), //o
    .axi_m_1_b_payload_resp   (xbar_axi_m_1_b_payload_resp[1:0]  ), //o
    .axi_m_1_ar_valid         (cpu_axi_mem_ar_valid              ), //i
    .axi_m_1_ar_ready         (xbar_axi_m_1_ar_ready             ), //o
    .axi_m_1_ar_payload_addr  (cpu_axi_mem_ar_payload_addr[31:0] ), //i
    .axi_m_1_ar_payload_id    (cpu_axi_mem_ar_payload_id[3:0]    ), //i
    .axi_m_1_ar_payload_len   (cpu_axi_mem_ar_payload_len[7:0]   ), //i
    .axi_m_1_ar_payload_size  (cpu_axi_mem_ar_payload_size[2:0]  ), //i
    .axi_m_1_ar_payload_burst (cpu_axi_mem_ar_payload_burst[1:0] ), //i
    .axi_m_1_r_valid          (xbar_axi_m_1_r_valid              ), //o
    .axi_m_1_r_ready          (cpu_axi_mem_r_ready               ), //i
    .axi_m_1_r_payload_data   (xbar_axi_m_1_r_payload_data[31:0] ), //o
    .axi_m_1_r_payload_id     (xbar_axi_m_1_r_payload_id[3:0]    ), //o
    .axi_m_1_r_payload_resp   (xbar_axi_m_1_r_payload_resp[1:0]  ), //o
    .axi_m_1_r_payload_last   (xbar_axi_m_1_r_payload_last       ), //o
    .axi_s_0_aw_valid         (xbar_axi_s_0_aw_valid             ), //o
    .axi_s_0_aw_ready         (axi_m_aw_ready                    ), //i
    .axi_s_0_aw_payload_addr  (xbar_axi_s_0_aw_payload_addr[31:0]), //o
    .axi_s_0_aw_payload_id    (xbar_axi_s_0_aw_payload_id[3:0]   ), //o
    .axi_s_0_aw_payload_len   (xbar_axi_s_0_aw_payload_len[7:0]  ), //o
    .axi_s_0_aw_payload_size  (xbar_axi_s_0_aw_payload_size[2:0] ), //o
    .axi_s_0_aw_payload_burst (xbar_axi_s_0_aw_payload_burst[1:0]), //o
    .axi_s_0_w_valid          (xbar_axi_s_0_w_valid              ), //o
    .axi_s_0_w_ready          (axi_m_w_ready                     ), //i
    .axi_s_0_w_payload_data   (xbar_axi_s_0_w_payload_data[31:0] ), //o
    .axi_s_0_w_payload_strb   (xbar_axi_s_0_w_payload_strb[3:0]  ), //o
    .axi_s_0_w_payload_last   (xbar_axi_s_0_w_payload_last       ), //o
    .axi_s_0_b_valid          (axi_m_b_valid                     ), //i
    .axi_s_0_b_ready          (xbar_axi_s_0_b_ready              ), //o
    .axi_s_0_b_payload_id     (axi_m_b_payload_id[3:0]           ), //i
    .axi_s_0_b_payload_resp   (axi_m_b_payload_resp[1:0]         ), //i
    .axi_s_0_ar_valid         (xbar_axi_s_0_ar_valid             ), //o
    .axi_s_0_ar_ready         (axi_m_ar_ready                    ), //i
    .axi_s_0_ar_payload_addr  (xbar_axi_s_0_ar_payload_addr[31:0]), //o
    .axi_s_0_ar_payload_id    (xbar_axi_s_0_ar_payload_id[3:0]   ), //o
    .axi_s_0_ar_payload_len   (xbar_axi_s_0_ar_payload_len[7:0]  ), //o
    .axi_s_0_ar_payload_size  (xbar_axi_s_0_ar_payload_size[2:0] ), //o
    .axi_s_0_ar_payload_burst (xbar_axi_s_0_ar_payload_burst[1:0]), //o
    .axi_s_0_r_valid          (axi_m_r_valid                     ), //i
    .axi_s_0_r_ready          (xbar_axi_s_0_r_ready              ), //o
    .axi_s_0_r_payload_data   (axi_m_r_payload_data[31:0]        ), //i
    .axi_s_0_r_payload_id     (axi_m_r_payload_id[3:0]           ), //i
    .axi_s_0_r_payload_resp   (axi_m_r_payload_resp[1:0]         ), //i
    .axi_s_0_r_payload_last   (axi_m_r_payload_last              ), //i
    .axi_s_1_aw_valid         (xbar_axi_s_1_aw_valid             ), //o
    .axi_s_1_aw_ready         (clint_axi_aw_ready                ), //i
    .axi_s_1_aw_payload_addr  (xbar_axi_s_1_aw_payload_addr[31:0]), //o
    .axi_s_1_aw_payload_id    (xbar_axi_s_1_aw_payload_id[3:0]   ), //o
    .axi_s_1_aw_payload_len   (xbar_axi_s_1_aw_payload_len[7:0]  ), //o
    .axi_s_1_aw_payload_size  (xbar_axi_s_1_aw_payload_size[2:0] ), //o
    .axi_s_1_aw_payload_burst (xbar_axi_s_1_aw_payload_burst[1:0]), //o
    .axi_s_1_w_valid          (xbar_axi_s_1_w_valid              ), //o
    .axi_s_1_w_ready          (clint_axi_w_ready                 ), //i
    .axi_s_1_w_payload_data   (xbar_axi_s_1_w_payload_data[31:0] ), //o
    .axi_s_1_w_payload_strb   (xbar_axi_s_1_w_payload_strb[3:0]  ), //o
    .axi_s_1_w_payload_last   (xbar_axi_s_1_w_payload_last       ), //o
    .axi_s_1_b_valid          (clint_axi_b_valid                 ), //i
    .axi_s_1_b_ready          (xbar_axi_s_1_b_ready              ), //o
    .axi_s_1_b_payload_id     (clint_axi_b_payload_id[3:0]       ), //i
    .axi_s_1_b_payload_resp   (clint_axi_b_payload_resp[1:0]     ), //i
    .axi_s_1_ar_valid         (xbar_axi_s_1_ar_valid             ), //o
    .axi_s_1_ar_ready         (clint_axi_ar_ready                ), //i
    .axi_s_1_ar_payload_addr  (xbar_axi_s_1_ar_payload_addr[31:0]), //o
    .axi_s_1_ar_payload_id    (xbar_axi_s_1_ar_payload_id[3:0]   ), //o
    .axi_s_1_ar_payload_len   (xbar_axi_s_1_ar_payload_len[7:0]  ), //o
    .axi_s_1_ar_payload_size  (xbar_axi_s_1_ar_payload_size[2:0] ), //o
    .axi_s_1_ar_payload_burst (xbar_axi_s_1_ar_payload_burst[1:0]), //o
    .axi_s_1_r_valid          (clint_axi_r_valid                 ), //i
    .axi_s_1_r_ready          (xbar_axi_s_1_r_ready              ), //o
    .axi_s_1_r_payload_data   (clint_axi_r_payload_data[31:0]    ), //i
    .axi_s_1_r_payload_id     (clint_axi_r_payload_id[3:0]       ), //i
    .axi_s_1_r_payload_resp   (clint_axi_r_payload_resp[1:0]     ), //i
    .axi_s_1_r_payload_last   (clint_axi_r_payload_last          ), //i
    .clock                    (clock                             ), //i
    .reset                    (reset                             )  //i
  );
  AXIClint clint (
    .axi_aw_valid         (xbar_axi_s_1_aw_valid             ), //i
    .axi_aw_ready         (clint_axi_aw_ready                ), //o
    .axi_aw_payload_addr  (xbar_axi_s_1_aw_payload_addr[31:0]), //i
    .axi_aw_payload_id    (xbar_axi_s_1_aw_payload_id[3:0]   ), //i
    .axi_aw_payload_len   (xbar_axi_s_1_aw_payload_len[7:0]  ), //i
    .axi_aw_payload_size  (xbar_axi_s_1_aw_payload_size[2:0] ), //i
    .axi_aw_payload_burst (xbar_axi_s_1_aw_payload_burst[1:0]), //i
    .axi_w_valid          (xbar_axi_s_1_w_valid              ), //i
    .axi_w_ready          (clint_axi_w_ready                 ), //o
    .axi_w_payload_data   (xbar_axi_s_1_w_payload_data[31:0] ), //i
    .axi_w_payload_strb   (xbar_axi_s_1_w_payload_strb[3:0]  ), //i
    .axi_w_payload_last   (xbar_axi_s_1_w_payload_last       ), //i
    .axi_b_valid          (clint_axi_b_valid                 ), //o
    .axi_b_ready          (xbar_axi_s_1_b_ready              ), //i
    .axi_b_payload_id     (clint_axi_b_payload_id[3:0]       ), //o
    .axi_b_payload_resp   (clint_axi_b_payload_resp[1:0]     ), //o
    .axi_ar_valid         (xbar_axi_s_1_ar_valid             ), //i
    .axi_ar_ready         (clint_axi_ar_ready                ), //o
    .axi_ar_payload_addr  (xbar_axi_s_1_ar_payload_addr[31:0]), //i
    .axi_ar_payload_id    (xbar_axi_s_1_ar_payload_id[3:0]   ), //i
    .axi_ar_payload_len   (xbar_axi_s_1_ar_payload_len[7:0]  ), //i
    .axi_ar_payload_size  (xbar_axi_s_1_ar_payload_size[2:0] ), //i
    .axi_ar_payload_burst (xbar_axi_s_1_ar_payload_burst[1:0]), //i
    .axi_r_valid          (clint_axi_r_valid                 ), //o
    .axi_r_ready          (xbar_axi_s_1_r_ready              ), //i
    .axi_r_payload_data   (clint_axi_r_payload_data[31:0]    ), //o
    .axi_r_payload_id     (clint_axi_r_payload_id[3:0]       ), //o
    .axi_r_payload_resp   (clint_axi_r_payload_resp[1:0]     ), //o
    .axi_r_payload_last   (clint_axi_r_payload_last          ), //o
    .clock                (clock                             ), //i
    .reset                (reset                             )  //i
  );
  assign axi_m_aw_valid = xbar_axi_s_0_aw_valid;
  assign axi_m_aw_payload_addr = xbar_axi_s_0_aw_payload_addr;
  assign axi_m_aw_payload_id = xbar_axi_s_0_aw_payload_id;
  assign axi_m_aw_payload_len = xbar_axi_s_0_aw_payload_len;
  assign axi_m_aw_payload_size = xbar_axi_s_0_aw_payload_size;
  assign axi_m_aw_payload_burst = xbar_axi_s_0_aw_payload_burst;
  assign axi_m_w_valid = xbar_axi_s_0_w_valid;
  assign axi_m_w_payload_data = xbar_axi_s_0_w_payload_data;
  assign axi_m_w_payload_strb = xbar_axi_s_0_w_payload_strb;
  assign axi_m_w_payload_last = xbar_axi_s_0_w_payload_last;
  assign axi_m_b_ready = xbar_axi_s_0_b_ready;
  assign axi_m_ar_valid = xbar_axi_s_0_ar_valid;
  assign axi_m_ar_payload_addr = xbar_axi_s_0_ar_payload_addr;
  assign axi_m_ar_payload_id = xbar_axi_s_0_ar_payload_id;
  assign axi_m_ar_payload_len = xbar_axi_s_0_ar_payload_len;
  assign axi_m_ar_payload_size = xbar_axi_s_0_ar_payload_size;
  assign axi_m_ar_payload_burst = xbar_axi_s_0_ar_payload_burst;
  assign axi_m_r_ready = xbar_axi_s_0_r_ready;
  assign axi_s_ar_ready = 1'b0;
  assign axi_s_r_valid = 1'b0;
  assign axi_s_r_payload_data = 32'b00000000000000000000000000000000;
  assign axi_s_r_payload_id = 4'b0000;
  assign axi_s_r_payload_resp = 2'b00;
  assign axi_s_r_payload_last = 1'b0;
  assign axi_s_w_ready = 1'b0;
  assign axi_s_aw_ready = 1'b0;
  assign axi_s_b_valid = 1'b0;
  assign axi_s_b_payload_id = 4'b0000;
  assign axi_s_b_payload_resp = 2'b00;

endmodule
