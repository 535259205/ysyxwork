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


import "DPI-C" function int sdram_ctr(input int addr, input int data, input int write);


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

always@(posedge CMD_WRITE or posedge CMD_READ)
begin
  if(CMD_WRITE)
  begin
    dq_oen=0;
    sdram_ctr(a,dq,dqm);
  end
  else if(CMD_READ)
  begin
    dq_oen=1;
    dq_out=sdram_ctr(a,0,256);
  end
end

// always@(posedge clk or posedge cs) begin
//   if(cs)
//     read_flag<=0;
//   else if(CMD_READ)
//     read_flag<=1;
// end

// always@(posedge clk )begin
// if(CMD_WRITE)
//     write_flag<=1;
// end

endmodule
