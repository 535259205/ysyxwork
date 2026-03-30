// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXImem

`timescale 1ns/1ps 
module AXImem (
  input  wire          axi4lite_aw_valid,
  output reg           axi4lite_aw_ready,
  input  wire [31:0]   axi4lite_aw_payload_addr,
  input  wire [2:0]    axi4lite_aw_payload_prot,
  input  wire          axi4lite_w_valid,
  output reg           axi4lite_w_ready,
  input  wire [31:0]   axi4lite_w_payload_data,
  input  wire [3:0]    axi4lite_w_payload_strb,
  output reg           axi4lite_b_valid,
  input  wire          axi4lite_b_ready,
  output wire [1:0]    axi4lite_b_payload_resp,
  input  wire          axi4lite_ar_valid,
  output reg           axi4lite_ar_ready,
  input  wire [31:0]   axi4lite_ar_payload_addr,
  input  wire [2:0]    axi4lite_ar_payload_prot,
  output reg           axi4lite_r_valid,
  input  wire          axi4lite_r_ready,
  output wire [31:0]   axi4lite_r_payload_data,
  output wire [1:0]    axi4lite_r_payload_resp,
  input  wire          clock,
  input  wire          reset
);

  wire       [31:0]   mem_w_addr;
  reg        [1:0]    mem_w_len;
  wire       [31:0]   mem_r_addr;
  wire       [31:0]   mem_r_data;
  wire                axi4lite_aw_fire;
  wire                axi4lite_w_fire;
  wire                axi4lite_b_fire;
  wire                axi4lite_r_fire;
  wire                axi4lite_ar_fire;

  mem_fun mem (
    .clk    (clock                        ), //i
    .rst    (reset                        ), //i
    .wen    (axi4lite_aw_fire             ), //i
    .w_data (axi4lite_w_payload_data[31:0]), //i
    .w_addr (mem_w_addr[31:0]             ), //i
    .w_len  (mem_w_len[1:0]               ), //i
    .ren    (axi4lite_ar_fire             ), //i
    .r_data (mem_r_data[31:0]             ), //o
    .r_addr (mem_r_addr[31:0]             ), //i
    .r_len  (2'b11                        )  //i
  );
  assign axi4lite_aw_fire = (axi4lite_aw_valid && axi4lite_aw_ready);
  assign axi4lite_w_fire = (axi4lite_w_valid && axi4lite_w_ready);
  assign axi4lite_b_fire = (axi4lite_b_valid && axi4lite_b_ready);
  assign axi4lite_b_payload_resp = 2'b00;
  assign axi4lite_r_fire = (axi4lite_r_valid && axi4lite_r_ready);
  assign axi4lite_ar_fire = (axi4lite_ar_valid && axi4lite_ar_ready);
  assign mem_w_addr = axi4lite_aw_payload_addr;
  always @(*) begin
    case(axi4lite_w_payload_strb)
      4'b0001 : begin
        mem_w_len = 2'b00;
      end
      4'b0011 : begin
        mem_w_len = 2'b01;
      end
      4'b0111 : begin
        mem_w_len = 2'b10;
      end
      4'b1111 : begin
        mem_w_len = 2'b11;
      end
      default : begin
        mem_w_len = 2'b00;
      end
    endcase
  end

  assign axi4lite_r_payload_data = mem_r_data;
  assign mem_r_addr = axi4lite_ar_payload_addr;
  always @(posedge clock) begin
    if(reset) begin
      axi4lite_aw_ready <= 1'b0;
      axi4lite_w_ready <= 1'b0;
      axi4lite_ar_ready <= 1'b0;
      axi4lite_r_valid <= 1'b0;
      axi4lite_b_valid <= 1'b0;
    end else begin
      if(axi4lite_aw_fire) begin
        axi4lite_aw_ready <= 1'b0;
      end else begin
        if(axi4lite_aw_valid) begin
          axi4lite_aw_ready <= 1'b1;
        end
      end
      if(axi4lite_w_fire) begin
        axi4lite_w_ready <= 1'b0;
      end else begin
        if(axi4lite_w_valid) begin
          axi4lite_w_ready <= 1'b1;
        end
      end
      if(axi4lite_b_fire) begin
        axi4lite_b_valid <= 1'b0;
      end else begin
        if(axi4lite_w_valid) begin
          axi4lite_b_valid <= 1'b1;
        end
      end
      if(axi4lite_r_fire) begin
        axi4lite_r_valid <= 1'b0;
      end
      if(axi4lite_ar_fire) begin
        axi4lite_ar_ready <= 1'b0;
        axi4lite_r_valid <= 1'b1;
      end else begin
        if(axi4lite_ar_valid) begin
          axi4lite_ar_ready <= 1'b1;
        end
      end
    end
  end


endmodule
