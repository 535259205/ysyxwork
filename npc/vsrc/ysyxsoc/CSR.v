// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : CSR

`timescale 1ns/1ps 
module CSR (
  input  wire [31:0]   w_data,
  input  wire          w_valid,
  output reg  [31:0]   r_data,
  input  wire [11:0]   csr_wsel,
  input  wire [11:0]   csr_rsel,
  input  wire          clock,
  input  wire          reset
);

  wire       [63:0]   _zz_mcycle;
  reg        [63:0]   mcycle;
  reg        [31:0]   mstatus;
  reg        [31:0]   mcause;
  reg        [31:0]   mepc;
  reg        [31:0]   mtvec;

  assign _zz_mcycle = (mcycle + 64'h0000000000000001);
  my_debug debug (
    .data_0 (mtvec[31:0]  ), //i
    .data_1 (mcause[31:0] ), //i
    .data_2 (mstatus[31:0]), //i
    .data_3 (mepc[31:0]   ), //i
    .clock  (clock        )  //i
  );
  always @(*) begin
    case(csr_rsel)
      12'hb00 : begin
        r_data = mcycle[31 : 0];
      end
      12'hb80 : begin
        r_data = mcycle[63 : 32];
      end
      12'h300 : begin
        r_data = mstatus;
      end
      12'h305 : begin
        r_data = mtvec;
      end
      12'h342 : begin
        r_data = mcause;
      end
      12'h341 : begin
        r_data = mepc;
      end
      12'hf11 : begin
        r_data = 32'h79737978;
      end
      12'hf12 : begin
        r_data = 32'h018ce19a;
      end
      default : begin
        r_data = 32'h0;
      end
    endcase
  end

  always @(posedge clock) begin
    if(reset) begin
      mcycle <= 64'h0;
      mstatus <= 32'h00001800;
      mcause <= 32'h0000000b;
      mepc <= 32'h0;
      mtvec <= 32'h30000000;
    end else begin
      mcycle <= _zz_mcycle;
      if(w_valid) begin
        case(csr_wsel)
          12'h300 : begin
            mstatus <= w_data;
          end
          12'h305 : begin
            mtvec <= w_data;
          end
          12'h342 : begin
            mcause <= w_data;
          end
          12'h341 : begin
            mepc <= w_data;
          end
          default : begin
          end
        endcase
      end
    end
  end


endmodule
