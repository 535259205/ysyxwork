
`timescale 1ns/1ps  // 这一行是关键，记录下这个尺度

module mmio_fun(
  input         clk,
  input         rst,
  input         wen,
  input         [31:0] w_data,
  input         [31:0] w_addr,
  input         [1:0] w_len,

  output reg    [31:0] r_data,
  input                ren,
  input         [31:0] r_addr,
  input         [1:0] r_len
);

import "DPI-C" function void mmio_w(input int addr,input int data,input int len);
import "DPI-C" function int mmio_r(input int addr,input int len);


always@(posedge clk)
begin
    if(ren)
      r_data<=mmio_r(r_addr,r_len+1);
end
always@(posedge clk)
begin
    if(wen)
      mmio_w(w_addr,w_data,w_len+1);
end 

endmodule
