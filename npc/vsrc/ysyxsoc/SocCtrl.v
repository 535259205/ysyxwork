// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : SocCtrl

`timescale 1ns/1ps 
module SocCtrl (
  output reg           u_vaild_0,
  output reg           u_vaild_1,
  output wire          u_vaild_2,
  output reg           u_vaild_3,
  output reg           u_vaild_4,
  input  wire          encode_ar_ready,
  input  wire          encode_ar_valid,
  input  wire          encode_r_ready,
  input  wire          encode_r_valid,
  input  wire          encode_r_fire,
  input  wire          encode_w_ready,
  input  wire          encode_w_valid,
  input  wire          encode_w_fire,
  input  wire          pc_finish,
  output wire          r_sel,
  input  wire          clock,
  input  wire          rst
);
  localparam s_1_BOOT = 3'd0;
  localparam s_1_IF_1 = 3'd1;
  localparam s_1_ID = 3'd2;
  localparam s_1_EX = 3'd3;
  localparam s_1_MEM = 3'd4;
  localparam s_1_WB = 3'd5;

  wire       [31:0]   debug_data_0;
  wire       [31:0]   debug_data_1;
  wire       [31:0]   debug_data_2;
  wire                _zz_when;
  reg                 step;
  reg        [31:0]   IFU_cnt;
  reg        [31:0]   LSU_cnt;
  reg        [31:0]   EXU_cnt;
  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg                 s_grp_flag;
  reg        [2:0]    s_stateReg;
  reg        [2:0]    s_stateNext;
  wire                s_onExit_BOOT;
  wire                s_onExit_IF_1;
  wire                s_onExit_ID;
  wire                s_onExit_EX;
  wire                s_onExit_MEM;
  wire                s_onExit_WB;
  wire                s_onEntry_BOOT;
  wire                s_onEntry_IF_1;
  wire                s_onEntry_ID;
  wire                s_onEntry_EX;
  wire                s_onEntry_MEM;
  wire                s_onEntry_WB;
  `ifndef SYNTHESIS
  reg [31:0] s_stateReg_string;
  reg [31:0] s_stateNext_string;
  `endif


  assign _zz_when = (encode_w_fire || encode_r_fire);
  step_fun step_fun_1 (
    .step (step)  //i
  );
  my_debug_3 debug (
    .data_0 (debug_data_0[31:0]), //i
    .data_1 (debug_data_1[31:0]), //i
    .data_2 (debug_data_2[31:0]), //i
    .clock  (clock             )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(s_stateReg)
      s_1_BOOT : s_stateReg_string = "BOOT";
      s_1_IF_1 : s_stateReg_string = "IF_1";
      s_1_ID : s_stateReg_string = "ID  ";
      s_1_EX : s_stateReg_string = "EX  ";
      s_1_MEM : s_stateReg_string = "MEM ";
      s_1_WB : s_stateReg_string = "WB  ";
      default : s_stateReg_string = "????";
    endcase
  end
  always @(*) begin
    case(s_stateNext)
      s_1_BOOT : s_stateNext_string = "BOOT";
      s_1_IF_1 : s_stateNext_string = "IF_1";
      s_1_ID : s_stateNext_string = "ID  ";
      s_1_EX : s_stateNext_string = "EX  ";
      s_1_MEM : s_stateNext_string = "MEM ";
      s_1_WB : s_stateNext_string = "WB  ";
      default : s_stateNext_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    u_vaild_0 = 1'b0;
    case(s_stateReg)
      s_1_IF_1 : begin
        u_vaild_0 = 1'b1;
      end
      s_1_ID : begin
      end
      s_1_EX : begin
      end
      s_1_MEM : begin
      end
      s_1_WB : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    u_vaild_1 = 1'b0;
    if(s_onEntry_ID) begin
      u_vaild_1 = 1'b1;
    end
  end

  assign u_vaild_2 = 1'b0;
  always @(*) begin
    u_vaild_3 = 1'b0;
    if(s_onEntry_EX) begin
      u_vaild_3 = 1'b1;
    end
  end

  always @(*) begin
    u_vaild_4 = 1'b0;
    case(s_stateReg)
      s_1_IF_1 : begin
      end
      s_1_ID : begin
      end
      s_1_EX : begin
      end
      s_1_MEM : begin
      end
      s_1_WB : begin
        u_vaild_4 = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    step = 1'b0;
    if(s_onExit_WB) begin
      step = 1'b1;
    end
  end

  assign r_sel = 1'b0;
  assign debug_data_0 = IFU_cnt;
  assign debug_data_1 = LSU_cnt;
  assign debug_data_2 = EXU_cnt;
  assign s_wantExit = 1'b0;
  always @(*) begin
    s_wantStart = 1'b0;
    case(s_stateReg)
      s_1_IF_1 : begin
      end
      s_1_ID : begin
      end
      s_1_EX : begin
      end
      s_1_MEM : begin
      end
      s_1_WB : begin
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
      s_1_IF_1 : begin
        if(pc_finish) begin
          s_stateNext = s_1_ID;
        end
      end
      s_1_ID : begin
        s_stateNext = s_1_EX;
      end
      s_1_EX : begin
        if((encode_w_fire || encode_r_fire)) begin
          s_stateNext = s_1_WB;
        end else begin
          if(((encode_r_ready || encode_w_valid) || encode_ar_valid)) begin
            s_stateNext = s_1_MEM;
          end else begin
            s_stateNext = s_1_WB;
          end
        end
      end
      s_1_MEM : begin
        if(_zz_when) begin
          s_stateNext = s_1_WB;
        end
      end
      s_1_WB : begin
        s_stateNext = s_1_IF_1;
      end
      default : begin
      end
    endcase
    if(s_wantStart) begin
      s_stateNext = s_1_IF_1;
    end
    if(s_wantKill) begin
      s_stateNext = s_1_BOOT;
    end
  end

  assign s_onExit_BOOT = ((s_stateNext != s_1_BOOT) && (s_stateReg == s_1_BOOT));
  assign s_onExit_IF_1 = ((s_stateNext != s_1_IF_1) && (s_stateReg == s_1_IF_1));
  assign s_onExit_ID = ((s_stateNext != s_1_ID) && (s_stateReg == s_1_ID));
  assign s_onExit_EX = ((s_stateNext != s_1_EX) && (s_stateReg == s_1_EX));
  assign s_onExit_MEM = ((s_stateNext != s_1_MEM) && (s_stateReg == s_1_MEM));
  assign s_onExit_WB = ((s_stateNext != s_1_WB) && (s_stateReg == s_1_WB));
  assign s_onEntry_BOOT = ((s_stateNext == s_1_BOOT) && (s_stateReg != s_1_BOOT));
  assign s_onEntry_IF_1 = ((s_stateNext == s_1_IF_1) && (s_stateReg != s_1_IF_1));
  assign s_onEntry_ID = ((s_stateNext == s_1_ID) && (s_stateReg != s_1_ID));
  assign s_onEntry_EX = ((s_stateNext == s_1_EX) && (s_stateReg != s_1_EX));
  assign s_onEntry_MEM = ((s_stateNext == s_1_MEM) && (s_stateReg != s_1_MEM));
  assign s_onEntry_WB = ((s_stateNext == s_1_WB) && (s_stateReg != s_1_WB));
  always @(posedge clock) begin
    if(rst) begin
      IFU_cnt <= 32'h0;
      LSU_cnt <= 32'h0;
      EXU_cnt <= 32'h0;
      s_grp_flag <= 1'b0;
      s_stateReg <= s_1_BOOT;
    end else begin
      s_stateReg <= s_stateNext;
      case(s_stateReg)
        s_1_IF_1 : begin
          IFU_cnt <= (IFU_cnt + 32'h00000001);
        end
        s_1_ID : begin
        end
        s_1_EX : begin
          EXU_cnt <= (EXU_cnt + 32'h00000001);
        end
        s_1_MEM : begin
          LSU_cnt <= (LSU_cnt + 32'h00000001);
          if(_zz_when) begin
            s_grp_flag <= 1'b1;
          end
        end
        s_1_WB : begin
        end
        default : begin
        end
      endcase
    end
  end


endmodule
