// // define this macro to enable fast behavior simulation
// // for flash by skipping SPI transfers
// `define FAST_FLASH

// module spi_top_apb #(
//   parameter flash_addr_start = 32'h30000000,
//   parameter flash_addr_end   = 32'h3fffffff,
//   parameter spi_ss_num       = 8
// ) (
//   input         clock,
//   input         reset,
//   input  [31:0] in_paddr,
//   input         in_psel,
//   input         in_penable,
//   input  [2:0]  in_pprot,
//   input         in_pwrite,
//   input  [31:0] in_pwdata,
//   input  [3:0]  in_pstrb,
//   output        in_pready,
//   output [31:0] in_prdata,
//   output        in_pslverr,

//   output                  spi_sck,
//   output [spi_ss_num-1:0] spi_ss,
//   output                  spi_mosi,
//   input                   spi_miso,
//   output                  spi_irq_out
// );

// `ifdef FAST_FLASH

// wire [31:0] data;
// parameter invalid_cmd = 8'h0;
// flash_cmd flash_cmd_i(
//   .clock(clock),
//   .valid(in_psel && !in_penable),
//   .cmd(in_pwrite ? invalid_cmd : 8'h03),
//   .addr({8'b0, in_paddr[23:2], 2'b0}),
//   .data(data)
// );
// assign spi_sck    = 1'b0;
// assign spi_ss     = 8'b0;
// assign spi_mosi   = 1'b1;
// assign spi_irq_out= 1'b0;
// assign in_pslverr = 1'b0;
// assign in_pready  = in_penable && in_psel && !in_pwrite;
// assign in_prdata  = data[31:0];

// `else

// spi_top u0_spi_top (
//   .wb_clk_i(clock),
//   .wb_rst_i(reset),
//   .wb_adr_i(in_paddr[4:0]),
//   .wb_dat_i(in_pwdata),
//   .wb_dat_o(in_prdata),
//   .wb_sel_i(in_pstrb),
//   .wb_we_i (in_pwrite),
//   .wb_stb_i(in_psel),
//   .wb_cyc_i(in_penable),
//   .wb_ack_o(in_pready),
//   .wb_err_o(in_pslverr),
//   .wb_int_o(spi_irq_out),

//   .ss_pad_o(spi_ss),
//   .sclk_pad_o(spi_sck),
//   .mosi_pad_o(spi_mosi),
//   .miso_pad_i(spi_miso)
// );

// `endif // FAST_FLASH

// endmodule


// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
// `define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else



// Wire declarations for module interconnection
wire [31:0] spi_in_paddr_o;
wire        spi_in_psel_o;
wire        spi_in_penable_o;
wire [2:0]  spi_in_pprot_o;
wire        spi_in_pwrite_o;
wire [31:0] spi_in_pwdata_o;
wire [3:0]  spi_in_pstrb_o;
wire        spi_in_pready_i;
wire [31:0] spi_in_prdata_i;
wire        spi_in_pslverr_i;

spi_xip u_spi_xip (
  // 配置参数：Flash地址范围
  .flash_addr_start    (flash_addr_start),  // Flash起始地址（输入）
  .flash_addr_end      (flash_addr_end),    // Flash结束地址（输入）
  // APB主设备→spi_xip模块的输入信号
  .apb_in_paddr        (in_paddr),      // APB地址总线（输入）
  .apb_in_psel         (in_psel),       // APB从设备选择（输入）
  .apb_in_penable      (in_penable),    // APB传输使能（输入）
  .apb_in_pprot        (in_pprot),      // APB保护属性（输入）
  .apb_in_pwrite       (in_pwrite),     // APB读写方向（输入）
  .apb_in_pwdata       (in_pwdata),     // APB写数据总线（输入）
  .apb_in_pstrb        (in_pstrb),      // APB字节写选通（输入）
  // spi_xip模块→APB主设备的输出信号
  .apb_in_pready       (in_pready),     // APB就绪信号（输出）
  .apb_in_prdata       (in_prdata),     // APB读数据总线（输出）
  .apb_in_pslverr      (in_pslverr),    // APB从设备错误（输出）
  // spi_xip模块→SPI从设备的输出信号
  .spi_in_paddr        (spi_in_paddr_o),      // 转发到SPI的APB地址（输出）
  .spi_in_psel         (spi_in_psel_o),       // 转发到SPI的APB选择（输出）
  .spi_in_penable      (spi_in_penable_o),    // 转发到SPI的APB使能（输出）
  .spi_in_pprot        (spi_in_pprot_o),      // 转发到SPI的APB保护属性（输出）
  .spi_in_pwrite       (spi_in_pwrite_o),     // 转发到SPI的APB读写方向（输出）
  .spi_in_pwdata       (spi_in_pwdata_o),     // 转发到SPI的APB写数据（输出）
  .spi_in_pstrb        (spi_in_pstrb_o),      // 转发到SPI的APB字节选通（输出）
  // SPI从设备→spi_xip模块的输入信号
  .spi_in_pready       (spi_in_pready_i),     // SPI返回的APB就绪（输入）
  .spi_in_prdata       (spi_in_prdata_i),     // SPI返回的APB读数据（输入）
  .spi_in_pslverr      (spi_in_pslverr_i),    // SPI返回的APB错误（输入）
  // 时钟与复位
  .clk                 (clock),             
  .reset               (reset)              
);


spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(spi_in_paddr_o[4:0]),
  .wb_dat_i(spi_in_pwdata_o),
  .wb_dat_o(spi_in_prdata_i),
  .wb_sel_i(spi_in_pstrb_o),
  .wb_we_i (spi_in_pwrite_o),
  .wb_stb_i(spi_in_psel_o),
  .wb_cyc_i(spi_in_penable_o),
  .wb_ack_o(spi_in_pready_i),
  .wb_err_o(spi_in_pslverr_i),
  .wb_int_o(spi_irq_out),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
