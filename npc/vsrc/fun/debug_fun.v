
`timescale 1ns/1ps  // 这一行是关键，记录下这个尺度

module debug_fun(
  input               clk,
  input         [31:0]addr,
  input         [31:0]data
);

import "DPI-C" function void debug(input int addr,input int data);


always @(negedge clk)
begin
    debug(addr,data);
end
endmodule

