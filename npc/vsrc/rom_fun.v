module rom_fun(
  input [31:0]addr,
  output reg [31:0]code
);

import "DPI-C" function int rom_r(input int addr);

always@(*)
begin
    code=rom_r(addr);
end 

endmodule

