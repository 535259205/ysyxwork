// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIXbar_new

`timescale 1ns/1ps 
module AXIXbar_new (
  input  wire          axi_m_0_aw_valid,
  output reg           axi_m_0_aw_ready,
  input  wire [31:0]   axi_m_0_aw_payload_addr,
  input  wire [3:0]    axi_m_0_aw_payload_id,
  input  wire [7:0]    axi_m_0_aw_payload_len,
  input  wire [2:0]    axi_m_0_aw_payload_size,
  input  wire [1:0]    axi_m_0_aw_payload_burst,
  input  wire          axi_m_0_w_valid,
  output reg           axi_m_0_w_ready,
  input  wire [31:0]   axi_m_0_w_payload_data,
  input  wire [3:0]    axi_m_0_w_payload_strb,
  input  wire          axi_m_0_w_payload_last,
  output reg           axi_m_0_b_valid,
  input  wire          axi_m_0_b_ready,
  output reg  [3:0]    axi_m_0_b_payload_id,
  output reg  [1:0]    axi_m_0_b_payload_resp,
  input  wire          axi_m_0_ar_valid,
  output reg           axi_m_0_ar_ready,
  input  wire [31:0]   axi_m_0_ar_payload_addr,
  input  wire [3:0]    axi_m_0_ar_payload_id,
  input  wire [7:0]    axi_m_0_ar_payload_len,
  input  wire [2:0]    axi_m_0_ar_payload_size,
  input  wire [1:0]    axi_m_0_ar_payload_burst,
  output reg           axi_m_0_r_valid,
  input  wire          axi_m_0_r_ready,
  output reg  [31:0]   axi_m_0_r_payload_data,
  output reg  [3:0]    axi_m_0_r_payload_id,
  output reg  [1:0]    axi_m_0_r_payload_resp,
  output reg           axi_m_0_r_payload_last,
  input  wire          axi_m_1_aw_valid,
  output reg           axi_m_1_aw_ready,
  input  wire [31:0]   axi_m_1_aw_payload_addr,
  input  wire [3:0]    axi_m_1_aw_payload_id,
  input  wire [7:0]    axi_m_1_aw_payload_len,
  input  wire [2:0]    axi_m_1_aw_payload_size,
  input  wire [1:0]    axi_m_1_aw_payload_burst,
  input  wire          axi_m_1_w_valid,
  output reg           axi_m_1_w_ready,
  input  wire [31:0]   axi_m_1_w_payload_data,
  input  wire [3:0]    axi_m_1_w_payload_strb,
  input  wire          axi_m_1_w_payload_last,
  output reg           axi_m_1_b_valid,
  input  wire          axi_m_1_b_ready,
  output reg  [3:0]    axi_m_1_b_payload_id,
  output reg  [1:0]    axi_m_1_b_payload_resp,
  input  wire          axi_m_1_ar_valid,
  output reg           axi_m_1_ar_ready,
  input  wire [31:0]   axi_m_1_ar_payload_addr,
  input  wire [3:0]    axi_m_1_ar_payload_id,
  input  wire [7:0]    axi_m_1_ar_payload_len,
  input  wire [2:0]    axi_m_1_ar_payload_size,
  input  wire [1:0]    axi_m_1_ar_payload_burst,
  output reg           axi_m_1_r_valid,
  input  wire          axi_m_1_r_ready,
  output reg  [31:0]   axi_m_1_r_payload_data,
  output reg  [3:0]    axi_m_1_r_payload_id,
  output reg  [1:0]    axi_m_1_r_payload_resp,
  output reg           axi_m_1_r_payload_last,
  output reg           axi_s_0_aw_valid,
  input  wire          axi_s_0_aw_ready,
  output reg  [31:0]   axi_s_0_aw_payload_addr,
  output reg  [3:0]    axi_s_0_aw_payload_id,
  output reg  [7:0]    axi_s_0_aw_payload_len,
  output reg  [2:0]    axi_s_0_aw_payload_size,
  output reg  [1:0]    axi_s_0_aw_payload_burst,
  output reg           axi_s_0_w_valid,
  input  wire          axi_s_0_w_ready,
  output reg  [31:0]   axi_s_0_w_payload_data,
  output reg  [3:0]    axi_s_0_w_payload_strb,
  output reg           axi_s_0_w_payload_last,
  input  wire          axi_s_0_b_valid,
  output reg           axi_s_0_b_ready,
  input  wire [3:0]    axi_s_0_b_payload_id,
  input  wire [1:0]    axi_s_0_b_payload_resp,
  output reg           axi_s_0_ar_valid,
  input  wire          axi_s_0_ar_ready,
  output reg  [31:0]   axi_s_0_ar_payload_addr,
  output reg  [3:0]    axi_s_0_ar_payload_id,
  output reg  [7:0]    axi_s_0_ar_payload_len,
  output reg  [2:0]    axi_s_0_ar_payload_size,
  output reg  [1:0]    axi_s_0_ar_payload_burst,
  input  wire          axi_s_0_r_valid,
  output reg           axi_s_0_r_ready,
  input  wire [31:0]   axi_s_0_r_payload_data,
  input  wire [3:0]    axi_s_0_r_payload_id,
  input  wire [1:0]    axi_s_0_r_payload_resp,
  input  wire          axi_s_0_r_payload_last,
  output wire          axi_s_1_aw_valid,
  input  wire          axi_s_1_aw_ready,
  output wire [31:0]   axi_s_1_aw_payload_addr,
  output wire [3:0]    axi_s_1_aw_payload_id,
  output wire [7:0]    axi_s_1_aw_payload_len,
  output wire [2:0]    axi_s_1_aw_payload_size,
  output wire [1:0]    axi_s_1_aw_payload_burst,
  output wire          axi_s_1_w_valid,
  input  wire          axi_s_1_w_ready,
  output wire [31:0]   axi_s_1_w_payload_data,
  output wire [3:0]    axi_s_1_w_payload_strb,
  output wire          axi_s_1_w_payload_last,
  input  wire          axi_s_1_b_valid,
  output wire          axi_s_1_b_ready,
  input  wire [3:0]    axi_s_1_b_payload_id,
  input  wire [1:0]    axi_s_1_b_payload_resp,
  output wire          axi_s_1_ar_valid,
  input  wire          axi_s_1_ar_ready,
  output wire [31:0]   axi_s_1_ar_payload_addr,
  output wire [3:0]    axi_s_1_ar_payload_id,
  output wire [7:0]    axi_s_1_ar_payload_len,
  output wire [2:0]    axi_s_1_ar_payload_size,
  output wire [1:0]    axi_s_1_ar_payload_burst,
  input  wire          axi_s_1_r_valid,
  output wire          axi_s_1_r_ready,
  input  wire [31:0]   axi_s_1_r_payload_data,
  input  wire [3:0]    axi_s_1_r_payload_id,
  input  wire [1:0]    axi_s_1_r_payload_resp,
  input  wire          axi_s_1_r_payload_last,
  input  wire          clock,
  input  wire          reset
);
  localparam r_BOOT = 2'd0;
  localparam r_start = 2'd1;
  localparam r_turn = 2'd2;
  localparam w_BOOT = 2'd0;
  localparam w_start = 2'd1;
  localparam w_turn = 2'd2;

  reg                 _zz__zz_axi_s_0_r_ready;
  reg                 _zz_axi_s_0_ar_valid;
  reg        [31:0]   _zz_axi_s_0_ar_payload_addr;
  reg        [3:0]    _zz_axi_s_0_ar_payload_id;
  reg        [7:0]    _zz_axi_s_0_ar_payload_len;
  reg        [2:0]    _zz_axi_s_0_ar_payload_size;
  reg        [1:0]    _zz_axi_s_0_ar_payload_burst;
  reg                 _zz_when;
  reg                 _zz_when_1;
  reg                 _zz__zz_axi_s_0_b_ready;
  reg                 _zz_axi_s_0_aw_valid;
  reg        [31:0]   _zz_axi_s_0_aw_payload_addr;
  reg        [3:0]    _zz_axi_s_0_aw_payload_id;
  reg        [7:0]    _zz_axi_s_0_aw_payload_len;
  reg        [2:0]    _zz_axi_s_0_aw_payload_size;
  reg        [1:0]    _zz_axi_s_0_aw_payload_burst;
  reg                 _zz_axi_s_0_w_valid;
  reg        [31:0]   _zz_axi_s_0_w_payload_data;
  reg        [3:0]    _zz_axi_s_0_w_payload_strb;
  reg                 _zz_axi_s_0_w_payload_last;
  reg                 _zz_when_2;
  wire                r_wantExit;
  reg                 r_wantStart;
  wire                r_wantKill;
  reg        [0:0]    r_sel_m;
  reg        [0:0]    r_sel_s;
  wire                w_wantExit;
  reg                 w_wantStart;
  wire                w_wantKill;
  reg        [0:0]    w_sel;
  reg        [1:0]    r_stateReg;
  reg        [1:0]    r_stateNext;
  wire                _zz_axi_s_0_r_ready;
  wire       [1:0]    _zz_1;
  wire                _zz_2;
  wire                _zz_3;
  wire                r_onExit_BOOT;
  wire                r_onExit_start;
  wire                r_onExit_turn;
  wire                r_onEntry_BOOT;
  wire                r_onEntry_start;
  wire                r_onEntry_turn;
  reg        [1:0]    w_stateReg;
  reg        [1:0]    w_stateNext;
  wire                _zz_axi_s_0_b_ready;
  wire       [1:0]    _zz_4;
  wire                _zz_5;
  wire                _zz_6;
  wire                w_onExit_BOOT;
  wire                w_onExit_start;
  wire                w_onExit_turn;
  wire                w_onEntry_BOOT;
  wire                w_onEntry_start;
  wire                w_onEntry_turn;
  `ifndef SYNTHESIS
  reg [39:0] r_stateReg_string;
  reg [39:0] r_stateNext_string;
  reg [39:0] w_stateReg_string;
  reg [39:0] w_stateNext_string;
  `endif


  always @(*) begin
    case(r_sel_m)
      1'b0 : begin
        _zz__zz_axi_s_0_r_ready = axi_m_0_r_ready;
        _zz_axi_s_0_ar_valid = axi_m_0_ar_valid;
        _zz_axi_s_0_ar_payload_addr = axi_m_0_ar_payload_addr;
        _zz_axi_s_0_ar_payload_id = axi_m_0_ar_payload_id;
        _zz_axi_s_0_ar_payload_len = axi_m_0_ar_payload_len;
        _zz_axi_s_0_ar_payload_size = axi_m_0_ar_payload_size;
        _zz_axi_s_0_ar_payload_burst = axi_m_0_ar_payload_burst;
        _zz_when = axi_m_0_r_valid;
        _zz_when_1 = axi_m_0_r_payload_last;
      end
      default : begin
        _zz__zz_axi_s_0_r_ready = axi_m_1_r_ready;
        _zz_axi_s_0_ar_valid = axi_m_1_ar_valid;
        _zz_axi_s_0_ar_payload_addr = axi_m_1_ar_payload_addr;
        _zz_axi_s_0_ar_payload_id = axi_m_1_ar_payload_id;
        _zz_axi_s_0_ar_payload_len = axi_m_1_ar_payload_len;
        _zz_axi_s_0_ar_payload_size = axi_m_1_ar_payload_size;
        _zz_axi_s_0_ar_payload_burst = axi_m_1_ar_payload_burst;
        _zz_when = axi_m_1_r_valid;
        _zz_when_1 = axi_m_1_r_payload_last;
      end
    endcase
  end

  always @(*) begin
    case(w_sel)
      1'b0 : begin
        _zz__zz_axi_s_0_b_ready = axi_m_0_b_ready;
        _zz_axi_s_0_aw_valid = axi_m_0_aw_valid;
        _zz_axi_s_0_aw_payload_addr = axi_m_0_aw_payload_addr;
        _zz_axi_s_0_aw_payload_id = axi_m_0_aw_payload_id;
        _zz_axi_s_0_aw_payload_len = axi_m_0_aw_payload_len;
        _zz_axi_s_0_aw_payload_size = axi_m_0_aw_payload_size;
        _zz_axi_s_0_aw_payload_burst = axi_m_0_aw_payload_burst;
        _zz_axi_s_0_w_valid = axi_m_0_w_valid;
        _zz_axi_s_0_w_payload_data = axi_m_0_w_payload_data;
        _zz_axi_s_0_w_payload_strb = axi_m_0_w_payload_strb;
        _zz_axi_s_0_w_payload_last = axi_m_0_w_payload_last;
        _zz_when_2 = axi_m_0_b_valid;
      end
      default : begin
        _zz__zz_axi_s_0_b_ready = axi_m_1_b_ready;
        _zz_axi_s_0_aw_valid = axi_m_1_aw_valid;
        _zz_axi_s_0_aw_payload_addr = axi_m_1_aw_payload_addr;
        _zz_axi_s_0_aw_payload_id = axi_m_1_aw_payload_id;
        _zz_axi_s_0_aw_payload_len = axi_m_1_aw_payload_len;
        _zz_axi_s_0_aw_payload_size = axi_m_1_aw_payload_size;
        _zz_axi_s_0_aw_payload_burst = axi_m_1_aw_payload_burst;
        _zz_axi_s_0_w_valid = axi_m_1_w_valid;
        _zz_axi_s_0_w_payload_data = axi_m_1_w_payload_data;
        _zz_axi_s_0_w_payload_strb = axi_m_1_w_payload_strb;
        _zz_axi_s_0_w_payload_last = axi_m_1_w_payload_last;
        _zz_when_2 = axi_m_1_b_valid;
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(r_stateReg)
      r_BOOT : r_stateReg_string = "BOOT ";
      r_start : r_stateReg_string = "start";
      r_turn : r_stateReg_string = "turn ";
      default : r_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(r_stateNext)
      r_BOOT : r_stateNext_string = "BOOT ";
      r_start : r_stateNext_string = "start";
      r_turn : r_stateNext_string = "turn ";
      default : r_stateNext_string = "?????";
    endcase
  end
  always @(*) begin
    case(w_stateReg)
      w_BOOT : w_stateReg_string = "BOOT ";
      w_start : w_stateReg_string = "start";
      w_turn : w_stateReg_string = "turn ";
      default : w_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(w_stateNext)
      w_BOOT : w_stateNext_string = "BOOT ";
      w_start : w_stateNext_string = "start";
      w_turn : w_stateNext_string = "turn ";
      default : w_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    axi_m_0_r_valid = 1'b0;
    axi_m_0_r_payload_data = 32'b00000000000000000000000000000000;
    axi_m_0_r_payload_id = 4'b0000;
    axi_m_0_r_payload_resp = 2'b00;
    axi_m_0_r_payload_last = 1'b0;
    axi_m_0_ar_ready = 1'b0;
    axi_s_0_r_ready = 1'b0;
    axi_s_0_ar_valid = 1'b0;
    axi_s_0_ar_payload_addr = 32'b00000000000000000000000000000000;
    axi_s_0_ar_payload_id = 4'b0000;
    axi_s_0_ar_payload_len = 8'b00000000;
    axi_s_0_ar_payload_size = 3'b000;
    axi_s_0_ar_payload_burst = 2'b00;
    axi_m_1_r_valid = 1'b0;
    axi_m_1_r_payload_data = 32'b00000000000000000000000000000000;
    axi_m_1_r_payload_id = 4'b0000;
    axi_m_1_r_payload_resp = 2'b00;
    axi_m_1_r_payload_last = 1'b0;
    axi_m_1_ar_ready = 1'b0;
    r_wantStart = 1'b0;
    r_stateNext = r_stateReg;
    case(r_stateReg)
      r_start : begin
        if(axi_m_1_ar_valid) begin
          r_stateNext = r_turn;
        end else begin
          if(axi_m_0_ar_valid) begin
            r_stateNext = r_turn;
          end
        end
      end
      r_turn : begin
        axi_s_0_ar_valid = _zz_axi_s_0_ar_valid;
        if(_zz_2) begin
          axi_m_0_ar_ready = axi_s_0_ar_ready;
        end
        if(_zz_3) begin
          axi_m_1_ar_ready = axi_s_0_ar_ready;
        end
        axi_s_0_ar_payload_addr = _zz_axi_s_0_ar_payload_addr;
        axi_s_0_ar_payload_id = _zz_axi_s_0_ar_payload_id;
        axi_s_0_ar_payload_len = _zz_axi_s_0_ar_payload_len;
        axi_s_0_ar_payload_size = _zz_axi_s_0_ar_payload_size;
        axi_s_0_ar_payload_burst = _zz_axi_s_0_ar_payload_burst;
        if(_zz_2) begin
          axi_m_0_r_valid = axi_s_0_r_valid;
        end
        if(_zz_3) begin
          axi_m_1_r_valid = axi_s_0_r_valid;
        end
        axi_s_0_r_ready = _zz_axi_s_0_r_ready;
        if(_zz_2) begin
          axi_m_0_r_payload_data = axi_s_0_r_payload_data;
        end
        if(_zz_3) begin
          axi_m_1_r_payload_data = axi_s_0_r_payload_data;
        end
        if(_zz_2) begin
          axi_m_0_r_payload_id = axi_s_0_r_payload_id;
        end
        if(_zz_3) begin
          axi_m_1_r_payload_id = axi_s_0_r_payload_id;
        end
        if(_zz_2) begin
          axi_m_0_r_payload_resp = axi_s_0_r_payload_resp;
        end
        if(_zz_3) begin
          axi_m_1_r_payload_resp = axi_s_0_r_payload_resp;
        end
        if(_zz_2) begin
          axi_m_0_r_payload_last = axi_s_0_r_payload_last;
        end
        if(_zz_3) begin
          axi_m_1_r_payload_last = axi_s_0_r_payload_last;
        end
        if(((_zz_when && _zz_axi_s_0_r_ready) && _zz_when_1)) begin
          r_stateNext = r_start;
        end
      end
      default : begin
        r_wantStart = 1'b1;
      end
    endcase
    if(r_wantStart) begin
      r_stateNext = r_start;
    end
    if(r_wantKill) begin
      r_stateNext = r_BOOT;
    end
  end

  always @(*) begin
    axi_m_0_w_ready = 1'b0;
    axi_m_0_aw_ready = 1'b0;
    axi_m_0_b_valid = 1'b0;
    axi_m_0_b_payload_id = 4'b0000;
    axi_m_0_b_payload_resp = 2'b00;
    axi_s_0_w_valid = 1'b0;
    axi_s_0_w_payload_data = 32'b00000000000000000000000000000000;
    axi_s_0_w_payload_strb = 4'b0000;
    axi_s_0_w_payload_last = 1'b0;
    axi_s_0_aw_valid = 1'b0;
    axi_s_0_aw_payload_addr = 32'b00000000000000000000000000000000;
    axi_s_0_aw_payload_id = 4'b0000;
    axi_s_0_aw_payload_len = 8'b00000000;
    axi_s_0_aw_payload_size = 3'b000;
    axi_s_0_aw_payload_burst = 2'b00;
    axi_s_0_b_ready = 1'b0;
    axi_m_1_w_ready = 1'b0;
    axi_m_1_aw_ready = 1'b0;
    axi_m_1_b_valid = 1'b0;
    axi_m_1_b_payload_id = 4'b0000;
    axi_m_1_b_payload_resp = 2'b00;
    w_wantStart = 1'b0;
    w_stateNext = w_stateReg;
    case(w_stateReg)
      w_start : begin
        if(axi_m_1_aw_valid) begin
          w_stateNext = w_turn;
        end
      end
      w_turn : begin
        axi_s_0_aw_valid = _zz_axi_s_0_aw_valid;
        if(_zz_5) begin
          axi_m_0_aw_ready = axi_s_0_aw_ready;
        end
        if(_zz_6) begin
          axi_m_1_aw_ready = axi_s_0_aw_ready;
        end
        axi_s_0_aw_payload_addr = _zz_axi_s_0_aw_payload_addr;
        axi_s_0_aw_payload_id = _zz_axi_s_0_aw_payload_id;
        axi_s_0_aw_payload_len = _zz_axi_s_0_aw_payload_len;
        axi_s_0_aw_payload_size = _zz_axi_s_0_aw_payload_size;
        axi_s_0_aw_payload_burst = _zz_axi_s_0_aw_payload_burst;
        axi_s_0_w_valid = _zz_axi_s_0_w_valid;
        if(_zz_5) begin
          axi_m_0_w_ready = axi_s_0_w_ready;
        end
        if(_zz_6) begin
          axi_m_1_w_ready = axi_s_0_w_ready;
        end
        axi_s_0_w_payload_data = _zz_axi_s_0_w_payload_data;
        axi_s_0_w_payload_strb = _zz_axi_s_0_w_payload_strb;
        axi_s_0_w_payload_last = _zz_axi_s_0_w_payload_last;
        if(_zz_5) begin
          axi_m_0_b_valid = axi_s_0_b_valid;
        end
        if(_zz_6) begin
          axi_m_1_b_valid = axi_s_0_b_valid;
        end
        axi_s_0_b_ready = _zz_axi_s_0_b_ready;
        if(_zz_5) begin
          axi_m_0_b_payload_id = axi_s_0_b_payload_id;
        end
        if(_zz_6) begin
          axi_m_1_b_payload_id = axi_s_0_b_payload_id;
        end
        if(_zz_5) begin
          axi_m_0_b_payload_resp = axi_s_0_b_payload_resp;
        end
        if(_zz_6) begin
          axi_m_1_b_payload_resp = axi_s_0_b_payload_resp;
        end
        if((_zz_when_2 && _zz_axi_s_0_b_ready)) begin
          w_stateNext = w_start;
        end
      end
      default : begin
        w_wantStart = 1'b1;
      end
    endcase
    if(w_wantStart) begin
      w_stateNext = w_start;
    end
    if(w_wantKill) begin
      w_stateNext = w_BOOT;
    end
  end

  assign axi_s_1_r_ready = 1'b0;
  assign axi_s_1_ar_valid = 1'b0;
  assign axi_s_1_ar_payload_addr = 32'b00000000000000000000000000000000;
  assign axi_s_1_ar_payload_id = 4'b0000;
  assign axi_s_1_ar_payload_len = 8'b00000000;
  assign axi_s_1_ar_payload_size = 3'b000;
  assign axi_s_1_ar_payload_burst = 2'b00;
  assign axi_s_1_w_valid = 1'b0;
  assign axi_s_1_w_payload_data = 32'b00000000000000000000000000000000;
  assign axi_s_1_w_payload_strb = 4'b0000;
  assign axi_s_1_w_payload_last = 1'b0;
  assign axi_s_1_aw_valid = 1'b0;
  assign axi_s_1_aw_payload_addr = 32'b00000000000000000000000000000000;
  assign axi_s_1_aw_payload_id = 4'b0000;
  assign axi_s_1_aw_payload_len = 8'b00000000;
  assign axi_s_1_aw_payload_size = 3'b000;
  assign axi_s_1_aw_payload_burst = 2'b00;
  assign axi_s_1_b_ready = 1'b0;
  assign r_wantExit = 1'b0;
  assign r_wantKill = 1'b0;
  assign w_wantExit = 1'b0;
  assign w_wantKill = 1'b0;
  assign _zz_axi_s_0_r_ready = _zz__zz_axi_s_0_r_ready;
  assign _zz_1 = ({1'd0,1'b1} <<< r_sel_m);
  assign _zz_2 = _zz_1[0];
  assign _zz_3 = _zz_1[1];
  assign r_onExit_BOOT = ((r_stateNext != r_BOOT) && (r_stateReg == r_BOOT));
  assign r_onExit_start = ((r_stateNext != r_start) && (r_stateReg == r_start));
  assign r_onExit_turn = ((r_stateNext != r_turn) && (r_stateReg == r_turn));
  assign r_onEntry_BOOT = ((r_stateNext == r_BOOT) && (r_stateReg != r_BOOT));
  assign r_onEntry_start = ((r_stateNext == r_start) && (r_stateReg != r_start));
  assign r_onEntry_turn = ((r_stateNext == r_turn) && (r_stateReg != r_turn));
  assign _zz_axi_s_0_b_ready = _zz__zz_axi_s_0_b_ready;
  assign _zz_4 = ({1'd0,1'b1} <<< w_sel);
  assign _zz_5 = _zz_4[0];
  assign _zz_6 = _zz_4[1];
  assign w_onExit_BOOT = ((w_stateNext != w_BOOT) && (w_stateReg == w_BOOT));
  assign w_onExit_start = ((w_stateNext != w_start) && (w_stateReg == w_start));
  assign w_onExit_turn = ((w_stateNext != w_turn) && (w_stateReg == w_turn));
  assign w_onEntry_BOOT = ((w_stateNext == w_BOOT) && (w_stateReg != w_BOOT));
  assign w_onEntry_start = ((w_stateNext == w_start) && (w_stateReg != w_start));
  assign w_onEntry_turn = ((w_stateNext == w_turn) && (w_stateReg != w_turn));
  always @(posedge clock) begin
    if(reset) begin
      r_sel_m <= 1'b0;
      r_sel_s <= 1'b0;
      w_sel <= 1'b0;
      r_stateReg <= r_BOOT;
      w_stateReg <= w_BOOT;
    end else begin
      r_stateReg <= r_stateNext;
      case(r_stateReg)
        r_start : begin
          if(axi_m_1_ar_valid) begin
            r_sel_m <= 1'b1;
            if(((32'h02000000 <= axi_m_1_ar_payload_addr) && (axi_m_1_ar_payload_addr <= 32'h0200ffff))) begin
              r_sel_s <= 1'b0;
            end else begin
              r_sel_s <= 1'b1;
            end
          end else begin
            if(axi_m_0_ar_valid) begin
              r_sel_m <= 1'b0;
              r_sel_s <= 1'b0;
            end
          end
        end
        r_turn : begin
        end
        default : begin
        end
      endcase
      w_stateReg <= w_stateNext;
      case(w_stateReg)
        w_start : begin
          if(axi_m_1_aw_valid) begin
            w_sel <= 1'b1;
          end
        end
        w_turn : begin
        end
        default : begin
        end
      endcase
    end
  end


endmodule
