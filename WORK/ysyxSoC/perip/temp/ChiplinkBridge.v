// module ChiplinkBridge(
//   input         clock,
//   input         reset,
  
//   // Slave AXI4 Memory Interface
//   output        slave_axi4_mem_0_awready,
//   input         slave_axi4_mem_0_awvalid,
//   input  [3:0]  slave_axi4_mem_0_awid,
//   input  [31:0] slave_axi4_mem_0_awaddr,
//   input  [7:0]  slave_axi4_mem_0_awlen,
//   input  [2:0]  slave_axi4_mem_0_awsize,
//   input  [1:0]  slave_axi4_mem_0_awburst,
  
//   output        slave_axi4_mem_0_wready,
//   input         slave_axi4_mem_0_wvalid,
//   input  [63:0] slave_axi4_mem_0_wdata,
//   input  [7:0]  slave_axi4_mem_0_wstrb,
//   input         slave_axi4_mem_0_wlast,
  
//   input         slave_axi4_mem_0_bready,
//   output        slave_axi4_mem_0_bvalid,
//   output [3:0]  slave_axi4_mem_0_bid,
//   output [1:0]  slave_axi4_mem_0_bresp,
  
//   output        slave_axi4_mem_0_arready,
//   input         slave_axi4_mem_0_arvalid,
//   input  [3:0]  slave_axi4_mem_0_arid,
//   input  [31:0] slave_axi4_mem_0_araddr,
//   input  [7:0]  slave_axi4_mem_0_arlen,
//   input  [2:0]  slave_axi4_mem_0_arsize,
//   input  [1:0]  slave_axi4_mem_0_arburst,
  
//   input         slave_axi4_mem_0_rready,
//   output        slave_axi4_mem_0_rvalid,
//   output [3:0]  slave_axi4_mem_0_rid,
//   output [63:0] slave_axi4_mem_0_rdata,
//   output [1:0]  slave_axi4_mem_0_rresp,
//   output        slave_axi4_mem_0_rlast,
  
//   // Master AXI4 Memory Interface
//   input         mem_axi4_0_awready,
//   output        mem_axi4_0_awvalid,
//   output [3:0]  mem_axi4_0_awid,
//   output [31:0] mem_axi4_0_awaddr,
//   output [7:0]  mem_axi4_0_awlen,
//   output [2:0]  mem_axi4_0_awsize,
//   output [1:0]  mem_axi4_0_awburst,
  
//   input         mem_axi4_0_wready,
//   output        mem_axi4_0_wvalid,
//   output [63:0] mem_axi4_0_wdata,
//   output [7:0]  mem_axi4_0_wstrb,
//   output        mem_axi4_0_wlast,
  
//   output        mem_axi4_0_bready,
//   input         mem_axi4_0_bvalid,
//   input  [3:0]  mem_axi4_0_bid,
//   input  [1:0]  mem_axi4_0_bresp,
  
//   input         mem_axi4_0_arready,
//   output        mem_axi4_0_arvalid,
//   output [3:0]  mem_axi4_0_arid,
//   output [31:0] mem_axi4_0_araddr,
//   output [7:0]  mem_axi4_0_arlen,
//   output [2:0]  mem_axi4_0_arsize,
//   output [1:0]  mem_axi4_0_arburst,
  
//   output        mem_axi4_0_rready,
//   input         mem_axi4_0_rvalid,
//   input  [3:0]  mem_axi4_0_rid,
//   input  [63:0] mem_axi4_0_rdata,
//   input  [1:0]  mem_axi4_0_rresp,
//   input         mem_axi4_0_rlast,
  
//   // FPGA ChipLink Interface
//   output        fpga_io_c2b_clk,
//   output        fpga_io_c2b_rst,
//   output        fpga_io_c2b_send,
//   output [7:0]  fpga_io_c2b_data,
  
//   input         fpga_io_b2c_clk,
//   input         fpga_io_b2c_rst,
//   input         fpga_io_b2c_send,
//   input  [7:0]  fpga_io_b2c_data
// );

//   // Set all outputs to 0 as requested
//   assign slave_axi4_mem_0_awready =  1'b0;
//   assign slave_axi4_mem_0_wready  =  1'b0;
//   assign slave_axi4_mem_0_bvalid  =  1'b0;
//   assign slave_axi4_mem_0_bid     =  4'b0;
//   assign slave_axi4_mem_0_bresp   =  2'b0;
//   assign slave_axi4_mem_0_arready =  1'b0;
//   assign slave_axi4_mem_0_rvalid  =  1'b0;
//   assign slave_axi4_mem_0_rid     =  4'b0;
//   assign slave_axi4_mem_0_rdata   = 64'b0;
//   assign slave_axi4_mem_0_rresp   =  2'b0;
//   assign slave_axi4_mem_0_rlast   =  1'b0;
  
//   assign mem_axi4_0_awvalid = 1'b0;
//   assign mem_axi4_0_awid    = 4'b0;
//   assign mem_axi4_0_awaddr  = 32'b0;
//   assign mem_axi4_0_awlen   = 8'b0;
//   assign mem_axi4_0_awsize  = 3'b0;
//   assign mem_axi4_0_awburst = 2'b0;
//   assign mem_axi4_0_wvalid  = 1'b0;
//   assign mem_axi4_0_wdata   = 64'b0;
//   assign mem_axi4_0_wstrb   = 8'b0;
//   assign mem_axi4_0_wlast   = 1'b0;
//   assign mem_axi4_0_bready  = 1'b0;
//   assign mem_axi4_0_arvalid = 1'b0;
//   assign mem_axi4_0_arid    = 4'b0;
//   assign mem_axi4_0_araddr  = 32'b0;
//   assign mem_axi4_0_arlen   = 8'b0;
//   assign mem_axi4_0_arsize  = 3'b0;
//   assign mem_axi4_0_arburst = 2'b0;
//   assign mem_axi4_0_rready  = 1'b0;
  
//   assign fpga_io_c2b_clk = 1'b0;
//   assign fpga_io_c2b_rst = 1'b0;
//   assign fpga_io_c2b_send = 1'b0;
//   assign fpga_io_c2b_data = 8'b0;

// endmodule
