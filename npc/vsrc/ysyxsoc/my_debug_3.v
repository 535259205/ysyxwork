// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_debug_3

`timescale 1ns/1ps 
module my_debug_3 (
  input  wire [31:0]   data_0,
  input  wire [31:0]   data_1,
  input  wire [31:0]   data_2,
  input  wire          clock
);


  debug_fun debug_fun_1 (
    .clk  (clock       ), //i
    .addr (32'h00000029), //i
    .data (data_0[31:0])  //i
  );
  debug_fun debug_fun_2 (
    .clk  (clock       ), //i
    .addr (32'h0000002a), //i
    .data (data_1[31:0])  //i
  );
  debug_fun debug_fun_3 (
    .clk  (clock       ), //i
    .addr (32'h0000002b), //i
    .data (data_2[31:0])  //i
  );

endmodule
