`timescale 1ns/1ns
module step_fun(
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

always@(negedge step)
begin
    $sys_ctr(32'd801,1);
end 

`endif 
`endif
endmodule

