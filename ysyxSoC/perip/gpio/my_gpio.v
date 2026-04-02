// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_gpio

`timescale 1ns/1ps 
module my_gpio (
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
  output wire [15:0]   gpio_out,
  input  wire [15:0]   gpio_in,
  output wire [7:0]    gpio_seg_0,
  output wire [7:0]    gpio_seg_1,
  output wire [7:0]    gpio_seg_2,
  output wire [7:0]    gpio_seg_3,
  output wire [7:0]    gpio_seg_4,
  output wire [7:0]    gpio_seg_5,
  output wire [7:0]    gpio_seg_6,
  output wire [7:0]    gpio_seg_7,
  input  wire          clk,
  input  wire          reset
);

  wire       [3:0]    _zz_1;
  wire       [3:0]    _zz_2;
  wire       [3:0]    _zz_3;
  wire       [3:0]    _zz_4;
  wire       [3:0]    _zz_5;
  wire       [3:0]    _zz_6;
  wire       [3:0]    _zz_7;
  wire       [3:0]    _zz_8;
  wire                _zz_when;
  wire                _zz_when_1;
  reg        [15:0]   led_reg;
  reg        [15:0]   sw_reg;
  reg        [31:0]   seg_reg;
  reg        [7:0]    _zz_gpio_seg_0;
  reg        [7:0]    _zz_gpio_seg_1;
  reg        [7:0]    _zz_gpio_seg_2;
  reg        [7:0]    _zz_gpio_seg_3;
  reg        [7:0]    _zz_gpio_seg_4;
  reg        [7:0]    _zz_gpio_seg_5;
  reg        [7:0]    _zz_gpio_seg_6;
  reg        [7:0]    _zz_gpio_seg_7;
  wire                valid;

  assign _zz_when = (valid && apb_in_pwrite);
  assign _zz_when_1 = (valid && (! apb_in_pwrite));
  assign _zz_1 = seg_reg[3 : 0];
  assign _zz_2 = seg_reg[7 : 4];
  assign _zz_3 = seg_reg[11 : 8];
  assign _zz_4 = seg_reg[15 : 12];
  assign _zz_5 = seg_reg[19 : 16];
  assign _zz_6 = seg_reg[23 : 20];
  assign _zz_7 = seg_reg[27 : 24];
  assign _zz_8 = seg_reg[31 : 28];
  assign gpio_out = led_reg;
  always @(*) begin
    case(_zz_1)
      4'b0000 : begin
        _zz_gpio_seg_0 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_0 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_0 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_0 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_0 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_0 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_0 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_0 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_0 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_0 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_0 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_0 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_0 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_0 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_0 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_0 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_0 = (~ _zz_gpio_seg_0);
  always @(*) begin
    case(_zz_2)
      4'b0000 : begin
        _zz_gpio_seg_1 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_1 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_1 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_1 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_1 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_1 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_1 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_1 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_1 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_1 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_1 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_1 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_1 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_1 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_1 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_1 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_1 = (~ _zz_gpio_seg_1);
  always @(*) begin
    case(_zz_3)
      4'b0000 : begin
        _zz_gpio_seg_2 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_2 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_2 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_2 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_2 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_2 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_2 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_2 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_2 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_2 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_2 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_2 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_2 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_2 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_2 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_2 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_2 = (~ _zz_gpio_seg_2);
  always @(*) begin
    case(_zz_4)
      4'b0000 : begin
        _zz_gpio_seg_3 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_3 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_3 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_3 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_3 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_3 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_3 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_3 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_3 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_3 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_3 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_3 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_3 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_3 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_3 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_3 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_3 = (~ _zz_gpio_seg_3);
  always @(*) begin
    case(_zz_5)
      4'b0000 : begin
        _zz_gpio_seg_4 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_4 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_4 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_4 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_4 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_4 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_4 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_4 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_4 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_4 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_4 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_4 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_4 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_4 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_4 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_4 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_4 = (~ _zz_gpio_seg_4);
  always @(*) begin
    case(_zz_6)
      4'b0000 : begin
        _zz_gpio_seg_5 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_5 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_5 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_5 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_5 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_5 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_5 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_5 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_5 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_5 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_5 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_5 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_5 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_5 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_5 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_5 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_5 = (~ _zz_gpio_seg_5);
  always @(*) begin
    case(_zz_7)
      4'b0000 : begin
        _zz_gpio_seg_6 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_6 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_6 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_6 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_6 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_6 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_6 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_6 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_6 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_6 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_6 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_6 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_6 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_6 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_6 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_6 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_6 = (~ _zz_gpio_seg_6);
  always @(*) begin
    case(_zz_8)
      4'b0000 : begin
        _zz_gpio_seg_7 = 8'hfc;
      end
      4'b0001 : begin
        _zz_gpio_seg_7 = 8'h60;
      end
      4'b0010 : begin
        _zz_gpio_seg_7 = 8'hda;
      end
      4'b0011 : begin
        _zz_gpio_seg_7 = 8'hf2;
      end
      4'b0100 : begin
        _zz_gpio_seg_7 = 8'h66;
      end
      4'b0101 : begin
        _zz_gpio_seg_7 = 8'hb6;
      end
      4'b0110 : begin
        _zz_gpio_seg_7 = 8'hbe;
      end
      4'b0111 : begin
        _zz_gpio_seg_7 = 8'he0;
      end
      4'b1000 : begin
        _zz_gpio_seg_7 = 8'hfe;
      end
      4'b1001 : begin
        _zz_gpio_seg_7 = 8'hf6;
      end
      4'b1010 : begin
        _zz_gpio_seg_7 = 8'hee;
      end
      4'b1011 : begin
        _zz_gpio_seg_7 = 8'h3e;
      end
      4'b1100 : begin
        _zz_gpio_seg_7 = 8'h9c;
      end
      4'b1101 : begin
        _zz_gpio_seg_7 = 8'h7a;
      end
      4'b1110 : begin
        _zz_gpio_seg_7 = 8'h9e;
      end
      default : begin
        _zz_gpio_seg_7 = 8'h8e;
      end
    endcase
  end

  assign gpio_seg_7 = (~ _zz_gpio_seg_7);
  always @(*) begin
    apb_in_pready = 1'b0;
    if(_zz_when) begin
      apb_in_pready = 1'b1;
      case(apb_in_paddr)
        32'h10002000 : begin
        end
        32'h10002008 : begin
        end
        default : begin
          apb_in_pready = 1'b0;
        end
      endcase
    end
    if(_zz_when_1) begin
      apb_in_pready = 1'b1;
      case(apb_in_paddr)
        32'h10002004 : begin
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
        32'h10002004 : begin
          apb_in_prdata = {16'd0, sw_reg};
        end
        default : begin
        end
      endcase
    end
  end

  always @(*) begin
    apb_in_pslverr = 1'b0;
    if(_zz_when) begin
      case(apb_in_paddr)
        32'h10002000 : begin
        end
        32'h10002008 : begin
        end
        default : begin
          apb_in_pslverr = 1'b1;
        end
      endcase
    end
    if(_zz_when_1) begin
      case(apb_in_paddr)
        32'h10002004 : begin
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
      led_reg <= 16'h0;
      sw_reg <= 16'h0;
      seg_reg <= 32'h0;
    end else begin
      sw_reg <= gpio_in;
      if(_zz_when) begin
        case(apb_in_paddr)
          32'h10002000 : begin
            led_reg <= apb_in_pwdata[15:0];
          end
          32'h10002008 : begin
            seg_reg <= apb_in_pwdata;
          end
          default : begin
          end
        endcase
      end
    end
  end


endmodule
