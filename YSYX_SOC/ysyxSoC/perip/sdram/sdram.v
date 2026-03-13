module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 3:0] dqm,
  inout [31:0] dq
);


import "DPI-C" function int sdram_ctr(input int addr, input int data, input int write);


reg [31:0]dq_out;
reg dq_oen;
reg read_flag;
reg write_flag;

reg [12:0] active_row;  // 当前激活的行地址
reg [1:0] active_bank;  // 当前激活的 bank

reg [2:0]CAS_latch;
reg [2:0]BURST_length;

wire [3:0]cmd;
wire CMD_NOP;
wire CMD_ACTIVE;
wire CMD_READ;
wire CMD_WRITE;
wire CMD_BURST_STOP;
wire CMD_PRECHARGE;
wire CMD_AUTO_REFRESH;
wire CMD_LOAD_MODE_REGISTER;

assign cmd={cs,ras,cas,we};
assign CMD_NOP=(cmd==4'b0111);
assign CMD_ACTIVE=(cmd==4'b0011);
assign CMD_READ=(cmd==4'b0101);
assign CMD_WRITE=(cmd==4'b0100);
assign CMD_BURST_STOP=(cmd==4'b0110);
assign CMD_PRECHARGE=(cmd==4'b0010);
assign CMD_AUTO_REFRESH=(cmd==4'b0001);
assign CMD_LOAD_MODE_REGISTER=(cmd==4'b0000);

assign dq = dq_oen?dq_out:32'bz;
// assign dq =16'bz;

// Mode: Burst Length = 4 bytes, CAS=2
always @(posedge clk) begin
  if(CMD_LOAD_MODE_REGISTER)
  begin
    CAS_latch<=a[6:4];
    BURST_length<=a[2:0];
  end
  
end

always @(posedge CMD_ACTIVE) begin

  if(CMD_ACTIVE) begin
    active_row <= a;
    active_bank <= ba;
  end
  // else if(!CMD_READ)begin
  //   active_row <= 0;
  //   active_bank <= 0;
  // end
  // else if(!CMD_WRITE)begin
  //   active_row <= 0;
  //   active_bank <= 0;
  // end
end

wire [31:0] full_addr = {active_row,active_bank,a[9:0]} ;

always@(posedge CMD_WRITE or posedge CMD_READ)
begin
  if(CMD_WRITE)
  begin
    dq_oen=0;
  end
  else if(CMD_READ)
  begin
    dq_oen=1;
    // 构建完整地址: bank[31:30] + row[29:17] + column[16:2] (忽略低2位，因为32位数据)
    dq_out=sdram_ctr(full_addr,0,32'h80000000+dqm);
    // $display("SDRAM READ: bank=%d, row=0x%04X, col=0x%04X, full_addr=0x%08X, dqm=0x%02X", 
            //  active_bank, active_row, a, full_addr, dqm);
  end
end
always@(negedge clk)
begin
  if(CMD_WRITE)
  begin
    // 构建完整地址: bank[31:30] + row[29:17] + column[16:2] (忽略低2位，因为32位数据)
    sdram_ctr(full_addr,dq,dqm);
    // $display("SDRAM WRITE: bank=%d, row=0x%04X, col=0x%04X, full_addr=0x%08X, data=0x%08X, dqm=0x%02X", 
            //  active_bank, active_row, a, full_addr, dq, dqm);
  end
end

endmodule