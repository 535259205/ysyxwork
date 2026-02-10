// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : CSR

`timescale 1ns/1ps 
module CSR (
  input  wire [31:0]   com_encode_w_data,
  output reg  [31:0]   com_encode_r_data,
  input  wire          com_encode_vaild,
  input  wire [11:0]   com_encode_csr_sel,
  input  wire          com_encode_ecall,
  input  wire [31:0]   com_encode_w_pc,
  output reg  [31:0]   com_encode_r_pc,
  input  wire          com_encode_mret,
  input  wire          clock,
  input  wire          rst
);

  wire       [31:0]   debug_data_4;
  wire       [31:0]   debug_data_5;
  wire       [63:0]   _zz_mcycle;
  wire       [31:0]   _zz_com_encode_r_pc;
  reg        [63:0]   mcycle;
  reg        [31:0]   mstatus;
  reg        [31:0]   mcause;
  reg        [31:0]   mepc;
  reg        [31:0]   mtvec;

  assign _zz_mcycle = (mcycle + 64'h0000000000000001);
  assign _zz_com_encode_r_pc = (mepc + 32'h00000004);
  my_debug_1 debug (
    .data_0 (mtvec[31:0]       ), //i
    .data_1 (mcause[31:0]      ), //i
    .data_2 (mstatus[31:0]     ), //i
    .data_3 (mepc[31:0]        ), //i
    .data_4 (debug_data_4[31:0]), //i
    .data_5 (debug_data_5[31:0]), //i
    .clock  (clock             )  //i
  );
  always @(*) begin
    com_encode_r_pc = 32'h0;
    if(com_encode_ecall) begin
      com_encode_r_pc = mtvec;
    end else begin
      if(com_encode_mret) begin
        com_encode_r_pc = _zz_com_encode_r_pc;
      end
    end
  end

  always @(*) begin
    case(com_encode_csr_sel)
      12'hb00 : begin
        com_encode_r_data = mcycle[31 : 0];
      end
      12'hb80 : begin
        com_encode_r_data = mcycle[63 : 32];
      end
      12'h300 : begin
        com_encode_r_data = mstatus;
      end
      12'h305 : begin
        com_encode_r_data = mtvec;
      end
      12'h342 : begin
        com_encode_r_data = mcause;
      end
      12'h341 : begin
        com_encode_r_data = mepc;
      end
      12'hf11 : begin
        com_encode_r_data = 32'h79737978;
      end
      12'hf12 : begin
        com_encode_r_data = 32'h018ce19a;
      end
      default : begin
        com_encode_r_data = 32'h0;
      end
    endcase
  end

  assign debug_data_4 = mcycle[31 : 0];
  assign debug_data_5 = mcycle[63 : 32];
  always @(posedge clock) begin
    if(rst) begin
      mcycle <= 64'h0;
      mstatus <= 32'h00001800;
      mcause <= 32'h0;
      mepc <= 32'h0;
      mtvec <= 32'h80000000;
    end else begin
      mcycle <= _zz_mcycle;
      if(com_encode_ecall) begin
        mcause <= 32'h00000008;
        mepc <= com_encode_w_pc;
      end else begin
        if(!com_encode_mret) begin
          if(com_encode_vaild) begin
            case(com_encode_csr_sel)
              12'h300 : begin
                mstatus <= com_encode_w_data;
              end
              12'h305 : begin
                mtvec <= com_encode_w_data;
              end
              12'h342 : begin
                mcause <= com_encode_w_data;
              end
              12'h341 : begin
                mepc <= com_encode_w_data;
              end
              default : begin
              end
            endcase
          end
        end
      end
    end
  end


endmodule
