// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIUart

`timescale 1ns/1ps 
module AXIUart (
  input  wire          AxiIn_aw_valid,
  output wire          AxiIn_aw_ready,
  input  wire [31:0]   AxiIn_aw_payload_addr,
  input  wire [2:0]    AxiIn_aw_payload_prot,
  input  wire          AxiIn_w_valid,
  output wire          AxiIn_w_ready,
  input  wire [31:0]   AxiIn_w_payload_data,
  input  wire [3:0]    AxiIn_w_payload_strb,
  output wire          AxiIn_b_valid,
  input  wire          AxiIn_b_ready,
  output wire [1:0]    AxiIn_b_payload_resp,
  input  wire          AxiIn_ar_valid,
  output wire          AxiIn_ar_ready,
  input  wire [31:0]   AxiIn_ar_payload_addr,
  input  wire [2:0]    AxiIn_ar_payload_prot,
  output wire          AxiIn_r_valid,
  input  wire          AxiIn_r_ready,
  output wire [31:0]   AxiIn_r_payload_data,
  output wire [1:0]    AxiIn_r_payload_resp,
  input  wire          clock,
  input  wire          reset
);

  wire       [31:0]   mmio_w_addr;
  reg        [1:0]    mmio_w_len;
  wire       [31:0]   mmio_r_addr;
  wire       [31:0]   mmio_r_data;
  wire                slaveFactory_readErrorFlag;
  wire                slaveFactory_writeErrorFlag;
  wire                slaveFactory_readHaltRequest;
  wire                slaveFactory_writeHaltRequest;
  wire                slaveFactory_writeJoinEvent_valid;
  wire                slaveFactory_writeJoinEvent_ready;
  wire                slaveFactory_writeOccur;
  reg        [1:0]    slaveFactory_writeRsp_resp;
  wire                slaveFactory_writeJoinEvent_translated_valid;
  wire                slaveFactory_writeJoinEvent_translated_ready;
  wire       [1:0]    slaveFactory_writeJoinEvent_translated_payload_resp;
  wire                _zz_slaveFactory_writeJoinEvent_translated_ready;
  wire                slaveFactory_writeJoinEvent_translated_haltWhen_valid;
  wire                slaveFactory_writeJoinEvent_translated_haltWhen_ready;
  wire       [1:0]    slaveFactory_writeJoinEvent_translated_haltWhen_payload_resp;
  wire                slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_valid;
  wire                slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_ready;
  wire       [1:0]    slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_payload_resp;
  reg                 slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
  wire                slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire;
  reg        [1:0]    slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp;
  wire                slaveFactory_readDataStage_valid;
  wire                slaveFactory_readDataStage_ready;
  wire       [31:0]   slaveFactory_readDataStage_payload_addr;
  wire       [2:0]    slaveFactory_readDataStage_payload_prot;
  reg                 AxiIn_ar_rValid;
  wire                slaveFactory_readDataStage_fire;
  reg        [31:0]   AxiIn_ar_rData_addr;
  reg        [2:0]    AxiIn_ar_rData_prot;
  reg        [31:0]   slaveFactory_readRsp_data;
  reg        [1:0]    slaveFactory_readRsp_resp;
  wire                _zz_slaveFactory_readDataStage_ready;
  wire                slaveFactory_readDataStage_haltWhen_valid;
  wire                slaveFactory_readDataStage_haltWhen_ready;
  wire       [31:0]   slaveFactory_readDataStage_haltWhen_payload_addr;
  wire       [2:0]    slaveFactory_readDataStage_haltWhen_payload_prot;
  wire                slaveFactory_readDataStage_haltWhen_translated_valid;
  wire                slaveFactory_readDataStage_haltWhen_translated_ready;
  wire       [31:0]   slaveFactory_readDataStage_haltWhen_translated_payload_data;
  wire       [1:0]    slaveFactory_readDataStage_haltWhen_translated_payload_resp;
  wire       [31:0]   slaveFactory_readAddressMasked;
  wire       [31:0]   slaveFactory_writeAddressMasked;
  wire                slaveFactory_readOccur;
  reg        [31:0]   uart_reg;
  wire                AxiIn_w_fire;
  wire                AxiIn_ar_fire;

  mmio_fun mmio (
    .clk    (clock                     ), //i
    .rst    (reset                     ), //i
    .wen    (AxiIn_w_fire              ), //i
    .w_data (AxiIn_w_payload_data[31:0]), //i
    .w_addr (mmio_w_addr[31:0]         ), //i
    .w_len  (mmio_w_len[1:0]           ), //i
    .ren    (AxiIn_ar_fire             ), //i
    .r_data (mmio_r_data[31:0]         ), //o
    .r_addr (mmio_r_addr[31:0]         ), //i
    .r_len  (2'b11                     )  //i
  );
  assign slaveFactory_readErrorFlag = 1'b0;
  assign slaveFactory_writeErrorFlag = 1'b0;
  assign slaveFactory_readHaltRequest = 1'b0;
  assign slaveFactory_writeHaltRequest = 1'b0;
  assign slaveFactory_writeOccur = (slaveFactory_writeJoinEvent_valid && slaveFactory_writeJoinEvent_ready);
  assign slaveFactory_writeJoinEvent_valid = (AxiIn_aw_valid && AxiIn_w_valid);
  assign AxiIn_aw_ready = slaveFactory_writeOccur;
  assign AxiIn_w_ready = slaveFactory_writeOccur;
  assign slaveFactory_writeJoinEvent_translated_valid = slaveFactory_writeJoinEvent_valid;
  assign slaveFactory_writeJoinEvent_ready = slaveFactory_writeJoinEvent_translated_ready;
  assign slaveFactory_writeJoinEvent_translated_payload_resp = slaveFactory_writeRsp_resp;
  assign _zz_slaveFactory_writeJoinEvent_translated_ready = (! slaveFactory_writeHaltRequest);
  assign slaveFactory_writeJoinEvent_translated_haltWhen_valid = (slaveFactory_writeJoinEvent_translated_valid && _zz_slaveFactory_writeJoinEvent_translated_ready);
  assign slaveFactory_writeJoinEvent_translated_ready = (slaveFactory_writeJoinEvent_translated_haltWhen_ready && _zz_slaveFactory_writeJoinEvent_translated_ready);
  assign slaveFactory_writeJoinEvent_translated_haltWhen_payload_resp = slaveFactory_writeJoinEvent_translated_payload_resp;
  assign slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire = (slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_valid && slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_ready);
  assign slaveFactory_writeJoinEvent_translated_haltWhen_ready = (! slaveFactory_writeJoinEvent_translated_haltWhen_rValid);
  assign slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_valid = slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
  assign slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_payload_resp = slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp;
  assign AxiIn_b_valid = slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_valid;
  assign slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_ready = AxiIn_b_ready;
  assign AxiIn_b_payload_resp = slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_payload_resp;
  assign slaveFactory_readDataStage_fire = (slaveFactory_readDataStage_valid && slaveFactory_readDataStage_ready);
  assign AxiIn_ar_ready = (! AxiIn_ar_rValid);
  assign slaveFactory_readDataStage_valid = AxiIn_ar_rValid;
  assign slaveFactory_readDataStage_payload_addr = AxiIn_ar_rData_addr;
  assign slaveFactory_readDataStage_payload_prot = AxiIn_ar_rData_prot;
  assign _zz_slaveFactory_readDataStage_ready = (! slaveFactory_readHaltRequest);
  assign slaveFactory_readDataStage_haltWhen_valid = (slaveFactory_readDataStage_valid && _zz_slaveFactory_readDataStage_ready);
  assign slaveFactory_readDataStage_ready = (slaveFactory_readDataStage_haltWhen_ready && _zz_slaveFactory_readDataStage_ready);
  assign slaveFactory_readDataStage_haltWhen_payload_addr = slaveFactory_readDataStage_payload_addr;
  assign slaveFactory_readDataStage_haltWhen_payload_prot = slaveFactory_readDataStage_payload_prot;
  assign slaveFactory_readDataStage_haltWhen_translated_valid = slaveFactory_readDataStage_haltWhen_valid;
  assign slaveFactory_readDataStage_haltWhen_ready = slaveFactory_readDataStage_haltWhen_translated_ready;
  assign slaveFactory_readDataStage_haltWhen_translated_payload_data = slaveFactory_readRsp_data;
  assign slaveFactory_readDataStage_haltWhen_translated_payload_resp = slaveFactory_readRsp_resp;
  assign AxiIn_r_valid = slaveFactory_readDataStage_haltWhen_translated_valid;
  assign slaveFactory_readDataStage_haltWhen_translated_ready = AxiIn_r_ready;
  assign AxiIn_r_payload_data = slaveFactory_readDataStage_haltWhen_translated_payload_data;
  assign AxiIn_r_payload_resp = slaveFactory_readDataStage_haltWhen_translated_payload_resp;
  always @(*) begin
    if(slaveFactory_writeErrorFlag) begin
      slaveFactory_writeRsp_resp = 2'b10;
    end else begin
      slaveFactory_writeRsp_resp = 2'b00;
    end
  end

  always @(*) begin
    if(slaveFactory_readErrorFlag) begin
      slaveFactory_readRsp_resp = 2'b10;
    end else begin
      slaveFactory_readRsp_resp = 2'b00;
    end
  end

  always @(*) begin
    slaveFactory_readRsp_data = 32'h0;
    case(slaveFactory_readAddressMasked)
      32'h10000000 : begin
        slaveFactory_readRsp_data[31 : 0] = uart_reg;
      end
      default : begin
      end
    endcase
    case(slaveFactory_readAddressMasked)
      32'h10000000 : begin
        slaveFactory_readRsp_data[31 : 0] = uart_reg;
      end
      default : begin
      end
    endcase
  end

  assign slaveFactory_readAddressMasked = (slaveFactory_readDataStage_payload_addr & (~ 32'h00000003));
  assign slaveFactory_writeAddressMasked = (AxiIn_aw_payload_addr & (~ 32'h00000003));
  assign slaveFactory_readOccur = (AxiIn_r_valid && AxiIn_r_ready);
  assign AxiIn_w_fire = (AxiIn_w_valid && AxiIn_w_ready);
  assign mmio_w_addr = AxiIn_aw_payload_addr;
  always @(*) begin
    case(AxiIn_w_payload_strb)
      4'b0001 : begin
        mmio_w_len = 2'b00;
      end
      4'b0011 : begin
        mmio_w_len = 2'b01;
      end
      4'b0111 : begin
        mmio_w_len = 2'b10;
      end
      4'b1111 : begin
        mmio_w_len = 2'b11;
      end
      default : begin
        mmio_w_len = 2'b00;
      end
    endcase
  end

  assign AxiIn_ar_fire = (AxiIn_ar_valid && AxiIn_ar_ready);
  assign mmio_r_addr = AxiIn_ar_payload_addr;
  always @(posedge clock) begin
    if(reset) begin
      slaveFactory_writeJoinEvent_translated_haltWhen_rValid <= 1'b0;
      AxiIn_ar_rValid <= 1'b0;
    end else begin
      if(slaveFactory_writeJoinEvent_translated_haltWhen_valid) begin
        slaveFactory_writeJoinEvent_translated_haltWhen_rValid <= 1'b1;
      end
      if(slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire) begin
        slaveFactory_writeJoinEvent_translated_haltWhen_rValid <= 1'b0;
      end
      if(AxiIn_ar_valid) begin
        AxiIn_ar_rValid <= 1'b1;
      end
      if(slaveFactory_readDataStage_fire) begin
        AxiIn_ar_rValid <= 1'b0;
      end
    end
  end

  always @(posedge clock) begin
    if(slaveFactory_writeJoinEvent_translated_haltWhen_ready) begin
      slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp <= slaveFactory_writeJoinEvent_translated_haltWhen_payload_resp;
    end
    if(AxiIn_ar_ready) begin
      AxiIn_ar_rData_addr <= AxiIn_ar_payload_addr;
      AxiIn_ar_rData_prot <= AxiIn_ar_payload_prot;
    end
    case(slaveFactory_writeAddressMasked)
      32'h10000000 : begin
        if(slaveFactory_writeOccur) begin
          uart_reg <= AxiIn_w_payload_data[31 : 0];
        end
      end
      default : begin
      end
    endcase
    case(slaveFactory_writeAddressMasked)
      32'h10000000 : begin
        if(slaveFactory_writeOccur) begin
          uart_reg <= AxiIn_w_payload_data[31 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule
