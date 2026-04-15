// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : PC

`timescale 1ns/1ps 
module PC (
  output wire [31:0]   com_encode_code,
  input  wire [31:0]   com_encode_nPC,
  input  wire          com_encode_nPC_vaild,
  output wire [31:0]   com_encode_PC,
  output wire          axi4lite_aw_valid,
  input  wire          axi4lite_aw_ready,
  output wire [31:0]   axi4lite_aw_payload_addr,
  output wire [2:0]    axi4lite_aw_payload_prot,
  output wire          axi4lite_w_valid,
  input  wire          axi4lite_w_ready,
  output wire [31:0]   axi4lite_w_payload_data,
  output wire [3:0]    axi4lite_w_payload_strb,
  input  wire          axi4lite_b_valid,
  output wire          axi4lite_b_ready,
  input  wire [1:0]    axi4lite_b_payload_resp,
  output reg           axi4lite_ar_valid,
  input  wire          axi4lite_ar_ready,
  output wire [31:0]   axi4lite_ar_payload_addr,
  output wire [2:0]    axi4lite_ar_payload_prot,
  input  wire          axi4lite_r_valid,
  output reg           axi4lite_r_ready,
  input  wire [31:0]   axi4lite_r_payload_data,
  input  wire [1:0]    axi4lite_r_payload_resp,
  input  wire          read_en,
  output reg           finish,
  input  wire          clock,
  input  wire          reset
);

  wire       [31:0]   debug_data_0;
  wire       [31:0]   debug_data_1;
  reg        [31:0]   PC_cnt;
  reg                 flag;
  reg                 npc_flag;
  wire                axi4lite_ar_fire;
  wire                when_MyCpu_l137;
  wire                when_MyCpu_l139;
  wire                axi4lite_r_fire;
  wire                when_MyCpu_l150;
  wire                when_MyCpu_l153;
  reg        [31:0]   code_reg;

  my_debug debug (
    .data_0 (debug_data_0[31:0]), //i
    .data_1 (debug_data_1[31:0]), //i
    .data_2 (code_reg[31:0]    ), //i
    .clock  (clock             )  //i
  );
  assign axi4lite_w_valid = 1'b0;
  assign axi4lite_w_payload_data = 32'b00000000000000000000000000000000;
  assign axi4lite_w_payload_strb = 4'b0000;
  assign axi4lite_aw_valid = 1'b0;
  assign axi4lite_aw_payload_addr = 32'b00000000000000000000000000000000;
  assign axi4lite_aw_payload_prot = 3'b000;
  assign axi4lite_b_ready = 1'b0;
  always @(*) begin
    finish = 1'b0;
    if(axi4lite_r_fire) begin
      finish = 1'b1;
    end
  end

  assign axi4lite_ar_fire = (axi4lite_ar_valid && axi4lite_ar_ready);
  assign when_MyCpu_l137 = (read_en && (! flag));
  assign when_MyCpu_l139 = (! read_en);
  assign axi4lite_r_fire = (axi4lite_r_valid && axi4lite_r_ready);
  assign axi4lite_ar_payload_addr = com_encode_PC;
  assign axi4lite_ar_payload_prot = 3'b100;
  assign com_encode_code = axi4lite_r_payload_data;
  assign when_MyCpu_l150 = (axi4lite_r_fire && read_en);
  assign when_MyCpu_l153 = (com_encode_nPC_vaild && (! npc_flag));
  assign com_encode_PC = PC_cnt;
  assign debug_data_0 = PC_cnt;
  assign debug_data_1 = (com_encode_nPC_vaild ? com_encode_nPC : PC_cnt);
  always @(posedge clock or posedge reset) begin
    if(reset) begin
      PC_cnt <= 32'h80000000;
      flag <= 1'b0;
      npc_flag <= 1'b0;
      code_reg <= 32'h0;
    end else begin
      if(!axi4lite_ar_fire) begin
        if(when_MyCpu_l137) begin
          flag <= 1'b1;
        end
      end
      if(when_MyCpu_l139) begin
        flag <= 1'b0;
        npc_flag <= 1'b0;
      end
      if(when_MyCpu_l150) begin
        PC_cnt <= (PC_cnt + 32'h00000004);
      end else begin
        if(when_MyCpu_l153) begin
          PC_cnt <= com_encode_nPC;
          npc_flag <= 1'b1;
        end
      end
      if(axi4lite_r_fire) begin
        code_reg <= com_encode_code;
      end
    end
  end

  always @(posedge clock) begin
    if(axi4lite_ar_fire) begin
      axi4lite_ar_valid <= 1'b0;
      axi4lite_r_ready <= 1'b1;
    end else begin
      if(when_MyCpu_l137) begin
        axi4lite_ar_valid <= 1'b1;
      end
    end
    if(axi4lite_r_fire) begin
      axi4lite_r_ready <= 1'b0;
    end
  end


endmodule
