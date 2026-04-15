`timescale 1ns/1ns
module step_fun(
  input step,
  input clk
);

always@(negedge step)
begin
    $sys_ctr(32'd801,1);
end 

endmodule

