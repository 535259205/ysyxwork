// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIXbar

`timescale 1ns/1ps 
module AXIXbar (
  input  wire          axi_m_0_aw_valid,
  output reg           axi_m_0_aw_ready,
  input  wire [31:0]   axi_m_0_aw_payload_addr,
  input  wire [3:0]    axi_m_0_aw_payload_id,
  input  wire [7:0]    axi_m_0_aw_payload_len,
  input  wire [2:0]    axi_m_0_aw_payload_size,
  input  wire [1:0]    axi_m_0_aw_payload_burst,
  input  wire          axi_m_0_w_valid,
  output reg           axi_m_0_w_ready,
  input  wire [31:0]   axi_m_0_w_payload_data,
  input  wire [3:0]    axi_m_0_w_payload_strb,
  input  wire          axi_m_0_w_payload_last,
  output reg           axi_m_0_b_valid,
  input  wire          axi_m_0_b_ready,
  output reg  [3:0]    axi_m_0_b_payload_id,
  output reg  [1:0]    axi_m_0_b_payload_resp,
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
  output reg           axi_m_1_aw_ready,
  input  wire [31:0]   axi_m_1_aw_payload_addr,
  input  wire [3:0]    axi_m_1_aw_payload_id,
  input  wire [7:0]    axi_m_1_aw_payload_len,
  input  wire [2:0]    axi_m_1_aw_payload_size,
  input  wire [1:0]    axi_m_1_aw_payload_burst,
  input  wire          axi_m_1_w_valid,
  output reg           axi_m_1_w_ready,
  input  wire [31:0]   axi_m_1_w_payload_data,
  input  wire [3:0]    axi_m_1_w_payload_strb,
  input  wire          axi_m_1_w_payload_last,
  output reg           axi_m_1_b_valid,
  input  wire          axi_m_1_b_ready,
  output reg  [3:0]    axi_m_1_b_payload_id,
  output reg  [1:0]    axi_m_1_b_payload_resp,
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
  output reg           axi_s_aw_valid,
  input  wire          axi_s_aw_ready,
  output reg  [31:0]   axi_s_aw_payload_addr,
  output reg  [3:0]    axi_s_aw_payload_id,
  output reg  [7:0]    axi_s_aw_payload_len,
  output reg  [2:0]    axi_s_aw_payload_size,
  output reg  [1:0]    axi_s_aw_payload_burst,
  output reg           axi_s_w_valid,
  input  wire          axi_s_w_ready,
  output reg  [31:0]   axi_s_w_payload_data,
  output reg  [3:0]    axi_s_w_payload_strb,
  output reg           axi_s_w_payload_last,
  input  wire          axi_s_b_valid,
  output reg           axi_s_b_ready,
  input  wire [3:0]    axi_s_b_payload_id,
  input  wire [1:0]    axi_s_b_payload_resp,
  output reg           axi_s_ar_valid,
  input  wire          axi_s_ar_ready,
  output reg  [31:0]   axi_s_ar_payload_addr,
  output reg  [3:0]    axi_s_ar_payload_id,
  output reg  [7:0]    axi_s_ar_payload_len,
  output reg  [2:0]    axi_s_ar_payload_size,
  output reg  [1:0]    axi_s_ar_payload_burst,
  input  wire          axi_s_r_valid,
  output reg           axi_s_r_ready,
  input  wire [31:0]   axi_s_r_payload_data,
  input  wire [3:0]    axi_s_r_payload_id,
  input  wire [1:0]    axi_s_r_payload_resp,
  input  wire          axi_s_r_payload_last,
  input  wire          r_sel
);


  always @(*) begin
    axi_m_0_w_ready = 1'b0;
    axi_m_0_aw_ready = 1'b0;
    axi_m_0_b_valid = 1'b0;
    axi_m_0_b_payload_id = 4'bxxxx;
    axi_m_0_b_payload_resp = 2'bxx;
    axi_m_0_r_valid = 1'b0;
    axi_m_0_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    axi_m_0_r_payload_id = 4'bxxxx;
    axi_m_0_r_payload_resp = 2'bxx;
    axi_m_0_r_payload_last = 1'bx;
    axi_m_0_ar_ready = 1'b0;
    axi_m_1_w_ready = 1'b0;
    axi_m_1_aw_ready = 1'b0;
    axi_m_1_b_valid = 1'b0;
    axi_m_1_b_payload_id = 4'bxxxx;
    axi_m_1_b_payload_resp = 2'bxx;
    axi_m_1_r_valid = 1'b0;
    axi_m_1_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    axi_m_1_r_payload_id = 4'bxxxx;
    axi_m_1_r_payload_resp = 2'bxx;
    axi_m_1_r_payload_last = 1'bx;
    axi_m_1_ar_ready = 1'b0;
    if(r_sel) begin
      axi_s_aw_valid = axi_m_1_aw_valid;
      axi_m_1_aw_ready = axi_s_aw_ready;
      axi_s_aw_payload_addr = axi_m_1_aw_payload_addr;
      axi_s_aw_payload_id = axi_m_1_aw_payload_id;
      axi_s_aw_payload_len = axi_m_1_aw_payload_len;
      axi_s_aw_payload_size = axi_m_1_aw_payload_size;
      axi_s_aw_payload_burst = axi_m_1_aw_payload_burst;
      axi_s_w_valid = axi_m_1_w_valid;
      axi_m_1_w_ready = axi_s_w_ready;
      axi_s_w_payload_data = axi_m_1_w_payload_data;
      axi_s_w_payload_strb = axi_m_1_w_payload_strb;
      axi_s_w_payload_last = axi_m_1_w_payload_last;
      axi_m_1_b_valid = axi_s_b_valid;
      axi_s_b_ready = axi_m_1_b_ready;
      axi_m_1_b_payload_id = axi_s_b_payload_id;
      axi_m_1_b_payload_resp = axi_s_b_payload_resp;
      axi_s_ar_valid = axi_m_1_ar_valid;
      axi_m_1_ar_ready = axi_s_ar_ready;
      axi_s_ar_payload_addr = axi_m_1_ar_payload_addr;
      axi_s_ar_payload_id = axi_m_1_ar_payload_id;
      axi_s_ar_payload_len = axi_m_1_ar_payload_len;
      axi_s_ar_payload_size = axi_m_1_ar_payload_size;
      axi_s_ar_payload_burst = axi_m_1_ar_payload_burst;
      axi_m_1_r_valid = axi_s_r_valid;
      axi_s_r_ready = axi_m_1_r_ready;
      axi_m_1_r_payload_data = axi_s_r_payload_data;
      axi_m_1_r_payload_id = axi_s_r_payload_id;
      axi_m_1_r_payload_resp = axi_s_r_payload_resp;
      axi_m_1_r_payload_last = axi_s_r_payload_last;
    end else begin
      axi_s_aw_valid = axi_m_0_aw_valid;
      axi_m_0_aw_ready = axi_s_aw_ready;
      axi_s_aw_payload_addr = axi_m_0_aw_payload_addr;
      axi_s_aw_payload_id = axi_m_0_aw_payload_id;
      axi_s_aw_payload_len = axi_m_0_aw_payload_len;
      axi_s_aw_payload_size = axi_m_0_aw_payload_size;
      axi_s_aw_payload_burst = axi_m_0_aw_payload_burst;
      axi_s_w_valid = axi_m_0_w_valid;
      axi_m_0_w_ready = axi_s_w_ready;
      axi_s_w_payload_data = axi_m_0_w_payload_data;
      axi_s_w_payload_strb = axi_m_0_w_payload_strb;
      axi_s_w_payload_last = axi_m_0_w_payload_last;
      axi_m_0_b_valid = axi_s_b_valid;
      axi_s_b_ready = axi_m_0_b_ready;
      axi_m_0_b_payload_id = axi_s_b_payload_id;
      axi_m_0_b_payload_resp = axi_s_b_payload_resp;
      axi_s_ar_valid = axi_m_0_ar_valid;
      axi_m_0_ar_ready = axi_s_ar_ready;
      axi_s_ar_payload_addr = axi_m_0_ar_payload_addr;
      axi_s_ar_payload_id = axi_m_0_ar_payload_id;
      axi_s_ar_payload_len = axi_m_0_ar_payload_len;
      axi_s_ar_payload_size = axi_m_0_ar_payload_size;
      axi_s_ar_payload_burst = axi_m_0_ar_payload_burst;
      axi_m_0_r_valid = axi_s_r_valid;
      axi_s_r_ready = axi_m_0_r_ready;
      axi_m_0_r_payload_data = axi_s_r_payload_data;
      axi_m_0_r_payload_id = axi_s_r_payload_id;
      axi_m_0_r_payload_resp = axi_s_r_payload_resp;
      axi_m_0_r_payload_last = axi_s_r_payload_last;
    end
  end


endmodule
