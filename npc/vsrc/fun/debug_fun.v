module debug_fun(
  input               clk,
  input         [31:0]addr,
  input         [31:0]data
);
`ifndef SYNTHESIS

  `ifndef USE_IVERILOG

import "DPI-C" function void debug(input int addr,input int data);
always @(posedge clk)
begin
    debug(addr,data);
end
  `else 
always @(posedge clk)
begin
    $sys_ctr(addr,data);
end

  `endif
`endif


endmodule

