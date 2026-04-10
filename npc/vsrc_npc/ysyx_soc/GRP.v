// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : GRP

`timescale 1ns/1ps 
module GRP (
  input  wire [31:0]   com_encode_rd,
  input  wire [4:0]    com_encode_rd_sel,
  input  wire          com_encode_rd_vaild,
  output reg  [31:0]   com_encode_rs1,
  input  wire [4:0]    com_encode_rs1_sel,
  output reg  [31:0]   com_encode_rs2,
  input  wire [4:0]    com_encode_rs2_sel,
  input  wire          w_vaild,
  input  wire          clock,
  input  wire          reset
);

  reg        [31:0]   _zz_com_encode_rs1;
  reg        [31:0]   _zz_com_encode_rs2;
  reg        [31:0]   reg_0;
  reg        [31:0]   reg_1;
  reg        [31:0]   reg_2;
  reg        [31:0]   reg_3;
  reg        [31:0]   reg_4;
  reg        [31:0]   reg_5;
  reg        [31:0]   reg_6;
  reg        [31:0]   reg_7;
  reg        [31:0]   reg_8;
  reg        [31:0]   reg_9;
  reg        [31:0]   reg_10;
  reg        [31:0]   reg_11;
  reg        [31:0]   reg_12;
  reg        [31:0]   reg_13;
  reg        [31:0]   reg_14;
  reg        [31:0]   reg_15;
  reg        [31:0]   reg_16;
  reg        [31:0]   reg_17;
  reg        [31:0]   reg_18;
  reg        [31:0]   reg_19;
  reg        [31:0]   reg_20;
  reg        [31:0]   reg_21;
  reg        [31:0]   reg_22;
  reg        [31:0]   reg_23;
  reg        [31:0]   reg_24;
  reg        [31:0]   reg_25;
  reg        [31:0]   reg_26;
  reg        [31:0]   reg_27;
  reg        [31:0]   reg_28;
  reg        [31:0]   reg_29;
  reg        [31:0]   reg_30;
  reg        [31:0]   reg_31;
  wire                rd_vaild;
  wire       [31:0]   _zz_1;

  my_debug_2 debug (
    .data_0  (reg_0[31:0] ), //i
    .data_1  (reg_1[31:0] ), //i
    .data_2  (reg_2[31:0] ), //i
    .data_3  (reg_3[31:0] ), //i
    .data_4  (reg_4[31:0] ), //i
    .data_5  (reg_5[31:0] ), //i
    .data_6  (reg_6[31:0] ), //i
    .data_7  (reg_7[31:0] ), //i
    .data_8  (reg_8[31:0] ), //i
    .data_9  (reg_9[31:0] ), //i
    .data_10 (reg_10[31:0]), //i
    .data_11 (reg_11[31:0]), //i
    .data_12 (reg_12[31:0]), //i
    .data_13 (reg_13[31:0]), //i
    .data_14 (reg_14[31:0]), //i
    .data_15 (reg_15[31:0]), //i
    .data_16 (reg_16[31:0]), //i
    .data_17 (reg_17[31:0]), //i
    .data_18 (reg_18[31:0]), //i
    .data_19 (reg_19[31:0]), //i
    .data_20 (reg_20[31:0]), //i
    .data_21 (reg_21[31:0]), //i
    .data_22 (reg_22[31:0]), //i
    .data_23 (reg_23[31:0]), //i
    .data_24 (reg_24[31:0]), //i
    .data_25 (reg_25[31:0]), //i
    .data_26 (reg_26[31:0]), //i
    .data_27 (reg_27[31:0]), //i
    .data_28 (reg_28[31:0]), //i
    .data_29 (reg_29[31:0]), //i
    .data_30 (reg_30[31:0]), //i
    .data_31 (reg_31[31:0]), //i
    .clock   (clock       )  //i
  );
  always @(*) begin
    case(com_encode_rs1_sel)
      5'b00000 : _zz_com_encode_rs1 = reg_0;
      5'b00001 : _zz_com_encode_rs1 = reg_1;
      5'b00010 : _zz_com_encode_rs1 = reg_2;
      5'b00011 : _zz_com_encode_rs1 = reg_3;
      5'b00100 : _zz_com_encode_rs1 = reg_4;
      5'b00101 : _zz_com_encode_rs1 = reg_5;
      5'b00110 : _zz_com_encode_rs1 = reg_6;
      5'b00111 : _zz_com_encode_rs1 = reg_7;
      5'b01000 : _zz_com_encode_rs1 = reg_8;
      5'b01001 : _zz_com_encode_rs1 = reg_9;
      5'b01010 : _zz_com_encode_rs1 = reg_10;
      5'b01011 : _zz_com_encode_rs1 = reg_11;
      5'b01100 : _zz_com_encode_rs1 = reg_12;
      5'b01101 : _zz_com_encode_rs1 = reg_13;
      5'b01110 : _zz_com_encode_rs1 = reg_14;
      5'b01111 : _zz_com_encode_rs1 = reg_15;
      5'b10000 : _zz_com_encode_rs1 = reg_16;
      5'b10001 : _zz_com_encode_rs1 = reg_17;
      5'b10010 : _zz_com_encode_rs1 = reg_18;
      5'b10011 : _zz_com_encode_rs1 = reg_19;
      5'b10100 : _zz_com_encode_rs1 = reg_20;
      5'b10101 : _zz_com_encode_rs1 = reg_21;
      5'b10110 : _zz_com_encode_rs1 = reg_22;
      5'b10111 : _zz_com_encode_rs1 = reg_23;
      5'b11000 : _zz_com_encode_rs1 = reg_24;
      5'b11001 : _zz_com_encode_rs1 = reg_25;
      5'b11010 : _zz_com_encode_rs1 = reg_26;
      5'b11011 : _zz_com_encode_rs1 = reg_27;
      5'b11100 : _zz_com_encode_rs1 = reg_28;
      5'b11101 : _zz_com_encode_rs1 = reg_29;
      5'b11110 : _zz_com_encode_rs1 = reg_30;
      default : _zz_com_encode_rs1 = reg_31;
    endcase
  end

  always @(*) begin
    case(com_encode_rs2_sel)
      5'b00000 : _zz_com_encode_rs2 = reg_0;
      5'b00001 : _zz_com_encode_rs2 = reg_1;
      5'b00010 : _zz_com_encode_rs2 = reg_2;
      5'b00011 : _zz_com_encode_rs2 = reg_3;
      5'b00100 : _zz_com_encode_rs2 = reg_4;
      5'b00101 : _zz_com_encode_rs2 = reg_5;
      5'b00110 : _zz_com_encode_rs2 = reg_6;
      5'b00111 : _zz_com_encode_rs2 = reg_7;
      5'b01000 : _zz_com_encode_rs2 = reg_8;
      5'b01001 : _zz_com_encode_rs2 = reg_9;
      5'b01010 : _zz_com_encode_rs2 = reg_10;
      5'b01011 : _zz_com_encode_rs2 = reg_11;
      5'b01100 : _zz_com_encode_rs2 = reg_12;
      5'b01101 : _zz_com_encode_rs2 = reg_13;
      5'b01110 : _zz_com_encode_rs2 = reg_14;
      5'b01111 : _zz_com_encode_rs2 = reg_15;
      5'b10000 : _zz_com_encode_rs2 = reg_16;
      5'b10001 : _zz_com_encode_rs2 = reg_17;
      5'b10010 : _zz_com_encode_rs2 = reg_18;
      5'b10011 : _zz_com_encode_rs2 = reg_19;
      5'b10100 : _zz_com_encode_rs2 = reg_20;
      5'b10101 : _zz_com_encode_rs2 = reg_21;
      5'b10110 : _zz_com_encode_rs2 = reg_22;
      5'b10111 : _zz_com_encode_rs2 = reg_23;
      5'b11000 : _zz_com_encode_rs2 = reg_24;
      5'b11001 : _zz_com_encode_rs2 = reg_25;
      5'b11010 : _zz_com_encode_rs2 = reg_26;
      5'b11011 : _zz_com_encode_rs2 = reg_27;
      5'b11100 : _zz_com_encode_rs2 = reg_28;
      5'b11101 : _zz_com_encode_rs2 = reg_29;
      5'b11110 : _zz_com_encode_rs2 = reg_30;
      default : _zz_com_encode_rs2 = reg_31;
    endcase
  end

  assign rd_vaild = (com_encode_rd_vaild && w_vaild);
  assign _zz_1 = ({31'd0,1'b1} <<< com_encode_rd_sel);
  always @(*) begin
    if((com_encode_rs1_sel != 5'h0)) begin
      com_encode_rs1 = _zz_com_encode_rs1;
    end else begin
      com_encode_rs1 = 32'h0;
    end
  end

  always @(*) begin
    if((com_encode_rs2_sel != 5'h0)) begin
      com_encode_rs2 = _zz_com_encode_rs2;
    end else begin
      com_encode_rs2 = 32'h0;
    end
  end

  always @(posedge clock) begin
    reg_0 <= 32'h0;
    if(rd_vaild) begin
      if((com_encode_rd_sel != 5'h0)) begin
        if(_zz_1[0]) begin
          reg_0 <= com_encode_rd;
        end
        if(_zz_1[1]) begin
          reg_1 <= com_encode_rd;
        end
        if(_zz_1[2]) begin
          reg_2 <= com_encode_rd;
        end
        if(_zz_1[3]) begin
          reg_3 <= com_encode_rd;
        end
        if(_zz_1[4]) begin
          reg_4 <= com_encode_rd;
        end
        if(_zz_1[5]) begin
          reg_5 <= com_encode_rd;
        end
        if(_zz_1[6]) begin
          reg_6 <= com_encode_rd;
        end
        if(_zz_1[7]) begin
          reg_7 <= com_encode_rd;
        end
        if(_zz_1[8]) begin
          reg_8 <= com_encode_rd;
        end
        if(_zz_1[9]) begin
          reg_9 <= com_encode_rd;
        end
        if(_zz_1[10]) begin
          reg_10 <= com_encode_rd;
        end
        if(_zz_1[11]) begin
          reg_11 <= com_encode_rd;
        end
        if(_zz_1[12]) begin
          reg_12 <= com_encode_rd;
        end
        if(_zz_1[13]) begin
          reg_13 <= com_encode_rd;
        end
        if(_zz_1[14]) begin
          reg_14 <= com_encode_rd;
        end
        if(_zz_1[15]) begin
          reg_15 <= com_encode_rd;
        end
        if(_zz_1[16]) begin
          reg_16 <= com_encode_rd;
        end
        if(_zz_1[17]) begin
          reg_17 <= com_encode_rd;
        end
        if(_zz_1[18]) begin
          reg_18 <= com_encode_rd;
        end
        if(_zz_1[19]) begin
          reg_19 <= com_encode_rd;
        end
        if(_zz_1[20]) begin
          reg_20 <= com_encode_rd;
        end
        if(_zz_1[21]) begin
          reg_21 <= com_encode_rd;
        end
        if(_zz_1[22]) begin
          reg_22 <= com_encode_rd;
        end
        if(_zz_1[23]) begin
          reg_23 <= com_encode_rd;
        end
        if(_zz_1[24]) begin
          reg_24 <= com_encode_rd;
        end
        if(_zz_1[25]) begin
          reg_25 <= com_encode_rd;
        end
        if(_zz_1[26]) begin
          reg_26 <= com_encode_rd;
        end
        if(_zz_1[27]) begin
          reg_27 <= com_encode_rd;
        end
        if(_zz_1[28]) begin
          reg_28 <= com_encode_rd;
        end
        if(_zz_1[29]) begin
          reg_29 <= com_encode_rd;
        end
        if(_zz_1[30]) begin
          reg_30 <= com_encode_rd;
        end
        if(_zz_1[31]) begin
          reg_31 <= com_encode_rd;
        end
      end
    end
  end


endmodule
