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
  input  wire [31:0]   com_addr,
  input  wire          com_addr_fire,
  output reg  [31:0]   com_code,
  output reg           com_valid,
  input  wire          com_ready,
  input  wire          fence_i,
  input  wire          clock,
  input  wire          rst
);
  localparam s_BOOT = 2'd0;
  localparam s_start = 2'd1;
  localparam s_axi_r = 2'd2;

  wire       [31:0]   cache_mem_spinal_port0;
  wire       [4:0]    _zz_pc_r_addr;
  wire       [4:0]    _zz_pc_r_addr_1;
  wire       [3:0]    _zz_cache_mem_port;
  wire       [3:0]    _zz_cache_mem_port_1;
  wire       [4:0]    _zz_cache_mem_port_2;
  wire       [4:0]    _zz_cache_mem_port_3;
  wire       [4:0]    _zz_cache_mem_port_4;
  wire       [31:0]   _zz_cache_mem_port_5;
  reg                 _zz__zz_4;
  wire       [3:0]    _zz_com_code;
  reg                 _zz_1;
  reg        [31:0]   error_cnt;
  reg                 cache_valid_0;
  reg                 cache_valid_1;
  reg                 cache_valid_2;
  reg                 cache_valid_3;
  wire       [1:0]    pc_offset;
  wire       [1:0]    pc_index;
  wire       [25:0]   pc_tag;
  wire       [4:0]    pc_r_addr;
  reg        [25:0]   cache_tag;
  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg                 s_start_flag;
  reg        [2:0]    s_axi_r_cnt;
  reg                 s_axi_r_ar_flag;
  reg        [1:0]    s_stateReg;
  reg        [1:0]    s_stateNext;
  wire                _zz_4;
  wire       [3:0]    _zz_5;
  wire                axi_ar_fire;
  wire                axi_r_fire;
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

  (* ram_style = "distributed" *) reg [31:0] cache_mem [0:15];

  assign _zz_pc_r_addr = (pc_index * 3'b100);
  assign _zz_pc_r_addr_1 = {3'd0, pc_offset};
  assign _zz_com_code = pc_r_addr[3:0];
  assign _zz_cache_mem_port_2 = (_zz_cache_mem_port_3 + _zz_cache_mem_port_4);
  assign _zz_cache_mem_port_1 = _zz_cache_mem_port_2[3:0];
  assign _zz_cache_mem_port_3 = (pc_index * 3'b100);
  assign _zz_cache_mem_port_4 = {2'd0, s_axi_r_cnt};
  assign _zz_cache_mem_port_5 = axi_r_payload_data;
  assign cache_mem_spinal_port0 = cache_mem[_zz_com_code];
  always @(posedge clock) begin
    if(_zz_1) begin
      cache_mem[_zz_cache_mem_port_1] <= _zz_cache_mem_port_5;
    end
  end

  always @(*) begin
    case(pc_index)
      2'b00 : _zz__zz_4 = cache_valid_0;
      2'b01 : _zz__zz_4 = cache_valid_1;
      2'b10 : _zz__zz_4 = cache_valid_2;
      default : _zz__zz_4 = cache_valid_3;
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
    case(s_stateReg)
      s_start : begin
      end
      s_axi_r : begin
        if(axi_r_fire) begin
          _zz_1 = 1'b1;
        end
      end
      default : begin
      end
    endcase
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
  always @(*) begin
    axi_ar_valid = 1'b0;
    case(s_stateReg)
      s_start : begin
      end
      s_axi_r : begin
        axi_ar_valid = (! s_axi_r_ar_flag);
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    axi_ar_payload_addr = 32'h0;
    case(s_stateReg)
      s_start : begin
      end
      s_axi_r : begin
        axi_ar_payload_addr = {pc_tag,{pc_index,4'b0000}};
      end
      default : begin
      end
    endcase
  end

  assign axi_ar_payload_len = 8'h03;
  assign axi_ar_payload_size = 3'b010;
  assign axi_ar_payload_burst = 2'b01;
  always @(*) begin
    com_code = 32'h0;
    case(s_stateReg)
      s_start : begin
        if(_zz_4) begin
          com_code = cache_mem_spinal_port0;
        end
      end
      s_axi_r : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    com_valid = 1'b0;
    case(s_stateReg)
      s_start : begin
        if(_zz_4) begin
          if(com_ready) begin
            com_valid = s_start_flag;
          end
        end
      end
      s_axi_r : begin
      end
      default : begin
      end
    endcase
  end

  assign pc_offset = com_addr[3 : 2];
  assign pc_index = com_addr[5 : 4];
  assign pc_tag = com_addr[31 : 6];
  assign pc_r_addr = (_zz_pc_r_addr + _zz_pc_r_addr_1);
  assign s_wantExit = 1'b0;
  always @(*) begin
    s_wantStart = 1'b0;
    case(s_stateReg)
      s_start : begin
      end
      s_axi_r : begin
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
        if(((! _zz_4) && com_ready)) begin
          s_stateNext = s_axi_r;
        end
      end
      s_axi_r : begin
        if(axi_r_fire) begin
          if((s_axi_r_cnt == 3'b011)) begin
            s_stateNext = s_start;
          end
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

  assign _zz_4 = _zz__zz_4;
  assign _zz_5 = ({3'd0,1'b1} <<< pc_index);
  assign axi_ar_fire = (axi_ar_valid && axi_ar_ready);
  assign axi_r_fire = (axi_r_valid && axi_r_ready);
  assign s_onExit_BOOT = ((s_stateNext != s_BOOT) && (s_stateReg == s_BOOT));
  assign s_onExit_start = ((s_stateNext != s_start) && (s_stateReg == s_start));
  assign s_onExit_axi_r = ((s_stateNext != s_axi_r) && (s_stateReg == s_axi_r));
  assign s_onEntry_BOOT = ((s_stateNext == s_BOOT) && (s_stateReg != s_BOOT));
  assign s_onEntry_start = ((s_stateNext == s_start) && (s_stateReg != s_start));
  assign s_onEntry_axi_r = ((s_stateNext == s_axi_r) && (s_stateReg != s_axi_r));
  always @(posedge clock) begin
    if(rst) begin
      axi_r_ready <= 1'b0;
      error_cnt <= 32'h0;
      cache_valid_0 <= 1'b0;
      cache_valid_1 <= 1'b0;
      cache_valid_2 <= 1'b0;
      cache_valid_3 <= 1'b0;
      cache_tag <= 26'h0;
      s_start_flag <= 1'b0;
      s_axi_r_cnt <= 3'b000;
      s_axi_r_ar_flag <= 1'b0;
      s_stateReg <= s_BOOT;
    end else begin
      if(fence_i) begin
        cache_valid_0 <= 1'b0;
        cache_valid_1 <= 1'b0;
        cache_valid_2 <= 1'b0;
        cache_valid_3 <= 1'b0;
      end
      s_stateReg <= s_stateNext;
      case(s_stateReg)
        s_start : begin
          if(com_addr_fire) begin
            s_start_flag <= 1'b1;
            cache_tag <= pc_tag;
            if((cache_tag != pc_tag)) begin
              cache_valid_0 <= 1'b0;
              cache_valid_1 <= 1'b0;
              cache_valid_2 <= 1'b0;
              cache_valid_3 <= 1'b0;
            end
          end
          if(((! _zz_4) && com_ready)) begin
            error_cnt <= (error_cnt + 32'h00000001);
          end
          if(_zz_4) begin
            if(com_ready) begin
              s_start_flag <= 1'b0;
            end
          end
        end
        s_axi_r : begin
          if(axi_ar_fire) begin
            s_axi_r_ar_flag <= 1'b1;
          end
          if(axi_r_fire) begin
            s_axi_r_cnt <= (s_axi_r_cnt + 3'b001);
            if((s_axi_r_cnt == 3'b011)) begin
              axi_r_ready <= 1'b0;
              if(_zz_5[0]) begin
                cache_valid_0 <= 1'b1;
              end
              if(_zz_5[1]) begin
                cache_valid_1 <= 1'b1;
              end
              if(_zz_5[2]) begin
                cache_valid_2 <= 1'b1;
              end
              if(_zz_5[3]) begin
                cache_valid_3 <= 1'b1;
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
        s_axi_r_cnt <= 3'b000;
        s_axi_r_ar_flag <= 1'b0;
      end
    end
  end


endmodule
