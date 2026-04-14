// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AllCtrl

`timescale 1ns/1ps 
module AllCtrl (
  output reg           u_vaild_0,
  output reg           u_vaild_1,
  output wire          u_vaild_2,
  output wire          u_vaild_3,
  output reg           u_vaild_4,
  input  wire          axi0_ar_ready,
  input  wire          axi0_ar_vaild,
  input  wire          axi0_r_vaild,
  input  wire          axi0_r_ready,
  input  wire          axi0_w_vaild,
  input  wire          axi0_w_ready,
  input  wire          axi_ar_ready,
  input  wire          axi_ar_vaild,
  input  wire          axi_r_vaild,
  input  wire          axi_r_ready,
  input  wire          axi_w_vaild,
  input  wire          axi_w_ready,
  output reg           r_sel,
  input  wire          clock,
  input  wire          reset
);
  localparam s_BOOT = 3'd0;
  localparam s_IF_1 = 3'd1;
  localparam s_ID = 3'd2;
  localparam s_EX = 3'd3;
  localparam s_MEM = 3'd4;
  localparam s_WB = 3'd5;

  reg                 step;
  wire                s_wantExit;
  reg                 s_wantStart;
  wire                s_wantKill;
  reg        [2:0]    s_stateReg;
  reg        [2:0]    s_stateNext;
  wire                when_MyCpu_l763;
  wire                when_MyCpu_l779;
  wire                when_MyCpu_l782;
  reg                 _zz_when_MyCpu_l792;
  wire                when_MyCpu_l792;
  wire                when_MyCpu_l795;
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


  step_fun step_fun_1 (
    .step (step ), //i
    .clk  (clock)  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(s_stateReg)
      s_BOOT : s_stateReg_string = "BOOT";
      s_IF_1 : s_stateReg_string = "IF_1";
      s_ID : s_stateReg_string = "ID  ";
      s_EX : s_stateReg_string = "EX  ";
      s_MEM : s_stateReg_string = "MEM ";
      s_WB : s_stateReg_string = "WB  ";
      default : s_stateReg_string = "????";
    endcase
  end
  always @(*) begin
    case(s_stateNext)
      s_BOOT : s_stateNext_string = "BOOT";
      s_IF_1 : s_stateNext_string = "IF_1";
      s_ID : s_stateNext_string = "ID  ";
      s_EX : s_stateNext_string = "EX  ";
      s_MEM : s_stateNext_string = "MEM ";
      s_WB : s_stateNext_string = "WB  ";
      default : s_stateNext_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    u_vaild_0 = 1'b0;
    case(s_stateReg)
      s_IF_1 : begin
        u_vaild_0 = 1'b1;
      end
      s_ID : begin
      end
      s_EX : begin
      end
      s_MEM : begin
      end
      s_WB : begin
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
  assign u_vaild_3 = 1'b0;
  always @(*) begin
    u_vaild_4 = 1'b0;
    if(s_onEntry_WB) begin
      u_vaild_4 = 1'b1;
    end
  end

  always @(*) begin
    r_sel = 1'b0;
    case(s_stateReg)
      s_IF_1 : begin
      end
      s_ID : begin
      end
      s_EX : begin
      end
      s_MEM : begin
        if(when_MyCpu_l795) begin
          r_sel = 1'b1;
        end
      end
      s_WB : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    step = 1'b0;
    if(s_onEntry_ID) begin
      step = 1'b1;
    end
  end

  assign s_wantExit = 1'b0;
  always @(*) begin
    s_wantStart = 1'b0;
    case(s_stateReg)
      s_IF_1 : begin
      end
      s_ID : begin
      end
      s_EX : begin
      end
      s_MEM : begin
      end
      s_WB : begin
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
      s_IF_1 : begin
        if(when_MyCpu_l763) begin
          s_stateNext = s_ID;
        end
      end
      s_ID : begin
        s_stateNext = s_EX;
      end
      s_EX : begin
        if(when_MyCpu_l779) begin
          s_stateNext = s_WB;
        end else begin
          if(when_MyCpu_l782) begin
            s_stateNext = s_MEM;
          end else begin
            s_stateNext = s_WB;
          end
        end
      end
      s_MEM : begin
        if(when_MyCpu_l792) begin
          s_stateNext = s_WB;
        end
      end
      s_WB : begin
        s_stateNext = s_IF_1;
      end
      default : begin
      end
    endcase
    if(s_wantStart) begin
      s_stateNext = s_IF_1;
    end
    if(s_wantKill) begin
      s_stateNext = s_BOOT;
    end
  end

  assign when_MyCpu_l763 = (axi0_r_ready && axi0_r_vaild);
  assign when_MyCpu_l779 = (axi_w_ready && axi_w_vaild);
  assign when_MyCpu_l782 = (axi_ar_vaild || axi_w_vaild);
  assign when_MyCpu_l792 = ((axi_w_ready && axi_w_vaild) || _zz_when_MyCpu_l792);
  assign when_MyCpu_l795 = (axi_ar_vaild || axi_r_ready);
  assign s_onExit_BOOT = ((s_stateNext != s_BOOT) && (s_stateReg == s_BOOT));
  assign s_onExit_IF_1 = ((s_stateNext != s_IF_1) && (s_stateReg == s_IF_1));
  assign s_onExit_ID = ((s_stateNext != s_ID) && (s_stateReg == s_ID));
  assign s_onExit_EX = ((s_stateNext != s_EX) && (s_stateReg == s_EX));
  assign s_onExit_MEM = ((s_stateNext != s_MEM) && (s_stateReg == s_MEM));
  assign s_onExit_WB = ((s_stateNext != s_WB) && (s_stateReg == s_WB));
  assign s_onEntry_BOOT = ((s_stateNext == s_BOOT) && (s_stateReg != s_BOOT));
  assign s_onEntry_IF_1 = ((s_stateNext == s_IF_1) && (s_stateReg != s_IF_1));
  assign s_onEntry_ID = ((s_stateNext == s_ID) && (s_stateReg != s_ID));
  assign s_onEntry_EX = ((s_stateNext == s_EX) && (s_stateReg != s_EX));
  assign s_onEntry_MEM = ((s_stateNext == s_MEM) && (s_stateReg != s_MEM));
  assign s_onEntry_WB = ((s_stateNext == s_WB) && (s_stateReg != s_WB));
  always @(posedge clock or posedge reset) begin
    if(reset) begin
      s_stateReg <= s_BOOT;
    end else begin
      s_stateReg <= s_stateNext;
    end
  end

  always @(posedge clock) begin
    _zz_when_MyCpu_l792 <= (axi_r_ready && axi_r_vaild);
  end


endmodule
