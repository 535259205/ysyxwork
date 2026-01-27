// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : PC

`timescale 1ns/1ps 
module PC (
  output wire [31:0]   com_encode_code,
  input  wire [31:0]   com_encode_nPC,
  input  wire          com_encode_nPC_vaild,
  output wire [31:0]   com_encode_PC,
  output wire          axi4lite_ar_valid,
  input  wire          axi4lite_ar_ready,
  output wire [31:0]   axi4lite_ar_payload_addr,
  output wire [2:0]    axi4lite_ar_payload_prot,
  input  wire          axi4lite_r_valid,
  output wire          axi4lite_r_ready,
  input  wire [31:0]   axi4lite_r_payload_data,
  input  wire [1:0]    axi4lite_r_payload_resp,
  input  wire          clk,
  input  wire          rst,
  input  wire          pc_newClockEnable
);

  wire       [31:0]   debug_data_0;
  wire       [31:0]   debug_data_1;
  reg        [31:0]   PC_cnt;

  my_debug debug (
    .data_0 (debug_data_0[31:0]   ), //i
    .data_1 (debug_data_1[31:0]   ), //i
    .data_2 (com_encode_code[31:0]), //i
    .clk    (clk                  )  //i
  );
  assign com_encode_PC = PC_cnt;
  assign axi4lite_ar_valid = 1'b1;
  assign axi4lite_r_ready = 1'b1;
  assign axi4lite_ar_payload_addr = com_encode_PC;
  assign axi4lite_ar_payload_prot = 3'b000;
  assign com_encode_code = axi4lite_r_payload_data;
  assign debug_data_0 = PC_cnt;
  assign debug_data_1 = (com_encode_nPC_vaild ? com_encode_nPC : PC_cnt);
  always @(posedge clk or negedge rst) begin
    if(!rst) begin
      PC_cnt <= 32'h80000000;
    end else begin
      if(pc_newClockEnable) begin
        if(com_encode_nPC_vaild) begin
          PC_cnt <= com_encode_nPC;
        end else begin
          PC_cnt <= (PC_cnt + 32'h00000004);
        end
      end
    end
  end


endmodule
