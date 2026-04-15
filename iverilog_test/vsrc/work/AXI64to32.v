// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXI64to32

`timescale 1ns/1ps 
module AXI64to32 (
  input  wire          in_aw_valid,
  output reg           in_aw_ready,
  input  wire [31:0]   in_aw_payload_addr,
  input  wire [3:0]    in_aw_payload_id,
  input  wire [7:0]    in_aw_payload_len,
  input  wire [2:0]    in_aw_payload_size,
  input  wire [1:0]    in_aw_payload_burst,
  input  wire          in_w_valid,
  output reg           in_w_ready,
  input  wire [63:0]   in_w_payload_data,
  input  wire [7:0]    in_w_payload_strb,
  input  wire          in_w_payload_last,
  output reg           in_b_valid,
  input  wire          in_b_ready,
  output reg  [3:0]    in_b_payload_id,
  output reg  [1:0]    in_b_payload_resp,
  input  wire          in_ar_valid,
  output wire          in_ar_ready,
  input  wire [31:0]   in_ar_payload_addr,
  input  wire [3:0]    in_ar_payload_id,
  input  wire [7:0]    in_ar_payload_len,
  input  wire [2:0]    in_ar_payload_size,
  input  wire [1:0]    in_ar_payload_burst,
  output reg           in_r_valid,
  input  wire          in_r_ready,
  output reg  [63:0]   in_r_payload_data,
  output reg  [3:0]    in_r_payload_id,
  output reg  [1:0]    in_r_payload_resp,
  output reg           in_r_payload_last,
  output reg           out_aw_valid,
  input  wire          out_aw_ready,
  output reg  [31:0]   out_aw_payload_addr,
  output reg  [3:0]    out_aw_payload_id,
  output reg  [7:0]    out_aw_payload_len,
  output reg  [2:0]    out_aw_payload_size,
  output reg  [1:0]    out_aw_payload_burst,
  output reg           out_w_valid,
  input  wire          out_w_ready,
  output reg  [31:0]   out_w_payload_data,
  output reg  [3:0]    out_w_payload_strb,
  output reg           out_w_payload_last,
  input  wire          out_b_valid,
  output reg           out_b_ready,
  input  wire [3:0]    out_b_payload_id,
  input  wire [1:0]    out_b_payload_resp,
  output reg           out_ar_valid,
  input  wire          out_ar_ready,
  output reg  [31:0]   out_ar_payload_addr,
  output reg  [3:0]    out_ar_payload_id,
  output reg  [7:0]    out_ar_payload_len,
  output reg  [2:0]    out_ar_payload_size,
  output reg  [1:0]    out_ar_payload_burst,
  input  wire          out_r_valid,
  output reg           out_r_ready,
  input  wire [31:0]   out_r_payload_data,
  input  wire [3:0]    out_r_payload_id,
  input  wire [1:0]    out_r_payload_resp,
  input  wire          out_r_payload_last,
  input  wire          clk,
  input  wire          reset
);
  localparam r_BOOT = 3'd0;
  localparam r_start = 3'd1;
  localparam r_ar = 3'd2;
  localparam r_r = 3'd3;
  localparam r_turn = 3'd4;
  localparam w_BOOT = 3'd0;
  localparam w_start = 3'd1;
  localparam w_rx_w = 3'd2;
  localparam w_aw = 3'd3;
  localparam w_w = 3'd4;
  localparam w_ready_b = 3'd5;
  localparam w_turn = 3'd6;

  reg                 r_fifo_io_push_valid;
  reg        [63:0]   r_fifo_io_push_payload;
  reg                 r_fifo_io_pop_ready;
  reg                 w_fifo_io_push_valid;
  reg        [63:0]   w_fifo_io_push_payload;
  reg                 w_fifo_io_pop_ready;
  reg                 w_fifo_io_flush;
  wire                r_fifo_io_push_ready;
  wire                r_fifo_io_pop_valid;
  wire       [63:0]   r_fifo_io_pop_payload;
  wire       [3:0]    r_fifo_io_occupancy;
  wire       [3:0]    r_fifo_io_availability;
  wire                w_fifo_io_push_ready;
  wire                w_fifo_io_pop_valid;
  wire       [63:0]   w_fifo_io_pop_payload;
  wire       [3:0]    w_fifo_io_occupancy;
  wire       [3:0]    w_fifo_io_availability;
  wire       [8:0]    _zz_r_r_cnt;
  wire       [8:0]    _zz_w_len;
  wire                r_wantExit;
  reg                 r_wantStart;
  wire                r_wantKill;
  reg        [3:0]    r_arid;
  reg        [2:0]    r_arsize;
  reg        [7:0]    r_arlen;
  reg        [31:0]   r_araddr;
  reg        [1:0]    r_arburst;
  reg        [8:0]    r_r_cnt;
  reg                 r_r_r_ready;
  reg        [31:0]   r_r_data_q;
  reg        [8:0]    r_r_cnt_1;
  reg                 r_r_flag;
  reg                 r_turn_r_valid;
  wire                w_wantExit;
  reg                 w_wantStart;
  wire                w_wantKill;
  reg                 w_turn_flag;
  reg        [31:0]   w_addr;
  reg        [1:0]    w_burst;
  reg        [8:0]    w_len;
  reg        [2:0]    w_size;
  reg        [3:0]    w_id;
  reg        [7:0]    w_strb;
  reg                 w_w_w_valid;
  reg                 w_w_w_data_sel;
  reg                 w_w_fifo_ready;
  reg                 w_turn_flag_1;
  reg        [2:0]    r_stateReg;
  reg        [2:0]    r_stateNext;
  wire                _zz_1;
  wire                out_ar_fire;
  wire                r_onExit_BOOT;
  wire                r_onExit_start;
  wire                r_onExit_ar;
  wire                r_onExit_r;
  wire                r_onExit_turn;
  wire                r_onEntry_BOOT;
  wire                r_onEntry_start;
  wire                r_onEntry_ar;
  wire                r_onEntry_r;
  wire                r_onEntry_turn;
  reg        [2:0]    w_stateReg;
  reg        [2:0]    w_stateNext;
  wire                _zz_2;
  wire                w_onExit_BOOT;
  wire                w_onExit_start;
  wire                w_onExit_rx_w;
  wire                w_onExit_aw;
  wire                w_onExit_w;
  wire                w_onExit_ready_b;
  wire                w_onExit_turn;
  wire                w_onEntry_BOOT;
  wire                w_onEntry_start;
  wire                w_onEntry_rx_w;
  wire                w_onEntry_aw;
  wire                w_onEntry_w;
  wire                w_onEntry_ready_b;
  wire                w_onEntry_turn;
  `ifndef SYNTHESIS
  reg [39:0] r_stateReg_string;
  reg [39:0] r_stateNext_string;
  reg [55:0] w_stateReg_string;
  reg [55:0] w_stateNext_string;
  `endif


  assign _zz_r_r_cnt = ({1'd0,in_ar_payload_len} <<< 1'd1);
  assign _zz_w_len = ({1'd0,in_aw_payload_len} <<< 1'd1);
  StreamFifo r_fifo (
    .io_push_valid   (r_fifo_io_push_valid        ), //i
    .io_push_ready   (r_fifo_io_push_ready        ), //o
    .io_push_payload (r_fifo_io_push_payload[63:0]), //i
    .io_pop_valid    (r_fifo_io_pop_valid         ), //o
    .io_pop_ready    (r_fifo_io_pop_ready         ), //i
    .io_pop_payload  (r_fifo_io_pop_payload[63:0] ), //o
    .io_flush        (1'b0                        ), //i
    .io_occupancy    (r_fifo_io_occupancy[3:0]    ), //o
    .io_availability (r_fifo_io_availability[3:0] ), //o
    .clk             (clk                         ), //i
    .reset           (reset                       )  //i
  );
  StreamFifo_1 w_fifo (
    .io_push_valid   (w_fifo_io_push_valid        ), //i
    .io_push_ready   (w_fifo_io_push_ready        ), //o
    .io_push_payload (w_fifo_io_push_payload[63:0]), //i
    .io_pop_valid    (w_fifo_io_pop_valid         ), //o
    .io_pop_ready    (w_fifo_io_pop_ready         ), //i
    .io_pop_payload  (w_fifo_io_pop_payload[63:0] ), //o
    .io_flush        (w_fifo_io_flush             ), //i
    .io_occupancy    (w_fifo_io_occupancy[3:0]    ), //o
    .io_availability (w_fifo_io_availability[3:0] ), //o
    .clk             (clk                         ), //i
    .reset           (reset                       )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(r_stateReg)
      r_BOOT : r_stateReg_string = "BOOT ";
      r_start : r_stateReg_string = "start";
      r_ar : r_stateReg_string = "ar   ";
      r_r : r_stateReg_string = "r    ";
      r_turn : r_stateReg_string = "turn ";
      default : r_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(r_stateNext)
      r_BOOT : r_stateNext_string = "BOOT ";
      r_start : r_stateNext_string = "start";
      r_ar : r_stateNext_string = "ar   ";
      r_r : r_stateNext_string = "r    ";
      r_turn : r_stateNext_string = "turn ";
      default : r_stateNext_string = "?????";
    endcase
  end
  always @(*) begin
    case(w_stateReg)
      w_BOOT : w_stateReg_string = "BOOT   ";
      w_start : w_stateReg_string = "start  ";
      w_rx_w : w_stateReg_string = "rx_w   ";
      w_aw : w_stateReg_string = "aw     ";
      w_w : w_stateReg_string = "w      ";
      w_ready_b : w_stateReg_string = "ready_b";
      w_turn : w_stateReg_string = "turn   ";
      default : w_stateReg_string = "???????";
    endcase
  end
  always @(*) begin
    case(w_stateNext)
      w_BOOT : w_stateNext_string = "BOOT   ";
      w_start : w_stateNext_string = "start  ";
      w_rx_w : w_stateNext_string = "rx_w   ";
      w_aw : w_stateNext_string = "aw     ";
      w_w : w_stateNext_string = "w      ";
      w_ready_b : w_stateNext_string = "ready_b";
      w_turn : w_stateNext_string = "turn   ";
      default : w_stateNext_string = "???????";
    endcase
  end
  `endif

  always @(*) begin
    out_aw_valid = in_aw_valid;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_aw_valid = 1'b0;
          end
        end
      end
      w_rx_w : begin
        out_aw_valid = 1'b0;
      end
      w_aw : begin
        out_aw_valid = 1'b1;
      end
      w_w : begin
        out_aw_valid = 1'b0;
      end
      w_ready_b : begin
        out_aw_valid = 1'b0;
      end
      w_turn : begin
        out_aw_valid = 1'b0;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_aw_ready = out_aw_ready;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
        in_aw_ready = 1'b0;
      end
      w_aw : begin
        in_aw_ready = 1'b0;
      end
      w_w : begin
        in_aw_ready = 1'b0;
      end
      w_ready_b : begin
        in_aw_ready = 1'b0;
      end
      w_turn : begin
        in_aw_ready = 1'b0;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_aw_payload_addr = in_aw_payload_addr;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
          end else begin
            if((in_aw_payload_size == 3'b000)) begin
              if((in_w_payload_strb[3 : 0] == 4'b0000)) begin
                out_aw_payload_addr = (in_aw_payload_addr + 32'h00000004);
              end
            end
          end
        end
      end
      w_rx_w : begin
        out_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      w_aw : begin
        out_aw_payload_addr = w_addr;
      end
      w_w : begin
        out_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      w_ready_b : begin
        out_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      w_turn : begin
        out_aw_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_aw_payload_id = in_aw_payload_id;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_aw_payload_id = 4'bxxxx;
          end
        end
      end
      w_rx_w : begin
        out_aw_payload_id = 4'bxxxx;
      end
      w_aw : begin
        out_aw_payload_id = w_id;
      end
      w_w : begin
        out_aw_payload_id = 4'bxxxx;
      end
      w_ready_b : begin
        out_aw_payload_id = 4'bxxxx;
      end
      w_turn : begin
        out_aw_payload_id = 4'bxxxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_aw_payload_len = in_aw_payload_len;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_aw_payload_len = 8'bxxxxxxxx;
          end
        end
      end
      w_rx_w : begin
        out_aw_payload_len = 8'bxxxxxxxx;
      end
      w_aw : begin
        out_aw_payload_len = w_len[7:0];
      end
      w_w : begin
        out_aw_payload_len = 8'bxxxxxxxx;
      end
      w_ready_b : begin
        out_aw_payload_len = 8'bxxxxxxxx;
      end
      w_turn : begin
        out_aw_payload_len = 8'bxxxxxxxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_aw_payload_size = in_aw_payload_size;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_aw_payload_size = 3'bxxx;
          end
        end
      end
      w_rx_w : begin
        out_aw_payload_size = 3'bxxx;
      end
      w_aw : begin
        out_aw_payload_size = 3'b010;
      end
      w_w : begin
        out_aw_payload_size = 3'bxxx;
      end
      w_ready_b : begin
        out_aw_payload_size = 3'bxxx;
      end
      w_turn : begin
        out_aw_payload_size = 3'bxxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_aw_payload_burst = in_aw_payload_burst;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_aw_payload_burst = 2'bxx;
          end
        end
      end
      w_rx_w : begin
        out_aw_payload_burst = 2'bxx;
      end
      w_aw : begin
        out_aw_payload_burst = w_burst;
      end
      w_w : begin
        out_aw_payload_burst = 2'bxx;
      end
      w_ready_b : begin
        out_aw_payload_burst = 2'bxx;
      end
      w_turn : begin
        out_aw_payload_burst = 2'bxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_w_valid = in_w_valid;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_w_valid = 1'b0;
          end
        end
      end
      w_rx_w : begin
        out_w_valid = 1'b0;
      end
      w_aw : begin
        out_w_valid = 1'b0;
      end
      w_w : begin
        out_w_valid = w_w_w_valid;
      end
      w_ready_b : begin
        out_w_valid = 1'b0;
      end
      w_turn : begin
        out_w_valid = 1'b0;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_w_ready = out_w_ready;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
        in_w_ready = 1'b1;
      end
      w_aw : begin
        in_w_ready = 1'b0;
      end
      w_w : begin
        in_w_ready = 1'b0;
      end
      w_ready_b : begin
        in_w_ready = 1'b0;
      end
      w_turn : begin
        in_w_ready = 1'b0;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_w_payload_data = in_w_payload_data[31:0];
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
          end else begin
            if((in_aw_payload_size == 3'b000)) begin
              if((in_w_payload_strb[3 : 0] == 4'b0000)) begin
                out_w_payload_data = in_w_payload_data[63 : 32];
              end
            end
          end
        end
      end
      w_rx_w : begin
        out_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      w_aw : begin
        out_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      w_w : begin
        out_w_payload_data = (w_w_w_data_sel ? w_fifo_io_pop_payload[31 : 0] : w_fifo_io_pop_payload[63 : 32]);
      end
      w_ready_b : begin
        out_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      w_turn : begin
        out_w_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_w_payload_strb = in_w_payload_strb[3:0];
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_w_payload_strb = 4'bxxxx;
          end else begin
            if((in_aw_payload_size == 3'b000)) begin
              if((in_w_payload_strb[3 : 0] == 4'b0000)) begin
                out_w_payload_strb = in_w_payload_strb[7 : 4];
              end
            end
          end
        end
      end
      w_rx_w : begin
        out_w_payload_strb = 4'bxxxx;
      end
      w_aw : begin
        out_w_payload_strb = 4'bxxxx;
      end
      w_w : begin
        out_w_payload_strb = w_strb[3:0];
      end
      w_ready_b : begin
        out_w_payload_strb = 4'bxxxx;
      end
      w_turn : begin
        out_w_payload_strb = 4'bxxxx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_w_payload_last = in_w_payload_last;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            out_w_payload_last = 1'bx;
          end
        end
      end
      w_rx_w : begin
        out_w_payload_last = 1'bx;
      end
      w_aw : begin
        out_w_payload_last = 1'bx;
      end
      w_w : begin
        out_w_payload_last = 1'b0;
        if((out_w_ready && w_w_w_valid)) begin
          if((w_len == 9'h0)) begin
            out_w_payload_last = 1'b1;
          end
        end
      end
      w_ready_b : begin
        out_w_payload_last = 1'bx;
      end
      w_turn : begin
        out_w_payload_last = 1'bx;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_b_valid = out_b_valid;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
        in_b_valid = 1'b0;
      end
      w_aw : begin
        in_b_valid = 1'b0;
      end
      w_w : begin
        in_b_valid = 1'b0;
      end
      w_ready_b : begin
        in_b_valid = 1'b0;
      end
      w_turn : begin
        in_b_valid = 1'b1;
        if((in_b_ready && w_turn_flag_1)) begin
          in_b_valid = 1'b0;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_b_ready = in_b_ready;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
      end
      w_aw : begin
      end
      w_w : begin
      end
      w_ready_b : begin
        out_b_ready = 1'b1;
      end
      w_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_b_payload_id = out_b_payload_id;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
        in_b_payload_id = 4'bxxxx;
      end
      w_aw : begin
        in_b_payload_id = 4'bxxxx;
      end
      w_w : begin
        in_b_payload_id = 4'bxxxx;
      end
      w_ready_b : begin
        in_b_payload_id = 4'bxxxx;
      end
      w_turn : begin
        in_b_payload_id = w_id;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_b_payload_resp = out_b_payload_resp;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
        in_b_payload_resp = 2'bxx;
      end
      w_aw : begin
        in_b_payload_resp = 2'bxx;
      end
      w_w : begin
        in_b_payload_resp = 2'bxx;
      end
      w_ready_b : begin
        in_b_payload_resp = 2'bxx;
      end
      w_turn : begin
        in_b_payload_resp = 2'b00;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_ar_valid = in_ar_valid;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            out_ar_valid = 1'b0;
          end
        end
      end
      r_ar : begin
        out_ar_valid = 1'b1;
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  assign in_ar_ready = out_ar_ready;
  always @(*) begin
    out_ar_payload_addr = in_ar_payload_addr;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            out_ar_payload_addr = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
          end
        end
      end
      r_ar : begin
        out_ar_payload_addr = r_araddr;
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_ar_payload_id = in_ar_payload_id;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            out_ar_payload_id = 4'bxxxx;
          end
        end
      end
      r_ar : begin
        out_ar_payload_id = r_arid;
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_ar_payload_len = in_ar_payload_len;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            out_ar_payload_len = 8'bxxxxxxxx;
          end
        end
      end
      r_ar : begin
        out_ar_payload_len = r_r_cnt[7:0];
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_ar_payload_size = in_ar_payload_size;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            out_ar_payload_size = 3'bxxx;
          end
        end
      end
      r_ar : begin
        out_ar_payload_size = 3'b010;
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_ar_payload_burst = in_ar_payload_burst;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            out_ar_payload_burst = 2'bxx;
          end
        end
      end
      r_ar : begin
        out_ar_payload_burst = r_arburst;
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_r_valid = out_r_valid;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
        in_r_valid = 1'b0;
      end
      r_r : begin
        in_r_valid = 1'b0;
      end
      r_turn : begin
        in_r_valid = r_turn_r_valid;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    out_r_ready = in_r_ready;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
      end
      r_r : begin
        out_r_ready = r_r_r_ready;
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_r_payload_id = out_r_payload_id;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
        in_r_payload_id = 4'bxxxx;
      end
      r_r : begin
        in_r_payload_id = 4'bxxxx;
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_r_payload_data = {out_r_payload_data,out_r_payload_data};
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
        in_r_payload_data = 64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      r_r : begin
        in_r_payload_data = 64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
      end
      r_turn : begin
        in_r_payload_data = 64'h0;
        if((in_r_ready && r_turn_r_valid)) begin
          in_r_payload_data = r_fifo_io_pop_payload;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_r_payload_resp = out_r_payload_resp;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
        in_r_payload_resp = 2'bxx;
      end
      r_r : begin
        in_r_payload_resp = 2'bxx;
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    in_r_payload_last = out_r_payload_last;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
        in_r_payload_last = 1'bx;
      end
      r_r : begin
        in_r_payload_last = 1'bx;
      end
      r_turn : begin
        in_r_payload_last = 1'b0;
        if((in_r_ready && r_turn_r_valid)) begin
          if((r_arlen == 8'h0)) begin
            in_r_payload_last = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  assign r_wantExit = 1'b0;
  always @(*) begin
    r_wantStart = 1'b0;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
      end
      r_r : begin
      end
      r_turn : begin
      end
      default : begin
        r_wantStart = 1'b1;
      end
    endcase
  end

  assign r_wantKill = 1'b0;
  always @(*) begin
    r_fifo_io_push_valid = 1'b0;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
      end
      r_r : begin
        if(out_r_valid) begin
          if(r_r_flag) begin
            r_fifo_io_push_valid = 1'b1;
          end
        end
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    r_fifo_io_push_payload = 64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
      end
      r_r : begin
        if(out_r_valid) begin
          if(r_r_flag) begin
            r_fifo_io_push_payload = {out_r_payload_data,r_r_data_q};
          end
        end
      end
      r_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    r_fifo_io_pop_ready = 1'b0;
    case(r_stateReg)
      r_start : begin
      end
      r_ar : begin
      end
      r_r : begin
      end
      r_turn : begin
        if((in_r_ready && r_turn_r_valid)) begin
          r_fifo_io_pop_ready = 1'b1;
        end
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
      w_rx_w : begin
      end
      w_aw : begin
      end
      w_w : begin
      end
      w_ready_b : begin
      end
      w_turn : begin
      end
      default : begin
        w_wantStart = 1'b1;
      end
    endcase
  end

  assign w_wantKill = 1'b0;
  always @(*) begin
    w_fifo_io_flush = 1'b0;
    if(w_onEntry_turn) begin
      w_fifo_io_flush = 1'b1;
    end
  end

  always @(*) begin
    w_fifo_io_push_valid = 1'b0;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            w_fifo_io_push_valid = 1'b1;
          end
        end
      end
      w_rx_w : begin
        w_fifo_io_push_valid = in_w_valid;
      end
      w_aw : begin
      end
      w_w : begin
      end
      w_ready_b : begin
      end
      w_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    w_fifo_io_push_payload = 64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            w_fifo_io_push_payload = in_w_payload_data;
          end
        end
      end
      w_rx_w : begin
        w_fifo_io_push_payload = in_w_payload_data;
      end
      w_aw : begin
      end
      w_w : begin
      end
      w_ready_b : begin
      end
      w_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    w_fifo_io_pop_ready = 1'b0;
    case(w_stateReg)
      w_start : begin
      end
      w_rx_w : begin
      end
      w_aw : begin
      end
      w_w : begin
        w_fifo_io_pop_ready = w_w_fifo_ready;
      end
      w_ready_b : begin
      end
      w_turn : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    r_stateNext = r_stateReg;
    case(r_stateReg)
      r_start : begin
        if(in_ar_valid) begin
          if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
            r_stateNext = r_ar;
          end
        end
      end
      r_ar : begin
        if(out_ar_fire) begin
          r_stateNext = r_r;
        end
      end
      r_r : begin
        if(out_r_valid) begin
          if((r_r_cnt_1 == r_r_cnt)) begin
            r_stateNext = r_turn;
          end
        end
      end
      r_turn : begin
        if((in_r_ready && r_turn_r_valid)) begin
          if((r_arlen == 8'h0)) begin
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

  assign _zz_1 = (3'b010 < in_ar_payload_size);
  assign out_ar_fire = (out_ar_valid && out_ar_ready);
  assign r_onExit_BOOT = ((r_stateNext != r_BOOT) && (r_stateReg == r_BOOT));
  assign r_onExit_start = ((r_stateNext != r_start) && (r_stateReg == r_start));
  assign r_onExit_ar = ((r_stateNext != r_ar) && (r_stateReg == r_ar));
  assign r_onExit_r = ((r_stateNext != r_r) && (r_stateReg == r_r));
  assign r_onExit_turn = ((r_stateNext != r_turn) && (r_stateReg == r_turn));
  assign r_onEntry_BOOT = ((r_stateNext == r_BOOT) && (r_stateReg != r_BOOT));
  assign r_onEntry_start = ((r_stateNext == r_start) && (r_stateReg != r_start));
  assign r_onEntry_ar = ((r_stateNext == r_ar) && (r_stateReg != r_ar));
  assign r_onEntry_r = ((r_stateNext == r_r) && (r_stateReg != r_r));
  assign r_onEntry_turn = ((r_stateNext == r_turn) && (r_stateReg != r_turn));
  always @(*) begin
    w_stateNext = w_stateReg;
    case(w_stateReg)
      w_start : begin
        if((in_aw_valid && in_aw_ready)) begin
          if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
            if((! in_w_payload_last)) begin
              w_stateNext = w_rx_w;
            end else begin
              w_stateNext = w_aw;
            end
          end
        end
      end
      w_rx_w : begin
        if((in_w_payload_last && in_w_valid)) begin
          w_stateNext = w_aw;
        end
      end
      w_aw : begin
        if(out_aw_ready) begin
          w_stateNext = w_w;
        end
      end
      w_w : begin
        if((out_w_ready && w_w_w_valid)) begin
          if((w_len == 9'h0)) begin
            w_stateNext = w_ready_b;
          end
        end
      end
      w_ready_b : begin
        if(out_b_valid) begin
          w_stateNext = w_turn;
        end
      end
      w_turn : begin
        if((in_b_ready && w_turn_flag_1)) begin
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

  assign _zz_2 = (3'b010 < in_aw_payload_size);
  assign w_onExit_BOOT = ((w_stateNext != w_BOOT) && (w_stateReg == w_BOOT));
  assign w_onExit_start = ((w_stateNext != w_start) && (w_stateReg == w_start));
  assign w_onExit_rx_w = ((w_stateNext != w_rx_w) && (w_stateReg == w_rx_w));
  assign w_onExit_aw = ((w_stateNext != w_aw) && (w_stateReg == w_aw));
  assign w_onExit_w = ((w_stateNext != w_w) && (w_stateReg == w_w));
  assign w_onExit_ready_b = ((w_stateNext != w_ready_b) && (w_stateReg == w_ready_b));
  assign w_onExit_turn = ((w_stateNext != w_turn) && (w_stateReg == w_turn));
  assign w_onEntry_BOOT = ((w_stateNext == w_BOOT) && (w_stateReg != w_BOOT));
  assign w_onEntry_start = ((w_stateNext == w_start) && (w_stateReg != w_start));
  assign w_onEntry_rx_w = ((w_stateNext == w_rx_w) && (w_stateReg != w_rx_w));
  assign w_onEntry_aw = ((w_stateNext == w_aw) && (w_stateReg != w_aw));
  assign w_onEntry_w = ((w_stateNext == w_w) && (w_stateReg != w_w));
  assign w_onEntry_ready_b = ((w_stateNext == w_ready_b) && (w_stateReg != w_ready_b));
  assign w_onEntry_turn = ((w_stateNext == w_turn) && (w_stateReg != w_turn));
  always @(posedge clk) begin
    if(reset) begin
      r_arid <= 4'b0000;
      r_arsize <= 3'b000;
      r_arlen <= 8'h0;
      r_araddr <= 32'h0;
      r_arburst <= 2'b00;
      r_r_cnt <= 9'h0;
      r_r_r_ready <= 1'b0;
      r_r_data_q <= 32'h0;
      r_r_cnt_1 <= 9'h0;
      r_r_flag <= 1'b0;
      r_turn_r_valid <= 1'b0;
      w_turn_flag <= 1'b0;
      w_addr <= 32'h0;
      w_burst <= 2'b00;
      w_len <= 9'h0;
      w_size <= 3'b000;
      w_id <= 4'b0000;
      w_strb <= 8'h0;
      w_w_w_valid <= 1'b0;
      w_w_w_data_sel <= 1'b0;
      w_w_fifo_ready <= 1'b0;
      w_turn_flag_1 <= 1'b0;
      r_stateReg <= r_BOOT;
      w_stateReg <= w_BOOT;
    end else begin
      r_stateReg <= r_stateNext;
      case(r_stateReg)
        r_start : begin
          if(in_ar_valid) begin
            if((_zz_1 || (8'h0 < in_ar_payload_len))) begin
              r_arlen <= in_ar_payload_len;
              r_arsize <= in_ar_payload_size;
              r_araddr <= in_ar_payload_addr;
              r_arburst <= in_ar_payload_burst;
              r_arid <= in_ar_payload_id;
              if(_zz_1) begin
                r_r_cnt <= (_zz_r_r_cnt + 9'h001);
              end else begin
                r_r_cnt <= {1'd0, in_ar_payload_len};
              end
            end
          end
        end
        r_ar : begin
        end
        r_r : begin
          if(out_r_valid) begin
            r_r_flag <= (! r_r_flag);
            r_r_r_ready <= 1'b0;
            r_r_cnt_1 <= (r_r_cnt_1 + 9'h001);
            r_r_data_q <= out_r_payload_data;
          end else begin
            r_r_r_ready <= 1'b1;
          end
        end
        r_turn : begin
          if((in_r_ready && r_turn_r_valid)) begin
            r_turn_r_valid <= 1'b0;
            r_arlen <= (r_arlen - 8'h01);
          end else begin
            r_turn_r_valid <= 1'b1;
          end
        end
        default : begin
        end
      endcase
      if(r_onEntry_r) begin
        r_r_cnt_1 <= 9'h0;
        r_r_r_ready <= 1'b0;
        r_r_flag <= 1'b0;
      end
      if(r_onEntry_turn) begin
        r_turn_r_valid <= 1'b0;
      end
      w_stateReg <= w_stateNext;
      case(w_stateReg)
        w_start : begin
          if((in_aw_valid && in_aw_ready)) begin
            if((_zz_2 || (8'h0 < in_aw_payload_len))) begin
              w_addr <= in_aw_payload_addr;
              w_burst <= in_aw_payload_burst;
              if(_zz_2) begin
                w_len <= (_zz_w_len + 9'h001);
              end else begin
                w_len <= {1'd0, in_aw_payload_len};
              end
              w_id <= in_aw_payload_id;
              w_size <= in_aw_payload_size;
              w_strb <= in_w_payload_strb;
            end
          end
        end
        w_rx_w : begin
        end
        w_aw : begin
        end
        w_w : begin
          if((out_w_ready && w_w_w_valid)) begin
            w_w_w_valid <= 1'b0;
            w_len <= (w_len - 9'h001);
            w_w_w_data_sel <= (! w_w_w_data_sel);
            if((! w_w_w_data_sel)) begin
              w_w_fifo_ready <= 1'b1;
            end
          end else begin
            w_w_w_valid <= 1'b1;
          end
          if(w_w_fifo_ready) begin
            w_w_fifo_ready <= 1'b0;
          end
        end
        w_ready_b : begin
        end
        w_turn : begin
          w_turn_flag_1 <= 1'b1;
        end
        default : begin
        end
      endcase
      if(w_onEntry_start) begin
        w_turn_flag <= 1'b0;
      end
      if(w_onEntry_w) begin
        w_w_w_valid <= 1'b1;
        w_w_w_data_sel <= 1'b1;
        w_w_fifo_ready <= 1'b0;
      end
      if(w_onEntry_turn) begin
        w_turn_flag_1 <= 1'b0;
      end
    end
  end


endmodule
