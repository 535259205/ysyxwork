
`timescale 1ns/1ps  // 这一行是关键，记录下这个尺度

module ebreak_fun(
  input ebreak_flag
);
import "DPI-C" function void ebreak(input int test);

always@(*)
begin
  if(ebreak_flag)
    ebreak(1);
end 

endmodule

