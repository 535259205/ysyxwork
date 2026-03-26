// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXI_IF

`timescale 1ns/1ps 
module AXI_IF (
  output wire          axi_m_aw_valid,
  input  wire          axi_m_aw_ready,
  output wire [31:0]   axi_m_aw_payload_addr,
  output wire [3:0]    axi_m_aw_payload_id,
  output wire [7:0]    axi_m_aw_payload_len,
  output wire [2:0]    axi_m_aw_payload_size,
  output wire [1:0]    axi_m_aw_payload_burst,
  output wire          axi_m_w_valid,
  input  wire          axi_m_w_ready,
  output wire [31:0]   axi_m_w_payload_data,
  output wire [3:0]    axi_m_w_payload_strb,
  output wire          axi_m_w_payload_last,
  input  wire          axi_m_b_valid,
  output wire          axi_m_b_ready,
  input  wire [3:0]    axi_m_b_payload_id,
  input  wire [1:0]    axi_m_b_payload_resp,
  output reg           axi_m_ar_valid,
  input  wire          axi_m_ar_ready,
  output reg  [31:0]   axi_m_ar_payload_addr,
  output reg  [3:0]    axi_m_ar_payload_id,
  output reg  [7:0]    axi_m_ar_payload_len,
  output reg  [2:0]    axi_m_ar_payload_size,
  output wire [1:0]    axi_m_ar_payload_burst,
  input  wire          axi_m_r_valid,
  output reg           axi_m_r_ready,
  input  wire [31:0]   axi_m_r_payload_data,
  input  wire [3:0]    axi_m_r_payload_id,
  input  wire [1:0]    axi_m_r_payload_resp,
  input  wire          axi_m_r_payload_last,
  input  wire [31:0]   addr,
  output reg           code_valid,
  input  wire          code_ready,
  output reg  [31:0]   code_payload,
  input  wire          clock,
  input  wire          reset
);
  localparam s_BOOT = 2'd0;
  localparam s_start = 2'd1;
  localparam s_ar = 2'd2;
  localparam s_r = 2'd3;

  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg        [1:0]    s_stateReg;
  reg        [1:0]    s_stateNext;
  wire                axi_m_ar_fire;
  wire                axi_m_r_fire;
  wire                s_onExit_BOOT;
  wire                s_onExit_start;
  wire                s_onExit_ar;
  wire                s_onExit_r;
  wire                s_onEntry_BOOT;
  wire                s_onEntry_start;
  wire                s_onEntry_ar;
  wire                s_onEntry_r;
  `ifndef SYNTHESIS
  reg [39:0] s_stateReg_string;
  reg [39:0] s_stateNext_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(s_stateReg)
      s_BOOT : s_stateReg_string = "BOOT ";
      s_start : s_stateReg_string = "start";
      s_ar : s_stateReg_string = "ar   ";
      s_r : s_stateReg_string = "r    ";
      default : s_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(s_stateNext)
      s_BOOT : s_stateNext_string = "BOOT ";
      s_start : s_stateNext_string = "start";
      s_ar : s_stateNext_string = "ar   ";
      s_r : s_stateNext_string = "r    ";
      default : s_stateNext_string = "?????";
    endcase
  end
  `endif

  assign axi_m_aw_valid = 1'b0;
  assign axi_m_aw_payload_addr = 32'b00000000000000000000000000000000;
  assign axi_m_aw_payload_id = 4'b0000;
  assign axi_m_aw_payload_len = 8'b00000000;
  assign axi_m_aw_payload_size = 3'b000;
  assign axi_m_aw_payload_burst = 2'b00;
  assign axi_m_w_valid = 1'b0;
  assign axi_m_w_payload_data = 32'b00000000000000000000000000000000;
  assign axi_m_w_payload_strb = 4'b0000;
  assign axi_m_w_payload_last = 1'b0;
  assign axi_m_b_ready = 1'b0;
  always @(*) begin
    axi_m_ar_valid = 1'b0;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
        axi_m_ar_valid = 1'b1;
      end
      s_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_ar_payload_addr = 32'b00000000000000000000000000000000;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
        axi_m_ar_payload_addr = addr;
      end
      s_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_ar_payload_id = 4'b0000;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
        axi_m_ar_payload_id = 4'b0000;
      end
      s_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_ar_payload_len = 8'b00000000;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
        axi_m_ar_payload_len = 8'h0;
      end
      s_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_m_ar_payload_size = 3'b000;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
        axi_m_ar_payload_size = 3'b010;
      end
      s_r : begin
      end
      default : begin
      end
    endcase
  end

  assign axi_m_ar_payload_burst = 2'b00;
  always @(*) begin
    axi_m_r_ready = 1'b0;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
      end
      s_r : begin
        axi_m_r_ready = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    code_valid = 1'b0;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
      end
      s_r : begin
        if(axi_m_r_fire) begin
          code_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    code_payload = 32'h0;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
      end
      s_r : begin
        if(axi_m_r_fire) begin
          code_payload = axi_m_r_payload_data;
        end
      end
      default : begin
      end
    endcase
  end

  assign s_wantExit = 1'b0;
  always @(*) begin
    s_wantStart = 1'b0;
    case(s_stateReg)
      s_start : begin
      end
      s_ar : begin
      end
      s_r : begin
      end
      default : begin
        s_wantStart = 1'b1;
      end
    endcase
  end

  assign s_wantKill = 1'b0;
  always @(*) begin
    s_stateNext = s_stateReg;
    case(s_stateReg)
      s_start : begin
        if(code_ready) begin
          s_stateNext = s_ar;
        end
      end
      s_ar : begin
        if(axi_m_ar_fire) begin
          s_stateNext = s_r;
        end
      end
      s_r : begin
        if(axi_m_r_fire) begin
          s_stateNext = s_start;
        end
      end
      default : begin
      end
    endcase
    if(s_wantStart) begin
      s_stateNext = s_start;
    end
    if(s_wantKill) begin
      s_stateNext = s_BOOT;
    end
  end

  assign axi_m_ar_fire = (axi_m_ar_valid && axi_m_ar_ready);
  assign axi_m_r_fire = (axi_m_r_valid && axi_m_r_ready);
  assign s_onExit_BOOT = ((s_stateNext != s_BOOT) && (s_stateReg == s_BOOT));
  assign s_onExit_start = ((s_stateNext != s_start) && (s_stateReg == s_start));
  assign s_onExit_ar = ((s_stateNext != s_ar) && (s_stateReg == s_ar));
  assign s_onExit_r = ((s_stateNext != s_r) && (s_stateReg == s_r));
  assign s_onEntry_BOOT = ((s_stateNext == s_BOOT) && (s_stateReg != s_BOOT));
  assign s_onEntry_start = ((s_stateNext == s_start) && (s_stateReg != s_start));
  assign s_onEntry_ar = ((s_stateNext == s_ar) && (s_stateReg != s_ar));
  assign s_onEntry_r = ((s_stateNext == s_r) && (s_stateReg != s_r));
  always @(posedge clock) begin
    if(reset) begin
      s_stateReg <= s_BOOT;
    end else begin
      s_stateReg <= s_stateNext;
    end
  end


endmodule
