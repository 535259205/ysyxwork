module nmi_psram(
  input         clk_i,
  input         rst_n_i,
  input         nmi_valid,
  input  [31:0] nmi_addr,
  input  [31:0] nmi_wdata,
  input  [3:0]  nmi_wstrb,
  output [31:0] nmi_rdata,
  output        nmi_ready,
  output        qspi_spi_sck_o,
  output        qspi_spi_nss_o,
  output [3:0]  qspi_spi_io_en_o,
  input  [3:0]  qspi_spi_io_in_i,
  output [3:0]  qspi_spi_io_out_o,
  output        qspi_irq_o
);

  // Set all outputs to 0
  // assign nmi_rdata = 32'b0;
  // assign nmi_ready = 1'b0;
  // assign qspi_spi_sck_o = 1'b0;
  // assign qspi_spi_nss_o = 1'b0;
  // assign qspi_spi_io_en_o = 1'b0;
  // assign qspi_spi_io_out_o = 4'b0;
  assign qspi_irq_o = 1'b0;


wire        apb_write = (nmi_wstrb != 4'h0);   // 0→读，1→写

wire [3:0]douten;
psram_top_apb u_psram_top_apb(
.clock(clk_i),
.reset(!rst_n_i),
.in_paddr(nmi_addr),
.in_psel(nmi_valid),
.in_penable(nmi_valid),
.in_pprot(1),
.in_pwrite(apb_write),
.in_pwdata(nmi_wdata),
.in_pstrb(nmi_wstrb),
.in_pready(nmi_ready),
.in_prdata(nmi_rdata),
.in_pslverr(),

.qspi_sck(qspi_spi_sck_o),
.qspi_ce_n(qspi_spi_nss_o),
.din(qspi_spi_io_in_i),
.dout(qspi_spi_io_out_o),
.douten(douten)
);
assign qspi_spi_io_en_o=douten;
endmodule