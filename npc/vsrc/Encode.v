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
  output reg  [1:0]    com_exmem_r_len,
  output reg  [31:0]   com_csr_w_data,
  input  wire [31:0]   com_csr_r_data,
  output reg           com_csr_vaild,
  output wire [11:0]   com_csr_csr_sel,
  output reg           com_csr_ecall,
  output wire [31:0]   com_csr_w_pc,
  input  wire [31:0]   com_csr_r_pc,
  output reg           com_csr_mret
);

  wire       [11:0]   _zz_imm_I;
  wire       [11:0]   _zz_imm_S;
  wire       [12:0]   _zz_imm_B;
  wire       [20:0]   _zz_imm_J;
  wire       [31:0]   _zz_com_grp_rd;
  wire       [31:0]   _zz_com_grp_rd_1;
  wire       [31:0]   _zz_com_grp_rd_2;
  wire       [31:0]   _zz_com_grp_rd_3;
  wire       [31:0]   _zz_com_grp_rd_4;
  wire       [31:0]   _zz_com_grp_rd_5;
  wire       [62:0]   _zz_com_grp_rd_6;
  wire       [62:0]   _zz_com_grp_rd_7;
  wire       [31:0]   _zz_com_grp_rd_8;
  wire       [31:0]   _zz_com_grp_rd_9;
  wire       [31:0]   _zz_com_grp_rd_10;
  wire       [31:0]   _zz_com_grp_rd_11;
  wire       [31:0]   _zz_com_grp_rd_12;
  wire       [31:0]   _zz_com_grp_rd_13;
  wire       [0:0]    _zz_com_grp_rd_14;
  wire       [31:0]   _zz_com_grp_rd_15;
  wire       [31:0]   _zz_com_grp_rd_16;
  wire       [0:0]    _zz_com_grp_rd_17;
  wire       [31:0]   _zz_com_grp_rd_18;
  wire       [31:0]   _zz_com_grp_rd_19;
  wire       [62:0]   _zz_com_grp_rd_20;
  wire       [62:0]   _zz_com_grp_rd_21;
  wire       [31:0]   _zz_com_grp_rd_22;
  wire       [31:0]   _zz_com_grp_rd_23;
  wire       [31:0]   _zz_com_grp_rd_24;
  wire       [31:0]   _zz_com_grp_rd_25;
  wire       [31:0]   _zz_com_grp_rd_26;
  wire       [31:0]   _zz_com_grp_rd_27;
  wire       [0:0]    _zz_com_grp_rd_28;
  wire       [31:0]   _zz_com_grp_rd_29;
  wire       [0:0]    _zz_com_grp_rd_30;
  wire       [31:0]   _zz_com_exmem_r_addr;
  wire       [31:0]   _zz_com_grp_rd_31;
  wire       [7:0]    _zz_com_grp_rd_32;
  wire       [31:0]   _zz_com_exmem_r_addr_1;
  wire       [31:0]   _zz_com_grp_rd_33;
  wire       [15:0]   _zz_com_grp_rd_34;
  wire       [31:0]   _zz_com_exmem_r_addr_2;
  wire       [31:0]   _zz_com_exmem_r_addr_3;
  wire       [31:0]   _zz_com_exmem_r_addr_4;
  wire       [31:0]   _zz_com_pc_nPC;
  wire       [31:0]   _zz_com_grp_rd_35;
  wire       [31:0]   _zz_com_exmem_w_addr;
  wire       [31:0]   _zz_com_exmem_w_addr_1;
  wire       [31:0]   _zz_com_exmem_w_addr_2;
  wire       [31:0]   _zz_com_pc_nPC_1;
  wire       [31:0]   _zz_com_pc_nPC_2;
  wire       [31:0]   _zz_when;
  wire       [31:0]   _zz_when_1;
  wire       [31:0]   _zz_com_pc_nPC_3;
  wire       [31:0]   _zz_when_2;
  wire       [31:0]   _zz_when_3;
  wire       [31:0]   _zz_com_pc_nPC_4;
  wire       [31:0]   _zz_com_pc_nPC_5;
  wire       [31:0]   _zz_com_pc_nPC_6;
  wire       [31:0]   _zz_com_grp_rd_36;
  wire       [31:0]   _zz_com_pc_nPC_7;
  wire       [31:0]   _zz_com_grp_rd_37;
  reg                 ErrorReg;
  reg                 ebreak;
  wire       [31:0]   code;
  wire       [4:0]    num_rs1;
  wire       [4:0]    num_rs2;
  wire       [4:0]    num_rd;
  wire       [31:0]   imm_I;
  wire       [31:0]   imm_U;
  wire       [31:0]   imm_S;
  wire       [31:0]   imm_B;
  wire       [31:0]   imm_J;
  wire       [11:0]   csr_csr_code;
  wire       [31:0]   csr_imm;

  assign _zz_imm_I = code[31 : 20];
  assign _zz_imm_S = {code[31 : 25],code[11 : 7]};
  assign _zz_imm_B = {code[31],{code[7],{code[30 : 25],{code[11 : 8],1'b0}}}};
  assign _zz_imm_J = {code[31],{code[19 : 12],{code[20],{code[30 : 21],1'b0}}}};
  assign _zz_com_grp_rd = ($signed(_zz_com_grp_rd_1) + $signed(_zz_com_grp_rd_2));
  assign _zz_com_grp_rd_1 = com_grp_rs1;
  assign _zz_com_grp_rd_2 = com_grp_rs2;
  assign _zz_com_grp_rd_3 = ($signed(_zz_com_grp_rd_4) - $signed(_zz_com_grp_rd_5));
  assign _zz_com_grp_rd_4 = com_grp_rs1;
  assign _zz_com_grp_rd_5 = com_grp_rs2;
  assign _zz_com_grp_rd_6 = _zz_com_grp_rd_7;
  assign _zz_com_grp_rd_7 = ({31'd0,com_grp_rs1} <<< _zz_com_grp_rd_8[4 : 0]);
  assign _zz_com_grp_rd_8 = com_grp_rs2;
  assign _zz_com_grp_rd_9 = (com_grp_rs1 >>> _zz_com_grp_rd_10[4 : 0]);
  assign _zz_com_grp_rd_10 = com_grp_rs2;
  assign _zz_com_grp_rd_11 = ($signed(_zz_com_grp_rd_12) >>> _zz_com_grp_rd_13[4 : 0]);
  assign _zz_com_grp_rd_12 = com_grp_rs1;
  assign _zz_com_grp_rd_13 = com_grp_rs2;
  assign _zz_com_grp_rd_14 = ($signed(_zz_com_grp_rd_15) < $signed(_zz_com_grp_rd_16));
  assign _zz_com_grp_rd_15 = com_grp_rs1;
  assign _zz_com_grp_rd_16 = com_grp_rs2;
  assign _zz_com_grp_rd_17 = (com_grp_rs1 < com_grp_rs2);
  assign _zz_com_grp_rd_18 = ($signed(_zz_com_grp_rd_19) + $signed(imm_I));
  assign _zz_com_grp_rd_19 = com_grp_rs1;
  assign _zz_com_grp_rd_20 = _zz_com_grp_rd_21;
  assign _zz_com_grp_rd_21 = ({31'd0,com_grp_rs1} <<< _zz_com_grp_rd_22[4 : 0]);
  assign _zz_com_grp_rd_22 = imm_I;
  assign _zz_com_grp_rd_23 = (com_grp_rs1 >>> _zz_com_grp_rd_24[4 : 0]);
  assign _zz_com_grp_rd_24 = imm_I;
  assign _zz_com_grp_rd_25 = ($signed(_zz_com_grp_rd_26) >>> _zz_com_grp_rd_27[4 : 0]);
  assign _zz_com_grp_rd_26 = com_grp_rs1;
  assign _zz_com_grp_rd_27 = imm_I;
  assign _zz_com_grp_rd_28 = ($signed(_zz_com_grp_rd_29) < $signed(imm_I));
  assign _zz_com_grp_rd_29 = com_grp_rs1;
  assign _zz_com_grp_rd_30 = (com_grp_rs1 < imm_I);
  assign _zz_com_exmem_r_addr = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_32 = com_exmem_r_data[7 : 0];
  assign _zz_com_grp_rd_31 = {{24{_zz_com_grp_rd_32[7]}}, _zz_com_grp_rd_32};
  assign _zz_com_exmem_r_addr_1 = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_34 = com_exmem_r_data[15 : 0];
  assign _zz_com_grp_rd_33 = {{16{_zz_com_grp_rd_34[15]}}, _zz_com_grp_rd_34};
  assign _zz_com_exmem_r_addr_2 = (com_grp_rs1 + imm_I);
  assign _zz_com_exmem_r_addr_3 = (com_grp_rs1 + imm_I);
  assign _zz_com_exmem_r_addr_4 = (com_grp_rs1 + imm_I);
  assign _zz_com_pc_nPC = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_35 = (com_pc_PC + 32'h00000004);
  assign _zz_com_exmem_w_addr = (com_grp_rs1 + imm_S);
  assign _zz_com_exmem_w_addr_1 = (com_grp_rs1 + imm_S);
  assign _zz_com_exmem_w_addr_2 = (com_grp_rs1 + imm_S);
  assign _zz_com_pc_nPC_1 = (com_pc_PC + imm_B);
  assign _zz_com_pc_nPC_2 = (com_pc_PC + imm_B);
  assign _zz_when = com_grp_rs1;
  assign _zz_when_1 = com_grp_rs2;
  assign _zz_com_pc_nPC_3 = (com_pc_PC + imm_B);
  assign _zz_when_2 = com_grp_rs2;
  assign _zz_when_3 = com_grp_rs1;
  assign _zz_com_pc_nPC_4 = (com_pc_PC + imm_B);
  assign _zz_com_pc_nPC_5 = (com_pc_PC + imm_B);
  assign _zz_com_pc_nPC_6 = (com_pc_PC + imm_B);
  assign _zz_com_grp_rd_36 = (com_pc_PC + imm_U);
  assign _zz_com_pc_nPC_7 = (com_pc_PC + imm_J);
  assign _zz_com_grp_rd_37 = (com_pc_PC + 32'h00000004);
  ebreak_fun ebreak_module (
    .ebreak_flag (ebreak)  //i
  );
  always @(*) begin
    ErrorReg = 1'b0;
    com_grp_rd_vaild = 1'b1;
    com_grp_rd = 32'h0;
    ebreak = 1'b0;
    com_exmem_w_vaild = 1'b0;
    com_exmem_w_data = 32'h0;
    com_exmem_w_addr = 32'h0;
    com_exmem_w_len = 2'b00;
    com_exmem_r_ready = 1'b0;
    com_exmem_r_addr = 32'h0;
    com_exmem_r_len = 2'b00;
    com_pc_nPC = 32'h0;
    com_pc_nPC_vaild = 1'b0;
    com_csr_vaild = 1'b0;
    com_csr_w_data = 32'h0;
    com_csr_ecall = 1'b0;
    com_csr_mret = 1'b0;
    casez(code)
      32'b0000000??????????000?????0110011 : begin
        com_grp_rd = _zz_com_grp_rd;
      end
      32'b0100000??????????000?????0110011 : begin
        com_grp_rd = _zz_com_grp_rd_3;
      end
      32'b0000000??????????111?????0110011 : begin
        com_grp_rd = (com_grp_rs1 & com_grp_rs2);
      end
      32'b0000000??????????110?????0110011 : begin
        com_grp_rd = (com_grp_rs1 | com_grp_rs2);
      end
      32'b0000000??????????100?????0110011 : begin
        com_grp_rd = (com_grp_rs1 ^ com_grp_rs2);
      end
      32'b0000000??????????001?????0110011 : begin
        com_grp_rd = _zz_com_grp_rd_6[31:0];
      end
      32'b0000000??????????101?????0110011 : begin
        com_grp_rd = _zz_com_grp_rd_9;
      end
      32'b0100000??????????101?????0110011 : begin
        com_grp_rd = _zz_com_grp_rd_11;
      end
      32'b0000000??????????010?????0110011 : begin
        com_grp_rd = {31'd0, _zz_com_grp_rd_14};
      end
      32'b0000000??????????011?????0110011 : begin
        com_grp_rd = {31'd0, _zz_com_grp_rd_17};
      end
      32'b?????????????????000?????0010011 : begin
        com_grp_rd = _zz_com_grp_rd_18;
      end
      32'b?????????????????100?????0010011 : begin
        com_grp_rd = (com_grp_rs1 ^ imm_I);
      end
      32'b?????????????????110?????0010011 : begin
        com_grp_rd = (com_grp_rs1 | imm_I);
      end
      32'b?????????????????111?????0010011 : begin
        com_grp_rd = (com_grp_rs1 & imm_I);
      end
      32'b0000000??????????001?????0010011 : begin
        com_grp_rd = _zz_com_grp_rd_20[31:0];
      end
      32'b0000000??????????101?????0010011 : begin
        com_grp_rd = _zz_com_grp_rd_23;
      end
      32'b0100000??????????101?????0010011 : begin
        com_grp_rd = _zz_com_grp_rd_25;
      end
      32'b?????????????????010?????0010011 : begin
        com_grp_rd = {31'd0, _zz_com_grp_rd_28};
      end
      32'b?????????????????011?????0010011 : begin
        com_grp_rd = {31'd0, _zz_com_grp_rd_30};
      end
      32'b?????????????????000?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b00;
        com_grp_rd = _zz_com_grp_rd_31;
      end
      32'b?????????????????001?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr_1;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b01;
        com_grp_rd = _zz_com_grp_rd_33;
      end
      32'b?????????????????010?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr_2;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b11;
        com_grp_rd = com_exmem_r_data;
      end
      32'b?????????????????100?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr_3;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b00;
        com_grp_rd = com_exmem_r_data;
      end
      32'b?????????????????101?????0000011 : begin
        com_exmem_r_addr = _zz_com_exmem_r_addr_4;
        com_exmem_r_ready = 1'b1;
        com_exmem_r_len = 2'b01;
        com_grp_rd = com_exmem_r_data;
      end
      32'b?????????????????000?????1100111 : begin
        com_pc_nPC = _zz_com_pc_nPC;
        com_pc_nPC_vaild = 1'b1;
        com_grp_rd = _zz_com_grp_rd_35;
      end
      32'b?????????????????010?????0100011 : begin
        com_exmem_w_addr = _zz_com_exmem_w_addr;
        com_exmem_w_data = com_grp_rs2;
        com_exmem_w_vaild = 1'b1;
        com_exmem_w_len = 2'b11;
        com_grp_rd_vaild = 1'b0;
      end
      32'b?????????????????001?????0100011 : begin
        com_exmem_w_addr = _zz_com_exmem_w_addr_1;
        com_exmem_w_data = com_grp_rs2;
        com_exmem_w_vaild = 1'b1;
        com_exmem_w_len = 2'b01;
        com_grp_rd_vaild = 1'b0;
      end
      32'b?????????????????000?????0100011 : begin
        com_exmem_w_addr = _zz_com_exmem_w_addr_2;
        com_exmem_w_data = com_grp_rs2;
        com_exmem_w_vaild = 1'b1;
        com_exmem_w_len = 2'b00;
        com_grp_rd_vaild = 1'b0;
      end
      32'b?????????????????000?????1100011 : begin
        com_grp_rd_vaild = 1'b0;
        if(((com_grp_rs1 == com_grp_rs2) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_1;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????001?????1100011 : begin
        com_grp_rd_vaild = 1'b0;
        if(((com_grp_rs1 != com_grp_rs2) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_2;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????100?????1100011 : begin
        com_grp_rd_vaild = 1'b0;
        if((($signed(_zz_when) < $signed(_zz_when_1)) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_3;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????101?????1100011 : begin
        com_grp_rd_vaild = 1'b0;
        if((($signed(_zz_when_2) <= $signed(_zz_when_3)) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_4;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????110?????1100011 : begin
        com_grp_rd_vaild = 1'b0;
        if(((com_grp_rs1 < com_grp_rs2) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_5;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????111?????1100011 : begin
        com_grp_rd_vaild = 1'b0;
        if(((com_grp_rs2 <= com_grp_rs1) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_6;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????????????0110111 : begin
        com_grp_rd = imm_U;
      end
      32'b?????????????????????????0010111 : begin
        com_grp_rd = _zz_com_grp_rd_36;
      end
      32'b?????????????????????????1101111 : begin
        com_pc_nPC = _zz_com_pc_nPC_7;
        com_pc_nPC_vaild = 1'b1;
        com_grp_rd = _zz_com_grp_rd_37;
      end
      32'b?????????????????001?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_grp_rd = com_csr_r_data;
        com_csr_w_data = com_grp_rs1;
      end
      32'b?????????????????010?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_grp_rd = com_csr_r_data;
        com_csr_w_data = (com_grp_rs1 | com_csr_r_data);
      end
      32'b?????????????????011?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_grp_rd = com_csr_r_data;
        com_csr_w_data = (com_csr_r_data & (~ com_grp_rs1));
      end
      32'b?????????????????101?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_grp_rd = com_csr_r_data;
        com_csr_w_data = csr_imm;
      end
      32'b?????????????????110?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_grp_rd = com_csr_r_data;
        com_csr_w_data = (csr_imm | com_csr_r_data);
      end
      32'b?????????????????111?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_grp_rd = com_csr_r_data;
        com_csr_w_data = (csr_imm & (~ com_csr_r_data));
      end
      32'h00100073 : begin
        ebreak = 1'b1;
      end
      32'h00000073 : begin
        com_csr_ecall = 1'b1;
        com_pc_nPC = com_csr_r_pc;
        com_pc_nPC_vaild = 1'b1;
        com_grp_rd_vaild = 1'b0;
      end
      32'h30200073 : begin
        com_csr_mret = 1'b1;
        com_pc_nPC = com_csr_r_pc;
        com_pc_nPC_vaild = 1'b1;
        com_grp_rd_vaild = 1'b0;
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
  assign imm_B = {{19{_zz_imm_B[12]}}, _zz_imm_B};
  assign imm_J = {{11{_zz_imm_J[20]}}, _zz_imm_J};
  assign com_grp_rs1_sel = num_rs1;
  assign com_grp_rs2_sel = num_rs2;
  assign com_grp_rd_sel = num_rd;
  assign csr_csr_code = code[31 : 20];
  assign csr_imm = {27'h0,code[19 : 15]};
  assign com_csr_csr_sel = csr_csr_code;
  assign com_csr_w_pc = com_pc_PC;

endmodule
