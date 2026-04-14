module psram(
  input sck,
  input ce_n,
  inout [3:0] dio 
);

`ifndef USE_IVERILOG
import "DPI-C" function int psram_ctr(input int addr, input int data, input int write);
`endif
//写操作没有延迟
//读操作有6个时钟周期的延迟
localparam W_CMD = 8'h38;
localparam R_CMD = 8'hEB;
localparam EN_QPI = 8'h11;
localparam DIS_QPI = 8'h22;

reg out_en;
reg [3:0]out_data;
reg [7:0]cmd_data;
reg [7:0]cnt;
reg [23:0]addr_z;
reg [31:0]w_data;
reg [31:0]r_data;


wire start_flag;
assign start_flag=ce_n;
assign dio = out_en?out_data:4'bz;
// assign dio = 4'bz;


initial
begin
out_en=0;
out_data=0;
cmd_data=0;
cnt=0;
addr_z=0;
w_data=0;
r_data=0;
end

//传输计数器
always@(posedge sck or posedge ce_n)
begin
  if(start_flag)
    cnt<=8'd0;
  else
    cnt<=cnt+8'd1;
end
//获取命令
always@(posedge sck or posedge ce_n)
begin
  if(ce_n)
    cmd_data<=8'd0;
  else if(cnt<8'd8)
    cmd_data[7-cnt]<=dio[0];
end 
//获取目标地址
always@(posedge sck or posedge ce_n)
begin
  if(start_flag)
    addr_z<=8'd0;
  else if(cnt>=8'd8 && cnt<8'd14)
    addr_z<={addr_z[19:0],dio};
end
//控制输出使能
always@(posedge sck or posedge ce_n)
begin
  if(start_flag)
    out_en<=0;
  else if(cnt==8'd14)
  begin
    if(cmd_data==R_CMD)
      out_en<=1;
    else
      out_en<=0;
  end
end
//读取要输出的数据
always@(negedge sck)
begin
  if(cnt==8'd15 && out_en)
  begin
  `ifndef USE_IVERILOG
    r_data<=psram_ctr(addr_z,0,0);
  `else
    r_data<=$mem_ctr(32'd2,addr_z,0,0);
  `endif
  end 

  // else if(cnt>=8'd20 && out_en)
    // r_data<=r_data>>4;
end
wire [31:0]end_wdata;
assign end_wdata={w_data[27:24],w_data[31:28],w_data[19:16],w_data[23:20],w_data[11:8],w_data[15:12],w_data[3:0],w_data[7:4]};

wire [31:0]end_rdata;
assign end_rdata={r_data[27:24],r_data[31:28],r_data[19:16],r_data[23:20],r_data[11:8],r_data[15:12],r_data[3:0],r_data[7:4]};


//写数据
always@(posedge ce_n)
begin
  if(!out_en)
  `ifndef USE_IVERILOG
    psram_ctr(addr_z,end_wdata,cnt);
  `else
    $mem_ctr(32'd2,addr_z,end_wdata,cnt);
  `endif
end
//读数据
always@(negedge sck)
begin
  if(cnt>=8'd20 && out_en)
  case(cnt)
    8'd20:    out_data<=end_rdata[3:0];
    8'd21:    out_data<=end_rdata[7:4];
    8'd22:    out_data<=end_rdata[11:8];
    8'd23:    out_data<=end_rdata[15:12];
    8'd24:    out_data<=end_rdata[19:16];
    8'd25:    out_data<=end_rdata[23:20];
    8'd26:    out_data<=end_rdata[27:24];
    8'd27:    out_data<=end_rdata[31:28];

  endcase
end

always@(posedge sck)
begin
  if(cnt>=8'd14 && !out_en)
    w_data<={dio,w_data[31:4]};
end


endmodule
