// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyx_soc_sim

`timescale 1ns/1ps 
module ysyxSoCFull (
  input  wire          clock,
  input  wire          reset
);
  localparam w_BOOT = 2'd0;
  localparam w_start = 2'd1;
  localparam w_w_mem = 2'd2;
  localparam w_b = 2'd3;
  localparam r_BOOT = 2'd0;
  localparam r_start = 2'd1;
  localparam r_r_mem = 2'd2;

  reg                 soc_1_axi_m_aw_ready;
  reg                 soc_1_axi_m_w_ready;
  reg                 soc_1_axi_m_b_valid;
  reg        [1:0]    soc_1_axi_m_b_payload_resp;
  reg                 soc_1_axi_m_ar_ready;
  reg                 soc_1_axi_m_r_valid;
  reg                 soc_1_axi_m_r_payload_last;
  reg                 mem_fun_1_wen;
  reg        [31:0]   mem_fun_1_w_data;
  reg        [31:0]   mem_fun_1_w_addr;
  reg        [1:0]    mem_fun_1_w_len;
  reg                 mem_fun_1_ren;
  reg        [31:0]   mem_fun_1_r_addr;
  reg        [1:0]    mem_fun_1_r_len;
  wire                soc_1_axi_m_ar_valid;
  wire       [31:0]   soc_1_axi_m_ar_payload_addr;
  wire       [3:0]    soc_1_axi_m_ar_payload_id;
  wire       [7:0]    soc_1_axi_m_ar_payload_len;
  wire       [2:0]    soc_1_axi_m_ar_payload_size;
  wire       [1:0]    soc_1_axi_m_ar_payload_burst;
  wire                soc_1_axi_m_aw_valid;
  wire       [31:0]   soc_1_axi_m_aw_payload_addr;
  wire       [3:0]    soc_1_axi_m_aw_payload_id;
  wire       [7:0]    soc_1_axi_m_aw_payload_len;
  wire       [2:0]    soc_1_axi_m_aw_payload_size;
  wire       [1:0]    soc_1_axi_m_aw_payload_burst;
  wire                soc_1_axi_m_w_valid;
  wire       [31:0]   soc_1_axi_m_w_payload_data;
  wire       [3:0]    soc_1_axi_m_w_payload_strb;
  wire                soc_1_axi_m_w_payload_last;
  wire                soc_1_axi_m_r_ready;
  wire                soc_1_axi_m_b_ready;
  wire                soc_1_axi_s_ar_ready;
  wire                soc_1_axi_s_aw_ready;
  wire                soc_1_axi_s_w_ready;
  wire                soc_1_axi_s_r_valid;
  wire       [31:0]   soc_1_axi_s_r_payload_data;
  wire       [3:0]    soc_1_axi_s_r_payload_id;
  wire       [1:0]    soc_1_axi_s_r_payload_resp;
  wire                soc_1_axi_s_r_payload_last;
  wire                soc_1_axi_s_b_valid;
  wire       [3:0]    soc_1_axi_s_b_payload_id;
  wire       [1:0]    soc_1_axi_s_b_payload_resp;
  wire       [31:0]   mem_fun_1_r_data;
  wire       [2:0]    _zz_r_len;
  wire                w_wantExit;
  reg                 w_wantStart;
  wire                w_wantKill;
  reg        [31:0]   w_w_addr;
  reg        [31:0]   w_w_data;
  reg        [2:0]    w_w_size;
  wire                r_wantExit;
  reg                 r_wantStart;
  wire                r_wantKill;
  reg        [31:0]   r_r_addr;
  wire       [31:0]   r_r_data;
  reg        [2:0]    r_r_size;
  reg        [1:0]    r_r_burst;
  reg        [7:0]    r_r_len;
  reg                 r_r_mem_r_valid;
  reg        [1:0]    w_stateReg;
  reg        [1:0]    w_stateNext;
  wire                axi_m_aw_fire;
  reg                 axi_m_aw_fire_regNext;
  wire                axi_m_b_fire;
  reg                 axi_m_b_fire_regNext;
  wire                w_onExit_BOOT;
  wire                w_onExit_start;
  wire                w_onExit_w_mem;
  wire                w_onExit_b;
  wire                w_onEntry_BOOT;
  wire                w_onEntry_start;
  wire                w_onEntry_w_mem;
  wire                w_onEntry_b;
  reg        [1:0]    r_stateReg;
  reg        [1:0]    r_stateNext;
  wire                axi_m_ar_fire;
  reg                 axi_m_ar_fire_regNext;
  wire                axi_m_r_fire;
  wire                when_pipCPUTOP_l308;
  wire                r_onExit_BOOT;
  wire                r_onExit_start;
  wire                r_onExit_r_mem;
  wire                r_onEntry_BOOT;
  wire                r_onEntry_start;
  wire                r_onEntry_r_mem;
  `ifndef SYNTHESIS
  reg [39:0] w_stateReg_string;
  reg [39:0] w_stateNext_string;
  reg [39:0] r_stateReg_string;
  reg [39:0] r_stateNext_string;
  `endif


  assign _zz_r_len = r_r_size;
  Soc soc_1 (
    .axi_m_aw_valid         (soc_1_axi_m_aw_valid                ), //o
    .axi_m_aw_ready         (soc_1_axi_m_aw_ready                ), //i
    .axi_m_aw_payload_addr  (soc_1_axi_m_aw_payload_addr[31:0]   ), //o
    .axi_m_aw_payload_id    (soc_1_axi_m_aw_payload_id[3:0]      ), //o
    .axi_m_aw_payload_len   (soc_1_axi_m_aw_payload_len[7:0]     ), //o
    .axi_m_aw_payload_size  (soc_1_axi_m_aw_payload_size[2:0]    ), //o
    .axi_m_aw_payload_burst (soc_1_axi_m_aw_payload_burst[1:0]   ), //o
    .axi_m_w_valid          (soc_1_axi_m_w_valid                 ), //o
    .axi_m_w_ready          (soc_1_axi_m_w_ready                 ), //i
    .axi_m_w_payload_data   (soc_1_axi_m_w_payload_data[31:0]    ), //o
    .axi_m_w_payload_strb   (soc_1_axi_m_w_payload_strb[3:0]     ), //o
    .axi_m_w_payload_last   (soc_1_axi_m_w_payload_last          ), //o
    .axi_m_b_valid          (soc_1_axi_m_b_valid                 ), //i
    .axi_m_b_ready          (soc_1_axi_m_b_ready                 ), //o
    .axi_m_b_payload_id     (4'bxxxx                             ), //i
    .axi_m_b_payload_resp   (soc_1_axi_m_b_payload_resp[1:0]     ), //i
    .axi_m_ar_valid         (soc_1_axi_m_ar_valid                ), //o
    .axi_m_ar_ready         (soc_1_axi_m_ar_ready                ), //i
    .axi_m_ar_payload_addr  (soc_1_axi_m_ar_payload_addr[31:0]   ), //o
    .axi_m_ar_payload_id    (soc_1_axi_m_ar_payload_id[3:0]      ), //o
    .axi_m_ar_payload_len   (soc_1_axi_m_ar_payload_len[7:0]     ), //o
    .axi_m_ar_payload_size  (soc_1_axi_m_ar_payload_size[2:0]    ), //o
    .axi_m_ar_payload_burst (soc_1_axi_m_ar_payload_burst[1:0]   ), //o
    .axi_m_r_valid          (soc_1_axi_m_r_valid                 ), //i
    .axi_m_r_ready          (soc_1_axi_m_r_ready                 ), //o
    .axi_m_r_payload_data   (32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx), //i
    .axi_m_r_payload_id     (4'bxxxx                             ), //i
    .axi_m_r_payload_resp   (2'bxx                               ), //i
    .axi_m_r_payload_last   (soc_1_axi_m_r_payload_last          ), //i
    .axi_s_aw_valid         (1'b0                                ), //i
    .axi_s_aw_ready         (soc_1_axi_s_aw_ready                ), //o
    .axi_s_aw_payload_addr  (32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx), //i
    .axi_s_aw_payload_id    (4'bxxxx                             ), //i
    .axi_s_aw_payload_len   (8'bxxxxxxxx                         ), //i
    .axi_s_aw_payload_size  (3'bxxx                              ), //i
    .axi_s_aw_payload_burst (2'bxx                               ), //i
    .axi_s_w_valid          (1'b0                                ), //i
    .axi_s_w_ready          (soc_1_axi_s_w_ready                 ), //o
    .axi_s_w_payload_data   (32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx), //i
    .axi_s_w_payload_strb   (4'bxxxx                             ), //i
    .axi_s_w_payload_last   (1'bx                                ), //i
    .axi_s_b_valid          (soc_1_axi_s_b_valid                 ), //o
    .axi_s_b_ready          (1'b0                                ), //i
    .axi_s_b_payload_id     (soc_1_axi_s_b_payload_id[3:0]       ), //o
    .axi_s_b_payload_resp   (soc_1_axi_s_b_payload_resp[1:0]     ), //o
    .axi_s_ar_valid         (1'b0                                ), //i
    .axi_s_ar_ready         (soc_1_axi_s_ar_ready                ), //o
    .axi_s_ar_payload_addr  (32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx), //i
    .axi_s_ar_payload_id    (4'bxxxx                             ), //i
    .axi_s_ar_payload_len   (8'bxxxxxxxx                         ), //i
    .axi_s_ar_payload_size  (3'bxxx                              ), //i
    .axi_s_ar_payload_burst (2'bxx                               ), //i
    .axi_s_r_valid          (soc_1_axi_s_r_valid                 ), //o
    .axi_s_r_ready          (1'b0                                ), //i
    .axi_s_r_payload_data   (soc_1_axi_s_r_payload_data[31:0]    ), //o
    .axi_s_r_payload_id     (soc_1_axi_s_r_payload_id[3:0]       ), //o
    .axi_s_r_payload_resp   (soc_1_axi_s_r_payload_resp[1:0]     ), //o
    .axi_s_r_payload_last   (soc_1_axi_s_r_payload_last          ), //o
    .clock                  (clock                               ), //i
    .reset                  (reset                               )  //i
  );
  mem_fun mem_fun_1 (
    .clk    (clock                 ), //i
    .rst    (reset                 ), //i
    .wen    (mem_fun_1_wen         ), //i
    .w_data (mem_fun_1_w_data[31:0]), //i
    .w_addr (mem_fun_1_w_addr[31:0]), //i
    .w_len  (mem_fun_1_w_len[1:0]  ), //i
    .ren    (mem_fun_1_ren         ), //i
    .r_data (mem_fun_1_r_data[31:0]), //o
    .r_addr (mem_fun_1_r_addr[31:0]), //i
    .r_len  (mem_fun_1_r_len[1:0]  )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(w_stateReg)
      w_BOOT : w_stateReg_string = "BOOT ";
      w_start : w_stateReg_string = "start";
      w_w_mem : w_stateReg_string = "w_mem";
      w_b : w_stateReg_string = "b    ";
      default : w_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(w_stateNext)
      w_BOOT : w_stateNext_string = "BOOT ";
      w_start : w_stateNext_string = "start";
      w_w_mem : w_stateNext_string = "w_mem";
      w_b : w_stateNext_string = "b    ";
      default : w_stateNext_string = "?????";
    endcase
  end
  always @(*) begin
    case(r_stateReg)
      r_BOOT : r_stateReg_string = "BOOT ";
      r_start : r_stateReg_string = "start";
      r_r_mem : r_stateReg_string = "r_mem";
      default : r_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(r_stateNext)
      r_BOOT : r_stateNext_string = "BOOT ";
      r_start : r_stateNext_string = "start";
      r_r_mem : r_stateNext_string = "r_mem";
      default : r_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    soc_1_axi_m_r_valid = 1'b0;
    case(r_stateReg)
      r_start : begin
      end
      r_r_mem : begin
        soc_1_axi_m_r_valid = r_r_mem_r_valid;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    soc_1_axi_m_r_payload_last = 1'bx;
    case(r_stateReg)
      r_start : begin
      end
      r_r_mem : begin
        if(axi_m_r_fire) begin
          if(when_pipCPUTOP_l308) begin
            soc_1_axi_m_r_payload_last = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    soc_1_axi_m_b_valid = 1'b0;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
      end
      w_b : begin
        if(axi_m_b_fire_regNext) begin
          soc_1_axi_m_b_valid = 1'b0;
        end else begin
          soc_1_axi_m_b_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    soc_1_axi_m_b_payload_resp = 2'bxx;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
      end
      w_b : begin
        soc_1_axi_m_b_payload_resp = 2'b00;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    soc_1_axi_m_w_ready = 1'b1;
    case(w_stateReg)
      w_start : begin
        if(axi_m_aw_fire_regNext) begin
          soc_1_axi_m_w_ready = 1'b0;
        end
      end
      w_w_mem : begin
      end
      w_b : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    soc_1_axi_m_aw_ready = 1'b1;
    case(w_stateReg)
      w_start : begin
        if(axi_m_aw_fire_regNext) begin
          soc_1_axi_m_aw_ready = 1'b0;
        end
      end
      w_w_mem : begin
      end
      w_b : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    soc_1_axi_m_ar_ready = 1'b1;
    case(r_stateReg)
      r_start : begin
        if(axi_m_ar_fire_regNext) begin
          soc_1_axi_m_ar_ready = 1'b0;
        end
      end
      r_r_mem : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_wen = 1'b0;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
        mem_fun_1_wen = 1'b1;
      end
      w_b : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_ren = 1'b0;
    case(r_stateReg)
      r_start : begin
      end
      r_r_mem : begin
        mem_fun_1_ren = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_w_data = 32'h0;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
        mem_fun_1_w_data = w_w_data;
      end
      w_b : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_w_addr = 32'h0;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
        mem_fun_1_w_addr = w_w_addr;
      end
      w_b : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_w_len = 2'b00;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
        mem_fun_1_w_len = w_w_size[1:0];
      end
      w_b : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_r_addr = 32'h0;
    case(r_stateReg)
      r_start : begin
      end
      r_r_mem : begin
        mem_fun_1_r_addr = r_r_addr;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mem_fun_1_r_len = 2'b00;
    case(r_stateReg)
      r_start : begin
      end
      r_r_mem : begin
        mem_fun_1_r_len = _zz_r_len[1:0];
      end
      default : begin
      end
    endcase
  end

  assign w_wantExit = 1'b0;
  always @(*) begin
    w_wantStart = 1'b0;
    case(w_stateReg)
      w_start : begin
      end
      w_w_mem : begin
      end
      w_b : begin
      end
      default : begin
        w_wantStart = 1'b1;
      end
    endcase
  end

  assign w_wantKill = 1'b0;
  assign r_wantExit = 1'b0;
  always @(*) begin
    r_wantStart = 1'b0;
    case(r_stateReg)
      r_start : begin
      end
      r_r_mem : begin
      end
      default : begin
        r_wantStart = 1'b1;
      end
    endcase
  end

  assign r_wantKill = 1'b0;
  assign r_r_data = 32'h0;
  always @(*) begin
    w_stateNext = w_stateReg;
    case(w_stateReg)
      w_start : begin
        if(axi_m_aw_fire_regNext) begin
          w_stateNext = w_w_mem;
        end
      end
      w_w_mem : begin
        w_stateNext = w_b;
      end
      w_b : begin
        if(axi_m_b_fire_regNext) begin
          w_stateNext = w_start;
        end
      end
      default : begin
      end
    endcase
    if(w_wantStart) begin
      w_stateNext = w_start;
    end
    if(w_wantKill) begin
      w_stateNext = w_BOOT;
    end
  end

  assign axi_m_aw_fire = (soc_1_axi_m_aw_valid && soc_1_axi_m_aw_ready);
  assign axi_m_b_fire = (soc_1_axi_m_b_valid && soc_1_axi_m_b_ready);
  assign w_onExit_BOOT = ((w_stateNext != w_BOOT) && (w_stateReg == w_BOOT));
  assign w_onExit_start = ((w_stateNext != w_start) && (w_stateReg == w_start));
  assign w_onExit_w_mem = ((w_stateNext != w_w_mem) && (w_stateReg == w_w_mem));
  assign w_onExit_b = ((w_stateNext != w_b) && (w_stateReg == w_b));
  assign w_onEntry_BOOT = ((w_stateNext == w_BOOT) && (w_stateReg != w_BOOT));
  assign w_onEntry_start = ((w_stateNext == w_start) && (w_stateReg != w_start));
  assign w_onEntry_w_mem = ((w_stateNext == w_w_mem) && (w_stateReg != w_w_mem));
  assign w_onEntry_b = ((w_stateNext == w_b) && (w_stateReg != w_b));
  always @(*) begin
    r_stateNext = r_stateReg;
    case(r_stateReg)
      r_start : begin
        if(axi_m_ar_fire_regNext) begin
          r_stateNext = r_r_mem;
        end
      end
      r_r_mem : begin
        if(axi_m_r_fire) begin
          if(when_pipCPUTOP_l308) begin
            r_stateNext = r_start;
          end
        end
      end
      default : begin
      end
    endcase
    if(r_wantStart) begin
      r_stateNext = r_start;
    end
    if(r_wantKill) begin
      r_stateNext = r_BOOT;
    end
  end

  assign axi_m_ar_fire = (soc_1_axi_m_ar_valid && soc_1_axi_m_ar_ready);
  assign axi_m_r_fire = (soc_1_axi_m_r_valid && soc_1_axi_m_r_ready);
  assign when_pipCPUTOP_l308 = (r_r_len == 8'h0);
  assign r_onExit_BOOT = ((r_stateNext != r_BOOT) && (r_stateReg == r_BOOT));
  assign r_onExit_start = ((r_stateNext != r_start) && (r_stateReg == r_start));
  assign r_onExit_r_mem = ((r_stateNext != r_r_mem) && (r_stateReg == r_r_mem));
  assign r_onEntry_BOOT = ((r_stateNext == r_BOOT) && (r_stateReg != r_BOOT));
  assign r_onEntry_start = ((r_stateNext == r_start) && (r_stateReg != r_start));
  assign r_onEntry_r_mem = ((r_stateNext == r_r_mem) && (r_stateReg != r_r_mem));
  always @(posedge clock or posedge reset) begin
    if(reset) begin
      w_w_addr <= 32'h0;
      w_w_data <= 32'h0;
      w_w_size <= 3'b000;
      r_r_addr <= 32'h0;
      r_r_size <= 3'b000;
      r_r_burst <= 2'b00;
      r_r_len <= 8'h0;
      r_r_mem_r_valid <= 1'b0;
      w_stateReg <= w_BOOT;
      r_stateReg <= r_BOOT;
    end else begin
      w_stateReg <= w_stateNext;
      case(w_stateReg)
        w_start : begin
          if(axi_m_aw_fire_regNext) begin
            w_w_data <= soc_1_axi_m_w_payload_data;
            w_w_addr <= soc_1_axi_m_aw_payload_addr;
            w_w_size <= soc_1_axi_m_aw_payload_size;
          end
        end
        w_w_mem : begin
        end
        w_b : begin
        end
        default : begin
        end
      endcase
      r_stateReg <= r_stateNext;
      case(r_stateReg)
        r_start : begin
          if(axi_m_ar_fire_regNext) begin
            r_r_addr <= soc_1_axi_m_ar_payload_addr;
            r_r_size <= soc_1_axi_m_ar_payload_size;
            r_r_burst <= soc_1_axi_m_ar_payload_burst;
            r_r_len <= soc_1_axi_m_ar_payload_len;
          end
        end
        r_r_mem : begin
          if(axi_m_r_fire) begin
            r_r_mem_r_valid <= 1'b0;
            r_r_addr <= (r_r_addr + 32'h00000004);
            r_r_len <= (r_r_len - 8'h01);
          end else begin
            r_r_mem_r_valid <= 1'b1;
          end
        end
        default : begin
        end
      endcase
      if(r_onEntry_r_mem) begin
        r_r_mem_r_valid <= 1'b0;
      end
    end
  end

  always @(posedge clock) begin
    axi_m_aw_fire_regNext <= axi_m_aw_fire;
  end

  always @(posedge clock) begin
    axi_m_b_fire_regNext <= axi_m_b_fire;
  end

  always @(posedge clock) begin
    axi_m_ar_fire_regNext <= axi_m_ar_fire;
  end


endmodule
