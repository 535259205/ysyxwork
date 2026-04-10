// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_vga

`timescale 1ns/1ps 
module my_vga (
  input  wire [31:0]   apb_in_paddr,
  input  wire          apb_in_psel,
  input  wire          apb_in_penable,
  input  wire [2:0]    apb_in_pprot,
  input  wire          apb_in_pwrite,
  input  wire [31:0]   apb_in_pwdata,
  input  wire [3:0]    apb_in_pstrb,
  output reg           apb_in_pready,
  output reg  [31:0]   apb_in_prdata,
  output reg           apb_in_pslverr,
  output wire [7:0]    vga_r,
  output wire [7:0]    vga_g,
  output wire [7:0]    vga_b,
  output wire          vga_hsync,
  output wire          vga_vsync,
  output wire          vga_valid,
  input  wire          clk,
  input  wire          reset
);

  wire       [23:0]   vga_vga_data;
  wire       [31:0]   vga_ram_spinal_port0;
  wire       [31:0]   vga_ram_spinal_port2;
  wire       [9:0]    vga_h_addr;
  wire       [9:0]    vga_v_addr;
  wire                vga_hsync_1;
  wire                vga_vsync_1;
  wire                vga_valid_1;
  wire       [7:0]    vga_vga_r;
  wire       [7:0]    vga_vga_g;
  wire       [7:0]    vga_vga_b;
  wire       [19:0]   _zz__zz_vga_data;
  wire       [19:0]   _zz__zz_vga_data_1;
  wire       [18:0]   _zz_vga_ram_port;
  wire       [31:0]   _zz_vga_data_1;
  wire       [18:0]   _zz_vga_data_2;
  wire                _zz_when;
  wire       [18:0]   _zz_vga_ram_port_1;
  wire       [29:0]   _zz_vga_ram_port_2;
  wire       [31:0]   _zz_vga_ram_port_3;
  wire                _zz_when_1;
  wire       [18:0]   _zz_apb_in_prdata_1;
  wire       [18:0]   _zz_vga_ram_port_4;
  reg                 _zz_1;
  wire       [19:0]   _zz_vga_data;
  wire                valid;
  wire       [29:0]   _zz_apb_in_prdata;
  reg [31:0] vga_ram [0:307199];

  assign _zz_when = (valid && apb_in_pwrite);
  assign _zz_when_1 = (valid && (! apb_in_pwrite));
  assign _zz__zz_vga_data = (vga_v_addr * 10'h280);
  assign _zz__zz_vga_data_1 = {10'd0, vga_h_addr};
  assign _zz_vga_data_2 = _zz_vga_data[18:0];
  assign _zz_vga_data_1 = vga_ram_spinal_port0;
  assign _zz_vga_ram_port_2 = (apb_in_paddr >>> 2'd2);
  assign _zz_vga_ram_port_1 = _zz_vga_ram_port_2[18:0];
  assign _zz_vga_ram_port_4 = _zz_apb_in_prdata[18:0];
  assign _zz_vga_ram_port_3 = apb_in_pwdata;
  assign vga_ram_spinal_port0 = vga_ram[_zz_vga_data_2];
  always @(posedge clk) begin
    if(_zz_1) begin
      vga_ram[_zz_vga_ram_port_1] <= _zz_vga_ram_port_3;
    end
  end

  assign vga_ram_spinal_port2 = vga_ram[_zz_vga_ram_port_4];
  vga_ctrl vga (
    .pclk     (clk               ), //i
    .reset    (reset             ), //i
    .vga_data (vga_vga_data[23:0]), //i
    .h_addr   (vga_h_addr[9:0]   ), //o
    .v_addr   (vga_v_addr[9:0]   ), //o
    .hsync    (vga_hsync_1       ), //o
    .vsync    (vga_vsync_1       ), //o
    .valid    (vga_valid_1       ), //o
    .vga_r    (vga_vga_r[7:0]    ), //o
    .vga_g    (vga_vga_g[7:0]    ), //o
    .vga_b    (vga_vga_b[7:0]    )  //o
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(_zz_when) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_vga_data = (_zz__zz_vga_data + _zz__zz_vga_data_1);
  assign vga_vga_data = _zz_vga_data_1[23:0];
  assign vga_r = vga_vga_r;
  assign vga_g = vga_vga_g;
  assign vga_b = vga_vga_b;
  assign vga_hsync = vga_hsync_1;
  assign vga_vsync = vga_vsync_1;
  assign vga_valid = vga_valid_1;
  always @(*) begin
    apb_in_pready = 1'b0;
    if(_zz_when) begin
      apb_in_pready = 1'b1;
    end
    if(_zz_when_1) begin
      apb_in_pready = 1'b1;
    end
  end

  always @(*) begin
    apb_in_prdata = 32'h0;
    if(_zz_when_1) begin
      apb_in_prdata = vga_ram_spinal_port2;
    end
  end

  always @(*) begin
    apb_in_pslverr = 1'b0;
    if(_zz_when) begin
      apb_in_pslverr = 1'b0;
    end
    if(_zz_when_1) begin
      apb_in_pslverr = 1'b0;
    end
  end

  assign valid = (apb_in_penable && apb_in_psel);
  assign _zz_apb_in_prdata = (apb_in_paddr >>> 2'd2);

endmodule
