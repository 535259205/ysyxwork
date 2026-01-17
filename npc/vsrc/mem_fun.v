module mem_fun(
  input         clk,
  input         w_vaild,
  output        w_ready,
  input         [31:0] w_data,
  input         [31:0] w_addr,
  input         [1:0] w_len,

  output reg    [31:0] r_data,
  output               r_vaild,
  input                r_ready,
  input         [31:0] r_addr,
  input         [1:0] r_len
);

import "DPI-C" function void mem_w(input int data,input int addr,input int len);
import "DPI-C" function int mem_r(input int addr,input int len);


assign w_ready=1;
assign r_vaild=1;
always@(negedge clk)
begin
    if(r_ready)
        r_data<=mem_r(r_addr,r_len+1);
end
always@(negedge clk)
begin
    if(w_vaild)
        mem_w(w_data,w_addr,w_len+1);
end 

endmodule

