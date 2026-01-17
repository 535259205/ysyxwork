// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : Encode

`timescale 1ns/1ps 
module Encode (
  input  wire          flush,
  output reg  [31:0]   com_grp_rd,
  output wire [4:0]    com_grp_rd_sel,
  output reg           com_grp_rd_vaild,
  input  wire [31:0]   com_grp_rs1,
  output wire [4:0]    com_grp_rs1_sel,
  input  wire [31:0]   com_grp_rs2,
  output wire [4:0]    com_grp_rs2_sel,
  input  wire [31:0]   com_pc_code,
  output reg  [31:0]   com_pc_nPC,
  output reg           com_pc_nPC_vaild,
  input  wire [31:0]   com_pc_PC,
  output reg           com_exmem_w_vaild,
  input  wire          com_exmem_w_ready,
  output reg  [31:0]   com_exmem_w_data,
  output reg  [31:0]   com_exmem_w_addr,
  output reg  [1:0]    com_exmem_w_len,
  input  wire          com_exmem_r_vaild,
  output reg           com_exmem_r_ready,
  input  wire [31:0]   com_exmem_r_data,
  output reg  [31:0]   com_exmem_r_addr,
  output reg  [1:0]    com_exmem_r_len
);

  wire       [11:0]   _zz_imm_I;
  wire       [11:0]   _zz_imm_S;
  wire       [31:0]   _zz_com_grp_rd;
  wire       [31:0]   _zz_com_grp_rd_1;
  wire       [31:0]   _zz_com_grp_rd_2;
  wire       [31:0]   _zz_com_exmem_r_addr;
  wire       [31:0]   _zz_com_exmem_r_addr_1;
  wire       [31:0]   _zz_com_exmem_w_addr;
  wire       [31:0]   _zz_com_exmem_w_addr_1;
  wire       [31:0]   _zz_com_pc_nPC;
  wire       [31:0]   _zz_com_grp_rd_3;
  reg                 ErrorReg;
  reg                 ebreak;
  wire       [31:0]   code;
  wire       [4:0]    num_rs1;
  wire       [4:0]    num_rs2;
  wire       [4:0]    num_rd;
  wire       [31:0]   imm_I;
  wire       [31:0]   imm_U;
  wire       [31:0]   imm_S;

  assign _zz_imm_I = code[31 : 20];
  assign _zz_imm_S = {code[31 : 25],code[11 : 7]};
  assign _zz_com_grp_rd = (com_grp_rs1 + com_grp_rs2);
  assign _zz_com_grp_rd_1 = ($signed(_zz_com_grp_rd_2) + $signed(imm_I));
  assign _zz_com_grp_rd_2 = com_grp_rs1;
  assign _zz_com_exmem_r_addr = (com_grp_rs1 + imm_I);
  assign _zz_com_exmem_r_addr_1 = (com_grp_rs1 + imm_I);
  assign _zz_com_exmem_w_addr = (com_grp_rs1 + imm_S);
  assign _zz_com_exmem_w_addr_1 = (com_grp_rs1 + imm_S);
  assign _zz_com_pc_nPC = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_3 = (com_pc_PC + 32'h00000004);
  ebreak_fun ebreak_module (
    .ebreak_flag (ebreak)  //i
  );
  always @(*) begin
    ErrorReg = 1'b0;
    com_exmem_w_vaild = 1'b0;
    com_exmem_w_data = 32'h0;
    com_exmem_w_addr = 32'h0;
    com_exmem_w_len = 2'b00;
    com_exmem_r_ready = 1'b0;
    com_exmem_r_addr = 32'h0;
    com_exmem_r_len = 2'b00;
    com_grp_rd_vaild = 1'b1;
    com_grp_rd = 32'h0;
    com_pc_nPC = 32'h0;
    com_pc_nPC_vaild = 1'b0;
    ebreak = 1'b0;
    casez(code)
      32'b0000000??????????000?????0110011 : begin
        com_grp_rd = _zz_com_grp_rd;
      end
      32'b?????????????????000?????0010011 : begin
        com_grp_rd = _zz_com_grp_rd_1;
      end
      32'b?????????????????010?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b11;
        com_grp_rd = com_exmem_r_data;
      end
      32'b?????????????????100?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr_1;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b00;
        com_grp_rd = com_exmem_r_data;
      end
      32'b?????????????????010?????0100011 : begin
        com_exmem_w_addr = _zz_com_exmem_w_addr;
        com_exmem_w_data = com_grp_rs2;
        com_exmem_w_vaild = 1'b1;
        com_exmem_w_len = 2'b11;
        com_grp_rd_vaild = 1'b0;
      end
      32'b?????????????????000?????0100011 : begin
        com_exmem_w_addr = _zz_com_exmem_w_addr_1;
        com_exmem_w_data = com_grp_rs2;
        com_exmem_w_vaild = 1'b1;
        com_exmem_w_len = 2'b00;
        com_grp_rd_vaild = 1'b0;
      end
      32'b?????????????????000?????1100111 : begin
        com_pc_nPC = _zz_com_pc_nPC;
        com_pc_nPC_vaild = 1'b1;
        com_grp_rd = _zz_com_grp_rd_3;
      end
      32'b?????????????????????????0110111 : begin
        com_grp_rd = imm_U;
      end
      32'h00100073 : begin
        ebreak = 1'b1;
      end
      default : begin
        ErrorReg = 1'b1;
      end
    endcase
  end

  assign code = (flush ? 32'h00000013 : com_pc_code);
  assign num_rs1 = code[19 : 15];
  assign num_rs2 = code[24 : 20];
  assign num_rd = code[11 : 7];
  assign imm_I = {{20{_zz_imm_I[11]}}, _zz_imm_I};
  assign imm_U = {code[31 : 12],12'h0};
  assign imm_S = {{20{_zz_imm_S[11]}}, _zz_imm_S};
  assign com_grp_rs1_sel = num_rs1;
  assign com_grp_rs2_sel = num_rs2;
  assign com_grp_rd_sel = num_rd;

endmodule
