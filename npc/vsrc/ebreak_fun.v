module ebreak_fun(
  input ebreak_flag
);
import "DPI-C" function void ebreak(input int test);

always@(*)
begin
  if(ebreak_flag)
    ebreak(1);
end 

endmodule

