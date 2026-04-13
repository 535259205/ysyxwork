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
  output reg           axi_s_1_ar_valid,
  input  wire          axi_s_1_ar_ready,
  output reg  [31:0]   axi_s_1_ar_payload_addr,
  output reg  [3:0]    axi_s_1_ar_payload_id,
  output reg  [7:0]    axi_s_1_ar_payload_len,
  output reg  [2:0]    axi_s_1_ar_payload_size,
  output reg  [1:0]    axi_s_1_ar_payload_burst,
  input  wire          axi_s_1_r_valid,
  output reg           axi_s_1_r_ready,
  input  wire [31:0]   axi_s_1_r_payload_data,
  input  wire [3:0]    axi_s_1_r_payload_id,
  input  wire [1:0]    axi_s_1_r_payload_resp,
  input  wire          axi_s_1_r_payload_last,
  input  wire          clock,
  input  wire          reset
);
  localparam r_1_BOOT = 2'd0;
  localparam r_1_start = 2'd1;
  localparam r_1_turn = 2'd2;
  localparam w_1_BOOT = 2'd0;
  localparam w_1_start = 2'd1;
  localparam w_1_turn = 2'd2;

  reg                 _zz__zz_axi_s_0_ar_valid;
  reg        [31:0]   _zz__zz_axi_s_0_ar_payload_addr;
  reg        [3:0]    _zz__zz_axi_s_0_ar_payload_id;
  reg        [7:0]    _zz__zz_axi_s_0_ar_payload_len;
  reg        [2:0]    _zz__zz_axi_s_0_ar_payload_size;
  reg        [1:0]    _zz__zz_axi_s_0_ar_payload_burst;
  reg                 _zz__zz_axi_s_0_r_ready;
  reg                 _zz_when_pipCPUTOP_l91;
  reg                 _zz_when_pipCPUTOP_l91_1;
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
  reg                 _zz_when;
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
  wire                when_pipCPUTOP_l72;
  wire                when_pipCPUTOP_l84;
  wire                _zz_axi_s_0_ar_valid;
  wire       [31:0]   _zz_axi_s_0_ar_payload_addr;
  wire       [3:0]    _zz_axi_s_0_ar_payload_id;
  wire       [7:0]    _zz_axi_s_0_ar_payload_len;
  wire       [2:0]    _zz_axi_s_0_ar_payload_size;
  wire       [1:0]    _zz_axi_s_0_ar_payload_burst;
  wire                _zz_axi_s_0_r_ready;
  wire       [1:0]    _zz_1;
  wire                _zz_2;
  wire                _zz_3;
  wire                when_pipCPUTOP_l91;
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
        _zz__zz_axi_s_0_ar_valid = axi_m_0_ar_valid;
        _zz__zz_axi_s_0_ar_payload_addr = axi_m_0_ar_payload_addr;
        _zz__zz_axi_s_0_ar_payload_id = axi_m_0_ar_payload_id;
        _zz__zz_axi_s_0_ar_payload_len = axi_m_0_ar_payload_len;
        _zz__zz_axi_s_0_ar_payload_size = axi_m_0_ar_payload_size;
        _zz__zz_axi_s_0_ar_payload_burst = axi_m_0_ar_payload_burst;
        _zz__zz_axi_s_0_r_ready = axi_m_0_r_ready;
        _zz_when_pipCPUTOP_l91 = axi_m_0_r_valid;
        _zz_when_pipCPUTOP_l91_1 = axi_m_0_r_payload_last;
      end
      default : begin
        _zz__zz_axi_s_0_ar_valid = axi_m_1_ar_valid;
        _zz__zz_axi_s_0_ar_payload_addr = axi_m_1_ar_payload_addr;
        _zz__zz_axi_s_0_ar_payload_id = axi_m_1_ar_payload_id;
        _zz__zz_axi_s_0_ar_payload_len = axi_m_1_ar_payload_len;
        _zz__zz_axi_s_0_ar_payload_size = axi_m_1_ar_payload_size;
        _zz__zz_axi_s_0_ar_payload_burst = axi_m_1_ar_payload_burst;
        _zz__zz_axi_s_0_r_ready = axi_m_1_r_ready;
        _zz_when_pipCPUTOP_l91 = axi_m_1_r_valid;
        _zz_when_pipCPUTOP_l91_1 = axi_m_1_r_payload_last;
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
        _zz_when = axi_m_0_b_valid;
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
        _zz_when = axi_m_1_b_valid;
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(r_stateReg)
      r_1_BOOT : r_stateReg_string = "BOOT ";
      r_1_start : r_stateReg_string = "start";
      r_1_turn : r_stateReg_string = "turn ";
      default : r_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(r_stateNext)
      r_1_BOOT : r_stateNext_string = "BOOT ";
      r_1_start : r_stateNext_string = "start";
      r_1_turn : r_stateNext_string = "turn ";
      default : r_stateNext_string = "?????";
    endcase
  end
  always @(*) begin
    case(w_stateReg)
      w_1_BOOT : w_stateReg_string = "BOOT ";
      w_1_start : w_stateReg_string = "start";
      w_1_turn : w_stateReg_string = "turn ";
      default : w_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(w_stateNext)
      w_1_BOOT : w_stateNext_string = "BOOT ";
      w_1_start : w_stateNext_string = "start";
      w_1_turn : w_stateNext_string = "turn ";
      default : w_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    axi_m_0_r_valid = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_2) begin
            axi_m_0_r_valid = axi_s_1_r_valid;
          end
        end else begin
          if(_zz_2) begin
            axi_m_0_r_valid = axi_s_0_r_valid;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_2) begin
            axi_m_0_r_payload_data = axi_s_1_r_payload_data;
          end
        end else begin
          if(_zz_2) begin
            axi_m_0_r_payload_data = axi_s_0_r_payload_data;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_r_payload_id = 4'bxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_2) begin
            axi_m_0_r_payload_id = axi_s_1_r_payload_id;
          end
        end else begin
          if(_zz_2) begin
            axi_m_0_r_payload_id = axi_s_0_r_payload_id;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_r_payload_resp = 2'bxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_2) begin
            axi_m_0_r_payload_resp = axi_s_1_r_payload_resp;
          end
        end else begin
          if(_zz_2) begin
            axi_m_0_r_payload_resp = axi_s_0_r_payload_resp;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_r_payload_last = 1'bx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_2) begin
            axi_m_0_r_payload_last = axi_s_1_r_payload_last;
          end
        end else begin
          if(_zz_2) begin
            axi_m_0_r_payload_last = axi_s_0_r_payload_last;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_ar_ready = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_2) begin
            axi_m_0_ar_ready = axi_s_1_ar_ready;
          end
        end else begin
          if(_zz_2) begin
            axi_m_0_ar_ready = axi_s_0_ar_ready;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_w_ready = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_5) begin
          axi_m_0_w_ready = axi_s_0_w_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_aw_ready = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_5) begin
          axi_m_0_aw_ready = axi_s_0_aw_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_b_valid = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_5) begin
          axi_m_0_b_valid = axi_s_0_b_valid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_b_payload_id = 4'bxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_5) begin
          axi_m_0_b_payload_id = axi_s_0_b_payload_id;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_0_b_payload_resp = 2'bxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_5) begin
          axi_m_0_b_payload_resp = axi_s_0_b_payload_resp;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_r_ready = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_r_ready = _zz_axi_s_0_r_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_ar_valid = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_ar_valid = _zz_axi_s_0_ar_valid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_ar_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_ar_payload_addr = _zz_axi_s_0_ar_payload_addr;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_ar_payload_id = 4'bxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_ar_payload_id = _zz_axi_s_0_ar_payload_id;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_ar_payload_len = 8'bxxxxxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_ar_payload_len = _zz_axi_s_0_ar_payload_len;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_ar_payload_size = 3'bxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_ar_payload_size = _zz_axi_s_0_ar_payload_size;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_ar_payload_burst = 2'bxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(!when_pipCPUTOP_l84) begin
          axi_s_0_ar_payload_burst = _zz_axi_s_0_ar_payload_burst;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_w_valid = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_w_valid = _zz_axi_s_0_w_valid;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_w_payload_data = _zz_axi_s_0_w_payload_data;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_w_payload_strb = 4'bxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_w_payload_strb = _zz_axi_s_0_w_payload_strb;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_w_payload_last = 1'bx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_w_payload_last = _zz_axi_s_0_w_payload_last;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_aw_valid = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_aw_valid = _zz_axi_s_0_aw_valid;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_aw_payload_addr = _zz_axi_s_0_aw_payload_addr;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_aw_payload_id = 4'bxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_aw_payload_id = _zz_axi_s_0_aw_payload_id;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_aw_payload_len = 8'bxxxxxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_aw_payload_len = _zz_axi_s_0_aw_payload_len;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_aw_payload_size = 3'bxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_aw_payload_size = _zz_axi_s_0_aw_payload_size;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_aw_payload_burst = 2'bxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_aw_payload_burst = _zz_axi_s_0_aw_payload_burst;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_0_b_ready = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        axi_s_0_b_ready = _zz_axi_s_0_b_ready;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_r_valid = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_3) begin
            axi_m_1_r_valid = axi_s_1_r_valid;
          end
        end else begin
          if(_zz_3) begin
            axi_m_1_r_valid = axi_s_0_r_valid;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_r_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_3) begin
            axi_m_1_r_payload_data = axi_s_1_r_payload_data;
          end
        end else begin
          if(_zz_3) begin
            axi_m_1_r_payload_data = axi_s_0_r_payload_data;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_r_payload_id = 4'bxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_3) begin
            axi_m_1_r_payload_id = axi_s_1_r_payload_id;
          end
        end else begin
          if(_zz_3) begin
            axi_m_1_r_payload_id = axi_s_0_r_payload_id;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_r_payload_resp = 2'bxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_3) begin
            axi_m_1_r_payload_resp = axi_s_1_r_payload_resp;
          end
        end else begin
          if(_zz_3) begin
            axi_m_1_r_payload_resp = axi_s_0_r_payload_resp;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_r_payload_last = 1'bx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_3) begin
            axi_m_1_r_payload_last = axi_s_1_r_payload_last;
          end
        end else begin
          if(_zz_3) begin
            axi_m_1_r_payload_last = axi_s_0_r_payload_last;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_ar_ready = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          if(_zz_3) begin
            axi_m_1_ar_ready = axi_s_1_ar_ready;
          end
        end else begin
          if(_zz_3) begin
            axi_m_1_ar_ready = axi_s_0_ar_ready;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_w_ready = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_6) begin
          axi_m_1_w_ready = axi_s_0_w_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_aw_ready = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_6) begin
          axi_m_1_aw_ready = axi_s_0_aw_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_b_valid = 1'b0;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_6) begin
          axi_m_1_b_valid = axi_s_0_b_valid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_b_payload_id = 4'bxxxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_6) begin
          axi_m_1_b_payload_id = axi_s_0_b_payload_id;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_1_b_payload_resp = 2'bxx;
    case(w_stateReg)
      w_1_start : begin
      end
      w_1_turn : begin
        if(_zz_6) begin
          axi_m_1_b_payload_resp = axi_s_0_b_payload_resp;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_r_ready = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_r_ready = _zz_axi_s_0_r_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_ar_valid = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_ar_valid = _zz_axi_s_0_ar_valid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_ar_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_ar_payload_addr = _zz_axi_s_0_ar_payload_addr;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_ar_payload_id = 4'bxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_ar_payload_id = _zz_axi_s_0_ar_payload_id;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_ar_payload_len = 8'bxxxxxxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_ar_payload_len = _zz_axi_s_0_ar_payload_len;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_ar_payload_size = 3'bxxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_ar_payload_size = _zz_axi_s_0_ar_payload_size;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_s_1_ar_payload_burst = 2'bxx;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l84) begin
          axi_s_1_ar_payload_burst = _zz_axi_s_0_ar_payload_burst;
        end
      end
      default : begin
      end
    endcase
  end

  assign axi_s_1_w_valid = 1'b0;
  assign axi_s_1_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_s_1_w_payload_strb = 4'bxxxx;
  assign axi_s_1_w_payload_last = 1'bx;
  assign axi_s_1_aw_valid = 1'b0;
  assign axi_s_1_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  assign axi_s_1_aw_payload_id = 4'bxxxx;
  assign axi_s_1_aw_payload_len = 8'bxxxxxxxx;
  assign axi_s_1_aw_payload_size = 3'bxxx;
  assign axi_s_1_aw_payload_burst = 2'bxx;
  assign axi_s_1_b_ready = 1'b0;
  assign r_wantExit = 1'b0;
  always @(*) begin
    r_wantStart = 1'b0;
    case(r_stateReg)
      r_1_start : begin
      end
      r_1_turn : begin
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
      w_1_start : begin
      end
      w_1_turn : begin
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
      r_1_start : begin
        if(axi_m_1_ar_valid) begin
          r_stateNext = r_1_turn;
        end else begin
          if(axi_m_0_ar_valid) begin
            r_stateNext = r_1_turn;
          end
        end
      end
      r_1_turn : begin
        if(when_pipCPUTOP_l91) begin
          r_stateNext = r_1_start;
        end
      end
      default : begin
      end
    endcase
    if(r_wantStart) begin
      r_stateNext = r_1_start;
    end
    if(r_wantKill) begin
      r_stateNext = r_1_BOOT;
    end
  end

  assign when_pipCPUTOP_l72 = ((32'h02000000 <= axi_m_1_ar_payload_addr) && (axi_m_1_ar_payload_addr <= 32'h0200ffff));
  assign when_pipCPUTOP_l84 = (r_sel_s == 1'b1);
  assign _zz_axi_s_0_ar_valid = _zz__zz_axi_s_0_ar_valid;
  assign _zz_axi_s_0_ar_payload_addr = _zz__zz_axi_s_0_ar_payload_addr;
  assign _zz_axi_s_0_ar_payload_id = _zz__zz_axi_s_0_ar_payload_id;
  assign _zz_axi_s_0_ar_payload_len = _zz__zz_axi_s_0_ar_payload_len;
  assign _zz_axi_s_0_ar_payload_size = _zz__zz_axi_s_0_ar_payload_size;
  assign _zz_axi_s_0_ar_payload_burst = _zz__zz_axi_s_0_ar_payload_burst;
  assign _zz_axi_s_0_r_ready = _zz__zz_axi_s_0_r_ready;
  assign _zz_1 = ({1'd0,1'b1} <<< r_sel_m);
  assign _zz_2 = _zz_1[0];
  assign _zz_3 = _zz_1[1];
  assign when_pipCPUTOP_l91 = ((_zz_when_pipCPUTOP_l91 && _zz_axi_s_0_r_ready) && _zz_when_pipCPUTOP_l91_1);
  assign r_onExit_BOOT = ((r_stateNext != r_1_BOOT) && (r_stateReg == r_1_BOOT));
  assign r_onExit_start = ((r_stateNext != r_1_start) && (r_stateReg == r_1_start));
  assign r_onExit_turn = ((r_stateNext != r_1_turn) && (r_stateReg == r_1_turn));
  assign r_onEntry_BOOT = ((r_stateNext == r_1_BOOT) && (r_stateReg != r_1_BOOT));
  assign r_onEntry_start = ((r_stateNext == r_1_start) && (r_stateReg != r_1_start));
  assign r_onEntry_turn = ((r_stateNext == r_1_turn) && (r_stateReg != r_1_turn));
  always @(*) begin
    w_stateNext = w_stateReg;
    case(w_stateReg)
      w_1_start : begin
        if(axi_m_1_aw_valid) begin
          w_stateNext = w_1_turn;
        end
      end
      w_1_turn : begin
        if((_zz_when && _zz_axi_s_0_b_ready)) begin
          w_stateNext = w_1_start;
        end
      end
      default : begin
      end
    endcase
    if(w_wantStart) begin
      w_stateNext = w_1_start;
    end
    if(w_wantKill) begin
      w_stateNext = w_1_BOOT;
    end
  end

  assign _zz_axi_s_0_b_ready = _zz__zz_axi_s_0_b_ready;
  assign _zz_4 = ({1'd0,1'b1} <<< w_sel);
  assign _zz_5 = _zz_4[0];
  assign _zz_6 = _zz_4[1];
  assign w_onExit_BOOT = ((w_stateNext != w_1_BOOT) && (w_stateReg == w_1_BOOT));
  assign w_onExit_start = ((w_stateNext != w_1_start) && (w_stateReg == w_1_start));
  assign w_onExit_turn = ((w_stateNext != w_1_turn) && (w_stateReg == w_1_turn));
  assign w_onEntry_BOOT = ((w_stateNext == w_1_BOOT) && (w_stateReg != w_1_BOOT));
  assign w_onEntry_start = ((w_stateNext == w_1_start) && (w_stateReg != w_1_start));
  assign w_onEntry_turn = ((w_stateNext == w_1_turn) && (w_stateReg != w_1_turn));
  always @(posedge clock or posedge reset) begin
    if(reset) begin
      r_sel_m <= 1'b0;
      r_sel_s <= 1'b0;
      w_sel <= 1'b0;
      r_stateReg <= r_1_BOOT;
      w_stateReg <= w_1_BOOT;
    end else begin
      r_stateReg <= r_stateNext;
      case(r_stateReg)
        r_1_start : begin
          if(axi_m_1_ar_valid) begin
            r_sel_m <= 1'b1;
            if(when_pipCPUTOP_l72) begin
              r_sel_s <= 1'b1;
            end else begin
              r_sel_s <= 1'b0;
            end
          end else begin
            if(axi_m_0_ar_valid) begin
              r_sel_m <= 1'b0;
              r_sel_s <= 1'b0;
            end
          end
        end
        r_1_turn : begin
        end
        default : begin
        end
      endcase
      w_stateReg <= w_stateNext;
      case(w_stateReg)
        w_1_start : begin
          if(axi_m_1_aw_valid) begin
            w_sel <= 1'b1;
          end
        end
        w_1_turn : begin
        end
        default : begin
        end
      endcase
    end
  end


endmodule
