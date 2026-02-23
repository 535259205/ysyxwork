// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : Encode_1

`timescale 1ns/1ps 
module Encode_1 (
  output wire [31:0]   com_grp_rd,
  output wire [4:0]    com_grp_rd_sel,
  output wire          com_grp_rd_vaild,
  input  wire [31:0]   com_grp_rs1,
  output wire [4:0]    com_grp_rs1_sel,
  input  wire [31:0]   com_grp_rs2,
  output wire [4:0]    com_grp_rs2_sel,
  input  wire [31:0]   com_pc_code,
  output wire [31:0]   com_pc_nPC,
  output wire          com_pc_nPC_vaild,
  input  wire [31:0]   com_pc_PC,
  output wire [31:0]   com_csr_w_data,
  input  wire [31:0]   com_csr_r_data,
  output wire          com_csr_vaild,
  output wire [11:0]   com_csr_csr_sel,
  output wire          com_csr_ecall,
  output wire [31:0]   com_csr_w_pc,
  input  wire [31:0]   com_csr_r_pc,
  output wire          com_csr_mret,
  output wire          axi_aw_valid,
  input  wire          axi_aw_ready,
  output wire [31:0]   axi_aw_payload_addr,
  output wire [3:0]    axi_aw_payload_id,
  output wire [7:0]    axi_aw_payload_len,
  output reg  [2:0]    axi_aw_payload_size,
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
  output reg  [2:0]    axi_ar_payload_size,
  output wire [1:0]    axi_ar_payload_burst,
  input  wire          axi_r_valid,
  output wire          axi_r_ready,
  input  wire [31:0]   axi_r_payload_data,
  input  wire [3:0]    axi_r_payload_id,
  input  wire [1:0]    axi_r_payload_resp,
  input  wire          axi_r_payload_last,
  input  wire          vaild,
  input  wire          clock,
  input  wire          rst
);

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
  wire                encode_2_axi4lite_aw_valid;
  wire       [31:0]   encode_2_axi4lite_aw_payload_addr;
  wire       [2:0]    encode_2_axi4lite_aw_payload_prot;
  wire                encode_2_axi4lite_w_valid;
  wire       [31:0]   encode_2_axi4lite_w_payload_data;
  wire       [3:0]    encode_2_axi4lite_w_payload_strb;
  wire                encode_2_axi4lite_b_ready;
  wire                encode_2_axi4lite_ar_valid;
  wire       [31:0]   encode_2_axi4lite_ar_payload_addr;
  wire       [2:0]    encode_2_axi4lite_ar_payload_prot;
  wire                encode_2_axi4lite_r_ready;
  wire       [3:0]    encode_2_ar_size;
  wire                encode_axi_aw_valid;
  wire                encode_axi_aw_ready;
  wire       [31:0]   encode_axi_aw_payload_addr;
  wire       [2:0]    encode_axi_aw_payload_prot;
  wire                encode_axi_w_valid;
  wire                encode_axi_w_ready;
  wire       [31:0]   encode_axi_w_payload_data;
  wire       [3:0]    encode_axi_w_payload_strb;
  wire                encode_axi_w_payload_last;
  wire                encode_axi_b_valid;
  wire                encode_axi_b_ready;
  wire       [1:0]    encode_axi_b_payload_resp;
  wire                encode_axi_ar_valid;
  wire                encode_axi_ar_ready;
  wire       [31:0]   encode_axi_ar_payload_addr;
  wire       [2:0]    encode_axi_ar_payload_prot;
  wire                encode_axi_r_valid;
  wire                encode_axi_r_ready;
  wire       [31:0]   encode_axi_r_payload_data;
  wire       [1:0]    encode_axi_r_payload_resp;
  wire                encode_axi_r_payload_last;

  Encode encode_2 (
    .com_grp_rd               (encode_2_com_grp_rd[31:0]              ), //o
    .com_grp_rd_sel           (encode_2_com_grp_rd_sel[4:0]           ), //o
    .com_grp_rd_vaild         (encode_2_com_grp_rd_vaild              ), //o
    .com_grp_rs1              (com_grp_rs1[31:0]                      ), //i
    .com_grp_rs1_sel          (encode_2_com_grp_rs1_sel[4:0]          ), //o
    .com_grp_rs2              (com_grp_rs2[31:0]                      ), //i
    .com_grp_rs2_sel          (encode_2_com_grp_rs2_sel[4:0]          ), //o
    .com_pc_code              (com_pc_code[31:0]                      ), //i
    .com_pc_nPC               (encode_2_com_pc_nPC[31:0]              ), //o
    .com_pc_nPC_vaild         (encode_2_com_pc_nPC_vaild              ), //o
    .com_pc_PC                (com_pc_PC[31:0]                        ), //i
    .com_csr_w_data           (encode_2_com_csr_w_data[31:0]          ), //o
    .com_csr_r_data           (com_csr_r_data[31:0]                   ), //i
    .com_csr_vaild            (encode_2_com_csr_vaild                 ), //o
    .com_csr_csr_sel          (encode_2_com_csr_csr_sel[11:0]         ), //o
    .com_csr_ecall            (encode_2_com_csr_ecall                 ), //o
    .com_csr_w_pc             (encode_2_com_csr_w_pc[31:0]            ), //o
    .com_csr_r_pc             (com_csr_r_pc[31:0]                     ), //i
    .com_csr_mret             (encode_2_com_csr_mret                  ), //o
    .axi4lite_aw_valid        (encode_2_axi4lite_aw_valid             ), //o
    .axi4lite_aw_ready        (encode_axi_aw_ready                    ), //i
    .axi4lite_aw_payload_addr (encode_2_axi4lite_aw_payload_addr[31:0]), //o
    .axi4lite_aw_payload_prot (encode_2_axi4lite_aw_payload_prot[2:0] ), //o
    .axi4lite_w_valid         (encode_2_axi4lite_w_valid              ), //o
    .axi4lite_w_ready         (encode_axi_w_ready                     ), //i
    .axi4lite_w_payload_data  (encode_2_axi4lite_w_payload_data[31:0] ), //o
    .axi4lite_w_payload_strb  (encode_2_axi4lite_w_payload_strb[3:0]  ), //o
    .axi4lite_b_valid         (encode_axi_b_valid                     ), //i
    .axi4lite_b_ready         (encode_2_axi4lite_b_ready              ), //o
    .axi4lite_b_payload_resp  (encode_axi_b_payload_resp[1:0]         ), //i
    .axi4lite_ar_valid        (encode_2_axi4lite_ar_valid             ), //o
    .axi4lite_ar_ready        (encode_axi_ar_ready                    ), //i
    .axi4lite_ar_payload_addr (encode_2_axi4lite_ar_payload_addr[31:0]), //o
    .axi4lite_ar_payload_prot (encode_2_axi4lite_ar_payload_prot[2:0] ), //o
    .axi4lite_r_valid         (encode_axi_r_valid                     ), //i
    .axi4lite_r_ready         (encode_2_axi4lite_r_ready              ), //o
    .axi4lite_r_payload_data  (encode_axi_r_payload_data[31:0]        ), //i
    .axi4lite_r_payload_resp  (encode_axi_r_payload_resp[1:0]         ), //i
    .vaild                    (vaild                                  ), //i
    .ar_size                  (encode_2_ar_size[3:0]                  ), //o
    .clock                    (clock                                  ), //i
    .rst                      (rst                                    )  //i
  );
  assign com_grp_rd = encode_2_com_grp_rd;
  assign com_grp_rd_sel = encode_2_com_grp_rd_sel;
  assign com_grp_rd_vaild = encode_2_com_grp_rd_vaild;
  assign com_grp_rs1_sel = encode_2_com_grp_rs1_sel;
  assign com_grp_rs2_sel = encode_2_com_grp_rs2_sel;
  assign com_pc_nPC = encode_2_com_pc_nPC;
  assign com_pc_nPC_vaild = encode_2_com_pc_nPC_vaild;
  assign com_csr_w_data = encode_2_com_csr_w_data;
  assign com_csr_vaild = encode_2_com_csr_vaild;
  assign com_csr_csr_sel = encode_2_com_csr_csr_sel;
  assign com_csr_ecall = encode_2_com_csr_ecall;
  assign com_csr_w_pc = encode_2_com_csr_w_pc;
  assign com_csr_mret = encode_2_com_csr_mret;
  assign encode_axi_aw_valid = encode_2_axi4lite_aw_valid;
  assign encode_axi_aw_payload_addr = encode_2_axi4lite_aw_payload_addr;
  assign encode_axi_aw_payload_prot = encode_2_axi4lite_aw_payload_prot;
  assign encode_axi_w_valid = encode_2_axi4lite_w_valid;
  assign encode_axi_w_payload_data = encode_2_axi4lite_w_payload_data;
  assign encode_axi_w_payload_strb = encode_2_axi4lite_w_payload_strb;
  assign encode_axi_w_payload_last = 1'b1;
  assign encode_axi_b_ready = encode_2_axi4lite_b_ready;
  assign encode_axi_ar_valid = encode_2_axi4lite_ar_valid;
  assign encode_axi_ar_payload_addr = encode_2_axi4lite_ar_payload_addr;
  assign encode_axi_ar_payload_prot = encode_2_axi4lite_ar_payload_prot;
  assign encode_axi_r_ready = encode_2_axi4lite_r_ready;
  assign axi_aw_payload_addr = encode_axi_aw_payload_addr;
  assign axi_aw_valid = encode_axi_aw_valid;
  assign axi_aw_payload_id = 4'b0000;
  assign axi_aw_payload_len = 8'h0;
  always @(*) begin
    case(encode_2_axi4lite_w_payload_strb)
      4'b0001 : begin
        axi_aw_payload_size = 3'b000;
      end
      4'b0010 : begin
        axi_aw_payload_size = 3'b000;
      end
      4'b0100 : begin
        axi_aw_payload_size = 3'b000;
      end
      4'b1000 : begin
        axi_aw_payload_size = 3'b000;
      end
      4'b0011 : begin
        axi_aw_payload_size = 3'b001;
      end
      4'b1111 : begin
        axi_aw_payload_size = 3'b010;
      end
      default : begin
        axi_aw_payload_size = 3'b010;
      end
    endcase
  end

  assign axi_aw_payload_burst = 2'b00;
  assign encode_axi_b_payload_resp = axi_b_payload_resp;
  assign axi_b_ready = encode_axi_b_ready;
  assign encode_axi_r_valid = axi_r_valid;
  assign axi_r_ready = encode_axi_r_ready;
  assign encode_axi_r_payload_data = axi_r_payload_data;
  assign encode_axi_r_payload_resp = axi_r_payload_resp;
  assign encode_axi_r_payload_last = axi_r_payload_last;
  assign axi_w_valid = encode_axi_w_valid;
  assign encode_axi_w_ready = axi_w_ready;
  assign axi_w_payload_data = encode_axi_w_payload_data;
  assign axi_w_payload_strb = encode_axi_w_payload_strb;
  assign axi_w_payload_last = encode_axi_w_payload_last;
  assign axi_ar_valid = encode_axi_ar_valid;
  assign encode_axi_ar_ready = axi_ar_ready;
  assign axi_ar_payload_addr = encode_axi_ar_payload_addr;
  assign axi_ar_payload_id = 4'b0000;
  assign axi_ar_payload_len = 8'h0;
  always @(*) begin
    case(encode_2_ar_size)
      4'b0001 : begin
        axi_ar_payload_size = 3'b000;
      end
      4'b0011 : begin
        axi_ar_payload_size = 3'b001;
      end
      4'b1111 : begin
        axi_ar_payload_size = 3'b010;
      end
      default : begin
        axi_ar_payload_size = 3'b010;
      end
    endcase
  end

  assign axi_ar_payload_burst = 2'b00;

endmodule
