// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : debug_fun

`timescale 1ns/1ps 
module ysyx_26010010_debug_fun(
  input               clk,
  input         [31:0]addr,
  input         [31:0]data
);
`ifndef SYNTHESIS

  `ifndef USE_IVERILOG

import "DPI-C" function void debug(input int addr,input int data);
always @(posedge clk)
begin
    debug(addr,data);
end
  `else 
always @(posedge clk)
begin
    $sys_ctr(addr,data);
end

  `endif
`endif


endmodule
    