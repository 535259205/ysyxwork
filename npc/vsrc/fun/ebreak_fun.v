
`timescale 1ns/1ns
module ebreak_fun(
  input ebreak_flag
);

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

endmodule

