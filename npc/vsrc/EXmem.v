// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : EXmem

`timescale 1ns/1ps 
module EXmem (
  input  wire          flush,
  input  wire          com_encode_w_vaild,
  output wire          com_encode_w_ready,
  input  wire [31:0]   com_encode_w_data,
  input  wire [31:0]   com_encode_w_addr,
  input  wire [1:0]    com_encode_w_len,
  output wire          com_encode_r_vaild,
  input  wire          com_encode_r_ready,
  output wire [31:0]   com_encode_r_data,
  input  wire [31:0]   com_encode_r_addr,
  input  wire [1:0]    com_encode_r_len,
  input  wire          clk
);

  wire                mem_w_vaild;
  wire                mem_w_ready;
  wire                mem_r_vaild;
  wire       [31:0]   mem_r_data;

  mem_fun mem (
    .clk     (clk                    ), //i
    .w_vaild (mem_w_vaild            ), //i
    .w_ready (mem_w_ready            ), //o
    .w_data  (com_encode_w_data[31:0]), //i
    .w_addr  (com_encode_w_addr[31:0]), //i
    .w_len   (com_encode_w_len[1:0]  ), //i
    .r_vaild (mem_r_vaild            ), //o
    .r_ready (com_encode_r_ready     ), //i
    .r_data  (mem_r_data[31:0]       ), //o
    .r_addr  (com_encode_r_addr[31:0]), //i
    .r_len   (com_encode_r_len[1:0]  )  //i
  );
  assign mem_w_vaild = (flush ? 1'b0 : com_encode_w_vaild);
  assign com_encode_r_data = mem_r_data;
  assign com_encode_w_ready = mem_w_ready;
  assign com_encode_r_vaild = mem_r_vaild;

endmodule
