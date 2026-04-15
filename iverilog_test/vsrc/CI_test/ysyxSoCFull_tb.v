`timescale 1ns/1ns

`define USE_IVERILOG
`define __VERILOG__
`define ysyx_26010010_USE_IVERILOG
module ysyxSoCFull_tb();

reg clk=0;
reg rst=0;
ysyx_26010010_ysyx_soc_sim u_ysyxSoCTop(
    .clock(clk),
    .reset(rst)
);

initial begin
    clk=0;
    rst=1;
    // $dumpfile("ysyxsoc_tb.vcd");
    // $dumpvars(0, ysyxSoCFull_tb); // 记录所有层次的信号
    #2000
    rst=0;
    
    // #1000

    // $dumpflush; // 刷新波形数据

    // #6000
    // $finish;
end

always #1 clk=!clk;

endmodule

