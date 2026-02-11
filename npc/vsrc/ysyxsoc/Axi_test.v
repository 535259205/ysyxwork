// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : Axi_test

`timescale 1ns/1ps 
module Axi_test (
  output reg           axi_m_aw_valid,
  input  wire          axi_m_aw_ready,
  output reg  [31:0]   axi_m_aw_payload_addr,
  output reg  [3:0]    axi_m_aw_payload_id,
  output reg  [7:0]    axi_m_aw_payload_len,
  output reg  [2:0]    axi_m_aw_payload_size,
  output reg  [1:0]    axi_m_aw_payload_burst,
  output reg           axi_m_w_valid,
  input  wire          axi_m_w_ready,
  output reg  [31:0]   axi_m_w_payload_data,
  output reg  [3:0]    axi_m_w_payload_strb,
  output reg           axi_m_w_payload_last,
  input  wire          axi_m_b_valid,
  output reg           axi_m_b_ready,
  input  wire [3:0]    axi_m_b_payload_id,
  input  wire [1:0]    axi_m_b_payload_resp,
  output reg           axi_m_ar_valid,
  input  wire          axi_m_ar_ready,
  output reg  [31:0]   axi_m_ar_payload_addr,
  output reg  [3:0]    axi_m_ar_payload_id,
  output reg  [7:0]    axi_m_ar_payload_len,
  output reg  [2:0]    axi_m_ar_payload_size,
  output reg  [1:0]    axi_m_ar_payload_burst,
  input  wire          axi_m_r_valid,
  output reg           axi_m_r_ready,
  input  wire [31:0]   axi_m_r_payload_data,
  input  wire [3:0]    axi_m_r_payload_id,
  input  wire [1:0]    axi_m_r_payload_resp,
  input  wire          axi_m_r_payload_last,
  input  wire          axi_s_aw_valid,
  output wire          axi_s_aw_ready,
  input  wire [31:0]   axi_s_aw_payload_addr,
  input  wire [3:0]    axi_s_aw_payload_id,
  input  wire [7:0]    axi_s_aw_payload_len,
  input  wire [2:0]    axi_s_aw_payload_size,
  input  wire [1:0]    axi_s_aw_payload_burst,
  input  wire          axi_s_w_valid,
  output wire          axi_s_w_ready,
  input  wire [31:0]   axi_s_w_payload_data,
  input  wire [3:0]    axi_s_w_payload_strb,
  input  wire          axi_s_w_payload_last,
  output wire          axi_s_b_valid,
  input  wire          axi_s_b_ready,
  output wire [3:0]    axi_s_b_payload_id,
  output wire [1:0]    axi_s_b_payload_resp,
  input  wire          axi_s_ar_valid,
  output wire          axi_s_ar_ready,
  input  wire [31:0]   axi_s_ar_payload_addr,
  input  wire [3:0]    axi_s_ar_payload_id,
  input  wire [7:0]    axi_s_ar_payload_len,
  input  wire [2:0]    axi_s_ar_payload_size,
  input  wire [1:0]    axi_s_ar_payload_burst,
  output wire          axi_s_r_valid,
  input  wire          axi_s_r_ready,
  output wire [31:0]   axi_s_r_payload_data,
  output wire [3:0]    axi_s_r_payload_id,
  output wire [1:0]    axi_s_r_payload_resp,
  output wire          axi_s_r_payload_last,
  input  wire          clock,
  input  wire          reset
);

  reg                 _zz_1;
  wire                axi_m_w_fire;
  wire                axi_m_b_fire;
  reg                 _zz_2;
  wire                axi_m_ar_fire;
  wire                axi_m_r_fire;
  reg        [31:0]   cnt;

  assign axi_m_w_fire = (axi_m_w_valid && axi_m_w_ready);
  assign axi_m_b_fire = (axi_m_b_valid && axi_m_b_ready);
  assign axi_m_ar_fire = (axi_m_ar_valid && axi_m_ar_ready);
  assign axi_m_r_fire = (axi_m_r_valid && axi_m_r_ready);
  assign axi_s_w_ready = 1'b0;
  assign axi_s_aw_ready = 1'b0;
  assign axi_s_b_valid = 1'b0;
  assign axi_s_b_payload_id = 4'bxxxx;
  assign axi_s_b_payload_resp = 2'bxx;
  assign axi_s_r_valid = 1'b0;
  assign axi_s_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_s_r_payload_id = 4'bxxxx;
  assign axi_s_r_payload_resp = 2'bxx;
  assign axi_s_r_payload_last = 1'bx;
  assign axi_s_ar_ready = 1'b0;
  always @(posedge clock) begin
    if(reset) begin
      axi_m_aw_valid <= 1'b0;
      axi_m_aw_payload_addr <= 32'h0;
      axi_m_aw_payload_id <= 4'b0000;
      axi_m_aw_payload_len <= 8'h0;
      axi_m_aw_payload_size <= 3'b000;
      axi_m_aw_payload_burst <= 2'b00;
      axi_m_w_valid <= 1'b0;
      axi_m_w_payload_data <= 32'h0;
      axi_m_w_payload_strb <= 4'b0000;
      axi_m_w_payload_last <= 1'b0;
      axi_m_b_ready <= 1'b0;
      _zz_1 <= 1'b0;
      _zz_2 <= 1'b0;
      axi_m_r_ready <= 1'b0;
      axi_m_ar_valid <= 1'b0;
      axi_m_ar_payload_addr <= 32'h0;
      axi_m_ar_payload_id <= 4'b0000;
      axi_m_ar_payload_len <= 8'h0;
      axi_m_ar_payload_size <= 3'b000;
      axi_m_ar_payload_burst <= 2'b00;
      cnt <= 32'h0;
    end else begin
      if(_zz_1) begin
        if(axi_m_aw_valid) begin
          axi_m_aw_valid <= 1'b0;
        end
        if(axi_m_w_fire) begin
          axi_m_w_valid <= 1'b0;
          axi_m_w_payload_data <= 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
          axi_m_w_payload_strb <= 4'bxxxx;
          axi_m_w_payload_last <= 1'bx;
          axi_m_aw_valid <= 1'b0;
          axi_m_aw_payload_addr <= 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
          axi_m_aw_payload_id <= 4'bxxxx;
          axi_m_aw_payload_len <= 8'bxxxxxxxx;
          axi_m_aw_payload_size <= 3'bxxx;
          axi_m_aw_payload_burst <= 2'bxx;
        end
        if(axi_m_b_fire) begin
          axi_m_w_payload_last <= 1'b0;
          axi_m_b_ready <= 1'b0;
          _zz_1 <= 1'b0;
        end else begin
          if(axi_m_b_valid) begin
            axi_m_b_ready <= 1'b1;
          end
        end
      end
      if(_zz_2) begin
        if(axi_m_ar_fire) begin
          axi_m_ar_valid <= 1'b0;
          axi_m_ar_payload_addr <= 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
          axi_m_ar_payload_id <= 4'bxxxx;
          axi_m_ar_payload_len <= 8'bxxxxxxxx;
          axi_m_ar_payload_size <= 3'bxxx;
          axi_m_ar_payload_burst <= 2'bxx;
          axi_m_r_ready <= 1'b1;
        end
        if(axi_m_r_fire) begin
          axi_m_r_ready <= 1'b0;
          _zz_2 <= 1'b0;
        end
      end
      if((! _zz_2)) begin
        axi_m_ar_payload_addr <= (32'h20000000 + cnt);
        axi_m_ar_payload_id <= 4'b0000;
        axi_m_ar_payload_len <= 8'h0;
        axi_m_ar_payload_size <= 3'b010;
        axi_m_ar_payload_burst <= 2'b00;
        axi_m_ar_valid <= 1'b1;
        _zz_2 <= 1'b1;
        cnt <= (cnt + 32'h00000004);
      end
      if((! _zz_1)) begin
        axi_m_aw_payload_addr <= cnt;
        axi_m_aw_payload_id <= 4'b0000;
        axi_m_aw_payload_len <= 8'h0;
        axi_m_aw_payload_size <= 3'b010;
        axi_m_aw_payload_burst <= 2'b00;
        axi_m_aw_valid <= 1'b1;
        axi_m_w_valid <= 1'b1;
        axi_m_w_payload_data <= 32'h12345678;
        axi_m_w_payload_strb <= 4'b1111;
        axi_m_w_payload_last <= 1'b1;
        _zz_1 <= 1'b1;
      end
    end
  end


endmodule
