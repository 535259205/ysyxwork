
`timescale 1ns/1ns  // 这一行是关键，记录下这个尺度

module debug_fun(
  input               clk,
  input         [31:0]addr,
  input         [31:0]data
);

always @(negedge clk)
begin
    $sys_ctr(addr,data);
end



endmodule

