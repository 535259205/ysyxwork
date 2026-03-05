// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIXbar

`timescale 1ns/1ps 
module AXIXbar (
  input  wire          axi_m_0_aw_valid,
  output wire          axi_m_0_aw_ready,
  input  wire [31:0]   axi_m_0_aw_payload_addr,
  input  wire [3:0]    axi_m_0_aw_payload_id,
  input  wire [7:0]    axi_m_0_aw_payload_len,
  input  wire [2:0]    axi_m_0_aw_payload_size,
  input  wire [1:0]    axi_m_0_aw_payload_burst,
  input  wire          axi_m_0_w_valid,
  output wire          axi_m_0_w_ready,
  input  wire [31:0]   axi_m_0_w_payload_data,
  input  wire [3:0]    axi_m_0_w_payload_strb,
  input  wire          axi_m_0_w_payload_last,
  output wire          axi_m_0_b_valid,
  input  wire          axi_m_0_b_ready,
  output wire [3:0]    axi_m_0_b_payload_id,
  output wire [1:0]    axi_m_0_b_payload_resp,
  input  wire          axi_m_0_ar_valid,
  output reg           axi_m_0_ar_ready,
  input  wire [31:0]   axi_m_0_ar_payload_addr,
  input  wire [3:0]    axi_m_0_ar_payload_id,
  input  wire [7:0]    axi_m_0_ar_payload_len,
  input  wire [2:0]    axi_m_0_ar_payload_size,
  input  wire [1:0]    axi_m_0_ar_payload_burst,
  output reg           axi_m_0_r_valid,
  input  wire          axi_m_0_r_ready,
  output reg  [31:0]   axi_m_0_r_payload_data,
  output reg  [3:0]    axi_m_0_r_payload_id,
  output reg  [1:0]    axi_m_0_r_payload_resp,
  output reg           axi_m_0_r_payload_last,
  input  wire          axi_m_1_aw_valid,
  output wire          axi_m_1_aw_ready,
  input  wire [31:0]   axi_m_1_aw_payload_addr,
  input  wire [3:0]    axi_m_1_aw_payload_id,
  input  wire [7:0]    axi_m_1_aw_payload_len,
  input  wire [2:0]    axi_m_1_aw_payload_size,
  input  wire [1:0]    axi_m_1_aw_payload_burst,
  input  wire          axi_m_1_w_valid,
  output wire          axi_m_1_w_ready,
  input  wire [31:0]   axi_m_1_w_payload_data,
  input  wire [3:0]    axi_m_1_w_payload_strb,
  input  wire          axi_m_1_w_payload_last,
  output wire          axi_m_1_b_valid,
  input  wire          axi_m_1_b_ready,
  output wire [3:0]    axi_m_1_b_payload_id,
  output wire [1:0]    axi_m_1_b_payload_resp,
  input  wire          axi_m_1_ar_valid,
  output reg           axi_m_1_ar_ready,
  input  wire [31:0]   axi_m_1_ar_payload_addr,
  input  wire [3:0]    axi_m_1_ar_payload_id,
  input  wire [7:0]    axi_m_1_ar_payload_len,
  input  wire [2:0]    axi_m_1_ar_payload_size,
  input  wire [1:0]    axi_m_1_ar_payload_burst,
  output reg           axi_m_1_r_valid,
  input  wire          axi_m_1_r_ready,
  output reg  [31:0]   axi_m_1_r_payload_data,
  output reg  [3:0]    axi_m_1_r_payload_id,
  output reg  [1:0]    axi_m_1_r_payload_resp,
  output reg           axi_m_1_r_payload_last,
  output wire          axi_s_0_aw_valid,
  input  wire          axi_s_0_aw_ready,
  output wire [31:0]   axi_s_0_aw_payload_addr,
  output wire [3:0]    axi_s_0_aw_payload_id,
  output wire [7:0]    axi_s_0_aw_payload_len,
  output wire [2:0]    axi_s_0_aw_payload_size,
  output wire [1:0]    axi_s_0_aw_payload_burst,
  output wire          axi_s_0_w_valid,
  input  wire          axi_s_0_w_ready,
  output wire [31:0]   axi_s_0_w_payload_data,
  output wire [3:0]    axi_s_0_w_payload_strb,
  output wire          axi_s_0_w_payload_last,
  input  wire          axi_s_0_b_valid,
  output wire          axi_s_0_b_ready,
  input  wire [3:0]    axi_s_0_b_payload_id,
  input  wire [1:0]    axi_s_0_b_payload_resp,
  output reg           axi_s_0_ar_valid,
  input  wire          axi_s_0_ar_ready,
  output reg  [31:0]   axi_s_0_ar_payload_addr,
  output reg  [3:0]    axi_s_0_ar_payload_id,
  output reg  [7:0]    axi_s_0_ar_payload_len,
  output reg  [2:0]    axi_s_0_ar_payload_size,
  output reg  [1:0]    axi_s_0_ar_payload_burst,
  input  wire          axi_s_0_r_valid,
  output reg           axi_s_0_r_ready,
  input  wire [31:0]   axi_s_0_r_payload_data,
  input  wire [3:0]    axi_s_0_r_payload_id,
  input  wire [1:0]    axi_s_0_r_payload_resp,
  input  wire          axi_s_0_r_payload_last,
  output wire          axi_s_1_aw_valid,
  input  wire          axi_s_1_aw_ready,
  output wire [31:0]   axi_s_1_aw_payload_addr,
  output wire [3:0]    axi_s_1_aw_payload_id,
  output wire [7:0]    axi_s_1_aw_payload_len,
  output wire [2:0]    axi_s_1_aw_payload_size,
  output wire [1:0]    axi_s_1_aw_payload_burst,
  output wire          axi_s_1_w_valid,
  input  wire          axi_s_1_w_ready,
  output wire [31:0]   axi_s_1_w_payload_data,
  output wire [3:0]    axi_s_1_w_payload_strb,
  output wire          axi_s_1_w_payload_last,
  input  wire          axi_s_1_b_valid,
  output wire          axi_s_1_b_ready,
  input  wire [3:0]    axi_s_1_b_payload_id,
  input  wire [1:0]    axi_s_1_b_payload_resp,
  output reg           axi_s_1_ar_valid,
  input  wire          axi_s_1_ar_ready,
  output reg  [31:0]   axi_s_1_ar_payload_addr,
  output reg  [3:0]    axi_s_1_ar_payload_id,
  output reg  [7:0]    axi_s_1_ar_payload_len,
  output reg  [2:0]    axi_s_1_ar_payload_size,
  output reg  [1:0]    axi_s_1_ar_payload_burst,
  input  wire          axi_s_1_r_valid,
  output reg           axi_s_1_r_ready,
  input  wire [31:0]   axi_s_1_r_payload_data,
  input  wire [3:0]    axi_s_1_r_payload_id,
  input  wire [1:0]    axi_s_1_r_payload_resp,
  input  wire          axi_s_1_r_payload_last,
  input  wire          r_sel
);

  wire                _zz_when;
  wire                _zz_when_1;
  reg                 sel;
  reg                 clint_en;

  assign _zz_when = (axi_m_1_r_ready || axi_m_1_ar_valid);
  assign _zz_when_1 = ((32'h02000000 <= axi_m_1_ar_payload_addr) && (axi_m_1_ar_payload_addr <= 32'h0200ffff));
  assign axi_m_0_w_ready = 1'b0;
  assign axi_m_0_aw_ready = 1'b0;
  assign axi_m_0_b_valid = 1'b0;
  assign axi_m_0_b_payload_id = 4'bxxxx;
  assign axi_m_0_b_payload_resp = 2'bxx;
  always @(*) begin
    axi_m_0_r_valid = 1'b0;
    if(!_zz_when) begin
      axi_m_0_r_valid = axi_s_0_r_valid;
    end
  end

  always @(*) begin
    axi_m_0_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    if(!_zz_when) begin
      axi_m_0_r_payload_data = axi_s_0_r_payload_data;
    end
  end

  always @(*) begin
    axi_m_0_r_payload_id = 4'bxxxx;
    if(!_zz_when) begin
      axi_m_0_r_payload_id = axi_s_0_r_payload_id;
    end
  end

  always @(*) begin
    axi_m_0_r_payload_resp = 2'bxx;
    if(!_zz_when) begin
      axi_m_0_r_payload_resp = axi_s_0_r_payload_resp;
    end
  end

  always @(*) begin
    axi_m_0_r_payload_last = 1'bx;
    if(!_zz_when) begin
      axi_m_0_r_payload_last = axi_s_0_r_payload_last;
    end
  end

  always @(*) begin
    axi_m_0_ar_ready = 1'b0;
    if(!_zz_when) begin
      axi_m_0_ar_ready = axi_s_0_ar_ready;
    end
  end

  always @(*) begin
    axi_m_1_r_valid = 1'b0;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_m_1_r_valid = axi_s_1_r_valid;
      end else begin
        axi_m_1_r_valid = axi_s_0_r_valid;
      end
    end
  end

  always @(*) begin
    axi_m_1_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_m_1_r_payload_data = axi_s_1_r_payload_data;
      end else begin
        axi_m_1_r_payload_data = axi_s_0_r_payload_data;
      end
    end
  end

  always @(*) begin
    axi_m_1_r_payload_id = 4'bxxxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_m_1_r_payload_id = axi_s_1_r_payload_id;
      end else begin
        axi_m_1_r_payload_id = axi_s_0_r_payload_id;
      end
    end
  end

  always @(*) begin
    axi_m_1_r_payload_resp = 2'bxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_m_1_r_payload_resp = axi_s_1_r_payload_resp;
      end else begin
        axi_m_1_r_payload_resp = axi_s_0_r_payload_resp;
      end
    end
  end

  always @(*) begin
    axi_m_1_r_payload_last = 1'bx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_m_1_r_payload_last = axi_s_1_r_payload_last;
      end else begin
        axi_m_1_r_payload_last = axi_s_0_r_payload_last;
      end
    end
  end

  always @(*) begin
    axi_m_1_ar_ready = 1'b0;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_m_1_ar_ready = axi_s_1_ar_ready;
      end else begin
        axi_m_1_ar_ready = axi_s_0_ar_ready;
      end
    end
  end

  always @(*) begin
    clint_en = 1'b0;
    if(_zz_when) begin
      if(_zz_when_1) begin
        clint_en = 1'b1;
      end
    end
  end

  always @(*) begin
    axi_s_1_r_ready = 1'b0;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_r_ready = axi_m_1_r_ready;
      end
    end
  end

  always @(*) begin
    axi_s_1_ar_valid = 1'b0;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_ar_valid = axi_m_1_ar_valid;
      end
    end
  end

  always @(*) begin
    axi_s_1_ar_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_ar_payload_addr = axi_m_1_ar_payload_addr;
      end
    end
  end

  always @(*) begin
    axi_s_1_ar_payload_id = 4'bxxxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_ar_payload_id = axi_m_1_ar_payload_id;
      end
    end
  end

  always @(*) begin
    axi_s_1_ar_payload_len = 8'bxxxxxxxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_ar_payload_len = axi_m_1_ar_payload_len;
      end
    end
  end

  always @(*) begin
    axi_s_1_ar_payload_size = 3'bxxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_ar_payload_size = axi_m_1_ar_payload_size;
      end
    end
  end

  always @(*) begin
    axi_s_1_ar_payload_burst = 2'bxx;
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_1_ar_payload_burst = axi_m_1_ar_payload_burst;
      end
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_r_ready = 1'b0;
      end else begin
        axi_s_0_r_ready = axi_m_1_r_ready;
      end
    end else begin
      axi_s_0_r_ready = axi_m_0_r_ready;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_ar_valid = 1'b0;
      end else begin
        axi_s_0_ar_valid = axi_m_1_ar_valid;
      end
    end else begin
      axi_s_0_ar_valid = axi_m_0_ar_valid;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_ar_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end else begin
        axi_s_0_ar_payload_addr = axi_m_1_ar_payload_addr;
      end
    end else begin
      axi_s_0_ar_payload_addr = axi_m_0_ar_payload_addr;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_ar_payload_id = 4'bxxxx;
      end else begin
        axi_s_0_ar_payload_id = axi_m_1_ar_payload_id;
      end
    end else begin
      axi_s_0_ar_payload_id = axi_m_0_ar_payload_id;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_ar_payload_len = 8'bxxxxxxxx;
      end else begin
        axi_s_0_ar_payload_len = axi_m_1_ar_payload_len;
      end
    end else begin
      axi_s_0_ar_payload_len = axi_m_0_ar_payload_len;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_ar_payload_size = 3'bxxx;
      end else begin
        axi_s_0_ar_payload_size = axi_m_1_ar_payload_size;
      end
    end else begin
      axi_s_0_ar_payload_size = axi_m_0_ar_payload_size;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      if(_zz_when_1) begin
        axi_s_0_ar_payload_burst = 2'bxx;
      end else begin
        axi_s_0_ar_payload_burst = axi_m_1_ar_payload_burst;
      end
    end else begin
      axi_s_0_ar_payload_burst = axi_m_0_ar_payload_burst;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      sel = 1'b1;
    end else begin
      sel = 1'b0;
    end
  end

  assign axi_s_1_w_valid = 1'b0;
  assign axi_s_1_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_s_1_w_payload_strb = 4'bxxxx;
  assign axi_s_1_w_payload_last = 1'bx;
  assign axi_s_1_aw_valid = 1'b0;
  assign axi_s_1_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_s_1_aw_payload_id = 4'bxxxx;
  assign axi_s_1_aw_payload_len = 8'bxxxxxxxx;
  assign axi_s_1_aw_payload_size = 3'bxxx;
  assign axi_s_1_aw_payload_burst = 2'bxx;
  assign axi_s_1_b_ready = 1'b0;
  assign axi_s_0_w_valid = axi_m_1_w_valid;
  assign axi_m_1_w_ready = axi_s_0_w_ready;
  assign axi_s_0_w_payload_data = axi_m_1_w_payload_data;
  assign axi_s_0_w_payload_strb = axi_m_1_w_payload_strb;
  assign axi_s_0_w_payload_last = axi_m_1_w_payload_last;
  assign axi_s_0_aw_valid = axi_m_1_aw_valid;
  assign axi_m_1_aw_ready = axi_s_0_aw_ready;
  assign axi_s_0_aw_payload_addr = axi_m_1_aw_payload_addr;
  assign axi_s_0_aw_payload_id = axi_m_1_aw_payload_id;
  assign axi_s_0_aw_payload_len = axi_m_1_aw_payload_len;
  assign axi_s_0_aw_payload_size = axi_m_1_aw_payload_size;
  assign axi_s_0_aw_payload_burst = axi_m_1_aw_payload_burst;
  assign axi_m_1_b_valid = axi_s_0_b_valid;
  assign axi_s_0_b_ready = axi_m_1_b_ready;
  assign axi_m_1_b_payload_id = axi_s_0_b_payload_id;
  assign axi_m_1_b_payload_resp = axi_s_0_b_payload_resp;

endmodule
