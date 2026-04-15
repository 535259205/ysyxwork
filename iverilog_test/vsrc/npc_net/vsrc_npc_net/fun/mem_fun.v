
`timescale 1ns/1ps  // 这一行是关键，记录下这个尺度

module mem_fun(
  input         clk,
  input         rst,
  input         wen,
  input         [31:0] w_data,
  input         [31:0] w_addr,
  input         [1:0] w_len,

  output reg    [31:0] r_data,
  input                ren,
  input         [31:0] r_addr,
  input         [1:0] r_len
);

always@(posedge clk)
begin
    if(ren)
      r_data=$mem_ctr(32'd3,r_addr,0,r_len+1);
end
always@(posedge clk)
begin
    if(wen)
      $mem_ctr(32'd4,w_addr,w_data,w_len+1);
end 


// reg [31:0] mem [0:1024*1024*2-1]; // 1MB 内存

// initial begin
//     $readmemh("./hex/test.mem", mem);
// end

// wire [1:0] raddr_l = r_addr[1:0];
// wire [29:0]raddr_r = r_addr[30:2];
// wire [1:0] waddr_l = w_addr[1:0];
// wire [29:0]waddr_r = w_addr[30:2];
// wire [2:0] r_len_u = r_len+1;
// wire [2:0] w_len_u = w_len+1;
// reg [3:0] w_mask;
// always@(posedge clk)
// begin
//   if(ren)
//   begin
//     if(r_len_u==3'd1)
//     begin
//       r_data=(mem[raddr_r]>>(32'd8*(raddr_l)))&32'h000000FF;
//     end
//     else if(r_len_u==3'd2)
//     begin
//       r_data=(mem[raddr_r]>>(32'd8*(raddr_l)))&32'h0000FFFF;
//     end
//     else 
//     begin
//       r_data=mem[raddr_r];
//     end
//   end
// end 


// always@(*)
// begin
//   if(w_len_u==3'd1)
//     case(waddr_l)
//       2'd0:w_mask=4'b0001;
//       2'd1:w_mask=4'b0010;
//       2'd2:w_mask=4'b0100;
//       2'd3:w_mask=4'b1000;
//     endcase
//   else if(w_len_u==3'd2)
//     case(waddr_l)
//       2'd0:w_mask=4'b0011;
//       2'd1:w_mask=4'b0110;
//       2'd2:w_mask=4'b1100;
//       default:w_mask=4'b0011;
//     endcase
//   else 
//     w_mask=4'b1111;
// end

// always@(posedge clk)
// begin
//   if(wen)
//   begin
//     if(w_mask[0])
//       mem[waddr_r][7:0]=w_data[7:0];
//     if(w_mask[1])
//       mem[waddr_r][15:8]=w_data[15:8];
//     if(w_mask[2])
//       mem[waddr_r][23:16]=w_data[23:16];
//     if(w_mask[3])
//       mem[waddr_r][31:24]=w_data[31:24];
//   end
// end 


endmodule
