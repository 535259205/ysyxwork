
`timescale 1ns/1ns
module ebreak_fun(
  input ebreak_flag
);


always@(*)
begin
  if(ebreak_flag)
    $sys_ctr(32'd800,32'd1);
end 


endmodule

