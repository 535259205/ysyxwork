module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  // output reg miso,
  output miso,
  input reset
);
assign miso=1;
//   reg [7:0] cnt;
//   reg [7:0] data;
//   reg [7:0] sdata;
//   reg flag;


//   always @(negedge ss or negedge sck or posedge reset) begin
//     if(reset)
//     begin
//       cnt<=8'd0;
//       flag<=1'b0;
//     end
//     else
//     begin
//       if((!ss) & (!flag))
//       begin
//         flag<=1'b1;
//         cnt<=8'd0;
//       end
//       else
//       begin
//         cnt<=cnt+8'd1;
//       end 
//     end
//   end
// always@(negedge sck)begin
//   data[8'd7-cnt[2:0]]<=mosi;
// end
// always@(posedge sck)begin
//   miso<=data[8'd7-cnt[2:0]];
// end

// integer      i ;
// always@(posedge ss)begin
//   for(i=0;i<=7;i=i+1)
//   begin
//     sdata[i]<=data[7-i];
//   end
// end

endmodule
