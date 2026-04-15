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

always@(posedge clk)
begin
    if(ren)
      r_data<=0;
end
always@(posedge clk)
begin
    if(wen)
      $sys_ctr(32'd999,w_data);
end 

endmodule
