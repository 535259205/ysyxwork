// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : AXIClint

`timescale 1ns/1ps 
module AXIClint (
  input  wire          axi_aw_valid,
  output reg           axi_aw_ready,
  input  wire [31:0]   axi_aw_payload_addr,
  input  wire [3:0]    axi_aw_payload_id,
  input  wire [7:0]    axi_aw_payload_len,
  input  wire [2:0]    axi_aw_payload_size,
  input  wire [1:0]    axi_aw_payload_burst,
  input  wire          axi_w_valid,
  output wire          axi_w_ready,
  input  wire [31:0]   axi_w_payload_data,
  input  wire [3:0]    axi_w_payload_strb,
  input  wire          axi_w_payload_last,
  output wire          axi_b_valid,
  input  wire          axi_b_ready,
  output wire [3:0]    axi_b_payload_id,
  output wire [1:0]    axi_b_payload_resp,
  input  wire          axi_ar_valid,
  output reg           axi_ar_ready,
  input  wire [31:0]   axi_ar_payload_addr,
  input  wire [3:0]    axi_ar_payload_id,
  input  wire [7:0]    axi_ar_payload_len,
  input  wire [2:0]    axi_ar_payload_size,
  input  wire [1:0]    axi_ar_payload_burst,
  output wire          axi_r_valid,
  input  wire          axi_r_ready,
  output wire [31:0]   axi_r_payload_data,
  output wire [3:0]    axi_r_payload_id,
  output wire [1:0]    axi_r_payload_resp,
  output wire          axi_r_payload_last,
  input  wire          clock,
  input  wire          rst
);

  wire       [1:0]    _zz_Axi4Incr_alignMask;
  wire       [11:0]   _zz_Axi4Incr_baseIncr;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_2;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_3;
  reg        [11:0]   _zz_Axi4Incr_result;
  wire       [10:0]   _zz_Axi4Incr_result_1;
  wire       [0:0]    _zz_Axi4Incr_result_2;
  wire       [9:0]    _zz_Axi4Incr_result_3;
  wire       [1:0]    _zz_Axi4Incr_result_4;
  wire       [8:0]    _zz_Axi4Incr_result_5;
  wire       [2:0]    _zz_Axi4Incr_result_6;
  wire       [7:0]    _zz_Axi4Incr_result_7;
  wire       [3:0]    _zz_Axi4Incr_result_8;
  wire       [6:0]    _zz_Axi4Incr_result_9;
  wire       [4:0]    _zz_Axi4Incr_result_10;
  wire       [5:0]    _zz_Axi4Incr_result_11;
  wire       [5:0]    _zz_Axi4Incr_result_12;
  wire       [1:0]    _zz_Axi4Incr_alignMask_1;
  wire       [11:0]   _zz_Axi4Incr_baseIncr_1;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_1_1;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_1_2;
  reg        [11:0]   _zz_Axi4Incr_result_1_1;
  wire       [10:0]   _zz_Axi4Incr_result_1_2;
  wire       [0:0]    _zz_Axi4Incr_result_1_3;
  wire       [9:0]    _zz_Axi4Incr_result_1_4;
  wire       [1:0]    _zz_Axi4Incr_result_1_5;
  wire       [8:0]    _zz_Axi4Incr_result_1_6;
  wire       [2:0]    _zz_Axi4Incr_result_1_7;
  wire       [7:0]    _zz_Axi4Incr_result_1_8;
  wire       [3:0]    _zz_Axi4Incr_result_1_9;
  wire       [6:0]    _zz_Axi4Incr_result_1_10;
  wire       [4:0]    _zz_Axi4Incr_result_1_11;
  wire       [5:0]    _zz_Axi4Incr_result_1_12;
  wire       [5:0]    _zz_Axi4Incr_result_1_13;
  wire                axi_readErrorFlag;
  wire                axi_writeErrorFlag;
  wire                axi_readHaltRequest;
  wire                axi_writeHaltRequest;
  reg                 unburstify_result_valid;
  wire                unburstify_result_ready;
  reg                 unburstify_result_payload_last;
  reg        [31:0]   unburstify_result_payload_fragment_addr;
  reg        [3:0]    unburstify_result_payload_fragment_id;
  reg        [2:0]    unburstify_result_payload_fragment_size;
  reg        [1:0]    unburstify_result_payload_fragment_burst;
  wire                unburstify_doResult;
  reg                 unburstify_buffer_valid;
  reg        [7:0]    unburstify_buffer_len;
  reg        [7:0]    unburstify_buffer_beat;
  reg        [31:0]   unburstify_buffer_transaction_addr;
  reg        [3:0]    unburstify_buffer_transaction_id;
  reg        [2:0]    unburstify_buffer_transaction_size;
  reg        [1:0]    unburstify_buffer_transaction_burst;
  wire                unburstify_buffer_last;
  wire       [1:0]    Axi4Incr_validSize;
  reg        [31:0]   Axi4Incr_result;
  wire       [19:0]   Axi4Incr_highCat;
  wire       [2:0]    Axi4Incr_sizeValue;
  wire       [11:0]   Axi4Incr_alignMask;
  wire       [11:0]   Axi4Incr_base;
  wire       [11:0]   Axi4Incr_baseIncr;
  reg        [1:0]    _zz_Axi4Incr_wrapCase;
  wire       [2:0]    Axi4Incr_wrapCase;
  wire                axi_writeJoinEvent_valid;
  reg                 axi_writeJoinEvent_ready;
  wire                axi_writeOccur;
  reg                 axi_writeRsp_valid;
  reg                 axi_writeRsp_ready;
  wire       [3:0]    axi_writeRsp_payload_id;
  reg        [1:0]    axi_writeRsp_payload_resp;
  wire                axi_writeRsp_stage_valid;
  wire                axi_writeRsp_stage_ready;
  wire       [3:0]    axi_writeRsp_stage_payload_id;
  wire       [1:0]    axi_writeRsp_stage_payload_resp;
  reg                 axi_writeRsp_rValid;
  reg        [3:0]    axi_writeRsp_rData_id;
  reg        [1:0]    axi_writeRsp_rData_resp;
  reg                 unburstify_result_valid_1;
  reg                 unburstify_result_ready_1;
  reg                 unburstify_result_payload_last_1;
  reg        [31:0]   unburstify_result_payload_fragment_addr_1;
  reg        [3:0]    unburstify_result_payload_fragment_id_1;
  reg        [2:0]    unburstify_result_payload_fragment_size_1;
  reg        [1:0]    unburstify_result_payload_fragment_burst_1;
  wire                unburstify_doResult_1;
  reg                 unburstify_buffer_valid_1;
  reg        [7:0]    unburstify_buffer_len_1;
  reg        [7:0]    unburstify_buffer_beat_1;
  reg        [31:0]   unburstify_buffer_transaction_addr_1;
  reg        [3:0]    unburstify_buffer_transaction_id_1;
  reg        [2:0]    unburstify_buffer_transaction_size_1;
  reg        [1:0]    unburstify_buffer_transaction_burst_1;
  wire                unburstify_buffer_last_1;
  wire       [1:0]    Axi4Incr_validSize_1;
  reg        [31:0]   Axi4Incr_result_1;
  wire       [19:0]   Axi4Incr_highCat_1;
  wire       [2:0]    Axi4Incr_sizeValue_1;
  wire       [11:0]   Axi4Incr_alignMask_1;
  wire       [11:0]   Axi4Incr_base_1;
  wire       [11:0]   Axi4Incr_baseIncr_1;
  reg        [1:0]    _zz_Axi4Incr_wrapCase_1;
  wire       [2:0]    Axi4Incr_wrapCase_1;
  wire                axi_readDataStage_valid;
  wire                axi_readDataStage_ready;
  wire                axi_readDataStage_payload_last;
  wire       [31:0]   axi_readDataStage_payload_fragment_addr;
  wire       [3:0]    axi_readDataStage_payload_fragment_id;
  wire       [2:0]    axi_readDataStage_payload_fragment_size;
  wire       [1:0]    axi_readDataStage_payload_fragment_burst;
  reg                 unburstify_result_rValid;
  reg                 unburstify_result_rData_last;
  reg        [31:0]   unburstify_result_rData_fragment_addr;
  reg        [3:0]    unburstify_result_rData_fragment_id;
  reg        [2:0]    unburstify_result_rData_fragment_size;
  reg        [1:0]    unburstify_result_rData_fragment_burst;
  reg        [31:0]   axi_readRsp_data;
  wire       [3:0]    axi_readRsp_id;
  reg        [1:0]    axi_readRsp_resp;
  wire                axi_readRsp_last;
  wire                _zz_axi_readDataStage_ready;
  wire                axi_readDataStage_haltWhen_valid;
  wire                axi_readDataStage_haltWhen_ready;
  wire                axi_readDataStage_haltWhen_payload_last;
  wire       [31:0]   axi_readDataStage_haltWhen_payload_fragment_addr;
  wire       [3:0]    axi_readDataStage_haltWhen_payload_fragment_id;
  wire       [2:0]    axi_readDataStage_haltWhen_payload_fragment_size;
  wire       [1:0]    axi_readDataStage_haltWhen_payload_fragment_burst;
  wire                axi_readDataStage_haltWhen_translated_valid;
  wire                axi_readDataStage_haltWhen_translated_ready;
  wire       [31:0]   axi_readDataStage_haltWhen_translated_payload_data;
  wire       [3:0]    axi_readDataStage_haltWhen_translated_payload_id;
  wire       [1:0]    axi_readDataStage_haltWhen_translated_payload_resp;
  wire                axi_readDataStage_haltWhen_translated_payload_last;
  wire                axi_readOccur;
  wire       [31:0]   axi_readAddressMasked;
  wire       [31:0]   axi_writeAddressMasked;
  reg        [31:0]   mtime_L;
  reg        [31:0]   mtime_H;

  assign _zz_Axi4Incr_alignMask = {(2'b01 < Axi4Incr_validSize),(2'b00 < Axi4Incr_validSize)};
  assign _zz_Axi4Incr_baseIncr = {9'd0, Axi4Incr_sizeValue};
  assign _zz_Axi4Incr_wrapCase_2 = {1'd0, Axi4Incr_validSize};
  assign _zz_Axi4Incr_wrapCase_3 = {1'd0, _zz_Axi4Incr_wrapCase};
  assign _zz_Axi4Incr_alignMask_1 = {(2'b01 < Axi4Incr_validSize_1),(2'b00 < Axi4Incr_validSize_1)};
  assign _zz_Axi4Incr_baseIncr_1 = {9'd0, Axi4Incr_sizeValue_1};
  assign _zz_Axi4Incr_wrapCase_1_1 = {1'd0, Axi4Incr_validSize_1};
  assign _zz_Axi4Incr_wrapCase_1_2 = {1'd0, _zz_Axi4Incr_wrapCase_1};
  assign _zz_Axi4Incr_result_1 = Axi4Incr_base[11 : 1];
  assign _zz_Axi4Incr_result_2 = Axi4Incr_baseIncr[0 : 0];
  assign _zz_Axi4Incr_result_3 = Axi4Incr_base[11 : 2];
  assign _zz_Axi4Incr_result_4 = Axi4Incr_baseIncr[1 : 0];
  assign _zz_Axi4Incr_result_5 = Axi4Incr_base[11 : 3];
  assign _zz_Axi4Incr_result_6 = Axi4Incr_baseIncr[2 : 0];
  assign _zz_Axi4Incr_result_7 = Axi4Incr_base[11 : 4];
  assign _zz_Axi4Incr_result_8 = Axi4Incr_baseIncr[3 : 0];
  assign _zz_Axi4Incr_result_9 = Axi4Incr_base[11 : 5];
  assign _zz_Axi4Incr_result_10 = Axi4Incr_baseIncr[4 : 0];
  assign _zz_Axi4Incr_result_11 = Axi4Incr_base[11 : 6];
  assign _zz_Axi4Incr_result_12 = Axi4Incr_baseIncr[5 : 0];
  assign _zz_Axi4Incr_result_1_2 = Axi4Incr_base_1[11 : 1];
  assign _zz_Axi4Incr_result_1_3 = Axi4Incr_baseIncr_1[0 : 0];
  assign _zz_Axi4Incr_result_1_4 = Axi4Incr_base_1[11 : 2];
  assign _zz_Axi4Incr_result_1_5 = Axi4Incr_baseIncr_1[1 : 0];
  assign _zz_Axi4Incr_result_1_6 = Axi4Incr_base_1[11 : 3];
  assign _zz_Axi4Incr_result_1_7 = Axi4Incr_baseIncr_1[2 : 0];
  assign _zz_Axi4Incr_result_1_8 = Axi4Incr_base_1[11 : 4];
  assign _zz_Axi4Incr_result_1_9 = Axi4Incr_baseIncr_1[3 : 0];
  assign _zz_Axi4Incr_result_1_10 = Axi4Incr_base_1[11 : 5];
  assign _zz_Axi4Incr_result_1_11 = Axi4Incr_baseIncr_1[4 : 0];
  assign _zz_Axi4Incr_result_1_12 = Axi4Incr_base_1[11 : 6];
  assign _zz_Axi4Incr_result_1_13 = Axi4Incr_baseIncr_1[5 : 0];
  always @(*) begin
    case(Axi4Incr_wrapCase)
      3'b000 : _zz_Axi4Incr_result = {_zz_Axi4Incr_result_1,_zz_Axi4Incr_result_2};
      3'b001 : _zz_Axi4Incr_result = {_zz_Axi4Incr_result_3,_zz_Axi4Incr_result_4};
      3'b010 : _zz_Axi4Incr_result = {_zz_Axi4Incr_result_5,_zz_Axi4Incr_result_6};
      3'b011 : _zz_Axi4Incr_result = {_zz_Axi4Incr_result_7,_zz_Axi4Incr_result_8};
      3'b100 : _zz_Axi4Incr_result = {_zz_Axi4Incr_result_9,_zz_Axi4Incr_result_10};
      default : _zz_Axi4Incr_result = {_zz_Axi4Incr_result_11,_zz_Axi4Incr_result_12};
    endcase
  end

  always @(*) begin
    case(Axi4Incr_wrapCase_1)
      3'b000 : _zz_Axi4Incr_result_1_1 = {_zz_Axi4Incr_result_1_2,_zz_Axi4Incr_result_1_3};
      3'b001 : _zz_Axi4Incr_result_1_1 = {_zz_Axi4Incr_result_1_4,_zz_Axi4Incr_result_1_5};
      3'b010 : _zz_Axi4Incr_result_1_1 = {_zz_Axi4Incr_result_1_6,_zz_Axi4Incr_result_1_7};
      3'b011 : _zz_Axi4Incr_result_1_1 = {_zz_Axi4Incr_result_1_8,_zz_Axi4Incr_result_1_9};
      3'b100 : _zz_Axi4Incr_result_1_1 = {_zz_Axi4Incr_result_1_10,_zz_Axi4Incr_result_1_11};
      default : _zz_Axi4Incr_result_1_1 = {_zz_Axi4Incr_result_1_12,_zz_Axi4Incr_result_1_13};
    endcase
  end

  assign axi_readErrorFlag = 1'b0;
  assign axi_writeErrorFlag = 1'b0;
  assign axi_readHaltRequest = 1'b0;
  assign axi_writeHaltRequest = 1'b0;
  assign unburstify_buffer_last = (unburstify_buffer_beat == 8'h01);
  assign Axi4Incr_validSize = unburstify_buffer_transaction_size[1 : 0];
  assign Axi4Incr_highCat = unburstify_buffer_transaction_addr[31 : 12];
  assign Axi4Incr_sizeValue = {(2'b10 == Axi4Incr_validSize),{(2'b01 == Axi4Incr_validSize),(2'b00 == Axi4Incr_validSize)}};
  assign Axi4Incr_alignMask = {10'd0, _zz_Axi4Incr_alignMask};
  assign Axi4Incr_base = (unburstify_buffer_transaction_addr[11 : 0] & (~ Axi4Incr_alignMask));
  assign Axi4Incr_baseIncr = (Axi4Incr_base + _zz_Axi4Incr_baseIncr);
  always @(*) begin
    casez(unburstify_buffer_len)
      8'b????1??? : begin
        _zz_Axi4Incr_wrapCase = 2'b11;
      end
      8'b????01?? : begin
        _zz_Axi4Incr_wrapCase = 2'b10;
      end
      8'b????001? : begin
        _zz_Axi4Incr_wrapCase = 2'b01;
      end
      default : begin
        _zz_Axi4Incr_wrapCase = 2'b00;
      end
    endcase
  end

  assign Axi4Incr_wrapCase = (_zz_Axi4Incr_wrapCase_2 + _zz_Axi4Incr_wrapCase_3);
  always @(*) begin
    case(unburstify_buffer_transaction_burst)
      2'b00 : begin
        Axi4Incr_result = unburstify_buffer_transaction_addr;
      end
      2'b10 : begin
        Axi4Incr_result = {Axi4Incr_highCat,_zz_Axi4Incr_result};
      end
      default : begin
        Axi4Incr_result = {Axi4Incr_highCat,Axi4Incr_baseIncr};
      end
    endcase
  end

  always @(*) begin
    axi_aw_ready = 1'b0;
    if(unburstify_buffer_valid) begin
      unburstify_result_valid = 1'b1;
      unburstify_result_payload_last = unburstify_buffer_last;
      unburstify_result_payload_fragment_id = unburstify_buffer_transaction_id;
      unburstify_result_payload_fragment_size = unburstify_buffer_transaction_size;
      unburstify_result_payload_fragment_burst = unburstify_buffer_transaction_burst;
      unburstify_result_payload_fragment_addr = Axi4Incr_result;
    end else begin
      axi_aw_ready = unburstify_result_ready;
      unburstify_result_valid = axi_aw_valid;
      unburstify_result_payload_fragment_addr = axi_aw_payload_addr;
      unburstify_result_payload_fragment_id = axi_aw_payload_id;
      unburstify_result_payload_fragment_size = axi_aw_payload_size;
      unburstify_result_payload_fragment_burst = axi_aw_payload_burst;
      unburstify_result_payload_last = 1'b1;
      if((axi_aw_payload_len != 8'h0)) begin
        unburstify_result_payload_last = 1'b0;
      end
    end
  end

  assign axi_writeOccur = (axi_writeJoinEvent_valid && axi_writeJoinEvent_ready);
  assign axi_writeJoinEvent_valid = (unburstify_result_valid && axi_w_valid);
  assign unburstify_result_ready = axi_writeOccur;
  assign axi_w_ready = axi_writeOccur;
  always @(*) begin
    axi_writeRsp_ready = axi_writeRsp_stage_ready;
    if((! axi_writeRsp_stage_valid)) begin
      axi_writeRsp_ready = 1'b1;
    end
  end

  assign axi_writeRsp_stage_valid = axi_writeRsp_rValid;
  assign axi_writeRsp_stage_payload_id = axi_writeRsp_rData_id;
  assign axi_writeRsp_stage_payload_resp = axi_writeRsp_rData_resp;
  assign axi_b_valid = axi_writeRsp_stage_valid;
  assign axi_writeRsp_stage_ready = axi_b_ready;
  assign axi_b_payload_id = axi_writeRsp_stage_payload_id;
  assign axi_b_payload_resp = axi_writeRsp_stage_payload_resp;
  always @(*) begin
    if(axi_w_payload_last) begin
      axi_writeJoinEvent_ready = (axi_writeRsp_ready && (! axi_writeHaltRequest));
      axi_writeRsp_valid = axi_writeOccur;
    end else begin
      axi_writeJoinEvent_ready = (! axi_writeHaltRequest);
      axi_writeRsp_valid = 1'b0;
    end
  end

  assign unburstify_buffer_last_1 = (unburstify_buffer_beat_1 == 8'h01);
  assign Axi4Incr_validSize_1 = unburstify_buffer_transaction_size_1[1 : 0];
  assign Axi4Incr_highCat_1 = unburstify_buffer_transaction_addr_1[31 : 12];
  assign Axi4Incr_sizeValue_1 = {(2'b10 == Axi4Incr_validSize_1),{(2'b01 == Axi4Incr_validSize_1),(2'b00 == Axi4Incr_validSize_1)}};
  assign Axi4Incr_alignMask_1 = {10'd0, _zz_Axi4Incr_alignMask_1};
  assign Axi4Incr_base_1 = (unburstify_buffer_transaction_addr_1[11 : 0] & (~ Axi4Incr_alignMask_1));
  assign Axi4Incr_baseIncr_1 = (Axi4Incr_base_1 + _zz_Axi4Incr_baseIncr_1);
  always @(*) begin
    casez(unburstify_buffer_len_1)
      8'b????1??? : begin
        _zz_Axi4Incr_wrapCase_1 = 2'b11;
      end
      8'b????01?? : begin
        _zz_Axi4Incr_wrapCase_1 = 2'b10;
      end
      8'b????001? : begin
        _zz_Axi4Incr_wrapCase_1 = 2'b01;
      end
      default : begin
        _zz_Axi4Incr_wrapCase_1 = 2'b00;
      end
    endcase
  end

  assign Axi4Incr_wrapCase_1 = (_zz_Axi4Incr_wrapCase_1_1 + _zz_Axi4Incr_wrapCase_1_2);
  always @(*) begin
    case(unburstify_buffer_transaction_burst_1)
      2'b00 : begin
        Axi4Incr_result_1 = unburstify_buffer_transaction_addr_1;
      end
      2'b10 : begin
        Axi4Incr_result_1 = {Axi4Incr_highCat_1,_zz_Axi4Incr_result_1_1};
      end
      default : begin
        Axi4Incr_result_1 = {Axi4Incr_highCat_1,Axi4Incr_baseIncr_1};
      end
    endcase
  end

  always @(*) begin
    axi_ar_ready = 1'b0;
    if(unburstify_buffer_valid_1) begin
      unburstify_result_valid_1 = 1'b1;
      unburstify_result_payload_last_1 = unburstify_buffer_last_1;
      unburstify_result_payload_fragment_id_1 = unburstify_buffer_transaction_id_1;
      unburstify_result_payload_fragment_size_1 = unburstify_buffer_transaction_size_1;
      unburstify_result_payload_fragment_burst_1 = unburstify_buffer_transaction_burst_1;
      unburstify_result_payload_fragment_addr_1 = Axi4Incr_result_1;
    end else begin
      axi_ar_ready = unburstify_result_ready_1;
      unburstify_result_valid_1 = axi_ar_valid;
      unburstify_result_payload_fragment_addr_1 = axi_ar_payload_addr;
      unburstify_result_payload_fragment_id_1 = axi_ar_payload_id;
      unburstify_result_payload_fragment_size_1 = axi_ar_payload_size;
      unburstify_result_payload_fragment_burst_1 = axi_ar_payload_burst;
      unburstify_result_payload_last_1 = 1'b1;
      if((axi_ar_payload_len != 8'h0)) begin
        unburstify_result_payload_last_1 = 1'b0;
      end
    end
  end

  always @(*) begin
    unburstify_result_ready_1 = axi_readDataStage_ready;
    if((! axi_readDataStage_valid)) begin
      unburstify_result_ready_1 = 1'b1;
    end
  end

  assign axi_readDataStage_valid = unburstify_result_rValid;
  assign axi_readDataStage_payload_last = unburstify_result_rData_last;
  assign axi_readDataStage_payload_fragment_addr = unburstify_result_rData_fragment_addr;
  assign axi_readDataStage_payload_fragment_id = unburstify_result_rData_fragment_id;
  assign axi_readDataStage_payload_fragment_size = unburstify_result_rData_fragment_size;
  assign axi_readDataStage_payload_fragment_burst = unburstify_result_rData_fragment_burst;
  assign _zz_axi_readDataStage_ready = (! axi_readHaltRequest);
  assign axi_readDataStage_haltWhen_valid = (axi_readDataStage_valid && _zz_axi_readDataStage_ready);
  assign axi_readDataStage_ready = (axi_readDataStage_haltWhen_ready && _zz_axi_readDataStage_ready);
  assign axi_readDataStage_haltWhen_payload_last = axi_readDataStage_payload_last;
  assign axi_readDataStage_haltWhen_payload_fragment_addr = axi_readDataStage_payload_fragment_addr;
  assign axi_readDataStage_haltWhen_payload_fragment_id = axi_readDataStage_payload_fragment_id;
  assign axi_readDataStage_haltWhen_payload_fragment_size = axi_readDataStage_payload_fragment_size;
  assign axi_readDataStage_haltWhen_payload_fragment_burst = axi_readDataStage_payload_fragment_burst;
  assign axi_readDataStage_haltWhen_translated_valid = axi_readDataStage_haltWhen_valid;
  assign axi_readDataStage_haltWhen_ready = axi_readDataStage_haltWhen_translated_ready;
  assign axi_readDataStage_haltWhen_translated_payload_data = axi_readRsp_data;
  assign axi_readDataStage_haltWhen_translated_payload_id = axi_readRsp_id;
  assign axi_readDataStage_haltWhen_translated_payload_resp = axi_readRsp_resp;
  assign axi_readDataStage_haltWhen_translated_payload_last = axi_readRsp_last;
  assign axi_r_valid = axi_readDataStage_haltWhen_translated_valid;
  assign axi_readDataStage_haltWhen_translated_ready = axi_r_ready;
  assign axi_r_payload_data = axi_readDataStage_haltWhen_translated_payload_data;
  assign axi_r_payload_id = axi_readDataStage_haltWhen_translated_payload_id;
  assign axi_r_payload_resp = axi_readDataStage_haltWhen_translated_payload_resp;
  assign axi_r_payload_last = axi_readDataStage_haltWhen_translated_payload_last;
  assign axi_writeRsp_payload_id = unburstify_result_payload_fragment_id;
  always @(*) begin
    if(axi_writeErrorFlag) begin
      axi_writeRsp_payload_resp = 2'b10;
    end else begin
      axi_writeRsp_payload_resp = 2'b00;
    end
  end

  always @(*) begin
    if(axi_readErrorFlag) begin
      axi_readRsp_resp = 2'b10;
    end else begin
      axi_readRsp_resp = 2'b00;
    end
  end

  always @(*) begin
    axi_readRsp_data = 32'h0;
    case(axi_readAddressMasked)
      32'h02000000 : begin
        axi_readRsp_data[31 : 0] = mtime_L;
      end
      32'h02000004 : begin
        axi_readRsp_data[31 : 0] = mtime_H;
      end
      default : begin
      end
    endcase
    case(axi_readAddressMasked)
      32'h02000000 : begin
        axi_readRsp_data[31 : 0] = mtime_L;
      end
      32'h02000004 : begin
        axi_readRsp_data[31 : 0] = mtime_H;
      end
      default : begin
      end
    endcase
  end

  assign axi_readRsp_last = axi_readDataStage_payload_last;
  assign axi_readRsp_id = axi_readDataStage_payload_fragment_id;
  assign axi_readOccur = (axi_r_valid && axi_r_ready);
  assign axi_readAddressMasked = (axi_readDataStage_payload_fragment_addr & (~ 32'h00000003));
  assign axi_writeAddressMasked = (unburstify_result_payload_fragment_addr & (~ 32'h00000003));
  always @(posedge clock) begin
    if(rst) begin
      unburstify_buffer_valid <= 1'b0;
      axi_writeRsp_rValid <= 1'b0;
      unburstify_buffer_valid_1 <= 1'b0;
      unburstify_result_rValid <= 1'b0;
      mtime_L <= 32'h0;
      mtime_H <= 32'h0;
    end else begin
      if(unburstify_result_ready) begin
        if(unburstify_buffer_last) begin
          unburstify_buffer_valid <= 1'b0;
        end
      end
      if(!unburstify_buffer_valid) begin
        if((axi_aw_payload_len != 8'h0)) begin
          if(unburstify_result_ready) begin
            unburstify_buffer_valid <= axi_aw_valid;
          end
        end
      end
      if(axi_writeRsp_ready) begin
        axi_writeRsp_rValid <= axi_writeRsp_valid;
      end
      if(unburstify_result_ready_1) begin
        if(unburstify_buffer_last_1) begin
          unburstify_buffer_valid_1 <= 1'b0;
        end
      end
      if(!unburstify_buffer_valid_1) begin
        if((axi_ar_payload_len != 8'h0)) begin
          if(unburstify_result_ready_1) begin
            unburstify_buffer_valid_1 <= axi_ar_valid;
          end
        end
      end
      if(unburstify_result_ready_1) begin
        unburstify_result_rValid <= unburstify_result_valid_1;
      end
      mtime_L <= (mtime_L + 32'h00000001);
      if((mtime_L == 32'hffffffff)) begin
        mtime_H <= (mtime_H + 32'h00000001);
      end
    end
  end

  always @(posedge clock) begin
    if(unburstify_result_ready) begin
      unburstify_buffer_beat <= (unburstify_buffer_beat - 8'h01);
      unburstify_buffer_transaction_addr[11 : 0] <= Axi4Incr_result[11 : 0];
    end
    if(!unburstify_buffer_valid) begin
      if((axi_aw_payload_len != 8'h0)) begin
        if(unburstify_result_ready) begin
          unburstify_buffer_transaction_addr <= axi_aw_payload_addr;
          unburstify_buffer_transaction_id <= axi_aw_payload_id;
          unburstify_buffer_transaction_size <= axi_aw_payload_size;
          unburstify_buffer_transaction_burst <= axi_aw_payload_burst;
          unburstify_buffer_beat <= axi_aw_payload_len;
          unburstify_buffer_len <= axi_aw_payload_len;
        end
      end
    end
    if(axi_writeRsp_ready) begin
      axi_writeRsp_rData_id <= axi_writeRsp_payload_id;
      axi_writeRsp_rData_resp <= axi_writeRsp_payload_resp;
    end
    if(unburstify_result_ready_1) begin
      unburstify_buffer_beat_1 <= (unburstify_buffer_beat_1 - 8'h01);
      unburstify_buffer_transaction_addr_1[11 : 0] <= Axi4Incr_result_1[11 : 0];
    end
    if(!unburstify_buffer_valid_1) begin
      if((axi_ar_payload_len != 8'h0)) begin
        if(unburstify_result_ready_1) begin
          unburstify_buffer_transaction_addr_1 <= axi_ar_payload_addr;
          unburstify_buffer_transaction_id_1 <= axi_ar_payload_id;
          unburstify_buffer_transaction_size_1 <= axi_ar_payload_size;
          unburstify_buffer_transaction_burst_1 <= axi_ar_payload_burst;
          unburstify_buffer_beat_1 <= axi_ar_payload_len;
          unburstify_buffer_len_1 <= axi_ar_payload_len;
        end
      end
    end
    if(unburstify_result_ready_1) begin
      unburstify_result_rData_last <= unburstify_result_payload_last_1;
      unburstify_result_rData_fragment_addr <= unburstify_result_payload_fragment_addr_1;
      unburstify_result_rData_fragment_id <= unburstify_result_payload_fragment_id_1;
      unburstify_result_rData_fragment_size <= unburstify_result_payload_fragment_size_1;
      unburstify_result_rData_fragment_burst <= unburstify_result_payload_fragment_burst_1;
    end
  end


endmodule
