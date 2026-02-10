// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : PC_1

`timescale 1ns/1ps 
module PC_1 (
  output wire          axi_aw_valid,
  input  wire          axi_aw_ready,
  output wire [31:0]   axi_aw_payload_addr,
  output wire [3:0]    axi_aw_payload_id,
  output wire [7:0]    axi_aw_payload_len,
  output wire [2:0]    axi_aw_payload_size,
  output wire [1:0]    axi_aw_payload_burst,
  output wire          axi_w_valid,
  input  wire          axi_w_ready,
  output wire [31:0]   axi_w_payload_data,
  output wire [3:0]    axi_w_payload_strb,
  output wire          axi_w_payload_last,
  input  wire          axi_b_valid,
  output wire          axi_b_ready,
  input  wire [3:0]    axi_b_payload_id,
  input  wire [1:0]    axi_b_payload_resp,
  output wire          axi_ar_valid,
  input  wire          axi_ar_ready,
  output wire [31:0]   axi_ar_payload_addr,
  output wire [3:0]    axi_ar_payload_id,
  output wire [7:0]    axi_ar_payload_len,
  output wire [2:0]    axi_ar_payload_size,
  output wire [1:0]    axi_ar_payload_burst,
  input  wire          axi_r_valid,
  output wire          axi_r_ready,
  input  wire [31:0]   axi_r_payload_data,
  input  wire [3:0]    axi_r_payload_id,
  input  wire [1:0]    axi_r_payload_resp,
  input  wire          axi_r_payload_last,
  output wire [31:0]   com_encode_code,
  input  wire [31:0]   com_encode_nPC,
  input  wire          com_encode_nPC_vaild,
  output wire [31:0]   com_encode_PC,
  input  wire          read_en,
  input  wire          clock,
  input  wire          rst
);

  wire       [31:0]   pc_2_com_encode_code;
  wire       [31:0]   pc_2_com_encode_PC;
  wire                pc_2_axi4lite_aw_valid;
  wire       [31:0]   pc_2_axi4lite_aw_payload_addr;
  wire       [2:0]    pc_2_axi4lite_aw_payload_prot;
  wire                pc_2_axi4lite_w_valid;
  wire       [31:0]   pc_2_axi4lite_w_payload_data;
  wire       [3:0]    pc_2_axi4lite_w_payload_strb;
  wire                pc_2_axi4lite_b_ready;
  wire                pc_2_axi4lite_ar_valid;
  wire       [31:0]   pc_2_axi4lite_ar_payload_addr;
  wire       [2:0]    pc_2_axi4lite_ar_payload_prot;
  wire                pc_2_axi4lite_r_ready;

  PC pc_2 (
    .com_encode_code          (pc_2_com_encode_code[31:0]         ), //o
    .com_encode_nPC           (com_encode_nPC[31:0]               ), //i
    .com_encode_nPC_vaild     (com_encode_nPC_vaild               ), //i
    .com_encode_PC            (pc_2_com_encode_PC[31:0]           ), //o
    .axi4lite_aw_valid        (pc_2_axi4lite_aw_valid             ), //o
    .axi4lite_aw_ready        (                                   ), //i
    .axi4lite_aw_payload_addr (pc_2_axi4lite_aw_payload_addr[31:0]), //o
    .axi4lite_aw_payload_prot (pc_2_axi4lite_aw_payload_prot[2:0] ), //o
    .axi4lite_w_valid         (pc_2_axi4lite_w_valid              ), //o
    .axi4lite_w_ready         (                                   ), //i
    .axi4lite_w_payload_data  (pc_2_axi4lite_w_payload_data[31:0] ), //o
    .axi4lite_w_payload_strb  (pc_2_axi4lite_w_payload_strb[3:0]  ), //o
    .axi4lite_b_valid         (                                   ), //i
    .axi4lite_b_ready         (pc_2_axi4lite_b_ready              ), //o
    .axi4lite_b_payload_resp  (                                   ), //i
    .axi4lite_ar_valid        (pc_2_axi4lite_ar_valid             ), //o
    .axi4lite_ar_ready        (axi_ar_ready                       ), //i
    .axi4lite_ar_payload_addr (pc_2_axi4lite_ar_payload_addr[31:0]), //o
    .axi4lite_ar_payload_prot (pc_2_axi4lite_ar_payload_prot[2:0] ), //o
    .axi4lite_r_valid         (axi_r_valid                        ), //i
    .axi4lite_r_ready         (pc_2_axi4lite_r_ready              ), //o
    .axi4lite_r_payload_data  (axi_r_payload_data[31:0]           ), //i
    .axi4lite_r_payload_resp  (                                   ), //i
    .read_en                  (read_en                            ), //i
    .clock                    (clock                              ), //i
    .rst                      (rst                                )  //i
  );
  assign com_encode_code = pc_2_com_encode_code;
  assign com_encode_PC = pc_2_com_encode_PC;
  assign axi_ar_valid = pc_2_axi4lite_ar_valid;
  assign axi_ar_payload_addr = pc_2_axi4lite_ar_payload_addr;
  assign axi_ar_payload_id = 4'b0000;
  assign axi_ar_payload_len = 8'h0;
  assign axi_ar_payload_size = 3'b010;
  assign axi_ar_payload_burst = 2'b00;
  assign axi_r_ready = pc_2_axi4lite_r_ready;
  assign axi_w_valid = 1'b0;
  assign axi_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_w_payload_strb = 4'bxxxx;
  assign axi_w_payload_last = 1'bx;
  assign axi_aw_valid = 1'b0;
  assign axi_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_aw_payload_id = 4'bxxxx;
  assign axi_aw_payload_len = 8'bxxxxxxxx;
  assign axi_aw_payload_size = 3'bxxx;
  assign axi_aw_payload_burst = 2'bxx;
  assign axi_b_ready = 1'b0;

endmodule
