// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : Icache

`timescale 1ns/1ps 
module Icache (
  output wire          axi_aw_valid,
  input  wire          axi_aw_ready,
  output wire [31:0]   axi_aw_payload_addr,
  output wire [3:0]    axi_aw_payload_id,
  output wire [7:0]    axi_aw_payload_len,
  output wire [2:0]    axi_aw_payload_size,
  output wire [1:0]    axi_aw_payload_burst,
  output wire          axi_w_valid,
  input  wire          axi_w_ready,
  output wire [31:0]   axi_w_payload_data,
  output wire [3:0]    axi_w_payload_strb,
  output wire          axi_w_payload_last,
  input  wire          axi_b_valid,
  output wire          axi_b_ready,
  input  wire [3:0]    axi_b_payload_id,
  input  wire [1:0]    axi_b_payload_resp,
  output reg           axi_ar_valid,
  input  wire          axi_ar_ready,
  output reg  [31:0]   axi_ar_payload_addr,
  output wire [3:0]    axi_ar_payload_id,
  output wire [7:0]    axi_ar_payload_len,
  output wire [2:0]    axi_ar_payload_size,
  output wire [1:0]    axi_ar_payload_burst,
  input  wire          axi_r_valid,
  output reg           axi_r_ready,
  input  wire [31:0]   axi_r_payload_data,
  input  wire [3:0]    axi_r_payload_id,
  input  wire [1:0]    axi_r_payload_resp,
  input  wire          axi_r_payload_last,
  input  wire [31:0]   addr,
  output reg           code_valid,
  input  wire          code_ready,
  output reg  [31:0]   code_payload,
  input  wire          fence_i,
  input  wire          clock,
  input  wire          reset
);
  localparam s_BOOT = 2'd0;
  localparam s_start = 2'd1;
  localparam s_axi_r = 2'd2;

  wire       [31:0]   cache_mem_spinal_port0;
  wire       [7:0]    _zz_pc_r_addr;
  wire       [7:0]    _zz_pc_r_addr_1;
  wire       [6:0]    _zz_cache_mem_port;
  wire       [6:0]    _zz_cache_mem_port_1;
  wire       [7:0]    _zz_cache_mem_port_2;
  wire       [7:0]    _zz_cache_mem_port_3;
  wire       [7:0]    _zz_cache_mem_port_4;
  wire       [31:0]   _zz_cache_mem_port_5;
  reg                 _zz_when;
  wire       [6:0]    _zz_code_payload;
  reg                 _zz_1;
  reg        [31:0]   error_cnt;
  reg                 cache_valid_0;
  reg                 cache_valid_1;
  reg                 cache_valid_2;
  reg                 cache_valid_3;
  reg                 cache_valid_4;
  reg                 cache_valid_5;
  reg                 cache_valid_6;
  reg                 cache_valid_7;
  wire       [3:0]    pc_offset;
  wire       [2:0]    pc_index;
  wire       [22:0]   pc_tag;
  wire       [7:0]    pc_r_addr;
  reg        [22:0]   cache_tag;
  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg        [22:0]   s_pc_tag_reg;
  reg        [2:0]    s_pc_index_reg;
  reg        [4:0]    s_axi_r_cnt;
  reg                 s_axi_r_ar_flag;
  reg        [1:0]    s_stateReg;
  reg        [1:0]    s_stateNext;
  wire                axi_ar_fire;
  wire                axi_r_fire;
  wire       [7:0]    _zz_4;
  wire                s_onExit_BOOT;
  wire                s_onExit_start;
  wire                s_onExit_axi_r;
  wire                s_onEntry_BOOT;
  wire                s_onEntry_start;
  wire                s_onEntry_axi_r;
  `ifndef SYNTHESIS
  reg [39:0] s_stateReg_string;
  reg [39:0] s_stateNext_string;
  `endif

  (* ram_style = "distributed" *) reg [31:0] cache_mem [0:127];

  assign _zz_pc_r_addr = (pc_index * 5'h10);
  assign _zz_pc_r_addr_1 = {4'd0, pc_offset};
  assign _zz_code_payload = pc_r_addr[6:0];
  assign _zz_cache_mem_port_2 = (_zz_cache_mem_port_3 + _zz_cache_mem_port_4);
  assign _zz_cache_mem_port_1 = _zz_cache_mem_port_2[6:0];
  assign _zz_cache_mem_port_3 = (s_pc_index_reg * 5'h10);
  assign _zz_cache_mem_port_4 = {3'd0, s_axi_r_cnt};
  assign _zz_cache_mem_port_5 = axi_r_payload_data;
  assign cache_mem_spinal_port0 = cache_mem[_zz_code_payload];
  always @(posedge clock) begin
    if(_zz_1) begin
      cache_mem[_zz_cache_mem_port_1] <= _zz_cache_mem_port_5;
    end
  end

  always @(*) begin
    case(pc_index)
      3'b000 : _zz_when = cache_valid_0;
      3'b001 : _zz_when = cache_valid_1;
      3'b010 : _zz_when = cache_valid_2;
      3'b011 : _zz_when = cache_valid_3;
      3'b100 : _zz_when = cache_valid_4;
      3'b101 : _zz_when = cache_valid_5;
      3'b110 : _zz_when = cache_valid_6;
      default : _zz_when = cache_valid_7;
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(s_stateReg)
      s_BOOT : s_stateReg_string = "BOOT ";
      s_start : s_stateReg_string = "start";
      s_axi_r : s_stateReg_string = "axi_r";
      default : s_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(s_stateNext)
      s_BOOT : s_stateNext_string = "BOOT ";
      s_start : s_stateNext_string = "start";
      s_axi_r : s_stateNext_string = "axi_r";
      default : s_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    _zz_1 = 1'b0;
    axi_ar_valid = 1'b0;
    axi_ar_payload_addr = 32'h0;
    code_payload = 32'h0;
    code_valid = 1'b0;
    s_wantStart = 1'b0;
    s_stateNext = s_stateReg;
    case(s_stateReg)
      s_start : begin
        code_valid = 1'b0;
        if(fence_i) begin
          s_stateNext = s_axi_r;
        end else begin
          if(1'b1) begin
            if((cache_tag != pc_tag)) begin
              s_stateNext = s_axi_r;
            end else begin
              if((! _zz_when)) begin
                s_stateNext = s_axi_r;
              end else begin
                code_payload = cache_mem_spinal_port0;
                code_valid = 1'b1;
              end
            end
          end
        end
      end
      s_axi_r : begin
        axi_ar_valid = (! s_axi_r_ar_flag);
        axi_ar_payload_addr = {s_pc_tag_reg,{s_pc_index_reg,6'h0}};
        if(axi_r_fire) begin
          _zz_1 = 1'b1;
          if((s_axi_r_cnt == 5'h0f)) begin
            s_stateNext = s_start;
          end
        end
      end
      default : begin
        s_wantStart = 1'b1;
      end
    endcase
    if(s_wantStart) begin
      s_stateNext = s_start;
    end
    if(s_wantKill) begin
      s_stateNext = s_BOOT;
    end
  end

  assign axi_w_valid = 1'b0;
  assign axi_w_payload_data = 32'b00000000000000000000000000000000;
  assign axi_w_payload_strb = 4'b0000;
  assign axi_w_payload_last = 1'b0;
  assign axi_aw_valid = 1'b0;
  assign axi_aw_payload_addr = 32'b00000000000000000000000000000000;
  assign axi_aw_payload_id = 4'b0000;
  assign axi_aw_payload_len = 8'b00000000;
  assign axi_aw_payload_size = 3'b000;
  assign axi_aw_payload_burst = 2'b00;
  assign axi_b_ready = 1'b0;
  assign axi_ar_payload_id = 4'b0000;
  assign axi_ar_payload_len = 8'h0f;
  assign axi_ar_payload_size = 3'b010;
  assign axi_ar_payload_burst = 2'b01;
  assign pc_offset = addr[5 : 2];
  assign pc_index = addr[8 : 6];
  assign pc_tag = addr[31 : 9];
  assign pc_r_addr = (_zz_pc_r_addr + _zz_pc_r_addr_1);
  assign s_wantExit = 1'b0;
  assign s_wantKill = 1'b0;
  assign axi_ar_fire = (axi_ar_valid && axi_ar_ready);
  assign axi_r_fire = (axi_r_valid && axi_r_ready);
  assign _zz_4 = ({7'd0,1'b1} <<< s_pc_index_reg);
  assign s_onExit_BOOT = ((s_stateNext != s_BOOT) && (s_stateReg == s_BOOT));
  assign s_onExit_start = ((s_stateNext != s_start) && (s_stateReg == s_start));
  assign s_onExit_axi_r = ((s_stateNext != s_axi_r) && (s_stateReg == s_axi_r));
  assign s_onEntry_BOOT = ((s_stateNext == s_BOOT) && (s_stateReg != s_BOOT));
  assign s_onEntry_start = ((s_stateNext == s_start) && (s_stateReg != s_start));
  assign s_onEntry_axi_r = ((s_stateNext == s_axi_r) && (s_stateReg != s_axi_r));
  always @(posedge clock) begin
    if(reset) begin
      axi_r_ready <= 1'b0;
      error_cnt <= 32'h0;
      cache_valid_0 <= 1'b0;
      cache_valid_1 <= 1'b0;
      cache_valid_2 <= 1'b0;
      cache_valid_3 <= 1'b0;
      cache_valid_4 <= 1'b0;
      cache_valid_5 <= 1'b0;
      cache_valid_6 <= 1'b0;
      cache_valid_7 <= 1'b0;
      cache_tag <= 23'h0;
      s_pc_tag_reg <= 23'h0;
      s_pc_index_reg <= 3'b000;
      s_axi_r_cnt <= 5'h0;
      s_axi_r_ar_flag <= 1'b0;
      s_stateReg <= s_BOOT;
    end else begin
      s_stateReg <= s_stateNext;
      case(s_stateReg)
        s_start : begin
          if(fence_i) begin
            cache_valid_0 <= 1'b0;
            cache_valid_1 <= 1'b0;
            cache_valid_2 <= 1'b0;
            cache_valid_3 <= 1'b0;
            cache_valid_4 <= 1'b0;
            cache_valid_5 <= 1'b0;
            cache_valid_6 <= 1'b0;
            cache_valid_7 <= 1'b0;
          end else begin
            if(1'b1) begin
              if((cache_tag != pc_tag)) begin
                cache_tag <= pc_tag;
                error_cnt <= (error_cnt + 32'h00000001);
                cache_valid_0 <= 1'b0;
                cache_valid_1 <= 1'b0;
                cache_valid_2 <= 1'b0;
                cache_valid_3 <= 1'b0;
                cache_valid_4 <= 1'b0;
                cache_valid_5 <= 1'b0;
                cache_valid_6 <= 1'b0;
                cache_valid_7 <= 1'b0;
              end else begin
                if((! _zz_when)) begin
                  error_cnt <= (error_cnt + 32'h00000001);
                end
              end
            end
          end
        end
        s_axi_r : begin
          if(axi_ar_fire) begin
            s_axi_r_ar_flag <= 1'b1;
          end
          if(axi_r_fire) begin
            s_axi_r_cnt <= (s_axi_r_cnt + 5'h01);
            if((s_axi_r_cnt == 5'h0f)) begin
              axi_r_ready <= 1'b0;
              if(_zz_4[0]) begin
                cache_valid_0 <= 1'b1;
              end
              if(_zz_4[1]) begin
                cache_valid_1 <= 1'b1;
              end
              if(_zz_4[2]) begin
                cache_valid_2 <= 1'b1;
              end
              if(_zz_4[3]) begin
                cache_valid_3 <= 1'b1;
              end
              if(_zz_4[4]) begin
                cache_valid_4 <= 1'b1;
              end
              if(_zz_4[5]) begin
                cache_valid_5 <= 1'b1;
              end
              if(_zz_4[6]) begin
                cache_valid_6 <= 1'b1;
              end
              if(_zz_4[7]) begin
                cache_valid_7 <= 1'b1;
              end
            end
          end else begin
            axi_r_ready <= 1'b1;
          end
        end
        default : begin
        end
      endcase
      if(s_onEntry_axi_r) begin
        s_pc_tag_reg <= pc_tag;
        s_pc_index_reg <= pc_index;
        s_axi_r_cnt <= 5'h0;
        s_axi_r_ar_flag <= 1'b0;
      end
    end
  end


endmodule
