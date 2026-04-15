`timescale 1ns/1ps

`define USE_IVERILOG
`define __VERILOG__
`define SYNTHESIS


module ysyxSoCFull_tb();

reg clk=0;
reg rst=0;
ysyx_soc_sim u_ysyxSoCFull(
    .clock(clk),
    .reset(rst)
);

initial begin
    clk=0;
    rst=1;
    $dumpfile("ysyxsoc_tb.vcd");
    $dumpvars(0, ysyxSoCFull_tb); // 记录所有层次的信号
    #4000
    rst=0;
    
    #1000

    $dumpflush; // 刷新波形数据
    // #100000000 
    // $dumpflush; // 刷新波形数据

    // #6000
    // $finish;
end
// always #1000 $start;
always #1 clk=!clk;

endmodule
