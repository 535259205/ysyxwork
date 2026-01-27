`timescale 1ns/1ps  // 这一行是关键，记录下这个尺度
module step_fun(
  input step
);

import "DPI-C" function void SimStep1(input int step_data);

always@(posedge step)
begin
    SimStep1(1);
end 

endmodule

