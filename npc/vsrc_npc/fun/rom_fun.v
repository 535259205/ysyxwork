`timescale 1ns/1ps  // 这一行是关键，记录下这个尺度


module rom_fun(
  input clk,
  input [31:0]addr,
  output reg [31:0]code
);

`ifndef SYNTHESIS

import "DPI-C" function int rom_r(input int addr);

always@(posedge clk)
begin
    code<=rom_r(addr);
end 
`endif 

endmodule
