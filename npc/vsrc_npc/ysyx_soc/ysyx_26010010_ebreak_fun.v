// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyx_26010010_ebreak_fun

`timescale 1ns/1ps 
module ysyx_26010010_ebreak_fun(
  input ebreak_flag
);

`ifndef SYNTHESIS
  `ifndef USE_IVERILOG
import "DPI-C" function void ebreak(input int test);
always@(*)
begin
  if(ebreak_flag)
    ebreak(1);
end 

  `else
always@(*)
begin
  if(ebreak_flag)
    $sys_ctr(32'd800,32'd1);
end 

  `endif
`endif

endmodule
    