// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIArbiter

`timescale 1ns/1ps 
module AXIArbiter (
  input  wire          AxiIn_0_aw_valid,
  output wire          AxiIn_0_aw_ready,
  input  wire [31:0]   AxiIn_0_aw_payload_addr,
  input  wire [2:0]    AxiIn_0_aw_payload_prot,
  input  wire          AxiIn_0_w_valid,
  output wire          AxiIn_0_w_ready,
  input  wire [31:0]   AxiIn_0_w_payload_data,
  input  wire [3:0]    AxiIn_0_w_payload_strb,
  output wire          AxiIn_0_b_valid,
  input  wire          AxiIn_0_b_ready,
  output wire [1:0]    AxiIn_0_b_payload_resp,
  input  wire          AxiIn_0_ar_valid,
  output reg           AxiIn_0_ar_ready,
  input  wire [31:0]   AxiIn_0_ar_payload_addr,
  input  wire [2:0]    AxiIn_0_ar_payload_prot,
  output reg           AxiIn_0_r_valid,
  input  wire          AxiIn_0_r_ready,
  output reg  [31:0]   AxiIn_0_r_payload_data,
  output reg  [1:0]    AxiIn_0_r_payload_resp,
  input  wire          AxiIn_1_aw_valid,
  output wire          AxiIn_1_aw_ready,
  input  wire [31:0]   AxiIn_1_aw_payload_addr,
  input  wire [2:0]    AxiIn_1_aw_payload_prot,
  input  wire          AxiIn_1_w_valid,
  output wire          AxiIn_1_w_ready,
  input  wire [31:0]   AxiIn_1_w_payload_data,
  input  wire [3:0]    AxiIn_1_w_payload_strb,
  output wire          AxiIn_1_b_valid,
  input  wire          AxiIn_1_b_ready,
  output wire [1:0]    AxiIn_1_b_payload_resp,
  input  wire          AxiIn_1_ar_valid,
  output reg           AxiIn_1_ar_ready,
  input  wire [31:0]   AxiIn_1_ar_payload_addr,
  input  wire [2:0]    AxiIn_1_ar_payload_prot,
  output reg           AxiIn_1_r_valid,
  input  wire          AxiIn_1_r_ready,
  output reg  [31:0]   AxiIn_1_r_payload_data,
  output reg  [1:0]    AxiIn_1_r_payload_resp,
  output reg           AxiOut_0_aw_valid,
  input  wire          AxiOut_0_aw_ready,
  output reg  [31:0]   AxiOut_0_aw_payload_addr,
  output reg  [2:0]    AxiOut_0_aw_payload_prot,
  output reg           AxiOut_0_w_valid,
  input  wire          AxiOut_0_w_ready,
  output reg  [31:0]   AxiOut_0_w_payload_data,
  output reg  [3:0]    AxiOut_0_w_payload_strb,
  input  wire          AxiOut_0_b_valid,
  output reg           AxiOut_0_b_ready,
  input  wire [1:0]    AxiOut_0_b_payload_resp,
  output wire          AxiOut_0_ar_valid,
  input  wire          AxiOut_0_ar_ready,
  output wire [31:0]   AxiOut_0_ar_payload_addr,
  output wire [2:0]    AxiOut_0_ar_payload_prot,
  input  wire          AxiOut_0_r_valid,
  output wire          AxiOut_0_r_ready,
  input  wire [31:0]   AxiOut_0_r_payload_data,
  input  wire [1:0]    AxiOut_0_r_payload_resp,
  output reg           AxiOut_1_aw_valid,
  input  wire          AxiOut_1_aw_ready,
  output reg  [31:0]   AxiOut_1_aw_payload_addr,
  output reg  [2:0]    AxiOut_1_aw_payload_prot,
  output reg           AxiOut_1_w_valid,
  input  wire          AxiOut_1_w_ready,
  output reg  [31:0]   AxiOut_1_w_payload_data,
  output reg  [3:0]    AxiOut_1_w_payload_strb,
  input  wire          AxiOut_1_b_valid,
  output reg           AxiOut_1_b_ready,
  input  wire [1:0]    AxiOut_1_b_payload_resp,
  output wire          AxiOut_1_ar_valid,
  input  wire          AxiOut_1_ar_ready,
  output wire [31:0]   AxiOut_1_ar_payload_addr,
  output wire [2:0]    AxiOut_1_ar_payload_prot,
  input  wire          AxiOut_1_r_valid,
  output wire          AxiOut_1_r_ready,
  input  wire [31:0]   AxiOut_1_r_payload_data,
  input  wire [1:0]    AxiOut_1_r_payload_resp,
  output reg           AxiOut_2_aw_valid,
  input  wire          AxiOut_2_aw_ready,
  output reg  [31:0]   AxiOut_2_aw_payload_addr,
  output reg  [2:0]    AxiOut_2_aw_payload_prot,
  output reg           AxiOut_2_w_valid,
  input  wire          AxiOut_2_w_ready,
  output reg  [31:0]   AxiOut_2_w_payload_data,
  output reg  [3:0]    AxiOut_2_w_payload_strb,
  input  wire          AxiOut_2_b_valid,
  output reg           AxiOut_2_b_ready,
  input  wire [1:0]    AxiOut_2_b_payload_resp,
  output wire          AxiOut_2_ar_valid,
  input  wire          AxiOut_2_ar_ready,
  output wire [31:0]   AxiOut_2_ar_payload_addr,
  output wire [2:0]    AxiOut_2_ar_payload_prot,
  input  wire          AxiOut_2_r_valid,
  output wire          AxiOut_2_r_ready,
  input  wire [31:0]   AxiOut_2_r_payload_data,
  input  wire [1:0]    AxiOut_2_r_payload_resp,
  output reg           AxiOut_3_aw_valid,
  input  wire          AxiOut_3_aw_ready,
  output reg  [31:0]   AxiOut_3_aw_payload_addr,
  output reg  [2:0]    AxiOut_3_aw_payload_prot,
  output reg           AxiOut_3_w_valid,
  input  wire          AxiOut_3_w_ready,
  output reg  [31:0]   AxiOut_3_w_payload_data,
  output reg  [3:0]    AxiOut_3_w_payload_strb,
  input  wire          AxiOut_3_b_valid,
  output reg           AxiOut_3_b_ready,
  input  wire [1:0]    AxiOut_3_b_payload_resp,
  output wire          AxiOut_3_ar_valid,
  input  wire          AxiOut_3_ar_ready,
  output wire [31:0]   AxiOut_3_ar_payload_addr,
  output wire [2:0]    AxiOut_3_ar_payload_prot,
  input  wire          AxiOut_3_r_valid,
  output wire          AxiOut_3_r_ready,
  input  wire [31:0]   AxiOut_3_r_payload_data,
  input  wire [1:0]    AxiOut_3_r_payload_resp,
  input  wire          r_sel,
  input  wire          clock,
  input  wire          reset
);

  reg                 _zz_AxiIn_1_w_ready;
  reg                 _zz_AxiIn_1_aw_ready;
  reg                 _zz_AxiIn_1_b_valid;
  reg        [1:0]    _zz_AxiIn_1_b_payload_resp;
  reg                 _zz_AxiOut_0_r_ready;
  reg                 _zz_AxiOut_0_ar_valid;
  reg        [31:0]   _zz_AxiOut_0_ar_payload_addr;
  reg        [2:0]    _zz_AxiOut_0_ar_payload_prot;
  reg        [1:0]    wsel;
  reg        [0:0]    rsel;
  wire                when_MyCpu_l710;
  wire                when_MyCpu_l712;
  wire                when_MyCpu_l714;
  wire       [3:0]    _zz_1;
  wire                _zz_2;
  wire                _zz_3;
  wire                _zz_4;
  wire                _zz_5;
  wire       [1:0]    _zz_6;
  wire                _zz_7;
  wire                _zz_8;

  always @(*) begin
    case(wsel)
      2'b00 : begin
        _zz_AxiIn_1_w_ready = AxiOut_0_w_ready;
        _zz_AxiIn_1_aw_ready = AxiOut_0_aw_ready;
        _zz_AxiIn_1_b_valid = AxiOut_0_b_valid;
        _zz_AxiIn_1_b_payload_resp = AxiOut_0_b_payload_resp;
      end
      2'b01 : begin
        _zz_AxiIn_1_w_ready = AxiOut_1_w_ready;
        _zz_AxiIn_1_aw_ready = AxiOut_1_aw_ready;
        _zz_AxiIn_1_b_valid = AxiOut_1_b_valid;
        _zz_AxiIn_1_b_payload_resp = AxiOut_1_b_payload_resp;
      end
      2'b10 : begin
        _zz_AxiIn_1_w_ready = AxiOut_2_w_ready;
        _zz_AxiIn_1_aw_ready = AxiOut_2_aw_ready;
        _zz_AxiIn_1_b_valid = AxiOut_2_b_valid;
        _zz_AxiIn_1_b_payload_resp = AxiOut_2_b_payload_resp;
      end
      default : begin
        _zz_AxiIn_1_w_ready = AxiOut_3_w_ready;
        _zz_AxiIn_1_aw_ready = AxiOut_3_aw_ready;
        _zz_AxiIn_1_b_valid = AxiOut_3_b_valid;
        _zz_AxiIn_1_b_payload_resp = AxiOut_3_b_payload_resp;
      end
    endcase
  end

  always @(*) begin
    case(rsel)
      1'b0 : begin
        _zz_AxiOut_0_r_ready = AxiIn_0_r_ready;
        _zz_AxiOut_0_ar_valid = AxiIn_0_ar_valid;
        _zz_AxiOut_0_ar_payload_addr = AxiIn_0_ar_payload_addr;
        _zz_AxiOut_0_ar_payload_prot = AxiIn_0_ar_payload_prot;
      end
      default : begin
        _zz_AxiOut_0_r_ready = AxiIn_1_r_ready;
        _zz_AxiOut_0_ar_valid = AxiIn_1_ar_valid;
        _zz_AxiOut_0_ar_payload_addr = AxiIn_1_ar_payload_addr;
        _zz_AxiOut_0_ar_payload_prot = AxiIn_1_ar_payload_prot;
      end
    endcase
  end

  assign AxiIn_0_aw_ready = 1'b0;
  assign AxiIn_0_w_ready = 1'b0;
  assign AxiIn_0_b_valid = 1'b0;
  assign AxiIn_0_b_payload_resp = 2'b10;
  always @(*) begin
    AxiIn_0_ar_ready = 1'b0;
    if(_zz_7) begin
      AxiIn_0_ar_ready = AxiOut_0_ar_ready;
    end
  end

  always @(*) begin
    AxiIn_0_r_valid = 1'b0;
    if(_zz_7) begin
      AxiIn_0_r_valid = AxiOut_0_r_valid;
    end
  end

  always @(*) begin
    AxiIn_0_r_payload_data = 32'h0;
    if(_zz_7) begin
      AxiIn_0_r_payload_data = AxiOut_0_r_payload_data;
    end
  end

  always @(*) begin
    AxiIn_0_r_payload_resp = 2'b10;
    if(_zz_7) begin
      AxiIn_0_r_payload_resp = AxiOut_0_r_payload_resp;
    end
  end

  always @(*) begin
    AxiIn_1_ar_ready = 1'b0;
    if(_zz_8) begin
      AxiIn_1_ar_ready = AxiOut_0_ar_ready;
    end
  end

  always @(*) begin
    AxiIn_1_r_valid = 1'b0;
    if(_zz_8) begin
      AxiIn_1_r_valid = AxiOut_0_r_valid;
    end
  end

  always @(*) begin
    AxiIn_1_r_payload_data = 32'h0;
    if(_zz_8) begin
      AxiIn_1_r_payload_data = AxiOut_0_r_payload_data;
    end
  end

  always @(*) begin
    AxiIn_1_r_payload_resp = 2'b10;
    if(_zz_8) begin
      AxiIn_1_r_payload_resp = AxiOut_0_r_payload_resp;
    end
  end

  always @(*) begin
    AxiOut_0_w_valid = 1'b0;
    if(_zz_2) begin
      AxiOut_0_w_valid = AxiIn_1_w_valid;
    end
  end

  always @(*) begin
    AxiOut_0_w_payload_data = 32'h0;
    if(_zz_2) begin
      AxiOut_0_w_payload_data = AxiIn_1_w_payload_data;
    end
  end

  always @(*) begin
    AxiOut_0_w_payload_strb = 4'b0000;
    if(_zz_2) begin
      AxiOut_0_w_payload_strb = AxiIn_1_w_payload_strb;
    end
  end

  always @(*) begin
    AxiOut_0_aw_valid = 1'b0;
    if(_zz_2) begin
      AxiOut_0_aw_valid = AxiIn_1_aw_valid;
    end
  end

  always @(*) begin
    AxiOut_0_aw_payload_addr = 32'h0;
    if(_zz_2) begin
      AxiOut_0_aw_payload_addr = AxiIn_1_aw_payload_addr;
    end
  end

  always @(*) begin
    AxiOut_0_aw_payload_prot = 3'b000;
    if(_zz_2) begin
      AxiOut_0_aw_payload_prot = AxiIn_1_aw_payload_prot;
    end
  end

  always @(*) begin
    AxiOut_0_b_ready = 1'b0;
    if(_zz_2) begin
      AxiOut_0_b_ready = AxiIn_1_b_ready;
    end
  end

  always @(*) begin
    AxiOut_1_w_valid = 1'b0;
    if(_zz_3) begin
      AxiOut_1_w_valid = AxiIn_1_w_valid;
    end
  end

  always @(*) begin
    AxiOut_1_w_payload_data = 32'h0;
    if(_zz_3) begin
      AxiOut_1_w_payload_data = AxiIn_1_w_payload_data;
    end
  end

  always @(*) begin
    AxiOut_1_w_payload_strb = 4'b0000;
    if(_zz_3) begin
      AxiOut_1_w_payload_strb = AxiIn_1_w_payload_strb;
    end
  end

  always @(*) begin
    AxiOut_1_aw_valid = 1'b0;
    if(_zz_3) begin
      AxiOut_1_aw_valid = AxiIn_1_aw_valid;
    end
  end

  always @(*) begin
    AxiOut_1_aw_payload_addr = 32'h0;
    if(_zz_3) begin
      AxiOut_1_aw_payload_addr = AxiIn_1_aw_payload_addr;
    end
  end

  always @(*) begin
    AxiOut_1_aw_payload_prot = 3'b000;
    if(_zz_3) begin
      AxiOut_1_aw_payload_prot = AxiIn_1_aw_payload_prot;
    end
  end

  always @(*) begin
    AxiOut_1_b_ready = 1'b0;
    if(_zz_3) begin
      AxiOut_1_b_ready = AxiIn_1_b_ready;
    end
  end

  assign AxiOut_1_ar_valid = 1'b0;
  assign AxiOut_1_ar_payload_addr = 32'h0;
  assign AxiOut_1_ar_payload_prot = 3'b000;
  assign AxiOut_1_r_ready = 1'b0;
  always @(*) begin
    AxiOut_2_w_valid = 1'b0;
    if(_zz_4) begin
      AxiOut_2_w_valid = AxiIn_1_w_valid;
    end
  end

  always @(*) begin
    AxiOut_2_w_payload_data = 32'h0;
    if(_zz_4) begin
      AxiOut_2_w_payload_data = AxiIn_1_w_payload_data;
    end
  end

  always @(*) begin
    AxiOut_2_w_payload_strb = 4'b0000;
    if(_zz_4) begin
      AxiOut_2_w_payload_strb = AxiIn_1_w_payload_strb;
    end
  end

  always @(*) begin
    AxiOut_2_aw_valid = 1'b0;
    if(_zz_4) begin
      AxiOut_2_aw_valid = AxiIn_1_aw_valid;
    end
  end

  always @(*) begin
    AxiOut_2_aw_payload_addr = 32'h0;
    if(_zz_4) begin
      AxiOut_2_aw_payload_addr = AxiIn_1_aw_payload_addr;
    end
  end

  always @(*) begin
    AxiOut_2_aw_payload_prot = 3'b000;
    if(_zz_4) begin
      AxiOut_2_aw_payload_prot = AxiIn_1_aw_payload_prot;
    end
  end

  always @(*) begin
    AxiOut_2_b_ready = 1'b0;
    if(_zz_4) begin
      AxiOut_2_b_ready = AxiIn_1_b_ready;
    end
  end

  assign AxiOut_2_ar_valid = 1'b0;
  assign AxiOut_2_ar_payload_addr = 32'h0;
  assign AxiOut_2_ar_payload_prot = 3'b000;
  assign AxiOut_2_r_ready = 1'b0;
  always @(*) begin
    AxiOut_3_w_valid = 1'b0;
    if(_zz_5) begin
      AxiOut_3_w_valid = AxiIn_1_w_valid;
    end
  end

  always @(*) begin
    AxiOut_3_w_payload_data = 32'h0;
    if(_zz_5) begin
      AxiOut_3_w_payload_data = AxiIn_1_w_payload_data;
    end
  end

  always @(*) begin
    AxiOut_3_w_payload_strb = 4'b0000;
    if(_zz_5) begin
      AxiOut_3_w_payload_strb = AxiIn_1_w_payload_strb;
    end
  end

  always @(*) begin
    AxiOut_3_aw_valid = 1'b0;
    if(_zz_5) begin
      AxiOut_3_aw_valid = AxiIn_1_aw_valid;
    end
  end

  always @(*) begin
    AxiOut_3_aw_payload_addr = 32'h0;
    if(_zz_5) begin
      AxiOut_3_aw_payload_addr = AxiIn_1_aw_payload_addr;
    end
  end

  always @(*) begin
    AxiOut_3_aw_payload_prot = 3'b000;
    if(_zz_5) begin
      AxiOut_3_aw_payload_prot = AxiIn_1_aw_payload_prot;
    end
  end

  always @(*) begin
    AxiOut_3_b_ready = 1'b0;
    if(_zz_5) begin
      AxiOut_3_b_ready = AxiIn_1_b_ready;
    end
  end

  assign AxiOut_3_ar_valid = 1'b0;
  assign AxiOut_3_ar_payload_addr = 32'h0;
  assign AxiOut_3_ar_payload_prot = 3'b000;
  assign AxiOut_3_r_ready = 1'b0;
  assign when_MyCpu_l710 = ((32'h80000000 <= AxiIn_1_aw_payload_addr) && (AxiIn_1_aw_payload_addr < 32'h80ffffff));
  always @(*) begin
    if(when_MyCpu_l710) begin
      wsel = 2'b00;
    end else begin
      if(when_MyCpu_l712) begin
        wsel = 2'b01;
      end else begin
        if(when_MyCpu_l714) begin
          wsel = 2'b10;
        end else begin
          wsel = 2'b11;
        end
      end
    end
  end

  assign when_MyCpu_l712 = ((32'h10000000 <= AxiIn_1_aw_payload_addr) && (AxiIn_1_aw_payload_addr < 32'h1000ffff));
  assign when_MyCpu_l714 = ((32'h11000000 <= AxiIn_1_aw_payload_addr) && (AxiIn_1_aw_payload_addr < 32'h1100ffff));
  assign _zz_1 = ({3'd0,1'b1} <<< wsel);
  assign _zz_2 = _zz_1[0];
  assign _zz_3 = _zz_1[1];
  assign _zz_4 = _zz_1[2];
  assign _zz_5 = _zz_1[3];
  assign AxiIn_1_w_ready = _zz_AxiIn_1_w_ready;
  assign AxiIn_1_aw_ready = _zz_AxiIn_1_aw_ready;
  assign AxiIn_1_b_valid = _zz_AxiIn_1_b_valid;
  assign AxiIn_1_b_payload_resp = _zz_AxiIn_1_b_payload_resp;
  assign _zz_6 = ({1'd0,1'b1} <<< rsel);
  assign _zz_7 = _zz_6[0];
  assign _zz_8 = _zz_6[1];
  assign AxiOut_0_r_ready = _zz_AxiOut_0_r_ready;
  assign AxiOut_0_ar_valid = _zz_AxiOut_0_ar_valid;
  assign AxiOut_0_ar_payload_addr = _zz_AxiOut_0_ar_payload_addr;
  assign AxiOut_0_ar_payload_prot = _zz_AxiOut_0_ar_payload_prot;
  always @(posedge clock) begin
    if(reset) begin
      rsel <= 1'b0;
    end else begin
      rsel <= r_sel;
    end
  end


endmodule
