// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : MY_TOP

`timescale 1ns/1ps 
module top (
  input  wire          rst,
  input  wire          clk
);

  wire       [31:0]   Pc_area_pc_com_encode_code;
  wire       [31:0]   Pc_area_pc_com_encode_PC;
  wire       [31:0]   Decode_area_encode_com_grp_rd;
  wire       [4:0]    Decode_area_encode_com_grp_rd_sel;
  wire                Decode_area_encode_com_grp_rd_vaild;
  wire       [4:0]    Decode_area_encode_com_grp_rs1_sel;
  wire       [4:0]    Decode_area_encode_com_grp_rs2_sel;
  wire       [31:0]   Decode_area_encode_com_pc_nPC;
  wire                Decode_area_encode_com_pc_nPC_vaild;
  wire                Decode_area_encode_com_exmem_w_vaild;
  wire       [31:0]   Decode_area_encode_com_exmem_w_data;
  wire       [31:0]   Decode_area_encode_com_exmem_w_addr;
  wire       [1:0]    Decode_area_encode_com_exmem_w_len;
  wire                Decode_area_encode_com_exmem_r_ready;
  wire       [31:0]   Decode_area_encode_com_exmem_r_addr;
  wire       [1:0]    Decode_area_encode_com_exmem_r_len;
  wire       [31:0]   Grp_area_grp_com_encode_rs1;
  wire       [31:0]   Grp_area_grp_com_encode_rs2;
  wire                Exmem_area_exmem_com_encode_w_ready;
  wire                Exmem_area_exmem_com_encode_r_vaild;
  wire       [31:0]   Exmem_area_exmem_com_encode_r_data;
  wire                pip_ctrl_2_down_isValid;
  wire                pip_ctrl_1_down_isValid;
  wire                pip_ctrl_0_down_isValid;
  wire                pip_ctrl_3_down_valid;
  reg                 pip_ctrl_3_up_valid;
  wire                pip_ctrl_2_down_valid;
  reg                 pip_ctrl_2_up_valid;
  wire                pip_ctrl_1_down_valid;
  reg                 pip_ctrl_1_up_valid;
  wire                pip_ctrl_0_down_valid;
  wire                pip_ctrl_0_up_valid;
  wire                jump;

  PC Pc_area_pc (
    .flush                (1'b0                               ), //i
    .com_encode_code      (Pc_area_pc_com_encode_code[31:0]   ), //o
    .com_encode_nPC       (Decode_area_encode_com_pc_nPC[31:0]), //i
    .com_encode_nPC_vaild (Decode_area_encode_com_pc_nPC_vaild), //i
    .com_encode_PC        (Pc_area_pc_com_encode_PC[31:0]     ), //o
    .clk                  (clk                                ), //i
    .rst                  (rst                                )  //i
  );
  Encode Decode_area_encode (
    .flush             (1'b0                                     ), //i
    .com_grp_rd        (Decode_area_encode_com_grp_rd[31:0]      ), //o
    .com_grp_rd_sel    (Decode_area_encode_com_grp_rd_sel[4:0]   ), //o
    .com_grp_rd_vaild  (Decode_area_encode_com_grp_rd_vaild      ), //o
    .com_grp_rs1       (Grp_area_grp_com_encode_rs1[31:0]        ), //i
    .com_grp_rs1_sel   (Decode_area_encode_com_grp_rs1_sel[4:0]  ), //o
    .com_grp_rs2       (Grp_area_grp_com_encode_rs2[31:0]        ), //i
    .com_grp_rs2_sel   (Decode_area_encode_com_grp_rs2_sel[4:0]  ), //o
    .com_pc_code       (Pc_area_pc_com_encode_code[31:0]         ), //i
    .com_pc_nPC        (Decode_area_encode_com_pc_nPC[31:0]      ), //o
    .com_pc_nPC_vaild  (Decode_area_encode_com_pc_nPC_vaild      ), //o
    .com_pc_PC         (Pc_area_pc_com_encode_PC[31:0]           ), //i
    .com_exmem_w_vaild (Decode_area_encode_com_exmem_w_vaild     ), //o
    .com_exmem_w_ready (Exmem_area_exmem_com_encode_w_ready      ), //i
    .com_exmem_w_data  (Decode_area_encode_com_exmem_w_data[31:0]), //o
    .com_exmem_w_addr  (Decode_area_encode_com_exmem_w_addr[31:0]), //o
    .com_exmem_w_len   (Decode_area_encode_com_exmem_w_len[1:0]  ), //o
    .com_exmem_r_vaild (Exmem_area_exmem_com_encode_r_vaild      ), //i
    .com_exmem_r_ready (Decode_area_encode_com_exmem_r_ready     ), //o
    .com_exmem_r_data  (Exmem_area_exmem_com_encode_r_data[31:0] ), //i
    .com_exmem_r_addr  (Decode_area_encode_com_exmem_r_addr[31:0]), //o
    .com_exmem_r_len   (Decode_area_encode_com_exmem_r_len[1:0]  )  //o
  );
  GRP Grp_area_grp (
    .flush               (1'b0                                   ), //i
    .com_encode_rd       (Decode_area_encode_com_grp_rd[31:0]    ), //i
    .com_encode_rd_sel   (Decode_area_encode_com_grp_rd_sel[4:0] ), //i
    .com_encode_rd_vaild (Decode_area_encode_com_grp_rd_vaild    ), //i
    .com_encode_rs1      (Grp_area_grp_com_encode_rs1[31:0]      ), //o
    .com_encode_rs1_sel  (Decode_area_encode_com_grp_rs1_sel[4:0]), //i
    .com_encode_rs2      (Grp_area_grp_com_encode_rs2[31:0]      ), //o
    .com_encode_rs2_sel  (Decode_area_encode_com_grp_rs2_sel[4:0]), //i
    .clk                 (clk                                    ), //i
    .rst                 (rst                                    )  //i
  );
  EXmem Exmem_area_exmem (
    .flush              (1'b0                                     ), //i
    .com_encode_w_vaild (Decode_area_encode_com_exmem_w_vaild     ), //i
    .com_encode_w_ready (Exmem_area_exmem_com_encode_w_ready      ), //o
    .com_encode_w_data  (Decode_area_encode_com_exmem_w_data[31:0]), //i
    .com_encode_w_addr  (Decode_area_encode_com_exmem_w_addr[31:0]), //i
    .com_encode_w_len   (Decode_area_encode_com_exmem_w_len[1:0]  ), //i
    .com_encode_r_vaild (Exmem_area_exmem_com_encode_r_vaild      ), //o
    .com_encode_r_ready (Decode_area_encode_com_exmem_r_ready     ), //i
    .com_encode_r_data  (Exmem_area_exmem_com_encode_r_data[31:0] ), //o
    .com_encode_r_addr  (Decode_area_encode_com_exmem_r_addr[31:0]), //i
    .com_encode_r_len   (Decode_area_encode_com_exmem_r_len[1:0]  ), //i
    .clk                (clk                                      )  //i
  );
  assign pip_ctrl_0_up_valid = 1'b1;
  assign pip_ctrl_0_down_valid = pip_ctrl_0_up_valid;
  assign pip_ctrl_1_down_valid = pip_ctrl_1_up_valid;
  assign pip_ctrl_2_down_valid = pip_ctrl_2_up_valid;
  assign pip_ctrl_3_down_valid = pip_ctrl_3_up_valid;
  assign pip_ctrl_0_down_isValid = pip_ctrl_0_down_valid;
  assign pip_ctrl_1_down_isValid = pip_ctrl_1_down_valid;
  assign pip_ctrl_2_down_isValid = pip_ctrl_2_down_valid;
  always @(posedge clk or negedge rst) begin
    if(!rst) begin
      pip_ctrl_1_up_valid <= 1'b0;
      pip_ctrl_2_up_valid <= 1'b0;
      pip_ctrl_3_up_valid <= 1'b0;
    end else begin
      pip_ctrl_1_up_valid <= pip_ctrl_0_down_isValid;
      pip_ctrl_2_up_valid <= pip_ctrl_1_down_isValid;
      pip_ctrl_3_up_valid <= pip_ctrl_2_down_isValid;
    end
  end


endmodule
