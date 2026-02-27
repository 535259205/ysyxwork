module psram(
  input sck,
  input ce_n,   //有效信号低电平有效
  inout [3:0] dio 
);

import "DPI-C" function int psram_ctr(input int addr, input int data, input int write);

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
assign start_flag=!sck && !ce_n;
assign dio = out_en?out_data:4'bz;
// assign dio = 4'bz;

//传输计数器
always@(posedge sck or negedge ce_n)
begin
  if(start_flag)
    cnt<=8'd0;
  else
    cnt<=cnt+8'd1;
end
//获取命令
always@(posedge sck or negedge ce_n)
begin
  if(start_flag)
    cmd_data<=8'd0;
  else if(cnt<8'd8)
    cmd_data[7-cnt]<=dio[0];
end 
//获取目标地址
always@(posedge sck or negedge ce_n)
begin
  if(start_flag)
    addr_z<=8'd0;
  else if(cnt>=8'd8 && cnt<8'd14)
    addr_z<={addr_z[19:0],dio};
end
//控制输出使能
always@(posedge sck or negedge ce_n)
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
    r_data<=psram_ctr(addr_z,0,0);
  else if(cnt>=8'd21 && out_en)
    r_data<=r_data<<4;
end
//写数据
always@(posedge ce_n)
begin
  if(!out_en)
    psram_ctr(addr_z,w_data,cnt);
end

always@(posedge sck)
begin
  if(cnt>=8'd20 && out_en)
    out_data<=r_data[31:28];
end

always@(posedge sck)
begin
  if(cnt>=8'd14 && !out_en)
    w_data<={w_data[27:0],dio};
end

endmodule
