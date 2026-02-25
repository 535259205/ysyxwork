// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : spi_xip

`timescale 1ns/1ps 
module spi_xip (
  input  wire [31:0]   flash_addr_start,
  input  wire [31:0]   flash_addr_end,
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
  output reg  [31:0]   spi_in_paddr,
  output reg           spi_in_psel,
  output reg           spi_in_penable,
  output reg  [2:0]    spi_in_pprot,
  output reg           spi_in_pwrite,
  output reg  [31:0]   spi_in_pwdata,
  output reg  [3:0]    spi_in_pstrb,
  input  wire          spi_in_pready,
  input  wire [31:0]   spi_in_prdata,
  input  wire          spi_in_pslverr,
  input  wire          clk,
  input  wire          reset
);
  localparam BOOT = 3'd0;
  localparam entry = 3'd1;
  localparam start = 3'd2;
  localparam read_reg = 3'd3;
  localparam write_reg = 3'd4;

  wire                _zz_when;
  reg        [31:0]   my_spi_in_paddr;
  reg                 my_spi_in_psel;
  reg                 my_spi_in_penable;
  reg        [2:0]    my_spi_in_pprot;
  reg                 my_spi_in_pwrite;
  reg        [31:0]   my_spi_in_pwdata;
  reg        [3:0]    my_spi_in_pstrb;
  wire                my_spi_in_pready;
  wire       [31:0]   my_spi_in_prdata;
  wire                my_spi_in_pslverr;
  reg                 my_flag;
  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg        [31:0]   s_addr;
  reg        [31:0]   s_data;
  reg        [3:0]    s_cnt;
  reg        [2:0]    s_stateReg;
  reg        [2:0]    s_stateNext;
  wire                s_onExit_BOOT;
  wire                s_onExit_entry;
  wire                s_onExit_start;
  wire                s_onExit_read_reg;
  wire                s_onExit_write_reg;
  wire                s_onEntry_BOOT;
  wire                s_onEntry_entry;
  wire                s_onEntry_start;
  wire                s_onEntry_read_reg;
  wire                s_onEntry_write_reg;
  `ifndef SYNTHESIS
  reg [71:0] s_stateReg_string;
  reg [71:0] s_stateNext_string;
  `endif


  assign _zz_when = ((flash_addr_start <= apb_in_paddr) && (apb_in_paddr <= flash_addr_end));
  `ifndef SYNTHESIS
  always @(*) begin
    case(s_stateReg)
      BOOT : s_stateReg_string = "BOOT     ";
      entry : s_stateReg_string = "entry    ";
      start : s_stateReg_string = "start    ";
      read_reg : s_stateReg_string = "read_reg ";
      write_reg : s_stateReg_string = "write_reg";
      default : s_stateReg_string = "?????????";
    endcase
  end
  always @(*) begin
    case(s_stateNext)
      BOOT : s_stateNext_string = "BOOT     ";
      entry : s_stateNext_string = "entry    ";
      start : s_stateNext_string = "start    ";
      read_reg : s_stateNext_string = "read_reg ";
      write_reg : s_stateNext_string = "write_reg";
      default : s_stateNext_string = "?????????";
    endcase
  end
  `endif

  always @(*) begin
    my_spi_in_paddr = 32'h0;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_paddr = s_addr;
      end
      write_reg : begin
        my_spi_in_paddr = s_addr;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    my_spi_in_psel = 1'b0;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_psel = 1'b1;
      end
      write_reg : begin
        my_spi_in_psel = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    my_spi_in_penable = 1'b0;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_penable = 1'b1;
      end
      write_reg : begin
        my_spi_in_penable = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    my_spi_in_pprot = 3'b000;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_pprot = 3'b001;
      end
      write_reg : begin
        my_spi_in_pprot = 3'b001;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    my_spi_in_pwrite = 1'b0;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_pwrite = 1'b0;
      end
      write_reg : begin
        my_spi_in_pwrite = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    my_spi_in_pwdata = 32'h0;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_pwdata = 32'h0;
      end
      write_reg : begin
        my_spi_in_pwdata = s_data;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    my_spi_in_pstrb = 4'b0000;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
        my_spi_in_pstrb = 4'b1111;
      end
      write_reg : begin
        my_spi_in_pstrb = 4'b1111;
      end
      default : begin
      end
    endcase
  end

  assign my_spi_in_pready = spi_in_pready;
  assign my_spi_in_prdata = spi_in_prdata;
  assign my_spi_in_pslverr = spi_in_pslverr;
  always @(*) begin
    apb_in_pready = 1'b0;
    if(!_zz_when) begin
      apb_in_pready = spi_in_pready;
    end
    case(s_stateReg)
      entry : begin
      end
      start : begin
        case(s_cnt)
          4'b0000 : begin
          end
          4'b0001 : begin
          end
          4'b0010 : begin
          end
          4'b0011 : begin
          end
          4'b0100 : begin
          end
          4'b0101 : begin
          end
          4'b0110 : begin
          end
          4'b0111 : begin
          end
          4'b1000 : begin
          end
          4'b1001 : begin
          end
          4'b1010 : begin
          end
          4'b1011 : begin
            apb_in_pready = 1'b1;
          end
          default : begin
          end
        endcase
      end
      read_reg : begin
      end
      write_reg : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    apb_in_prdata = 32'h0;
    if(!_zz_when) begin
      apb_in_prdata = spi_in_prdata;
    end
    case(s_stateReg)
      entry : begin
      end
      start : begin
        case(s_cnt)
          4'b0000 : begin
          end
          4'b0001 : begin
          end
          4'b0010 : begin
          end
          4'b0011 : begin
          end
          4'b0100 : begin
          end
          4'b0101 : begin
          end
          4'b0110 : begin
          end
          4'b0111 : begin
          end
          4'b1000 : begin
          end
          4'b1001 : begin
          end
          4'b1010 : begin
          end
          4'b1011 : begin
            apb_in_prdata = s_data;
          end
          default : begin
          end
        endcase
      end
      read_reg : begin
      end
      write_reg : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    apb_in_pslverr = 1'b0;
    if(!_zz_when) begin
      apb_in_pslverr = spi_in_pslverr;
    end
  end

  assign s_wantExit = 1'b0;
  always @(*) begin
    s_wantStart = 1'b0;
    case(s_stateReg)
      entry : begin
      end
      start : begin
      end
      read_reg : begin
      end
      write_reg : begin
      end
      default : begin
        s_wantStart = 1'b1;
      end
    endcase
  end

  assign s_wantKill = 1'b0;
  always @(*) begin
    if(_zz_when) begin
      my_flag = 1'b1;
    end else begin
      my_flag = 1'b0;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_paddr = my_spi_in_paddr;
    end else begin
      spi_in_paddr = apb_in_paddr;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_psel = my_spi_in_psel;
    end else begin
      spi_in_psel = apb_in_psel;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_penable = my_spi_in_penable;
    end else begin
      spi_in_penable = apb_in_penable;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_pprot = my_spi_in_pprot;
    end else begin
      spi_in_pprot = apb_in_pprot;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_pwrite = my_spi_in_pwrite;
    end else begin
      spi_in_pwrite = apb_in_pwrite;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_pwdata = my_spi_in_pwdata;
    end else begin
      spi_in_pwdata = apb_in_pwdata;
    end
  end

  always @(*) begin
    if(_zz_when) begin
      spi_in_pstrb = my_spi_in_pstrb;
    end else begin
      spi_in_pstrb = apb_in_pstrb;
    end
  end

  always @(*) begin
    s_stateNext = s_stateReg;
    case(s_stateReg)
      entry : begin
        if((my_flag && apb_in_penable)) begin
          s_stateNext = start;
        end
      end
      start : begin
        case(s_cnt)
          4'b0000 : begin
            s_stateNext = write_reg;
          end
          4'b0001 : begin
            s_stateNext = write_reg;
          end
          4'b0010 : begin
            s_stateNext = write_reg;
          end
          4'b0011 : begin
            s_stateNext = read_reg;
          end
          4'b0100 : begin
          end
          4'b0101 : begin
            s_stateNext = write_reg;
          end
          4'b0110 : begin
            s_stateNext = write_reg;
          end
          4'b0111 : begin
            s_stateNext = write_reg;
          end
          4'b1000 : begin
            s_stateNext = read_reg;
          end
          4'b1001 : begin
          end
          4'b1010 : begin
            s_stateNext = read_reg;
          end
          4'b1011 : begin
            s_stateNext = entry;
          end
          default : begin
          end
        endcase
      end
      read_reg : begin
        if(my_spi_in_pready) begin
          s_stateNext = start;
        end
      end
      write_reg : begin
        if(my_spi_in_pready) begin
          s_stateNext = start;
        end
      end
      default : begin
      end
    endcase
    if(s_wantStart) begin
      s_stateNext = entry;
    end
    if(s_wantKill) begin
      s_stateNext = BOOT;
    end
  end

  assign s_onExit_BOOT = ((s_stateNext != BOOT) && (s_stateReg == BOOT));
  assign s_onExit_entry = ((s_stateNext != entry) && (s_stateReg == entry));
  assign s_onExit_start = ((s_stateNext != start) && (s_stateReg == start));
  assign s_onExit_read_reg = ((s_stateNext != read_reg) && (s_stateReg == read_reg));
  assign s_onExit_write_reg = ((s_stateNext != write_reg) && (s_stateReg == write_reg));
  assign s_onEntry_BOOT = ((s_stateNext == BOOT) && (s_stateReg != BOOT));
  assign s_onEntry_entry = ((s_stateNext == entry) && (s_stateReg != entry));
  assign s_onEntry_start = ((s_stateNext == start) && (s_stateReg != start));
  assign s_onEntry_read_reg = ((s_stateNext == read_reg) && (s_stateReg != read_reg));
  assign s_onEntry_write_reg = ((s_stateNext == write_reg) && (s_stateReg != write_reg));
  always @(posedge clk) begin
    if(reset) begin
      s_addr <= 32'h0;
      s_data <= 32'h0;
      s_cnt <= 4'b0000;
      s_stateReg <= BOOT;
    end else begin
      s_stateReg <= s_stateNext;
      case(s_stateReg)
        entry : begin
        end
        start : begin
          case(s_cnt)
            4'b0000 : begin
              s_addr <= 32'h10001010;
              s_data <= 32'h00002040;
            end
            4'b0001 : begin
              s_addr <= 32'h10001014;
              s_data <= 32'h00000002;
            end
            4'b0010 : begin
              s_addr <= 32'h10001018;
              s_data <= 32'h00000001;
            end
            4'b0011 : begin
              s_addr <= 32'h10001010;
            end
            4'b0100 : begin
              if(s_data[8]) begin
                s_cnt <= (s_cnt - 4'b0001);
              end else begin
                s_cnt <= (s_cnt + 4'b0001);
              end
            end
            4'b0101 : begin
              s_addr <= 32'h10001000;
              s_data <= {8'h03,{2'b00,apb_in_paddr[23 : 2]}};
            end
            4'b0110 : begin
              s_addr <= 32'h10001004;
              s_data <= {8'h03,{2'b00,apb_in_paddr[23 : 2]}};
            end
            4'b0111 : begin
              s_addr <= 32'h10001010;
              s_data <= 32'h00002140;
            end
            4'b1000 : begin
              s_addr <= 32'h10001010;
            end
            4'b1001 : begin
              if(s_data[8]) begin
                s_cnt <= (s_cnt - 4'b0001);
              end else begin
                s_cnt <= (s_cnt + 4'b0001);
              end
            end
            4'b1010 : begin
              s_addr <= 32'h10001000;
            end
            4'b1011 : begin
              s_cnt <= 4'b0000;
            end
            default : begin
            end
          endcase
        end
        read_reg : begin
          if(my_spi_in_pready) begin
            s_data <= my_spi_in_prdata;
            s_cnt <= (s_cnt + 4'b0001);
          end
        end
        write_reg : begin
          if(my_spi_in_pready) begin
            s_cnt <= (s_cnt + 4'b0001);
          end
        end
        default : begin
        end
      endcase
    end
  end


endmodule
