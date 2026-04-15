// module apb4_spi_temp(
//   input         apb4_pclk,
//   input         apb4_presetn,
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
//   output        qspi_spi_sck_o,
//   output        qspi_spi_nss_o,
//   output        qspi_spi_io_en_o,
//   input  [3:0]  qspi_spi_io_in_i,
//   output [3:0]  qspi_spi_io_out_o,
//   output        qspi_irq_o
// );

//   // Set all outputs to 0
//   assign apb4_pready = 1'b0;
//   assign apb4_pslverr = 1'b0;
//   assign apb4_prdata = 32'b0;
//   assign qspi_spi_sck_o = 1'b0;
//   assign qspi_spi_nss_o = 1'b0;
//   assign qspi_spi_io_en_o = 1'b0;
//   assign qspi_spi_io_out_o = 4'b0;
//   assign qspi_irq_o = 1'b0;

// endmodule