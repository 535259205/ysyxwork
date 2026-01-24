// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : MY_TOP

`timescale 1ns/1ps 
module top (
  input  wire          rst,
  input  wire          clk
);

  wire       [31:0]   pc_1_com_encode_code;
  wire       [31:0]   pc_1_com_encode_PC;
  wire       [31:0]   encode_1_com_grp_rd;
  wire       [4:0]    encode_1_com_grp_rd_sel;
  wire                encode_1_com_grp_rd_vaild;
  wire       [4:0]    encode_1_com_grp_rs1_sel;
  wire       [4:0]    encode_1_com_grp_rs2_sel;
  wire       [31:0]   encode_1_com_pc_nPC;
  wire                encode_1_com_pc_nPC_vaild;
  wire                encode_1_com_exmem_w_vaild;
  wire       [31:0]   encode_1_com_exmem_w_data;
  wire       [31:0]   encode_1_com_exmem_w_addr;
  wire       [1:0]    encode_1_com_exmem_w_len;
  wire                encode_1_com_exmem_r_ready;
  wire       [31:0]   encode_1_com_exmem_r_addr;
  wire       [1:0]    encode_1_com_exmem_r_len;
  wire       [31:0]   encode_1_com_csr_w_data;
  wire                encode_1_com_csr_vaild;
  wire       [11:0]   encode_1_com_csr_csr_sel;
  wire                encode_1_com_csr_ecall;
  wire       [31:0]   encode_1_com_csr_w_pc;
  wire                encode_1_com_csr_mret;
  wire       [31:0]   csr_1_com_encode_r_data;
  wire       [31:0]   csr_1_com_encode_r_pc;
  wire       [31:0]   grp_1_com_encode_rs1;
  wire       [31:0]   grp_1_com_encode_rs2;
  wire                exmem_1_com_encode_w_ready;
  wire                exmem_1_com_encode_r_vaild;
  wire       [31:0]   exmem_1_com_encode_r_data;

  PC pc_1 (
    .flush                (1'b0                      ), //i
    .com_encode_code      (pc_1_com_encode_code[31:0]), //o
    .com_encode_nPC       (encode_1_com_pc_nPC[31:0] ), //i
    .com_encode_nPC_vaild (encode_1_com_pc_nPC_vaild ), //i
    .com_encode_PC        (pc_1_com_encode_PC[31:0]  ), //o
    .clk                  (clk                       ), //i
    .rst                  (rst                       )  //i
  );
  Encode encode_1 (
    .flush             (1'b0                           ), //i
    .com_grp_rd        (encode_1_com_grp_rd[31:0]      ), //o
    .com_grp_rd_sel    (encode_1_com_grp_rd_sel[4:0]   ), //o
    .com_grp_rd_vaild  (encode_1_com_grp_rd_vaild      ), //o
    .com_grp_rs1       (grp_1_com_encode_rs1[31:0]     ), //i
    .com_grp_rs1_sel   (encode_1_com_grp_rs1_sel[4:0]  ), //o
    .com_grp_rs2       (grp_1_com_encode_rs2[31:0]     ), //i
    .com_grp_rs2_sel   (encode_1_com_grp_rs2_sel[4:0]  ), //o
    .com_pc_code       (pc_1_com_encode_code[31:0]     ), //i
    .com_pc_nPC        (encode_1_com_pc_nPC[31:0]      ), //o
    .com_pc_nPC_vaild  (encode_1_com_pc_nPC_vaild      ), //o
    .com_pc_PC         (pc_1_com_encode_PC[31:0]       ), //i
    .com_exmem_w_vaild (encode_1_com_exmem_w_vaild     ), //o
    .com_exmem_w_ready (exmem_1_com_encode_w_ready     ), //i
    .com_exmem_w_data  (encode_1_com_exmem_w_data[31:0]), //o
    .com_exmem_w_addr  (encode_1_com_exmem_w_addr[31:0]), //o
    .com_exmem_w_len   (encode_1_com_exmem_w_len[1:0]  ), //o
    .com_exmem_r_vaild (exmem_1_com_encode_r_vaild     ), //i
    .com_exmem_r_ready (encode_1_com_exmem_r_ready     ), //o
    .com_exmem_r_data  (exmem_1_com_encode_r_data[31:0]), //i
    .com_exmem_r_addr  (encode_1_com_exmem_r_addr[31:0]), //o
    .com_exmem_r_len   (encode_1_com_exmem_r_len[1:0]  ), //o
    .com_csr_w_data    (encode_1_com_csr_w_data[31:0]  ), //o
    .com_csr_r_data    (csr_1_com_encode_r_data[31:0]  ), //i
    .com_csr_vaild     (encode_1_com_csr_vaild         ), //o
    .com_csr_csr_sel   (encode_1_com_csr_csr_sel[11:0] ), //o
    .com_csr_ecall     (encode_1_com_csr_ecall         ), //o
    .com_csr_w_pc      (encode_1_com_csr_w_pc[31:0]    ), //o
    .com_csr_r_pc      (csr_1_com_encode_r_pc[31:0]    ), //i
    .com_csr_mret      (encode_1_com_csr_mret          )  //o
  );
  CSR csr_1 (
    .com_encode_w_data  (encode_1_com_csr_w_data[31:0] ), //i
    .com_encode_r_data  (csr_1_com_encode_r_data[31:0] ), //o
    .com_encode_vaild   (encode_1_com_csr_vaild        ), //i
    .com_encode_csr_sel (encode_1_com_csr_csr_sel[11:0]), //i
    .com_encode_ecall   (encode_1_com_csr_ecall        ), //i
    .com_encode_w_pc    (encode_1_com_csr_w_pc[31:0]   ), //i
    .com_encode_r_pc    (csr_1_com_encode_r_pc[31:0]   ), //o
    .com_encode_mret    (encode_1_com_csr_mret         ), //i
    .flush              (1'b0                          ), //i
    .clk                (clk                           ), //i
    .rst                (rst                           )  //i
  );
  GRP grp_1 (
    .flush               (1'b0                         ), //i
    .com_encode_rd       (encode_1_com_grp_rd[31:0]    ), //i
    .com_encode_rd_sel   (encode_1_com_grp_rd_sel[4:0] ), //i
    .com_encode_rd_vaild (encode_1_com_grp_rd_vaild    ), //i
    .com_encode_rs1      (grp_1_com_encode_rs1[31:0]   ), //o
    .com_encode_rs1_sel  (encode_1_com_grp_rs1_sel[4:0]), //i
    .com_encode_rs2      (grp_1_com_encode_rs2[31:0]   ), //o
    .com_encode_rs2_sel  (encode_1_com_grp_rs2_sel[4:0]), //i
    .clk                 (clk                          ), //i
    .rst                 (rst                          )  //i
  );
  EXmem exmem_1 (
    .flush              (1'b0                           ), //i
    .com_encode_w_vaild (encode_1_com_exmem_w_vaild     ), //i
    .com_encode_w_ready (exmem_1_com_encode_w_ready     ), //o
    .com_encode_w_data  (encode_1_com_exmem_w_data[31:0]), //i
    .com_encode_w_addr  (encode_1_com_exmem_w_addr[31:0]), //i
    .com_encode_w_len   (encode_1_com_exmem_w_len[1:0]  ), //i
    .com_encode_r_vaild (exmem_1_com_encode_r_vaild     ), //o
    .com_encode_r_ready (encode_1_com_exmem_r_ready     ), //i
    .com_encode_r_data  (exmem_1_com_encode_r_data[31:0]), //o
    .com_encode_r_addr  (encode_1_com_exmem_r_addr[31:0]), //i
    .com_encode_r_len   (encode_1_com_exmem_r_len[1:0]  ), //i
    .clk                (clk                            )  //i
  );

endmodule
