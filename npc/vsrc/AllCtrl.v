// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AllCtrl

`timescale 1ns/1ps 
module AllCtrl (
  output wire          u_vaild_0,
  output reg           u_vaild_1,
  output wire          u_vaild_2,
  output reg           u_vaild_3,
  output wire          u_vaild_4,
  input  wire          axir,
  output wire          _zz_clear,
  input  wire          clk,
  input  wire          rst
);
  localparam BOOT = 2'd0;
  localparam start = 2'd1;
  localparam mem = 2'd2;
  localparam pc = 2'd3;

  wire                _zz_when;
  reg                 step;
  reg                 test;
  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg        [3:0]    s_mem_cnt;
  reg        [1:0]    s_stateReg;
  reg        [1:0]    s_stateNext;
  wire                s_onExit_BOOT;
  wire                s_onExit_start;
  wire                s_onExit_mem;
  wire                s_onExit_pc;
  wire                s_onEntry_BOOT;
  wire                s_onEntry_start;
  wire                s_onEntry_mem;
  wire                s_onEntry_pc;
  `ifndef SYNTHESIS
  reg [39:0] s_stateReg_string;
  reg [39:0] s_stateNext_string;
  `endif


  assign _zz_when = ((s_mem_cnt == 4'b0010) || (! axir));
  step_fun step_fun_1 (
    .step (step)  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(s_stateReg)
      BOOT : s_stateReg_string = "BOOT ";
      start : s_stateReg_string = "start";
      mem : s_stateReg_string = "mem  ";
      pc : s_stateReg_string = "pc   ";
      default : s_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(s_stateNext)
      BOOT : s_stateNext_string = "BOOT ";
      start : s_stateNext_string = "start";
      mem : s_stateNext_string = "mem  ";
      pc : s_stateNext_string = "pc   ";
      default : s_stateNext_string = "?????";
    endcase
  end
  `endif

  assign u_vaild_0 = 1'b0;
  always @(*) begin
    u_vaild_1 = 1'b0;
    u_vaild_3 = 1'b0;
    step = 1'b0;
    s_wantStart = 1'b0;
    s_stateNext = s_stateReg;
    case(s_stateReg)
      start : begin
        s_stateNext = mem;
      end
      mem : begin
        if(_zz_when) begin
          u_vaild_3 = 1'b1;
          s_stateNext = pc;
        end
      end
      pc : begin
        u_vaild_1 = 1'b1;
        step = 1'b1;
        s_stateNext = start;
      end
      default : begin
        s_wantStart = 1'b1;
      end
    endcase
    if(s_wantStart) begin
      s_stateNext = start;
    end
    if(s_wantKill) begin
      s_stateNext = BOOT;
    end
  end

  assign u_vaild_2 = 1'b0;
  assign u_vaild_4 = 1'b0;
  assign s_wantExit = 1'b0;
  assign s_wantKill = 1'b0;
  assign s_onExit_BOOT = ((s_stateNext != BOOT) && (s_stateReg == BOOT));
  assign s_onExit_start = ((s_stateNext != start) && (s_stateReg == start));
  assign s_onExit_mem = ((s_stateNext != mem) && (s_stateReg == mem));
  assign s_onExit_pc = ((s_stateNext != pc) && (s_stateReg == pc));
  assign s_onEntry_BOOT = ((s_stateNext == BOOT) && (s_stateReg != BOOT));
  assign s_onEntry_start = ((s_stateNext == start) && (s_stateReg != start));
  assign s_onEntry_mem = ((s_stateNext == mem) && (s_stateReg != mem));
  assign s_onEntry_pc = ((s_stateNext == pc) && (s_stateReg != pc));
  assign _zz_clear = test;
  always @(posedge clk or negedge rst) begin
    if(!rst) begin
      test <= 1'b0;
      s_mem_cnt <= 4'b0000;
      s_stateReg <= BOOT;
    end else begin
      s_stateReg <= s_stateNext;
      case(s_stateReg)
        start : begin
        end
        mem : begin
          if(_zz_when) begin
            test <= 1'b1;
          end else begin
            s_mem_cnt <= (s_mem_cnt + 4'b0001);
          end
        end
        pc : begin
          test <= 1'b0;
        end
        default : begin
        end
      endcase
      if(s_onExit_mem) begin
        test <= 1'b1;
      end
      if(s_onEntry_mem) begin
        s_mem_cnt <= 4'b0000;
      end
    end
  end


endmodule
