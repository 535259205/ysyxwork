// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : my_ps2

`timescale 1ns/1ps 
module my_ps2 (
  input  wire [31:0]   apb_in_paddr,
  input  wire          apb_in_psel,
  input  wire          apb_in_penable,
  input  wire [2:0]    apb_in_pprot,
  input  wire          apb_in_pwrite,
  input  wire [31:0]   apb_in_pwdata,
  input  wire [3:0]    apb_in_pstrb,
  output reg           apb_in_pready,
  output reg  [31:0]   apb_in_prdata,
  output reg           apb_in_pslverr,
  input  wire          ps2_clk,
  input  wire          ps2_data,
  input  wire          clk,
  input  wire          reset
);

  wire                ps2_resetn;
  wire                fifo_io_push_valid;
  reg                 fifo_io_pop_ready;
  wire                ps2_ps2_get;
  wire       [7:0]    ps2_ps2_getdata;
  wire                fifo_io_push_ready;
  wire                fifo_io_pop_valid;
  wire       [7:0]    fifo_io_pop_payload;
  wire       [4:0]    fifo_io_occupancy;
  wire       [4:0]    fifo_io_availability;
  wire       [7:0]    ps2_data_1;
  reg                 ps2_get_regNext;
  wire                valid;
  wire                when_MYDevice_l281;
  wire                when_MYDevice_l286;

  ps2_keyboard ps2 (
    .clk         (clk                 ), //i
    .resetn      (ps2_resetn          ), //i
    .ps2_clk     (ps2_clk             ), //i
    .ps2_data    (ps2_data            ), //i
    .ps2_get     (ps2_ps2_get         ), //o
    .ps2_getdata (ps2_ps2_getdata[7:0])  //o
  );
  StreamFifo fifo (
    .io_push_valid   (fifo_io_push_valid       ), //i
    .io_push_ready   (fifo_io_push_ready       ), //o
    .io_push_payload (ps2_ps2_getdata[7:0]     ), //i
    .io_pop_valid    (fifo_io_pop_valid        ), //o
    .io_pop_ready    (fifo_io_pop_ready        ), //i
    .io_pop_payload  (fifo_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                     ), //i
    .io_occupancy    (fifo_io_occupancy[4:0]   ), //o
    .io_availability (fifo_io_availability[4:0]), //o
    .clk             (clk                      ), //i
    .reset           (reset                    )  //i
  );
  assign ps2_data_1 = 8'h0;
  assign ps2_resetn = (! reset);
  assign fifo_io_push_valid = (ps2_ps2_get && (! ps2_get_regNext));
  always @(*) begin
    fifo_io_pop_ready = 1'b0;
    if(when_MYDevice_l286) begin
      case(apb_in_paddr)
        32'h10011000 : begin
          fifo_io_pop_ready = 1'b1;
        end
        default : begin
        end
      endcase
    end
  end

  always @(*) begin
    apb_in_pready = 1'b0;
    if(when_MYDevice_l281) begin
      apb_in_pready = 1'b1;
    end
    if(when_MYDevice_l286) begin
      apb_in_pready = 1'b1;
      case(apb_in_paddr)
        32'h10011000 : begin
        end
        default : begin
          apb_in_pready = 1'b0;
        end
      endcase
    end
  end

  always @(*) begin
    apb_in_prdata = 32'h0;
    if(when_MYDevice_l286) begin
      case(apb_in_paddr)
        32'h10011000 : begin
          if(fifo_io_pop_valid) begin
            apb_in_prdata = {24'd0, fifo_io_pop_payload};
          end else begin
            apb_in_prdata = 32'h0;
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(*) begin
    apb_in_pslverr = 1'b0;
    if(when_MYDevice_l281) begin
      apb_in_pslverr = 1'b1;
    end
    if(when_MYDevice_l286) begin
      case(apb_in_paddr)
        32'h10011000 : begin
        end
        default : begin
          apb_in_pslverr = 1'b1;
        end
      endcase
    end
  end

  assign valid = (apb_in_penable && apb_in_psel);
  assign when_MYDevice_l281 = (valid && apb_in_pwrite);
  assign when_MYDevice_l286 = (valid && (! apb_in_pwrite));
  always @(posedge clk) begin
    ps2_get_regNext <= ps2_ps2_get;
  end


endmodule
