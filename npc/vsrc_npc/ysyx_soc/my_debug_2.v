// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_debug_2

`timescale 1ns/1ps 
module my_debug_2 (
  input  wire [31:0]   data_0,
  input  wire [31:0]   data_1,
  input  wire [31:0]   data_2,
  input  wire [31:0]   data_3,
  input  wire [31:0]   data_4,
  input  wire [31:0]   data_5,
  input  wire [31:0]   data_6,
  input  wire [31:0]   data_7,
  input  wire [31:0]   data_8,
  input  wire [31:0]   data_9,
  input  wire [31:0]   data_10,
  input  wire [31:0]   data_11,
  input  wire [31:0]   data_12,
  input  wire [31:0]   data_13,
  input  wire [31:0]   data_14,
  input  wire [31:0]   data_15,
  input  wire [31:0]   data_16,
  input  wire [31:0]   data_17,
  input  wire [31:0]   data_18,
  input  wire [31:0]   data_19,
  input  wire [31:0]   data_20,
  input  wire [31:0]   data_21,
  input  wire [31:0]   data_22,
  input  wire [31:0]   data_23,
  input  wire [31:0]   data_24,
  input  wire [31:0]   data_25,
  input  wire [31:0]   data_26,
  input  wire [31:0]   data_27,
  input  wire [31:0]   data_28,
  input  wire [31:0]   data_29,
  input  wire [31:0]   data_30,
  input  wire [31:0]   data_31,
  input  wire          clock
);


  ysyx_26010010_debug_fun debug_fun (
    .clk  (clock       ), //i
    .addr (32'h0       ), //i
    .data (data_0[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_1 (
    .clk  (clock       ), //i
    .addr (32'h00000001), //i
    .data (data_1[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_2 (
    .clk  (clock       ), //i
    .addr (32'h00000002), //i
    .data (data_2[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_3 (
    .clk  (clock       ), //i
    .addr (32'h00000003), //i
    .data (data_3[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_4 (
    .clk  (clock       ), //i
    .addr (32'h00000004), //i
    .data (data_4[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_5 (
    .clk  (clock       ), //i
    .addr (32'h00000005), //i
    .data (data_5[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_6 (
    .clk  (clock       ), //i
    .addr (32'h00000006), //i
    .data (data_6[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_7 (
    .clk  (clock       ), //i
    .addr (32'h00000007), //i
    .data (data_7[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_8 (
    .clk  (clock       ), //i
    .addr (32'h00000008), //i
    .data (data_8[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_9 (
    .clk  (clock       ), //i
    .addr (32'h00000009), //i
    .data (data_9[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_10 (
    .clk  (clock        ), //i
    .addr (32'h0000000a ), //i
    .data (data_10[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_11 (
    .clk  (clock        ), //i
    .addr (32'h0000000b ), //i
    .data (data_11[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_12 (
    .clk  (clock        ), //i
    .addr (32'h0000000c ), //i
    .data (data_12[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_13 (
    .clk  (clock        ), //i
    .addr (32'h0000000d ), //i
    .data (data_13[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_14 (
    .clk  (clock        ), //i
    .addr (32'h0000000e ), //i
    .data (data_14[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_15 (
    .clk  (clock        ), //i
    .addr (32'h0000000f ), //i
    .data (data_15[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_16 (
    .clk  (clock        ), //i
    .addr (32'h00000010 ), //i
    .data (data_16[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_17 (
    .clk  (clock        ), //i
    .addr (32'h00000011 ), //i
    .data (data_17[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_18 (
    .clk  (clock        ), //i
    .addr (32'h00000012 ), //i
    .data (data_18[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_19 (
    .clk  (clock        ), //i
    .addr (32'h00000013 ), //i
    .data (data_19[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_20 (
    .clk  (clock        ), //i
    .addr (32'h00000014 ), //i
    .data (data_20[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_21 (
    .clk  (clock        ), //i
    .addr (32'h00000015 ), //i
    .data (data_21[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_22 (
    .clk  (clock        ), //i
    .addr (32'h00000016 ), //i
    .data (data_22[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_23 (
    .clk  (clock        ), //i
    .addr (32'h00000017 ), //i
    .data (data_23[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_24 (
    .clk  (clock        ), //i
    .addr (32'h00000018 ), //i
    .data (data_24[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_25 (
    .clk  (clock        ), //i
    .addr (32'h00000019 ), //i
    .data (data_25[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_26 (
    .clk  (clock        ), //i
    .addr (32'h0000001a ), //i
    .data (data_26[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_27 (
    .clk  (clock        ), //i
    .addr (32'h0000001b ), //i
    .data (data_27[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_28 (
    .clk  (clock        ), //i
    .addr (32'h0000001c ), //i
    .data (data_28[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_29 (
    .clk  (clock        ), //i
    .addr (32'h0000001d ), //i
    .data (data_29[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_30 (
    .clk  (clock        ), //i
    .addr (32'h0000001e ), //i
    .data (data_30[31:0])  //i
  );
  ysyx_26010010_debug_fun debug_fun_31 (
    .clk  (clock        ), //i
    .addr (32'h0000001f ), //i
    .data (data_31[31:0])  //i
  );

endmodule
