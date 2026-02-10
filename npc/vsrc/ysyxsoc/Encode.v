// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : Encode

`timescale 1ns/1ps 
module Encode (
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
  output reg  [31:0]   com_csr_w_data,
  input  wire [31:0]   com_csr_r_data,
  output reg           com_csr_vaild,
  output wire [11:0]   com_csr_csr_sel,
  output reg           com_csr_ecall,
  output wire [31:0]   com_csr_w_pc,
  input  wire [31:0]   com_csr_r_pc,
  output reg           com_csr_mret,
  output wire          axi4lite_aw_valid,
  input  wire          axi4lite_aw_ready,
  output reg  [31:0]   axi4lite_aw_payload_addr,
  output wire [2:0]    axi4lite_aw_payload_prot,
  output reg           axi4lite_w_valid,
  input  wire          axi4lite_w_ready,
  output reg  [31:0]   axi4lite_w_payload_data,
  output reg  [3:0]    axi4lite_w_payload_strb,
  input  wire          axi4lite_b_valid,
  output wire          axi4lite_b_ready,
  input  wire [1:0]    axi4lite_b_payload_resp,
  output wire          axi4lite_ar_valid,
  input  wire          axi4lite_ar_ready,
  output reg  [31:0]   axi4lite_ar_payload_addr,
  output wire [2:0]    axi4lite_ar_payload_prot,
  input  wire          axi4lite_r_valid,
  output reg           axi4lite_r_ready,
  input  wire [31:0]   axi4lite_r_payload_data,
  input  wire [1:0]    axi4lite_r_payload_resp,
  input  wire          vaild,
  input  wire          clock,
  input  wire          rst
);

  wire       [11:0]   _zz_imm_I;
  wire       [11:0]   _zz_imm_S;
  wire       [12:0]   _zz_imm_B;
  wire       [20:0]   _zz_imm_J;
  wire       [31:0]   _zz_com_grp_rd_4;
  wire       [31:0]   _zz_com_grp_rd_5;
  wire       [31:0]   _zz_com_grp_rd_6;
  wire       [31:0]   _zz_com_grp_rd_7;
  wire       [31:0]   _zz_com_grp_rd_8;
  wire       [31:0]   _zz_com_grp_rd_9;
  wire       [62:0]   _zz_com_grp_rd_10;
  wire       [62:0]   _zz_com_grp_rd_11;
  wire       [31:0]   _zz_com_grp_rd_12;
  wire       [31:0]   _zz_com_grp_rd_13;
  wire       [31:0]   _zz_com_grp_rd_14;
  wire       [31:0]   _zz_com_grp_rd_15;
  wire       [31:0]   _zz_com_grp_rd_16;
  wire       [31:0]   _zz_com_grp_rd_17;
  wire       [0:0]    _zz_com_grp_rd_18;
  wire       [31:0]   _zz_com_grp_rd_19;
  wire       [31:0]   _zz_com_grp_rd_20;
  wire       [0:0]    _zz_com_grp_rd_21;
  wire       [31:0]   _zz_com_grp_rd_22;
  wire       [31:0]   _zz_com_grp_rd_23;
  wire       [62:0]   _zz_com_grp_rd_24;
  wire       [62:0]   _zz_com_grp_rd_25;
  wire       [31:0]   _zz_com_grp_rd_26;
  wire       [31:0]   _zz_com_grp_rd_27;
  wire       [31:0]   _zz_com_grp_rd_28;
  wire       [31:0]   _zz_com_grp_rd_29;
  wire       [31:0]   _zz_com_grp_rd_30;
  wire       [31:0]   _zz_com_grp_rd_31;
  wire       [0:0]    _zz_com_grp_rd_32;
  wire       [31:0]   _zz_com_grp_rd_33;
  wire       [0:0]    _zz_com_grp_rd_34;
  wire       [31:0]   _zz_com_grp_rd_35;
  wire       [7:0]    _zz_com_grp_rd_36;
  wire       [31:0]   _zz_com_grp_rd_37;
  wire       [4:0]    _zz_com_grp_rd_38;
  wire       [31:0]   _zz_com_grp_rd_39;
  wire       [15:0]   _zz_com_grp_rd_40;
  wire       [31:0]   _zz_com_grp_rd_41;
  wire       [4:0]    _zz_com_grp_rd_42;
  wire       [31:0]   _zz_com_grp_rd_43;
  wire       [7:0]    _zz_com_grp_rd_44;
  wire       [31:0]   _zz_com_grp_rd_45;
  wire       [4:0]    _zz_com_grp_rd_46;
  wire       [31:0]   _zz_com_grp_rd_47;
  wire       [15:0]   _zz_com_grp_rd_48;
  wire       [31:0]   _zz_com_grp_rd_49;
  wire       [4:0]    _zz_com_grp_rd_50;
  wire       [31:0]   _zz_com_pc_nPC;
  wire       [31:0]   _zz_com_grp_rd_51;
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
  wire       [31:0]   _zz_com_grp_rd_52;
  wire       [31:0]   _zz_com_pc_nPC_7;
  wire       [31:0]   _zz_com_grp_rd_53;
  reg                 ErrorReg;
  reg                 ebreak;
  reg        [31:0]   code;
  wire       [4:0]    num_rs1;
  wire       [4:0]    num_rs2;
  wire       [4:0]    num_rd;
  wire       [31:0]   imm_I;
  wire       [31:0]   imm_U;
  wire       [31:0]   imm_S;
  wire       [31:0]   imm_B;
  wire       [31:0]   imm_J;
  reg                 mem_flag;
  wire                axi4lite_w_fire;
  wire                axi4lite_r_fire;
  reg        [31:0]   pc_pc;
  wire       [11:0]   csr_csr_code;
  wire       [31:0]   csr_imm;
  wire       [31:0]   _zz_com_grp_rd;
  wire       [31:0]   _zz_com_grp_rd_1;
  wire       [31:0]   _zz_com_grp_rd_2;
  wire       [31:0]   _zz_com_grp_rd_3;

  assign _zz_imm_I = code[31 : 20];
  assign _zz_imm_S = {code[31 : 25],code[11 : 7]};
  assign _zz_imm_B = {code[31],{code[7],{code[30 : 25],{code[11 : 8],1'b0}}}};
  assign _zz_imm_J = {code[31],{code[19 : 12],{code[20],{code[30 : 21],1'b0}}}};
  assign _zz_com_grp_rd_4 = ($signed(_zz_com_grp_rd_5) + $signed(_zz_com_grp_rd_6));
  assign _zz_com_grp_rd_5 = com_grp_rs1;
  assign _zz_com_grp_rd_6 = com_grp_rs2;
  assign _zz_com_grp_rd_7 = ($signed(_zz_com_grp_rd_8) - $signed(_zz_com_grp_rd_9));
  assign _zz_com_grp_rd_8 = com_grp_rs1;
  assign _zz_com_grp_rd_9 = com_grp_rs2;
  assign _zz_com_grp_rd_10 = _zz_com_grp_rd_11;
  assign _zz_com_grp_rd_11 = ({31'd0,com_grp_rs1} <<< _zz_com_grp_rd_12[4 : 0]);
  assign _zz_com_grp_rd_12 = com_grp_rs2;
  assign _zz_com_grp_rd_13 = (com_grp_rs1 >>> _zz_com_grp_rd_14[4 : 0]);
  assign _zz_com_grp_rd_14 = com_grp_rs2;
  assign _zz_com_grp_rd_15 = ($signed(_zz_com_grp_rd_16) >>> _zz_com_grp_rd_17[4 : 0]);
  assign _zz_com_grp_rd_16 = com_grp_rs1;
  assign _zz_com_grp_rd_17 = com_grp_rs2;
  assign _zz_com_grp_rd_18 = ($signed(_zz_com_grp_rd_19) < $signed(_zz_com_grp_rd_20));
  assign _zz_com_grp_rd_19 = com_grp_rs1;
  assign _zz_com_grp_rd_20 = com_grp_rs2;
  assign _zz_com_grp_rd_21 = (com_grp_rs1 < com_grp_rs2);
  assign _zz_com_grp_rd_22 = ($signed(_zz_com_grp_rd_23) + $signed(imm_I));
  assign _zz_com_grp_rd_23 = com_grp_rs1;
  assign _zz_com_grp_rd_24 = _zz_com_grp_rd_25;
  assign _zz_com_grp_rd_25 = ({31'd0,com_grp_rs1} <<< _zz_com_grp_rd_26[4 : 0]);
  assign _zz_com_grp_rd_26 = imm_I;
  assign _zz_com_grp_rd_27 = (com_grp_rs1 >>> _zz_com_grp_rd_28[4 : 0]);
  assign _zz_com_grp_rd_28 = imm_I;
  assign _zz_com_grp_rd_29 = ($signed(_zz_com_grp_rd_30) >>> _zz_com_grp_rd_31[4 : 0]);
  assign _zz_com_grp_rd_30 = com_grp_rs1;
  assign _zz_com_grp_rd_31 = imm_I;
  assign _zz_com_grp_rd_32 = ($signed(_zz_com_grp_rd_33) < $signed(imm_I));
  assign _zz_com_grp_rd_33 = com_grp_rs1;
  assign _zz_com_grp_rd_34 = (com_grp_rs1 < imm_I);
  assign _zz_com_grp_rd_36 = _zz_com_grp_rd_37[7 : 0];
  assign _zz_com_grp_rd_35 = {{24{_zz_com_grp_rd_36[7]}}, _zz_com_grp_rd_36};
  assign _zz_com_grp_rd_37 = (axi4lite_r_payload_data >>> _zz_com_grp_rd_38);
  assign _zz_com_grp_rd_38 = ({3'd0,_zz_com_grp_rd[1 : 0]} <<< 2'd3);
  assign _zz_com_grp_rd_40 = _zz_com_grp_rd_41[15 : 0];
  assign _zz_com_grp_rd_39 = {{16{_zz_com_grp_rd_40[15]}}, _zz_com_grp_rd_40};
  assign _zz_com_grp_rd_41 = (axi4lite_r_payload_data >>> _zz_com_grp_rd_42);
  assign _zz_com_grp_rd_42 = ({3'd0,_zz_com_grp_rd_1[1 : 0]} <<< 2'd3);
  assign _zz_com_grp_rd_44 = _zz_com_grp_rd_45[7 : 0];
  assign _zz_com_grp_rd_43 = {24'd0, _zz_com_grp_rd_44};
  assign _zz_com_grp_rd_45 = (axi4lite_r_payload_data >>> _zz_com_grp_rd_46);
  assign _zz_com_grp_rd_46 = ({3'd0,_zz_com_grp_rd_2[1 : 0]} <<< 2'd3);
  assign _zz_com_grp_rd_48 = _zz_com_grp_rd_49[15 : 0];
  assign _zz_com_grp_rd_47 = {16'd0, _zz_com_grp_rd_48};
  assign _zz_com_grp_rd_49 = (axi4lite_r_payload_data >>> _zz_com_grp_rd_50);
  assign _zz_com_grp_rd_50 = ({3'd0,_zz_com_grp_rd_3[1 : 0]} <<< 2'd3);
  assign _zz_com_pc_nPC = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_51 = (pc_pc + 32'h00000004);
  assign _zz_com_pc_nPC_1 = (pc_pc + imm_B);
  assign _zz_com_pc_nPC_2 = (pc_pc + imm_B);
  assign _zz_when = com_grp_rs1;
  assign _zz_when_1 = com_grp_rs2;
  assign _zz_com_pc_nPC_3 = (pc_pc + imm_B);
  assign _zz_when_2 = com_grp_rs2;
  assign _zz_when_3 = com_grp_rs1;
  assign _zz_com_pc_nPC_4 = (pc_pc + imm_B);
  assign _zz_com_pc_nPC_5 = (pc_pc + imm_B);
  assign _zz_com_pc_nPC_6 = (pc_pc + imm_B);
  assign _zz_com_grp_rd_52 = (pc_pc + imm_U);
  assign _zz_com_pc_nPC_7 = (pc_pc + imm_J);
  assign _zz_com_grp_rd_53 = (pc_pc + 32'h00000004);
  ebreak_fun ebreak_module (
    .ebreak_flag (ebreak)  //i
  );
  always @(*) begin
    ErrorReg = 1'b0;
    ebreak = 1'b0;
    axi4lite_w_valid = 1'b0;
    axi4lite_aw_payload_addr = 32'h0;
    axi4lite_w_payload_strb = 4'b0000;
    axi4lite_w_payload_data = 32'h0;
    axi4lite_r_ready = 1'b0;
    axi4lite_ar_payload_addr = 32'h0;
    com_pc_nPC = 32'h0;
    com_pc_nPC_vaild = 1'b0;
    com_csr_vaild = 1'b0;
    com_csr_w_data = 32'h0;
    com_csr_ecall = 1'b0;
    com_csr_mret = 1'b0;
    casez(code)
      32'b0000000??????????000?????0110011 : begin
      end
      32'b0100000??????????000?????0110011 : begin
      end
      32'b0000000??????????111?????0110011 : begin
      end
      32'b0000000??????????110?????0110011 : begin
      end
      32'b0000000??????????100?????0110011 : begin
      end
      32'b0000000??????????001?????0110011 : begin
      end
      32'b0000000??????????101?????0110011 : begin
      end
      32'b0100000??????????101?????0110011 : begin
      end
      32'b0000000??????????010?????0110011 : begin
      end
      32'b0000000??????????011?????0110011 : begin
      end
      32'b?????????????????000?????0010011 : begin
      end
      32'b?????????????????100?????0010011 : begin
      end
      32'b?????????????????110?????0010011 : begin
      end
      32'b?????????????????111?????0010011 : begin
      end
      32'b0000000??????????001?????0010011 : begin
      end
      32'b0000000??????????101?????0010011 : begin
      end
      32'b0100000??????????101?????0010011 : begin
      end
      32'b?????????????????010?????0010011 : begin
      end
      32'b?????????????????011?????0010011 : begin
      end
      32'b?????????????????000?????0000011 : begin
        axi4lite_ar_payload_addr = _zz_com_grp_rd;
        axi4lite_r_ready = mem_flag;
      end
      32'b?????????????????001?????0000011 : begin
        axi4lite_ar_payload_addr = _zz_com_grp_rd_1;
        axi4lite_r_ready = mem_flag;
      end
      32'b?????????????????010?????0000011 : begin
        axi4lite_ar_payload_addr = (com_grp_rs1 + imm_I);
        axi4lite_r_ready = mem_flag;
      end
      32'b?????????????????100?????0000011 : begin
        axi4lite_ar_payload_addr = _zz_com_grp_rd_2;
        axi4lite_r_ready = mem_flag;
      end
      32'b?????????????????101?????0000011 : begin
        axi4lite_ar_payload_addr = _zz_com_grp_rd_3;
        axi4lite_r_ready = mem_flag;
      end
      32'b?????????????????000?????1100111 : begin
        com_pc_nPC = _zz_com_pc_nPC;
        com_pc_nPC_vaild = 1'b1;
      end
      32'b?????????????????010?????0100011 : begin
        axi4lite_aw_payload_addr = (com_grp_rs1 + imm_S);
        axi4lite_w_payload_data = com_grp_rs2;
        axi4lite_w_valid = mem_flag;
        axi4lite_w_payload_strb = 4'b1111;
      end
      32'b?????????????????001?????0100011 : begin
        axi4lite_aw_payload_addr = (com_grp_rs1 + imm_S);
        axi4lite_w_payload_data = com_grp_rs2;
        axi4lite_w_valid = mem_flag;
        axi4lite_w_payload_strb = 4'b0011;
      end
      32'b?????????????????000?????0100011 : begin
        axi4lite_aw_payload_addr = (com_grp_rs1 + imm_S);
        axi4lite_w_payload_data = com_grp_rs2;
        axi4lite_w_valid = mem_flag;
        axi4lite_w_payload_strb = 4'b0001;
      end
      32'b?????????????????000?????1100011 : begin
        if(((com_grp_rs1 == com_grp_rs2) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_1;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????001?????1100011 : begin
        if(((com_grp_rs1 != com_grp_rs2) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_2;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????100?????1100011 : begin
        if((($signed(_zz_when) < $signed(_zz_when_1)) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_3;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????101?????1100011 : begin
        if((($signed(_zz_when_2) <= $signed(_zz_when_3)) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_4;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????110?????1100011 : begin
        if(((com_grp_rs1 < com_grp_rs2) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_5;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????111?????1100011 : begin
        if(((com_grp_rs2 <= com_grp_rs1) == 1'b1)) begin
          com_pc_nPC = _zz_com_pc_nPC_6;
          com_pc_nPC_vaild = 1'b1;
        end
      end
      32'b?????????????????????????0110111 : begin
      end
      32'b?????????????????????????0010111 : begin
      end
      32'b?????????????????????????1101111 : begin
        com_pc_nPC = _zz_com_pc_nPC_7;
        com_pc_nPC_vaild = 1'b1;
      end
      32'b?????????????????001?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_csr_w_data = com_grp_rs1;
      end
      32'b?????????????????010?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_csr_w_data = (com_grp_rs1 | com_csr_r_data);
      end
      32'b?????????????????011?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_csr_w_data = (com_csr_r_data & (~ com_grp_rs1));
      end
      32'b?????????????????101?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_csr_w_data = csr_imm;
      end
      32'b?????????????????110?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_csr_w_data = (csr_imm | com_csr_r_data);
      end
      32'b?????????????????111?????1110011 : begin
        com_csr_vaild = 1'b1;
        com_csr_w_data = (csr_imm & (~ com_csr_r_data));
      end
      32'h00100073 : begin
        ebreak = 1'b1;
      end
      32'h00000073 : begin
        com_csr_ecall = 1'b1;
        com_pc_nPC = com_csr_r_pc;
        com_pc_nPC_vaild = 1'b1;
      end
      32'h30200073 : begin
        com_csr_mret = 1'b1;
        com_pc_nPC = com_csr_r_pc;
        com_pc_nPC_vaild = 1'b1;
      end
      default : begin
        ErrorReg = 1'b1;
      end
    endcase
  end

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
  assign axi4lite_b_ready = 1'b1;
  assign axi4lite_aw_valid = axi4lite_w_valid;
  assign axi4lite_ar_valid = axi4lite_r_ready;
  assign axi4lite_w_fire = (axi4lite_w_valid && axi4lite_w_ready);
  assign axi4lite_r_fire = (axi4lite_r_valid && axi4lite_r_ready);
  assign csr_csr_code = code[31 : 20];
  assign csr_imm = {27'h0,code[19 : 15]};
  assign com_csr_csr_sel = csr_csr_code;
  assign com_csr_w_pc = com_pc_PC;
  assign _zz_com_grp_rd = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_1 = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_2 = (com_grp_rs1 + imm_I);
  assign _zz_com_grp_rd_3 = (com_grp_rs1 + imm_I);
  always @(posedge clock) begin
    if(rst) begin
      code <= 32'h00000013;
      mem_flag <= 1'b0;
      pc_pc <= 32'h80000000;
    end else begin
      if(vaild) begin
        code <= com_pc_code;
      end
      if(vaild) begin
        mem_flag <= 1'b1;
      end
      if((axi4lite_w_fire || axi4lite_r_fire)) begin
        mem_flag <= 1'b0;
      end
      if(vaild) begin
        pc_pc <= com_pc_PC;
      end
    end
  end

  always @(posedge clock) begin
    com_grp_rd_vaild <= 1'b1;
    com_grp_rd <= 32'h0;
    casez(code)
      32'b0000000??????????000?????0110011 : begin
        com_grp_rd <= _zz_com_grp_rd_4;
      end
      32'b0100000??????????000?????0110011 : begin
        com_grp_rd <= _zz_com_grp_rd_7;
      end
      32'b0000000??????????111?????0110011 : begin
        com_grp_rd <= (com_grp_rs1 & com_grp_rs2);
      end
      32'b0000000??????????110?????0110011 : begin
        com_grp_rd <= (com_grp_rs1 | com_grp_rs2);
      end
      32'b0000000??????????100?????0110011 : begin
        com_grp_rd <= (com_grp_rs1 ^ com_grp_rs2);
      end
      32'b0000000??????????001?????0110011 : begin
        com_grp_rd <= _zz_com_grp_rd_10[31:0];
      end
      32'b0000000??????????101?????0110011 : begin
        com_grp_rd <= _zz_com_grp_rd_13;
      end
      32'b0100000??????????101?????0110011 : begin
        com_grp_rd <= _zz_com_grp_rd_15;
      end
      32'b0000000??????????010?????0110011 : begin
        com_grp_rd <= {31'd0, _zz_com_grp_rd_18};
      end
      32'b0000000??????????011?????0110011 : begin
        com_grp_rd <= {31'd0, _zz_com_grp_rd_21};
      end
      32'b?????????????????000?????0010011 : begin
        com_grp_rd <= _zz_com_grp_rd_22;
      end
      32'b?????????????????100?????0010011 : begin
        com_grp_rd <= (com_grp_rs1 ^ imm_I);
      end
      32'b?????????????????110?????0010011 : begin
        com_grp_rd <= (com_grp_rs1 | imm_I);
      end
      32'b?????????????????111?????0010011 : begin
        com_grp_rd <= (com_grp_rs1 & imm_I);
      end
      32'b0000000??????????001?????0010011 : begin
        com_grp_rd <= _zz_com_grp_rd_24[31:0];
      end
      32'b0000000??????????101?????0010011 : begin
        com_grp_rd <= _zz_com_grp_rd_27;
      end
      32'b0100000??????????101?????0010011 : begin
        com_grp_rd <= _zz_com_grp_rd_29;
      end
      32'b?????????????????010?????0010011 : begin
        com_grp_rd <= {31'd0, _zz_com_grp_rd_32};
      end
      32'b?????????????????011?????0010011 : begin
        com_grp_rd <= {31'd0, _zz_com_grp_rd_34};
      end
      32'b?????????????????000?????0000011 : begin
        com_grp_rd <= _zz_com_grp_rd_35;
      end
      32'b?????????????????001?????0000011 : begin
        com_grp_rd <= _zz_com_grp_rd_39;
      end
      32'b?????????????????010?????0000011 : begin
        com_grp_rd <= axi4lite_r_payload_data;
      end
      32'b?????????????????100?????0000011 : begin
        com_grp_rd <= _zz_com_grp_rd_43;
      end
      32'b?????????????????101?????0000011 : begin
        com_grp_rd <= _zz_com_grp_rd_47;
      end
      32'b?????????????????000?????1100111 : begin
        com_grp_rd <= _zz_com_grp_rd_51;
      end
      32'b?????????????????010?????0100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????001?????0100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????000?????0100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????000?????1100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????001?????1100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????100?????1100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????101?????1100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????110?????1100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????111?????1100011 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'b?????????????????????????0110111 : begin
        com_grp_rd <= imm_U;
      end
      32'b?????????????????????????0010111 : begin
        com_grp_rd <= _zz_com_grp_rd_52;
      end
      32'b?????????????????????????1101111 : begin
        com_grp_rd <= _zz_com_grp_rd_53;
      end
      32'b?????????????????001?????1110011 : begin
        com_grp_rd <= com_csr_r_data;
      end
      32'b?????????????????010?????1110011 : begin
        com_grp_rd <= com_csr_r_data;
      end
      32'b?????????????????011?????1110011 : begin
        com_grp_rd <= com_csr_r_data;
      end
      32'b?????????????????101?????1110011 : begin
        com_grp_rd <= com_csr_r_data;
      end
      32'b?????????????????110?????1110011 : begin
        com_grp_rd <= com_csr_r_data;
      end
      32'b?????????????????111?????1110011 : begin
        com_grp_rd <= com_csr_r_data;
      end
      32'h00100073 : begin
      end
      32'h00000073 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      32'h30200073 : begin
        com_grp_rd_vaild <= 1'b0;
      end
      default : begin
      end
    endcase
  end


endmodule
