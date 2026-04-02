// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : axi4_delayer_my

`timescale 1ns/1ps 
module axi4_delayer_my (
  output reg           in_arready,
  input  wire          in_arvalid,
  input  wire [3:0]    in_arid,
  input  wire [31:0]   in_araddr,
  input  wire [7:0]    in_arlen,
  input  wire [2:0]    in_arsize,
  input  wire [1:0]    in_arburst,
  input  wire          in_rready,
  output reg           in_rvalid,
  output reg  [3:0]    in_rid,
  output reg  [31:0]   in_rdata,
  output reg  [1:0]    in_rresp,
  output reg           in_rlast,
  output reg           in_awready,
  input  wire          in_awvalid,
  input  wire [3:0]    in_awid,
  input  wire [31:0]   in_awaddr,
  input  wire [7:0]    in_awlen,
  input  wire [2:0]    in_awsize,
  input  wire [1:0]    in_awburst,
  output reg           in_wready,
  input  wire          in_wvalid,
  input  wire [31:0]   in_wdata,
  input  wire [3:0]    in_wstrb,
  input  wire          in_wlast,
  input  wire          in_bready,
  output reg           in_bvalid,
  output wire [3:0]    in_bid,
  output wire [1:0]    in_bresp,
  input  wire          out_arready,
  output reg           out_arvalid,
  output reg  [3:0]    out_arid,
  output reg  [31:0]   out_araddr,
  output reg  [7:0]    out_arlen,
  output reg  [2:0]    out_arsize,
  output reg  [1:0]    out_arburst,
  output reg           out_rready,
  input  wire          out_rvalid,
  input  wire [3:0]    out_rid,
  input  wire [31:0]   out_rdata,
  input  wire [1:0]    out_rresp,
  input  wire          out_rlast,
  input  wire          out_awready,
  output reg           out_awvalid,
  output reg  [3:0]    out_awid,
  output reg  [31:0]   out_awaddr,
  output reg  [7:0]    out_awlen,
  output reg  [2:0]    out_awsize,
  output reg  [1:0]    out_awburst,
  input  wire          out_wready,
  output reg           out_wvalid,
  output reg  [31:0]   out_wdata,
  output reg  [3:0]    out_wstrb,
  output wire          out_wlast,
  output wire          out_bready,
  input  wire          out_bvalid,
  input  wire [3:0]    out_bid,
  input  wire [1:0]    out_bresp,
  input  wire          clock,
  input  wire          reset
);
  localparam r_BOOT = 2'd0;
  localparam r_ar = 2'd1;
  localparam r_r = 2'd2;
  localparam w_BOOT = 1'd0;
  localparam w_aw = 1'd1;

  wire       [31:0]   r_r_data_spinal_port1;
  wire       [31:0]   _zz_r_r_data_port;
  wire                _zz_when;
  wire       [50:0]   _zz_r_max_cnt;
  wire       [50:0]   _zz_r_max_cnt_1;
  wire       [50:0]   _zz_r_max_cnt_2;
  wire       [31:0]   _zz_r_max_cnt_3;
  wire       [50:0]   _zz_r_max_cnt_4;
  wire                _zz_when_1;
  wire                _zz_when_2;
  wire                _zz_when_3;
  wire       [50:0]   _zz_r_max_cnt_5;
  wire       [50:0]   _zz_r_max_cnt_6;
  wire       [50:0]   _zz_r_max_cnt_7;
  wire       [31:0]   _zz_r_max_cnt_8;
  wire       [50:0]   _zz_r_max_cnt_9;
  wire                _zz_when_4;
  wire                _zz_when_5;
  wire       [2:0]    _zz_when_6;
  wire                _zz_when_7;
  wire                _zz_when_8;
  wire       [50:0]   _zz_w_max_cnt;
  wire       [50:0]   _zz_w_max_cnt_1;
  wire       [50:0]   _zz_w_max_cnt_2;
  wire       [31:0]   _zz_w_max_cnt_3;
  wire       [50:0]   _zz_w_max_cnt_4;
  wire       [50:0]   _zz_w_max_cnt_b;
  wire       [50:0]   _zz_w_max_cnt_b_1;
  wire       [50:0]   _zz_w_max_cnt_b_2;
  wire       [31:0]   _zz_w_max_cnt_b_3;
  wire       [50:0]   _zz_w_max_cnt_b_4;
  wire                _zz_when_9;
  reg                 _zz_1;
  wire                r_wantExit;
  reg                 r_wantStart;
  wire                r_wantKill;
  reg        [31:0]   r_cnt;
  reg        [31:0]   r_max_cnt;
  reg        [31:0]   r_t0;
  reg                 r_flag;
  reg        [2:0]    r_r_mem_index;
  reg        [2:0]    r_r_r_index;
  wire                w_wantExit;
  reg                 w_wantStart;
  wire                w_wantKill;
  reg        [31:0]   w_cnt;
  reg        [31:0]   w_max_cnt;
  reg        [31:0]   w_max_cnt_b;
  reg        [31:0]   w_t0;
  reg                 w_flag;
  reg                 w_aw_flag;
  reg        [1:0]    r_stateReg;
  reg        [1:0]    r_stateNext;
  wire                r_onExit_BOOT;
  wire                r_onExit_ar;
  wire                r_onExit_r;
  wire                r_onEntry_BOOT;
  wire                r_onEntry_ar;
  wire                r_onEntry_r;
  reg        [0:0]    w_stateReg;
  reg        [0:0]    w_stateNext;
  wire                w_onExit_BOOT;
  wire                w_onExit_aw;
  wire                w_onEntry_BOOT;
  wire                w_onEntry_aw;
  `ifndef SYNTHESIS
  reg [31:0] r_stateReg_string;
  reg [31:0] r_stateNext_string;
  reg [31:0] w_stateReg_string;
  reg [31:0] w_stateNext_string;
  `endif

  (* ram_style = "distributed" *) reg [31:0] r_r_data [0:7];

  assign _zz_when_2 = (out_rvalid && (! r_flag));
  assign _zz_when = (r_max_cnt <= r_cnt);
  assign _zz_when_4 = (r_max_cnt <= r_cnt);
  assign _zz_when_5 = (_zz_when_6 == r_r_mem_index);
  assign _zz_when_1 = (in_arvalid && (! r_flag));
  assign _zz_when_3 = ((in_rready && out_rvalid) && (! r_flag));
  assign _zz_when_7 = (w_max_cnt_b <= w_cnt);
  assign _zz_when_8 = (w_max_cnt <= w_cnt);
  assign _zz_when_9 = (in_awvalid && (! w_aw_flag));
  assign _zz_r_max_cnt = (_zz_r_max_cnt_1 + _zz_r_max_cnt_4);
  assign _zz_r_max_cnt_1 = (_zz_r_max_cnt_2 / 17'h186a0);
  assign _zz_r_max_cnt_2 = (_zz_r_max_cnt_3 * 19'h60187);
  assign _zz_r_max_cnt_3 = (r_cnt - r_t0);
  assign _zz_r_max_cnt_4 = {19'd0, r_t0};
  assign _zz_r_max_cnt_5 = (_zz_r_max_cnt_6 + _zz_r_max_cnt_9);
  assign _zz_r_max_cnt_6 = (_zz_r_max_cnt_7 / 17'h186a0);
  assign _zz_r_max_cnt_7 = (_zz_r_max_cnt_8 * 19'h60187);
  assign _zz_r_max_cnt_8 = (r_cnt - r_t0);
  assign _zz_r_max_cnt_9 = {19'd0, r_t0};
  assign _zz_when_6 = (r_r_r_index + 3'b001);
  assign _zz_w_max_cnt = (_zz_w_max_cnt_1 + _zz_w_max_cnt_4);
  assign _zz_w_max_cnt_1 = (_zz_w_max_cnt_2 / 17'h186a0);
  assign _zz_w_max_cnt_2 = (_zz_w_max_cnt_3 * 19'h60187);
  assign _zz_w_max_cnt_3 = (w_cnt - w_t0);
  assign _zz_w_max_cnt_4 = {19'd0, w_t0};
  assign _zz_w_max_cnt_b = (_zz_w_max_cnt_b_1 + _zz_w_max_cnt_b_4);
  assign _zz_w_max_cnt_b_1 = (_zz_w_max_cnt_b_2 / 17'h186a0);
  assign _zz_w_max_cnt_b_2 = (_zz_w_max_cnt_b_3 * 19'h60187);
  assign _zz_w_max_cnt_b_3 = (w_cnt - w_t0);
  assign _zz_w_max_cnt_b_4 = {19'd0, w_t0};
  assign _zz_r_r_data_port = out_rdata;
  always @(posedge clock) begin
    if(_zz_1) begin
      r_r_data[r_r_mem_index] <= _zz_r_r_data_port;
    end
  end

  assign r_r_data_spinal_port1 = r_r_data[r_r_r_index];
  `ifndef SYNTHESIS
  always @(*) begin
    case(r_stateReg)
      r_BOOT : r_stateReg_string = "BOOT";
      r_ar : r_stateReg_string = "ar  ";
      r_r : r_stateReg_string = "r   ";
      default : r_stateReg_string = "????";
    endcase
  end
  always @(*) begin
    case(r_stateNext)
      r_BOOT : r_stateNext_string = "BOOT";
      r_ar : r_stateNext_string = "ar  ";
      r_r : r_stateNext_string = "r   ";
      default : r_stateNext_string = "????";
    endcase
  end
  always @(*) begin
    case(w_stateReg)
      w_BOOT : w_stateReg_string = "BOOT";
      w_aw : w_stateReg_string = "aw  ";
      default : w_stateReg_string = "????";
    endcase
  end
  always @(*) begin
    case(w_stateNext)
      w_BOOT : w_stateNext_string = "BOOT";
      w_aw : w_stateNext_string = "aw  ";
      default : w_stateNext_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    _zz_1 = 1'b0;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(_zz_when_2) begin
          _zz_1 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_arready = 1'b0;
    case(r_stateReg)
      r_ar : begin
        if(r_flag) begin
          if(_zz_when) begin
            in_arready = 1'b1;
          end
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_rvalid = 1'b0;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(r_flag) begin
          if(_zz_when_4) begin
            in_rvalid = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_rid = 4'b0000;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(r_flag) begin
          if(_zz_when_4) begin
            in_rid = 4'b0000;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_rdata = 32'h0;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(r_flag) begin
          if(_zz_when_4) begin
            in_rdata = r_r_data_spinal_port1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_rresp = 2'b00;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(r_flag) begin
          if(_zz_when_4) begin
            in_rresp = 2'b00;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_rlast = 1'b0;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(r_flag) begin
          if(_zz_when_4) begin
            if(_zz_when_5) begin
              in_rlast = 1'b1;
            end
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_arvalid = 1'b0;
    case(r_stateReg)
      r_ar : begin
        if(_zz_when_1) begin
          out_arvalid = 1'b1;
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_arid = 4'b0000;
    case(r_stateReg)
      r_ar : begin
        if(_zz_when_1) begin
          out_arid = in_arid;
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_araddr = 32'h0;
    case(r_stateReg)
      r_ar : begin
        if(_zz_when_1) begin
          out_araddr = in_araddr;
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_arlen = 8'h0;
    case(r_stateReg)
      r_ar : begin
        if(_zz_when_1) begin
          out_arlen = in_arlen;
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_arsize = 3'b000;
    case(r_stateReg)
      r_ar : begin
        if(_zz_when_1) begin
          out_arsize = in_arsize;
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_arburst = 2'b00;
    case(r_stateReg)
      r_ar : begin
        if(_zz_when_1) begin
          out_arburst = in_arburst;
        end
      end
      r_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_rready = 1'b0;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
        if(_zz_when_3) begin
          out_rready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_awready = 1'b0;
    case(w_stateReg)
      w_aw : begin
        if(w_flag) begin
          if(!_zz_when_7) begin
            if(_zz_when_8) begin
              in_awready = 1'b1;
            end
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_wready = 1'b0;
    case(w_stateReg)
      w_aw : begin
        if(w_flag) begin
          if(!_zz_when_7) begin
            if(_zz_when_8) begin
              in_wready = 1'b1;
            end
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_bvalid = 1'b0;
    case(w_stateReg)
      w_aw : begin
        if(w_flag) begin
          if(_zz_when_7) begin
            in_bvalid = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  assign in_bid = 4'b0000;
  assign in_bresp = 2'b00;
  always @(*) begin
    out_awvalid = 1'b0;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_awvalid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_awid = 4'b0000;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_awid = in_awid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_awaddr = 32'h0;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_awaddr = in_awaddr;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_awlen = 8'h0;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_awlen = in_awlen;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_awsize = 3'b000;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_awsize = in_awsize;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_awburst = 2'b00;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_awburst = in_awburst;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_wvalid = 1'b0;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_wvalid = in_wvalid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_wdata = 32'h0;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_wdata = in_wdata;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_wstrb = 4'b0000;
    case(w_stateReg)
      w_aw : begin
        if(_zz_when_9) begin
          out_wstrb = in_wstrb;
        end
      end
      default : begin
      end
    endcase
  end

  assign out_wlast = 1'b1;
  assign out_bready = 1'b1;
  assign r_wantExit = 1'b0;
  always @(*) begin
    r_wantStart = 1'b0;
    case(r_stateReg)
      r_ar : begin
      end
      r_r : begin
      end
      default : begin
        r_wantStart = 1'b1;
      end
    endcase
  end

  assign r_wantKill = 1'b0;
  assign w_wantExit = 1'b0;
  always @(*) begin
    w_wantStart = 1'b0;
    case(w_stateReg)
      w_aw : begin
      end
      default : begin
        w_wantStart = 1'b1;
      end
    endcase
  end

  assign w_wantKill = 1'b0;
  always @(*) begin
    r_stateNext = r_stateReg;
    case(r_stateReg)
      r_ar : begin
        if(r_flag) begin
          if(_zz_when) begin
            r_stateNext = r_r;
          end
        end
      end
      r_r : begin
        if(r_flag) begin
          if(_zz_when_4) begin
            if(_zz_when_5) begin
              r_stateNext = r_ar;
            end
          end
        end
      end
      default : begin
      end
    endcase
    if(r_wantStart) begin
      r_stateNext = r_ar;
    end
    if(r_wantKill) begin
      r_stateNext = r_BOOT;
    end
  end

  assign r_onExit_BOOT = ((r_stateNext != r_BOOT) && (r_stateReg == r_BOOT));
  assign r_onExit_ar = ((r_stateNext != r_ar) && (r_stateReg == r_ar));
  assign r_onExit_r = ((r_stateNext != r_r) && (r_stateReg == r_r));
  assign r_onEntry_BOOT = ((r_stateNext == r_BOOT) && (r_stateReg != r_BOOT));
  assign r_onEntry_ar = ((r_stateNext == r_ar) && (r_stateReg != r_ar));
  assign r_onEntry_r = ((r_stateNext == r_r) && (r_stateReg != r_r));
  always @(*) begin
    w_stateNext = w_stateReg;
    if(w_wantStart) begin
      w_stateNext = w_aw;
    end
    if(w_wantKill) begin
      w_stateNext = w_BOOT;
    end
  end

  assign w_onExit_BOOT = ((w_stateNext != w_BOOT) && (w_stateReg == w_BOOT));
  assign w_onExit_aw = ((w_stateNext != w_aw) && (w_stateReg == w_aw));
  assign w_onEntry_BOOT = ((w_stateNext == w_BOOT) && (w_stateReg != w_BOOT));
  assign w_onEntry_aw = ((w_stateNext == w_aw) && (w_stateReg != w_aw));
  always @(posedge clock) begin
    if(reset) begin
      r_cnt <= 32'h0;
      r_max_cnt <= 32'h0;
      r_t0 <= 32'h0;
      r_flag <= 1'b0;
      r_r_mem_index <= 3'b000;
      r_r_r_index <= 3'b000;
      w_cnt <= 32'h0;
      w_max_cnt <= 32'h0;
      w_max_cnt_b <= 32'h0;
      w_t0 <= 32'h0;
      w_flag <= 1'b0;
      w_aw_flag <= 1'b0;
      r_stateReg <= r_BOOT;
      w_stateReg <= w_BOOT;
    end else begin
      r_stateReg <= r_stateNext;
      case(r_stateReg)
        r_ar : begin
          if(r_flag) begin
            if(_zz_when) begin
              r_cnt <= (r_cnt - r_max_cnt);
              r_flag <= 1'b0;
              r_t0 <= (r_cnt - r_max_cnt);
            end else begin
              r_cnt <= (r_cnt + 32'h000186a0);
            end
          end else begin
            if(out_arready) begin
              r_max_cnt <= _zz_r_max_cnt[31:0];
              r_flag <= 1'b1;
              r_cnt <= (r_cnt + 32'h000186a0);
              `ifndef SYNTHESIS
                `ifdef FORMAL
                  assert((r_t0 <= r_cnt)); // MY_Device.scala:L554
                `else
                  if(!(r_t0 <= r_cnt)) begin
                    $display("FAILURE "); // MY_Device.scala:L554
                    $finish;
                  end
                `endif
              `endif
            end
          end
          if(_zz_when_1) begin
            r_cnt <= (r_cnt + 32'h000186a0);
          end
        end
        r_r : begin
          if(_zz_when_2) begin
            r_r_mem_index <= (r_r_mem_index + 3'b001);
          end
          if(_zz_when_3) begin
            r_cnt <= (r_cnt + 32'h000186a0);
            if(out_rlast) begin
              r_max_cnt <= _zz_r_max_cnt_5[31:0];
              r_flag <= 1'b1;
            end
          end
          if(r_flag) begin
            if(_zz_when_4) begin
              r_cnt <= (r_cnt - r_max_cnt);
              r_r_r_index <= (r_r_r_index + 3'b001);
              if(_zz_when_5) begin
                r_flag <= 1'b0;
                r_t0 <= (r_cnt - r_max_cnt);
              end
            end else begin
              r_cnt <= (r_cnt + 32'h000186a0);
            end
          end
        end
        default : begin
        end
      endcase
      if(r_onEntry_ar) begin
        r_flag <= 1'b0;
      end
      if(r_onEntry_r) begin
        r_r_mem_index <= 3'b000;
        r_r_r_index <= 3'b000;
      end
      w_stateReg <= w_stateNext;
      case(w_stateReg)
        w_aw : begin
          if(w_flag) begin
            if(_zz_when_7) begin
              w_flag <= 1'b0;
              w_aw_flag <= 1'b0;
              w_cnt <= (w_cnt - w_max_cnt_b);
              w_t0 <= (w_cnt - w_max_cnt);
            end else begin
              if(_zz_when_8) begin
                w_cnt <= (w_cnt + 32'h000186a0);
              end else begin
                w_cnt <= (w_cnt + 32'h000186a0);
              end
            end
          end else begin
            if(out_awready) begin
              w_max_cnt <= _zz_w_max_cnt[31:0];
              w_cnt <= (w_cnt + 32'h000186a0);
              w_aw_flag <= 1'b1;
            end else begin
              if(out_bvalid) begin
                w_max_cnt_b <= _zz_w_max_cnt_b[31:0];
                w_flag <= 1'b1;
                w_cnt <= (w_cnt + 32'h000186a0);
              end
            end
          end
          if(_zz_when_9) begin
            w_cnt <= (w_cnt + 32'h000186a0);
          end
        end
        default : begin
        end
      endcase
      if(w_onEntry_aw) begin
        w_flag <= 1'b0;
        w_t0 <= w_cnt;
      end
    end
  end


endmodule
