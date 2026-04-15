// module axi4_vgalcd(
//   input         apb4_pclk,
//   input         apb4_presetn,
//   input         axi4_aclk,
//   input         axi4_aresetn,
//   input         apb4_psel,
//   input         apb4_penable,
//   input         apb4_pwrite,
//   input  [31:0] apb4_paddr,
//   input  [2:0]  apb4_pprot,
//   input  [31:0] apb4_pwdata,
//   input  [3:0]  apb4_pstrb,
//   output        apb4_pready,
//   output        apb4_pslverr,
//   output [31:0] apb4_prdata,
//   output        axi4_awready,
//   input         axi4_awvalid,
//   input  [3:0]  axi4_awid,
//   input  [31:0] axi4_awaddr,
//   input  [7:0]  axi4_awlen,
//   input  [2:0]  axi4_awsize,
//   input  [1:0]  axi4_awburst,
//   output        axi4_wready,
//   input         axi4_wvalid,
//   input  [31:0] axi4_wdata,
//   input  [3:0]  axi4_wstrb,
//   input         axi4_wlast,
//   input         axi4_bready,
//   output        axi4_bvalid,
//   output [3:0]  axi4_bid,
//   output [1:0]  axi4_bresp,
//   output        axi4_arready,
//   input         axi4_arvalid,
//   input  [3:0]  axi4_arid,
//   input  [31:0] axi4_araddr,
//   input  [7:0]  axi4_arlen,
//   input  [2:0]  axi4_arsize,
//   input  [1:0]  axi4_arburst,
//   input         axi4_rready,
//   output        axi4_rvalid,
//   output [3:0]  axi4_rid,
//   output [31:0] axi4_rdata,
//   output [1:0]  axi4_rresp,
//   output        axi4_rlast,
  
//   output [4:0]      vgalcd_vgalcd_ro,
//   output [3:0]      vgalcd_vgalcd_g_o,
//   output [4:0]      vgalcd_vgalcd_bo,
//   output       vgalcd_vgalcd_hsync_o,
//   output       vgalcd_vgalcd_vsync_o,
//   output       vgalcd_vgalcd_pclk_o,
//   output       vgalcd_vgalcd_de_o,
//   output       vgalcd_irq_o
// );

//   // Set all outputs to 0
//   assign apb4_pready = 1'b0;
//   assign apb4_pslverr = 1'b0;
//   assign apb4_prdata = 32'b0;
//   assign axi4_awready = 1'b0;
//   assign axi4_wready = 1'b0;
//   assign axi4_bvalid = 1'b0;
//   assign axi4_bid = 4'b0;
//   assign axi4_bresp = 2'b0;
//   assign axi4_arready = 1'b0;
//   assign axi4_rvalid = 1'b0;
//   assign axi4_rid = 4'b0;
//   assign axi4_rdata = 32'b0;
//   assign axi4_rresp = 2'b0;
//   assign axi4_rlast = 1'b0;
  
//   assign vgalcd_vgalcd_ro=0;
//   assign vgalcd_vgalcd_g_o=0;
//   assign vgalcd_vgalcd_bo=0;
//   assign vgalcd_vgalcd_hsync_o=0; 
//   assign vgalcd_vgalcd_vsync_o=0;
//   assign vgalcd_vgalcd_pclk_o=0;
//   assign vgalcd_vgalcd_de_o=0;
//   assign vgalcd_irq_o=0;
  
  

// endmodule