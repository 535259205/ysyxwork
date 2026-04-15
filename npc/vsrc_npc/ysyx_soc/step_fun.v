// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : step_fun

`timescale 1ns/1ps 
module ysyx_26010010_step_fun(
  input step,
  input clk
);
`ifndef SYNTHESIS

`ifndef USE_IVERILOG
import "DPI-C" function void SimStep1(input int step_data);
always@(posedge clk)
begin
    if(step)
    SimStep1(1);
end 
`else

always@(posedge step)
begin
    $sys_ctr(32'd801,1);
end 

`endif 
`endif
endmodule


    