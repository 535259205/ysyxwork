`timescale 1ns/1ns
module step_fun(
  input step
);

import "DPI-C" function void SimStep1(input int step_data);

always@(negedge step)
begin
    SimStep1(1);
end 

endmodule

