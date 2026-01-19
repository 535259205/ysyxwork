module debug_fun(
  input         clk,
  input         [31:0]addr,
  input         [31:0]data
);

import "DPI-C" function void debug(input int addr,input int data);

always @(posedge clk)
begin
    debug(addr,data);
end
endmodule

