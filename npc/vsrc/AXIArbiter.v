// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIArbiter

`timescale 1ns/1ps 
module AXIArbiter (
  input  wire          AxiIn_0_aw_valid,
  output reg           AxiIn_0_aw_ready,
  input  wire [31:0]   AxiIn_0_aw_payload_addr,
  input  wire [2:0]    AxiIn_0_aw_payload_prot,
  input  wire          AxiIn_0_w_valid,
  output reg           AxiIn_0_w_ready,
  input  wire [31:0]   AxiIn_0_w_payload_data,
  input  wire [3:0]    AxiIn_0_w_payload_strb,
  output reg           AxiIn_0_b_valid,
  input  wire          AxiIn_0_b_ready,
  output reg  [1:0]    AxiIn_0_b_payload_resp,
  input  wire          AxiIn_0_ar_valid,
  output reg           AxiIn_0_ar_ready,
  input  wire [31:0]   AxiIn_0_ar_payload_addr,
  input  wire [2:0]    AxiIn_0_ar_payload_prot,
  output reg           AxiIn_0_r_valid,
  input  wire          AxiIn_0_r_ready,
  output reg  [31:0]   AxiIn_0_r_payload_data,
  output reg  [1:0]    AxiIn_0_r_payload_resp,
  input  wire          AxiIn_1_aw_valid,
  output reg           AxiIn_1_aw_ready,
  input  wire [31:0]   AxiIn_1_aw_payload_addr,
  input  wire [2:0]    AxiIn_1_aw_payload_prot,
  input  wire          AxiIn_1_w_valid,
  output reg           AxiIn_1_w_ready,
  input  wire [31:0]   AxiIn_1_w_payload_data,
  input  wire [3:0]    AxiIn_1_w_payload_strb,
  output reg           AxiIn_1_b_valid,
  input  wire          AxiIn_1_b_ready,
  output reg  [1:0]    AxiIn_1_b_payload_resp,
  input  wire          AxiIn_1_ar_valid,
  output reg           AxiIn_1_ar_ready,
  input  wire [31:0]   AxiIn_1_ar_payload_addr,
  input  wire [2:0]    AxiIn_1_ar_payload_prot,
  output reg           AxiIn_1_r_valid,
  input  wire          AxiIn_1_r_ready,
  output reg  [31:0]   AxiIn_1_r_payload_data,
  output reg  [1:0]    AxiIn_1_r_payload_resp,
  output wire          AxiOut_aw_valid,
  input  wire          AxiOut_aw_ready,
  output wire [31:0]   AxiOut_aw_payload_addr,
  output wire [2:0]    AxiOut_aw_payload_prot,
  output wire          AxiOut_w_valid,
  input  wire          AxiOut_w_ready,
  output wire [31:0]   AxiOut_w_payload_data,
  output wire [3:0]    AxiOut_w_payload_strb,
  input  wire          AxiOut_b_valid,
  output wire          AxiOut_b_ready,
  input  wire [1:0]    AxiOut_b_payload_resp,
  output wire          AxiOut_ar_valid,
  input  wire          AxiOut_ar_ready,
  output wire [31:0]   AxiOut_ar_payload_addr,
  output wire [2:0]    AxiOut_ar_payload_prot,
  input  wire          AxiOut_r_valid,
  output wire          AxiOut_r_ready,
  input  wire [31:0]   AxiOut_r_payload_data,
  input  wire [1:0]    AxiOut_r_payload_resp,
  input  wire          clear,
  output wire          _zz_axir,
  input  wire          clk,
  input  wire          rst
);

  reg                 _zz_AxiOut_w_valid;
  reg        [31:0]   _zz_AxiOut_w_payload_data;
  reg        [3:0]    _zz_AxiOut_w_payload_strb;
  reg                 _zz_AxiOut_aw_valid;
  reg        [31:0]   _zz_AxiOut_aw_payload_addr;
  reg        [2:0]    _zz_AxiOut_aw_payload_prot;
  reg                 _zz_AxiOut_b_ready;
  reg                 _zz_AxiOut_r_ready;
  reg                 _zz_AxiOut_ar_valid;
  reg        [31:0]   _zz_AxiOut_ar_payload_addr;
  reg        [2:0]    _zz_AxiOut_ar_payload_prot;
  wire                AxiIn_0_r_fire;
  wire                AxiIn_1_r_fire;
  reg        [0:0]    wsel;
  reg        [0:0]    rsel;
  wire                r1_flag;
  wire       [1:0]    _zz_1;
  wire                _zz_2;
  wire                _zz_3;
  wire       [1:0]    _zz_4;
  wire                _zz_5;
  wire                _zz_6;

  always @(*) begin
    case(wsel)
      1'b0 : begin
        _zz_AxiOut_w_valid = AxiIn_0_w_valid;
        _zz_AxiOut_w_payload_data = AxiIn_0_w_payload_data;
        _zz_AxiOut_w_payload_strb = AxiIn_0_w_payload_strb;
        _zz_AxiOut_aw_valid = AxiIn_0_aw_valid;
        _zz_AxiOut_aw_payload_addr = AxiIn_0_aw_payload_addr;
        _zz_AxiOut_aw_payload_prot = AxiIn_0_aw_payload_prot;
        _zz_AxiOut_b_ready = AxiIn_0_b_ready;
      end
      default : begin
        _zz_AxiOut_w_valid = AxiIn_1_w_valid;
        _zz_AxiOut_w_payload_data = AxiIn_1_w_payload_data;
        _zz_AxiOut_w_payload_strb = AxiIn_1_w_payload_strb;
        _zz_AxiOut_aw_valid = AxiIn_1_aw_valid;
        _zz_AxiOut_aw_payload_addr = AxiIn_1_aw_payload_addr;
        _zz_AxiOut_aw_payload_prot = AxiIn_1_aw_payload_prot;
        _zz_AxiOut_b_ready = AxiIn_1_b_ready;
      end
    endcase
  end

  always @(*) begin
    case(rsel)
      1'b0 : begin
        _zz_AxiOut_r_ready = AxiIn_0_r_ready;
        _zz_AxiOut_ar_valid = AxiIn_0_ar_valid;
        _zz_AxiOut_ar_payload_addr = AxiIn_0_ar_payload_addr;
        _zz_AxiOut_ar_payload_prot = AxiIn_0_ar_payload_prot;
      end
      default : begin
        _zz_AxiOut_r_ready = AxiIn_1_r_ready;
        _zz_AxiOut_ar_valid = AxiIn_1_ar_valid;
        _zz_AxiOut_ar_payload_addr = AxiIn_1_ar_payload_addr;
        _zz_AxiOut_ar_payload_prot = AxiIn_1_ar_payload_prot;
      end
    endcase
  end

  always @(*) begin
    AxiIn_0_ar_ready = 1'b0;
    if(_zz_5) begin
      AxiIn_0_ar_ready = AxiOut_ar_ready;
    end
  end

  always @(*) begin
    AxiIn_0_aw_ready = 1'b0;
    if(_zz_2) begin
      AxiIn_0_aw_ready = AxiOut_aw_ready;
    end
  end

  always @(*) begin
    AxiIn_0_w_ready = 1'b0;
    if(_zz_2) begin
      AxiIn_0_w_ready = AxiOut_w_ready;
    end
  end

  always @(*) begin
    AxiIn_0_b_valid = 1'b0;
    if(_zz_2) begin
      AxiIn_0_b_valid = AxiOut_b_valid;
    end
  end

  always @(*) begin
    AxiIn_0_r_valid = 1'b0;
    if(_zz_5) begin
      AxiIn_0_r_valid = AxiOut_r_valid;
    end
  end

  assign AxiIn_0_r_fire = (AxiIn_0_r_valid && AxiIn_0_r_ready);
  always @(*) begin
    AxiIn_0_r_payload_resp = 2'b10;
    if(_zz_5) begin
      AxiIn_0_r_payload_resp = AxiOut_r_payload_resp;
    end
  end

  always @(*) begin
    AxiIn_0_b_payload_resp = 2'b10;
    if(_zz_2) begin
      AxiIn_0_b_payload_resp = AxiOut_b_payload_resp;
    end
  end

  always @(*) begin
    AxiIn_1_ar_ready = 1'b0;
    if(_zz_6) begin
      AxiIn_1_ar_ready = AxiOut_ar_ready;
    end
  end

  always @(*) begin
    AxiIn_1_aw_ready = 1'b0;
    if(_zz_3) begin
      AxiIn_1_aw_ready = AxiOut_aw_ready;
    end
  end

  always @(*) begin
    AxiIn_1_w_ready = 1'b0;
    if(_zz_3) begin
      AxiIn_1_w_ready = AxiOut_w_ready;
    end
  end

  always @(*) begin
    AxiIn_1_b_valid = 1'b0;
    if(_zz_3) begin
      AxiIn_1_b_valid = AxiOut_b_valid;
    end
  end

  always @(*) begin
    AxiIn_1_r_valid = 1'b0;
    if(_zz_6) begin
      AxiIn_1_r_valid = AxiOut_r_valid;
    end
  end

  assign AxiIn_1_r_fire = (AxiIn_1_r_valid && AxiIn_1_r_ready);
  always @(*) begin
    AxiIn_1_r_payload_resp = 2'b10;
    if(_zz_6) begin
      AxiIn_1_r_payload_resp = AxiOut_r_payload_resp;
    end
  end

  always @(*) begin
    AxiIn_1_b_payload_resp = 2'b10;
    if(_zz_3) begin
      AxiIn_1_b_payload_resp = AxiOut_b_payload_resp;
    end
  end

  assign r1_flag = ((AxiIn_1_r_ready && AxiOut_r_valid) && (! clear));
  assign _zz_1 = ({1'd0,1'b1} <<< wsel);
  assign _zz_2 = _zz_1[0];
  assign _zz_3 = _zz_1[1];
  assign AxiOut_w_valid = _zz_AxiOut_w_valid;
  assign AxiOut_w_payload_data = _zz_AxiOut_w_payload_data;
  assign AxiOut_w_payload_strb = _zz_AxiOut_w_payload_strb;
  assign AxiOut_aw_valid = _zz_AxiOut_aw_valid;
  assign AxiOut_aw_payload_addr = _zz_AxiOut_aw_payload_addr;
  assign AxiOut_aw_payload_prot = _zz_AxiOut_aw_payload_prot;
  assign AxiOut_b_ready = _zz_AxiOut_b_ready;
  assign _zz_4 = ({1'd0,1'b1} <<< rsel);
  assign _zz_5 = _zz_4[0];
  assign _zz_6 = _zz_4[1];
  assign AxiOut_r_ready = _zz_AxiOut_r_ready;
  assign AxiOut_ar_valid = _zz_AxiOut_ar_valid;
  assign AxiOut_ar_payload_addr = _zz_AxiOut_ar_payload_addr;
  assign AxiOut_ar_payload_prot = _zz_AxiOut_ar_payload_prot;
  assign _zz_axir = r1_flag;
  always @(posedge clk or negedge rst) begin
    if(!rst) begin
      AxiIn_0_r_payload_data <= 32'h0;
      AxiIn_1_r_payload_data <= 32'h0;
      wsel <= 1'b0;
      rsel <= 1'b0;
    end else begin
      if(AxiIn_0_r_fire) begin
        AxiIn_0_r_payload_data <= AxiOut_r_payload_data;
      end
      if(AxiIn_1_r_fire) begin
        AxiIn_1_r_payload_data <= AxiOut_r_payload_data;
      end
      if((AxiIn_0_w_valid && AxiOut_w_ready)) begin
        wsel <= 1'b0;
      end else begin
        if((AxiIn_1_w_valid && AxiOut_w_ready)) begin
          wsel <= 1'b1;
        end
      end
      if(((AxiIn_1_r_ready && AxiOut_r_valid) && (! clear))) begin
        rsel <= 1'b1;
      end else begin
        if((AxiIn_0_r_ready && AxiOut_r_valid)) begin
          rsel <= 1'b0;
        end
      end
      if(_zz_5) begin
        AxiIn_0_r_payload_data <= AxiOut_r_payload_data;
      end
      if(_zz_6) begin
        AxiIn_1_r_payload_data <= AxiOut_r_payload_data;
      end
    end
  end


endmodule
