// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : PC

`timescale 1ns/1ps 
module PC (
  input  wire          flush,
  output wire [31:0]   com_encode_code,
  input  wire [31:0]   com_encode_nPC,
  input  wire          com_encode_nPC_vaild,
  output wire [31:0]   com_encode_PC,
  input  wire          clk,
  input  wire          rst
);

  wire       [31:0]   rom_addr;
  wire       [31:0]   rom_code;
  reg        [31:0]   PC_cnt;
  reg        [31:0]   cnt_temp;
always@(posedge clk or negedge rst)
begin
  if(!rst)
    cnt_temp<=32'd0;
  else
    cnt_temp<=cnt_temp+1;
end

  rom_fun rom (
    .addr (rom_addr[31:0]), //i
    .code (rom_code[31:0])  //o
  );
  assign rom_addr = PC_cnt;
  assign com_encode_code = rom_code;
  assign com_encode_PC = PC_cnt;
  always @(posedge clk or negedge rst) begin
    if(!rst) begin
      PC_cnt <= 32'h80000000;
    end else begin
      if(com_encode_nPC_vaild) begin
        PC_cnt <= com_encode_nPC;
      end else begin
        PC_cnt <= (PC_cnt + 32'h00000004);
      end
    end
  end


endmodule
