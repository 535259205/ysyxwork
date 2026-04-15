`timescale 1ns/1ns

`define USE_IVERILOG
`define __VERILOG__
module ysyxsoc_tb();

reg clk=0;
reg rst=0;
TOPmod u_ysyxSoCTop(
    .clock(clk),
    .reset(rst)
);

initial begin
    clk=0;
    rst=1;
    $dumpfile("ysyxsoc_tb.vcd");
    $dumpvars(0, ysyxsoc_tb); // 记录所有层次的信号
    $dumpvars(1, u_ysyxSoCTop); // 记录顶层模块的所有信号
    #2000
    rst=0;
    
    #1000

    $dumpflush; // 刷新波形数据

    // #6000
    // $finish;
end

always #1 clk=!clk;

endmodule

