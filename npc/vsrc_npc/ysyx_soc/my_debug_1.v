// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_debug_1

`timescale 1ns/1ps 
module my_debug_1 (
  input  wire [31:0]   data_0,
  input  wire [31:0]   data_1,
  input  wire [31:0]   data_2,
  input  wire [31:0]   data_3,
  input  wire [31:0]   data_4,
  input  wire [31:0]   data_5,
  input  wire          clock
);


  debug_fun debug_fun_1 (
    .clk  (clock       ), //i
    .addr (32'h00000023), //i
    .data (data_0[31:0])  //i
  );
  debug_fun debug_fun_2 (
    .clk  (clock       ), //i
    .addr (32'h00000024), //i
    .data (data_1[31:0])  //i
  );
  debug_fun debug_fun_3 (
    .clk  (clock       ), //i
    .addr (32'h00000025), //i
    .data (data_2[31:0])  //i
  );
  debug_fun debug_fun_4 (
    .clk  (clock       ), //i
    .addr (32'h00000026), //i
    .data (data_3[31:0])  //i
  );
  debug_fun debug_fun_5 (
    .clk  (clock       ), //i
    .addr (32'h00000027), //i
    .data (data_4[31:0])  //i
  );
  debug_fun debug_fun_6 (
    .clk  (clock       ), //i
    .addr (32'h00000028), //i
    .data (data_5[31:0])  //i
  );

endmodule
