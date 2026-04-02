// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_ps2

`timescale 1ns/1ps 
module my_ps2 (
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
  input  wire          ps2_clk,
  input  wire          ps2_data,
  input  wire          clk,
  input  wire          reset
);

  wire                ps2_resetn;
  wire                ps2_ps2_get;
  wire       [7:0]    ps2_ps2_getdata;
  wire                _zz_when;
  wire                _zz_when_1;
  reg        [7:0]    ps2_data_1;
  reg                 ps2_get_regNext;
  wire                valid;

  assign _zz_when = (valid && apb_in_pwrite);
  assign _zz_when_1 = (valid && (! apb_in_pwrite));
  ps2_keyboard ps2 (
    .clk         (clk                 ), //i
    .resetn      (ps2_resetn          ), //i
    .ps2_clk     (ps2_clk             ), //i
    .ps2_data    (ps2_data            ), //i
    .ps2_get     (ps2_ps2_get         ), //o
    .ps2_getdata (ps2_ps2_getdata[7:0])  //o
  );
  assign ps2_resetn = (! reset);
  always @(*) begin
    apb_in_pready = 1'b0;
    if(_zz_when) begin
      apb_in_pready = 1'b1;
    end
    if(_zz_when_1) begin
      apb_in_pready = 1'b1;
      case(apb_in_paddr)
        32'h10011000 : begin
        end
        default : begin
          apb_in_pready = 1'b0;
        end
      endcase
    end
  end

  always @(*) begin
    apb_in_prdata = 32'h0;
    if(_zz_when_1) begin
      case(apb_in_paddr)
        32'h10011000 : begin
          apb_in_prdata = {24'd0, ps2_data_1};
        end
        default : begin
        end
      endcase
    end
  end

  always @(*) begin
    apb_in_pslverr = 1'b0;
    if(_zz_when) begin
      apb_in_pslverr = 1'b1;
    end
    if(_zz_when_1) begin
      case(apb_in_paddr)
        32'h10011000 : begin
        end
        default : begin
          apb_in_pslverr = 1'b1;
        end
      endcase
    end
  end

  assign valid = (apb_in_penable && apb_in_psel);
  always @(posedge clk) begin
    if(reset) begin
      ps2_data_1 <= 8'h0;
    end else begin
      if((ps2_ps2_get && (! ps2_get_regNext))) begin
        ps2_data_1 <= ps2_ps2_getdata;
      end
      if(_zz_when_1) begin
        case(apb_in_paddr)
          32'h10011000 : begin
            ps2_data_1 <= 8'h0;
          end
          default : begin
          end
        endcase
      end
    end
  end

  always @(posedge clk) begin
    ps2_get_regNext <= ps2_ps2_get;
  end


endmodule
