
module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);
`ifndef SYNTHESIS

`ifndef USE_IVERILOG
import "DPI-C" function int sdram_ctr(input int addr, input int data, input int write);
`endif

reg [15:0]dq_out;
reg dq_oen;
reg read_flag;
reg write_flag;



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

assign dq = dq_oen?dq_out:16'bz;
// assign dq =16'bz;

// Mode: Burst Length = 4 bytes, CAS=2
always @(posedge clk) begin
  if(CMD_LOAD_MODE_REGISTER)
  begin
    CAS_latch<=a[6:4];
    BURST_length<=a[2:0];
  end
  
end
reg [12:0] active_row[3:0];  // 当前激活的行地址
reg [1:0] active_bank[3:0];  // 当前激活的 bank
wire [31:0] full_addr = {active_row[ba],active_bank[ba],a[8:0],1'b0} ;

always @(posedge CMD_ACTIVE) begin

  if(CMD_ACTIVE) begin
    active_row[ba] <= a;
    active_bank[ba] <= ba;
  end
end



reg [3:0]cmd_write_q;
reg [3:0]cmd_read_q;
reg [3:0]dqm_q;
reg [31:0]wdata;
reg [31:0]rdata;
always@(posedge clk)
begin
  cmd_write_q<={cmd_write_q[2:0],CMD_WRITE};
  cmd_read_q<={cmd_read_q[2:0],CMD_READ};
end

always@(posedge clk)
begin
  if(CMD_ACTIVE)
  begin
    wdata<=32'd0;
    dqm_q<=4'hf;
  end
  else if(cmd_write_q[0])
  begin
    wdata[31:16]<=dq;
    `ifndef USE_IVERILOG
    sdram_ctr(full_addr,{dq,wdata[15:0]},{dqm,dqm_q[1:0]});
    `else
    $mem_ctr(32'd1,full_addr,{dq,wdata[15:0]},{dqm,dqm_q[1:0]});
    `endif
  end
  else if(CMD_WRITE)
  begin
    wdata[15:0]<=dq;
    dqm_q[1:0]<=dqm;
  end
end 


always@(posedge clk)
begin
  if(cmd_read_q[1])
    dq_out<=rdata[31:16];
  else if(cmd_read_q[0])
    dq_out<=rdata[15:0];
end 

always@(posedge clk or posedge CMD_WRITE)
begin
  if(CMD_WRITE)
  begin
    dq_oen<=0;
  end
  else if(CMD_READ)
  begin
    dq_oen<=1;
    `ifndef USE_IVERILOG
    rdata<=sdram_ctr(full_addr,0,32'h80000000+dqm);
    `else
    rdata<=$mem_ctr(32'd1,full_addr,0,32'h80000000+dqm);
    `endif
  end
end

`endif

endmodule
