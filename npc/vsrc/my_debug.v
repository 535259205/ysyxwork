// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_debug

`timescale 1ns/1ps 
module my_debug (
  input  wire [31:0]   data_0,
  input  wire [31:0]   data_1,
  input  wire [31:0]   data_2,
  input  wire          clk
);


  debug_fun debug_fun_1 (
    .clk  (clk         ), //i
    .addr (32'h00000020), //i
    .data (data_0[31:0])  //i
  );
  debug_fun debug_fun_2 (
    .clk  (clk         ), //i
    .addr (32'h00000021), //i
    .data (data_1[31:0])  //i
  );
  debug_fun debug_fun_3 (
    .clk  (clk         ), //i
    .addr (32'h00000022), //i
    .data (data_2[31:0])  //i
  );

endmodule
