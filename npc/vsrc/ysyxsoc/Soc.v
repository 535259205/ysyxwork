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
  input  wire          rst,
  input  wire          clock
);

  wire                pc_2_axi_ar_valid;
  wire       [31:0]   pc_2_axi_ar_payload_addr;
  wire       [3:0]    pc_2_axi_ar_payload_id;
  wire       [7:0]    pc_2_axi_ar_payload_len;
  wire       [2:0]    pc_2_axi_ar_payload_size;
  wire       [1:0]    pc_2_axi_ar_payload_burst;
  wire                pc_2_axi_aw_valid;
  wire       [31:0]   pc_2_axi_aw_payload_addr;
  wire       [3:0]    pc_2_axi_aw_payload_id;
  wire       [7:0]    pc_2_axi_aw_payload_len;
  wire       [2:0]    pc_2_axi_aw_payload_size;
  wire       [1:0]    pc_2_axi_aw_payload_burst;
  wire                pc_2_axi_w_valid;
  wire       [31:0]   pc_2_axi_w_payload_data;
  wire       [3:0]    pc_2_axi_w_payload_strb;
  wire                pc_2_axi_w_payload_last;
  wire                pc_2_axi_r_ready;
  wire                pc_2_axi_b_ready;
  wire       [31:0]   pc_2_com_encode_code;
  wire       [31:0]   pc_2_com_encode_PC;
  wire       [31:0]   encode_2_com_grp_rd;
  wire       [4:0]    encode_2_com_grp_rd_sel;
  wire                encode_2_com_grp_rd_vaild;
  wire       [4:0]    encode_2_com_grp_rs1_sel;
  wire       [4:0]    encode_2_com_grp_rs2_sel;
  wire       [31:0]   encode_2_com_pc_nPC;
  wire                encode_2_com_pc_nPC_vaild;
  wire       [31:0]   encode_2_com_csr_w_data;
  wire                encode_2_com_csr_vaild;
  wire       [11:0]   encode_2_com_csr_csr_sel;
  wire                encode_2_com_csr_ecall;
  wire       [31:0]   encode_2_com_csr_w_pc;
  wire                encode_2_com_csr_mret;
  wire                encode_2_axi_ar_valid;
  wire       [31:0]   encode_2_axi_ar_payload_addr;
  wire       [3:0]    encode_2_axi_ar_payload_id;
  wire       [7:0]    encode_2_axi_ar_payload_len;
  wire       [2:0]    encode_2_axi_ar_payload_size;
  wire       [1:0]    encode_2_axi_ar_payload_burst;
  wire                encode_2_axi_aw_valid;
  wire       [31:0]   encode_2_axi_aw_payload_addr;
  wire       [3:0]    encode_2_axi_aw_payload_id;
  wire       [7:0]    encode_2_axi_aw_payload_len;
  wire       [2:0]    encode_2_axi_aw_payload_size;
  wire       [1:0]    encode_2_axi_aw_payload_burst;
  wire                encode_2_axi_w_valid;
  wire       [31:0]   encode_2_axi_w_payload_data;
  wire       [3:0]    encode_2_axi_w_payload_strb;
  wire                encode_2_axi_w_payload_last;
  wire                encode_2_axi_r_ready;
  wire                encode_2_axi_b_ready;
  wire       [31:0]   csr_1_com_encode_r_data;
  wire       [31:0]   csr_1_com_encode_r_pc;
  wire       [31:0]   grp_1_com_encode_rs1;
  wire       [31:0]   grp_1_com_encode_rs2;
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
  wire                xbar_axi_s_ar_valid;
  wire       [31:0]   xbar_axi_s_ar_payload_addr;
  wire       [3:0]    xbar_axi_s_ar_payload_id;
  wire       [7:0]    xbar_axi_s_ar_payload_len;
  wire       [2:0]    xbar_axi_s_ar_payload_size;
  wire       [1:0]    xbar_axi_s_ar_payload_burst;
  wire                xbar_axi_s_aw_valid;
  wire       [31:0]   xbar_axi_s_aw_payload_addr;
  wire       [3:0]    xbar_axi_s_aw_payload_id;
  wire       [7:0]    xbar_axi_s_aw_payload_len;
  wire       [2:0]    xbar_axi_s_aw_payload_size;
  wire       [1:0]    xbar_axi_s_aw_payload_burst;
  wire                xbar_axi_s_w_valid;
  wire       [31:0]   xbar_axi_s_w_payload_data;
  wire       [3:0]    xbar_axi_s_w_payload_strb;
  wire                xbar_axi_s_w_payload_last;
  wire                xbar_axi_s_r_ready;
  wire                xbar_axi_s_b_ready;
  wire                ctrl_u_vaild_0;
  wire                ctrl_u_vaild_1;
  wire                ctrl_u_vaild_2;
  wire                ctrl_u_vaild_3;
  wire                ctrl_u_vaild_4;
  wire                ctrl_r_sel;
  wire                u_vaild_0;
  wire                u_vaild_1;
  wire                u_vaild_2;
  wire                u_vaild_3;
  wire                u_vaild_4;
  wire                encode_2_axi_r_fire;
  wire                encode_2_axi_w_fire;
  wire                pc_2_axi_r_fire;
  wire                pc_2_axi_w_fire;

  PC_1 pc_2 (
    .axi_aw_valid         (pc_2_axi_aw_valid                ), //o
    .axi_aw_ready         (xbar_axi_m_0_aw_ready            ), //i
    .axi_aw_payload_addr  (pc_2_axi_aw_payload_addr[31:0]   ), //o
    .axi_aw_payload_id    (pc_2_axi_aw_payload_id[3:0]      ), //o
    .axi_aw_payload_len   (pc_2_axi_aw_payload_len[7:0]     ), //o
    .axi_aw_payload_size  (pc_2_axi_aw_payload_size[2:0]    ), //o
    .axi_aw_payload_burst (pc_2_axi_aw_payload_burst[1:0]   ), //o
    .axi_w_valid          (pc_2_axi_w_valid                 ), //o
    .axi_w_ready          (xbar_axi_m_0_w_ready             ), //i
    .axi_w_payload_data   (pc_2_axi_w_payload_data[31:0]    ), //o
    .axi_w_payload_strb   (pc_2_axi_w_payload_strb[3:0]     ), //o
    .axi_w_payload_last   (pc_2_axi_w_payload_last          ), //o
    .axi_b_valid          (xbar_axi_m_0_b_valid             ), //i
    .axi_b_ready          (pc_2_axi_b_ready                 ), //o
    .axi_b_payload_id     (xbar_axi_m_0_b_payload_id[3:0]   ), //i
    .axi_b_payload_resp   (xbar_axi_m_0_b_payload_resp[1:0] ), //i
    .axi_ar_valid         (pc_2_axi_ar_valid                ), //o
    .axi_ar_ready         (xbar_axi_m_0_ar_ready            ), //i
    .axi_ar_payload_addr  (pc_2_axi_ar_payload_addr[31:0]   ), //o
    .axi_ar_payload_id    (pc_2_axi_ar_payload_id[3:0]      ), //o
    .axi_ar_payload_len   (pc_2_axi_ar_payload_len[7:0]     ), //o
    .axi_ar_payload_size  (pc_2_axi_ar_payload_size[2:0]    ), //o
    .axi_ar_payload_burst (pc_2_axi_ar_payload_burst[1:0]   ), //o
    .axi_r_valid          (xbar_axi_m_0_r_valid             ), //i
    .axi_r_ready          (pc_2_axi_r_ready                 ), //o
    .axi_r_payload_data   (xbar_axi_m_0_r_payload_data[31:0]), //i
    .axi_r_payload_id     (xbar_axi_m_0_r_payload_id[3:0]   ), //i
    .axi_r_payload_resp   (xbar_axi_m_0_r_payload_resp[1:0] ), //i
    .axi_r_payload_last   (xbar_axi_m_0_r_payload_last      ), //i
    .com_encode_code      (pc_2_com_encode_code[31:0]       ), //o
    .com_encode_nPC       (encode_2_com_pc_nPC[31:0]        ), //i
    .com_encode_nPC_vaild (encode_2_com_pc_nPC_vaild        ), //i
    .com_encode_PC        (pc_2_com_encode_PC[31:0]         ), //o
    .read_en              (u_vaild_0                        ), //i
    .clock                (clock                            ), //i
    .rst                  (rst                              )  //i
  );
  Encode_1 encode_2 (
    .com_grp_rd           (encode_2_com_grp_rd[31:0]         ), //o
    .com_grp_rd_sel       (encode_2_com_grp_rd_sel[4:0]      ), //o
    .com_grp_rd_vaild     (encode_2_com_grp_rd_vaild         ), //o
    .com_grp_rs1          (grp_1_com_encode_rs1[31:0]        ), //i
    .com_grp_rs1_sel      (encode_2_com_grp_rs1_sel[4:0]     ), //o
    .com_grp_rs2          (grp_1_com_encode_rs2[31:0]        ), //i
    .com_grp_rs2_sel      (encode_2_com_grp_rs2_sel[4:0]     ), //o
    .com_pc_code          (pc_2_com_encode_code[31:0]        ), //i
    .com_pc_nPC           (encode_2_com_pc_nPC[31:0]         ), //o
    .com_pc_nPC_vaild     (encode_2_com_pc_nPC_vaild         ), //o
    .com_pc_PC            (pc_2_com_encode_PC[31:0]          ), //i
    .com_csr_w_data       (encode_2_com_csr_w_data[31:0]     ), //o
    .com_csr_r_data       (csr_1_com_encode_r_data[31:0]     ), //i
    .com_csr_vaild        (encode_2_com_csr_vaild            ), //o
    .com_csr_csr_sel      (encode_2_com_csr_csr_sel[11:0]    ), //o
    .com_csr_ecall        (encode_2_com_csr_ecall            ), //o
    .com_csr_w_pc         (encode_2_com_csr_w_pc[31:0]       ), //o
    .com_csr_r_pc         (csr_1_com_encode_r_pc[31:0]       ), //i
    .com_csr_mret         (encode_2_com_csr_mret             ), //o
    .axi_aw_valid         (encode_2_axi_aw_valid             ), //o
    .axi_aw_ready         (xbar_axi_m_1_aw_ready             ), //i
    .axi_aw_payload_addr  (encode_2_axi_aw_payload_addr[31:0]), //o
    .axi_aw_payload_id    (encode_2_axi_aw_payload_id[3:0]   ), //o
    .axi_aw_payload_len   (encode_2_axi_aw_payload_len[7:0]  ), //o
    .axi_aw_payload_size  (encode_2_axi_aw_payload_size[2:0] ), //o
    .axi_aw_payload_burst (encode_2_axi_aw_payload_burst[1:0]), //o
    .axi_w_valid          (encode_2_axi_w_valid              ), //o
    .axi_w_ready          (xbar_axi_m_1_w_ready              ), //i
    .axi_w_payload_data   (encode_2_axi_w_payload_data[31:0] ), //o
    .axi_w_payload_strb   (encode_2_axi_w_payload_strb[3:0]  ), //o
    .axi_w_payload_last   (encode_2_axi_w_payload_last       ), //o
    .axi_b_valid          (xbar_axi_m_1_b_valid              ), //i
    .axi_b_ready          (encode_2_axi_b_ready              ), //o
    .axi_b_payload_id     (xbar_axi_m_1_b_payload_id[3:0]    ), //i
    .axi_b_payload_resp   (xbar_axi_m_1_b_payload_resp[1:0]  ), //i
    .axi_ar_valid         (encode_2_axi_ar_valid             ), //o
    .axi_ar_ready         (xbar_axi_m_1_ar_ready             ), //i
    .axi_ar_payload_addr  (encode_2_axi_ar_payload_addr[31:0]), //o
    .axi_ar_payload_id    (encode_2_axi_ar_payload_id[3:0]   ), //o
    .axi_ar_payload_len   (encode_2_axi_ar_payload_len[7:0]  ), //o
    .axi_ar_payload_size  (encode_2_axi_ar_payload_size[2:0] ), //o
    .axi_ar_payload_burst (encode_2_axi_ar_payload_burst[1:0]), //o
    .axi_r_valid          (xbar_axi_m_1_r_valid              ), //i
    .axi_r_ready          (encode_2_axi_r_ready              ), //o
    .axi_r_payload_data   (xbar_axi_m_1_r_payload_data[31:0] ), //i
    .axi_r_payload_id     (xbar_axi_m_1_r_payload_id[3:0]    ), //i
    .axi_r_payload_resp   (xbar_axi_m_1_r_payload_resp[1:0]  ), //i
    .axi_r_payload_last   (xbar_axi_m_1_r_payload_last       ), //i
    .vaild                (u_vaild_1                         ), //i
    .clock                (clock                             ), //i
    .rst                  (rst                               )  //i
  );
  CSR csr_1 (
    .com_encode_w_data  (encode_2_com_csr_w_data[31:0] ), //i
    .com_encode_r_data  (csr_1_com_encode_r_data[31:0] ), //o
    .com_encode_vaild   (encode_2_com_csr_vaild        ), //i
    .com_encode_csr_sel (encode_2_com_csr_csr_sel[11:0]), //i
    .com_encode_ecall   (encode_2_com_csr_ecall        ), //i
    .com_encode_w_pc    (encode_2_com_csr_w_pc[31:0]   ), //i
    .com_encode_r_pc    (csr_1_com_encode_r_pc[31:0]   ), //o
    .com_encode_mret    (encode_2_com_csr_mret         ), //i
    .clock              (clock                         ), //i
    .rst                (rst                           )  //i
  );
  GRP grp_1 (
    .com_encode_rd       (encode_2_com_grp_rd[31:0]    ), //i
    .com_encode_rd_sel   (encode_2_com_grp_rd_sel[4:0] ), //i
    .com_encode_rd_vaild (encode_2_com_grp_rd_vaild    ), //i
    .com_encode_rs1      (grp_1_com_encode_rs1[31:0]   ), //o
    .com_encode_rs1_sel  (encode_2_com_grp_rs1_sel[4:0]), //i
    .com_encode_rs2      (grp_1_com_encode_rs2[31:0]   ), //o
    .com_encode_rs2_sel  (encode_2_com_grp_rs2_sel[4:0]), //i
    .w_vaild             (u_vaild_4                    ), //i
    .clock               (clock                        ), //i
    .rst                 (rst                          )  //i
  );
  AXIXbar xbar (
    .axi_m_0_aw_valid         (pc_2_axi_aw_valid                 ), //i
    .axi_m_0_aw_ready         (xbar_axi_m_0_aw_ready             ), //o
    .axi_m_0_aw_payload_addr  (pc_2_axi_aw_payload_addr[31:0]    ), //i
    .axi_m_0_aw_payload_id    (pc_2_axi_aw_payload_id[3:0]       ), //i
    .axi_m_0_aw_payload_len   (pc_2_axi_aw_payload_len[7:0]      ), //i
    .axi_m_0_aw_payload_size  (pc_2_axi_aw_payload_size[2:0]     ), //i
    .axi_m_0_aw_payload_burst (pc_2_axi_aw_payload_burst[1:0]    ), //i
    .axi_m_0_w_valid          (pc_2_axi_w_valid                  ), //i
    .axi_m_0_w_ready          (xbar_axi_m_0_w_ready              ), //o
    .axi_m_0_w_payload_data   (pc_2_axi_w_payload_data[31:0]     ), //i
    .axi_m_0_w_payload_strb   (pc_2_axi_w_payload_strb[3:0]      ), //i
    .axi_m_0_w_payload_last   (pc_2_axi_w_payload_last           ), //i
    .axi_m_0_b_valid          (xbar_axi_m_0_b_valid              ), //o
    .axi_m_0_b_ready          (pc_2_axi_b_ready                  ), //i
    .axi_m_0_b_payload_id     (xbar_axi_m_0_b_payload_id[3:0]    ), //o
    .axi_m_0_b_payload_resp   (xbar_axi_m_0_b_payload_resp[1:0]  ), //o
    .axi_m_0_ar_valid         (pc_2_axi_ar_valid                 ), //i
    .axi_m_0_ar_ready         (xbar_axi_m_0_ar_ready             ), //o
    .axi_m_0_ar_payload_addr  (pc_2_axi_ar_payload_addr[31:0]    ), //i
    .axi_m_0_ar_payload_id    (pc_2_axi_ar_payload_id[3:0]       ), //i
    .axi_m_0_ar_payload_len   (pc_2_axi_ar_payload_len[7:0]      ), //i
    .axi_m_0_ar_payload_size  (pc_2_axi_ar_payload_size[2:0]     ), //i
    .axi_m_0_ar_payload_burst (pc_2_axi_ar_payload_burst[1:0]    ), //i
    .axi_m_0_r_valid          (xbar_axi_m_0_r_valid              ), //o
    .axi_m_0_r_ready          (pc_2_axi_r_ready                  ), //i
    .axi_m_0_r_payload_data   (xbar_axi_m_0_r_payload_data[31:0] ), //o
    .axi_m_0_r_payload_id     (xbar_axi_m_0_r_payload_id[3:0]    ), //o
    .axi_m_0_r_payload_resp   (xbar_axi_m_0_r_payload_resp[1:0]  ), //o
    .axi_m_0_r_payload_last   (xbar_axi_m_0_r_payload_last       ), //o
    .axi_m_1_aw_valid         (encode_2_axi_aw_valid             ), //i
    .axi_m_1_aw_ready         (xbar_axi_m_1_aw_ready             ), //o
    .axi_m_1_aw_payload_addr  (encode_2_axi_aw_payload_addr[31:0]), //i
    .axi_m_1_aw_payload_id    (encode_2_axi_aw_payload_id[3:0]   ), //i
    .axi_m_1_aw_payload_len   (encode_2_axi_aw_payload_len[7:0]  ), //i
    .axi_m_1_aw_payload_size  (encode_2_axi_aw_payload_size[2:0] ), //i
    .axi_m_1_aw_payload_burst (encode_2_axi_aw_payload_burst[1:0]), //i
    .axi_m_1_w_valid          (encode_2_axi_w_valid              ), //i
    .axi_m_1_w_ready          (xbar_axi_m_1_w_ready              ), //o
    .axi_m_1_w_payload_data   (encode_2_axi_w_payload_data[31:0] ), //i
    .axi_m_1_w_payload_strb   (encode_2_axi_w_payload_strb[3:0]  ), //i
    .axi_m_1_w_payload_last   (encode_2_axi_w_payload_last       ), //i
    .axi_m_1_b_valid          (xbar_axi_m_1_b_valid              ), //o
    .axi_m_1_b_ready          (encode_2_axi_b_ready              ), //i
    .axi_m_1_b_payload_id     (xbar_axi_m_1_b_payload_id[3:0]    ), //o
    .axi_m_1_b_payload_resp   (xbar_axi_m_1_b_payload_resp[1:0]  ), //o
    .axi_m_1_ar_valid         (encode_2_axi_ar_valid             ), //i
    .axi_m_1_ar_ready         (xbar_axi_m_1_ar_ready             ), //o
    .axi_m_1_ar_payload_addr  (encode_2_axi_ar_payload_addr[31:0]), //i
    .axi_m_1_ar_payload_id    (encode_2_axi_ar_payload_id[3:0]   ), //i
    .axi_m_1_ar_payload_len   (encode_2_axi_ar_payload_len[7:0]  ), //i
    .axi_m_1_ar_payload_size  (encode_2_axi_ar_payload_size[2:0] ), //i
    .axi_m_1_ar_payload_burst (encode_2_axi_ar_payload_burst[1:0]), //i
    .axi_m_1_r_valid          (xbar_axi_m_1_r_valid              ), //o
    .axi_m_1_r_ready          (encode_2_axi_r_ready              ), //i
    .axi_m_1_r_payload_data   (xbar_axi_m_1_r_payload_data[31:0] ), //o
    .axi_m_1_r_payload_id     (xbar_axi_m_1_r_payload_id[3:0]    ), //o
    .axi_m_1_r_payload_resp   (xbar_axi_m_1_r_payload_resp[1:0]  ), //o
    .axi_m_1_r_payload_last   (xbar_axi_m_1_r_payload_last       ), //o
    .axi_s_aw_valid           (xbar_axi_s_aw_valid               ), //o
    .axi_s_aw_ready           (axi_m_aw_ready                    ), //i
    .axi_s_aw_payload_addr    (xbar_axi_s_aw_payload_addr[31:0]  ), //o
    .axi_s_aw_payload_id      (xbar_axi_s_aw_payload_id[3:0]     ), //o
    .axi_s_aw_payload_len     (xbar_axi_s_aw_payload_len[7:0]    ), //o
    .axi_s_aw_payload_size    (xbar_axi_s_aw_payload_size[2:0]   ), //o
    .axi_s_aw_payload_burst   (xbar_axi_s_aw_payload_burst[1:0]  ), //o
    .axi_s_w_valid            (xbar_axi_s_w_valid                ), //o
    .axi_s_w_ready            (axi_m_w_ready                     ), //i
    .axi_s_w_payload_data     (xbar_axi_s_w_payload_data[31:0]   ), //o
    .axi_s_w_payload_strb     (xbar_axi_s_w_payload_strb[3:0]    ), //o
    .axi_s_w_payload_last     (xbar_axi_s_w_payload_last         ), //o
    .axi_s_b_valid            (axi_m_b_valid                     ), //i
    .axi_s_b_ready            (xbar_axi_s_b_ready                ), //o
    .axi_s_b_payload_id       (axi_m_b_payload_id[3:0]           ), //i
    .axi_s_b_payload_resp     (axi_m_b_payload_resp[1:0]         ), //i
    .axi_s_ar_valid           (xbar_axi_s_ar_valid               ), //o
    .axi_s_ar_ready           (axi_m_ar_ready                    ), //i
    .axi_s_ar_payload_addr    (xbar_axi_s_ar_payload_addr[31:0]  ), //o
    .axi_s_ar_payload_id      (xbar_axi_s_ar_payload_id[3:0]     ), //o
    .axi_s_ar_payload_len     (xbar_axi_s_ar_payload_len[7:0]    ), //o
    .axi_s_ar_payload_size    (xbar_axi_s_ar_payload_size[2:0]   ), //o
    .axi_s_ar_payload_burst   (xbar_axi_s_ar_payload_burst[1:0]  ), //o
    .axi_s_r_valid            (axi_m_r_valid                     ), //i
    .axi_s_r_ready            (xbar_axi_s_r_ready                ), //o
    .axi_s_r_payload_data     (axi_m_r_payload_data[31:0]        ), //i
    .axi_s_r_payload_id       (axi_m_r_payload_id[3:0]           ), //i
    .axi_s_r_payload_resp     (axi_m_r_payload_resp[1:0]         ), //i
    .axi_s_r_payload_last     (axi_m_r_payload_last              ), //i
    .r_sel                    (ctrl_r_sel                        )  //i
  );
  SocCtrl ctrl (
    .u_vaild_0      (ctrl_u_vaild_0      ), //o
    .u_vaild_1      (ctrl_u_vaild_1      ), //o
    .u_vaild_2      (ctrl_u_vaild_2      ), //o
    .u_vaild_3      (ctrl_u_vaild_3      ), //o
    .u_vaild_4      (ctrl_u_vaild_4      ), //o
    .encode_r_ready (encode_2_axi_r_ready), //i
    .encode_r_valid (xbar_axi_m_1_r_valid), //i
    .encode_r_fire  (encode_2_axi_r_fire ), //i
    .encode_w_ready (xbar_axi_m_1_w_ready), //i
    .encode_w_valid (encode_2_axi_w_valid), //i
    .encode_w_fire  (encode_2_axi_w_fire ), //i
    .pc_r_ready     (pc_2_axi_r_ready    ), //i
    .pc_r_valid     (xbar_axi_m_0_r_valid), //i
    .pc_r_fire      (pc_2_axi_r_fire     ), //i
    .pc_w_ready     (xbar_axi_m_0_w_ready), //i
    .pc_w_valid     (pc_2_axi_w_valid    ), //i
    .pc_w_fire      (pc_2_axi_w_fire     ), //i
    .r_sel          (ctrl_r_sel          ), //o
    .clock          (clock               ), //i
    .rst            (rst                 )  //i
  );
  assign axi_m_aw_valid = xbar_axi_s_aw_valid;
  assign axi_m_aw_payload_addr = xbar_axi_s_aw_payload_addr;
  assign axi_m_aw_payload_id = xbar_axi_s_aw_payload_id;
  assign axi_m_aw_payload_len = xbar_axi_s_aw_payload_len;
  assign axi_m_aw_payload_size = xbar_axi_s_aw_payload_size;
  assign axi_m_aw_payload_burst = xbar_axi_s_aw_payload_burst;
  assign axi_m_w_valid = xbar_axi_s_w_valid;
  assign axi_m_w_payload_data = xbar_axi_s_w_payload_data;
  assign axi_m_w_payload_strb = xbar_axi_s_w_payload_strb;
  assign axi_m_w_payload_last = xbar_axi_s_w_payload_last;
  assign axi_m_b_ready = xbar_axi_s_b_ready;
  assign axi_m_ar_valid = xbar_axi_s_ar_valid;
  assign axi_m_ar_payload_addr = xbar_axi_s_ar_payload_addr;
  assign axi_m_ar_payload_id = xbar_axi_s_ar_payload_id;
  assign axi_m_ar_payload_len = xbar_axi_s_ar_payload_len;
  assign axi_m_ar_payload_size = xbar_axi_s_ar_payload_size;
  assign axi_m_ar_payload_burst = xbar_axi_s_ar_payload_burst;
  assign axi_m_r_ready = xbar_axi_s_r_ready;
  assign axi_s_w_ready = 1'b0;
  assign axi_s_aw_ready = 1'b0;
  assign axi_s_b_valid = 1'b0;
  assign axi_s_b_payload_id = 4'bxxxx;
  assign axi_s_b_payload_resp = 2'bxx;
  assign axi_s_r_valid = 1'b0;
  assign axi_s_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_s_r_payload_id = 4'bxxxx;
  assign axi_s_r_payload_resp = 2'bxx;
  assign axi_s_r_payload_last = 1'bx;
  assign axi_s_ar_ready = 1'b0;
  assign u_vaild_0 = ctrl_u_vaild_0;
  assign u_vaild_1 = ctrl_u_vaild_1;
  assign u_vaild_2 = ctrl_u_vaild_2;
  assign u_vaild_3 = ctrl_u_vaild_3;
  assign u_vaild_4 = ctrl_u_vaild_4;
  assign encode_2_axi_r_fire = (xbar_axi_m_1_r_valid && encode_2_axi_r_ready);
  assign encode_2_axi_w_fire = (encode_2_axi_w_valid && xbar_axi_m_1_w_ready);
  assign pc_2_axi_r_fire = (xbar_axi_m_0_r_valid && pc_2_axi_r_ready);
  assign pc_2_axi_w_fire = (pc_2_axi_w_valid && xbar_axi_m_0_w_ready);

endmodule
