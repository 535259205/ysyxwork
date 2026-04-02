// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : apb_delayer_my

`timescale 1ns/1ps 
module apb_delayer_my (
  input  wire [31:0]   in_in_paddr,
  input  wire          in_in_psel,
  input  wire          in_in_penable,
  input  wire [2:0]    in_in_pprot,
  input  wire          in_in_pwrite,
  input  wire [31:0]   in_in_pwdata,
  input  wire [3:0]    in_in_pstrb,
  output reg           in_in_pready,
  output reg  [31:0]   in_in_prdata,
  output wire          in_in_pslverr,
  output reg  [31:0]   out_in_paddr,
  output reg           out_in_psel,
  output reg           out_in_penable,
  output reg  [2:0]    out_in_pprot,
  output reg           out_in_pwrite,
  output reg  [31:0]   out_in_pwdata,
  output reg  [3:0]    out_in_pstrb,
  input  wire          out_in_pready,
  input  wire [31:0]   out_in_prdata,
  input  wire          out_in_pslverr,
  input  wire          clock,
  input  wire          reset
);

  wire                _zz_when;
  wire                _zz_when_1;
  reg        [31:0]   delay_cnt;
  reg        [31:0]   r_data;
  reg                 flag;

  assign _zz_when_1 = (32'h00060187 <= delay_cnt);
  assign _zz_when = (! flag);
  always @(*) begin
    in_in_prdata = 32'h0;
    if(flag) begin
      if(_zz_when_1) begin
        in_in_prdata = r_data;
      end
    end
  end

  assign in_in_pslverr = 1'b0;
  always @(*) begin
    in_in_pready = 1'b0;
    if(flag) begin
      if(_zz_when_1) begin
        in_in_pready = 1'b1;
      end
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_paddr = in_in_paddr;
    end else begin
      out_in_paddr = 32'h0;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_psel = in_in_psel;
    end else begin
      out_in_psel = 1'b0;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_penable = in_in_penable;
    end else begin
      out_in_penable = 1'b0;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_pprot = in_in_pprot;
    end else begin
      out_in_pprot = 3'b000;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_pwrite = in_in_pwrite;
    end else begin
      out_in_pwrite = 1'b0;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_pwdata = in_in_pwdata;
    end else begin
      out_in_pwdata = 32'h0;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      out_in_pstrb = in_in_pstrb;
    end else begin
      out_in_pstrb = 4'b0000;
    end
  end

  always @(posedge clock) begin
    if(reset) begin
      delay_cnt <= 32'h0;
      r_data <= 32'h0;
      flag <= 1'b0;
    end else begin
      if(_zz_when) begin
        if(out_in_pready) begin
          r_data <= out_in_prdata;
          flag <= 1'b1;
        end
      end
      if(flag) begin
        delay_cnt <= (delay_cnt + 32'h000186a0);
        if(_zz_when_1) begin
          delay_cnt <= (delay_cnt - 32'h00060187);
          flag <= 1'b0;
        end
      end
    end
  end


endmodule
