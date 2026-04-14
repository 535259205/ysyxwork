module ps2_keyboard(clk,resetn,ps2_clk,ps2_data,ps2_get,ps2_getdata);
    input clk,resetn,ps2_clk,ps2_data;
    output reg ps2_get;
    output reg [7:0]ps2_getdata;
    reg [9:0] buffer;        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
            ps2_get<=0;

        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    // $display("receive %x", buffer[8:1]);
                    ps2_get<=1;

                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
            else
            begin
            ps2_get<=0;
            end
        end
    end

    always@(posedge clk)begin
        if(resetn==0)begin
            ps2_getdata<=8'd0;
        end
        else if(^buffer[9:1])begin
            ps2_getdata<=buffer[8:1];
        end

    end

endmodule