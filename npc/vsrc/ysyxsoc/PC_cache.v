// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : PC_cache

`timescale 1ns/1ps 
module PC_cache (
  output wire          io_axi_aw_valid,
  input  wire          io_axi_aw_ready,
  output wire [31:0]   io_axi_aw_payload_addr,
  output wire [3:0]    io_axi_aw_payload_id,
  output wire [7:0]    io_axi_aw_payload_len,
  output wire [2:0]    io_axi_aw_payload_size,
  output wire [1:0]    io_axi_aw_payload_burst,
  output wire          io_axi_w_valid,
  input  wire          io_axi_w_ready,
  output wire [31:0]   io_axi_w_payload_data,
  output wire [3:0]    io_axi_w_payload_strb,
  output wire          io_axi_w_payload_last,
  input  wire          io_axi_b_valid,
  output wire          io_axi_b_ready,
  input  wire [3:0]    io_axi_b_payload_id,
  input  wire [1:0]    io_axi_b_payload_resp,
  output wire          io_axi_ar_valid,
  input  wire          io_axi_ar_ready,
  output wire [31:0]   io_axi_ar_payload_addr,
  output wire [3:0]    io_axi_ar_payload_id,
  output wire [7:0]    io_axi_ar_payload_len,
  output wire [2:0]    io_axi_ar_payload_size,
  output wire [1:0]    io_axi_ar_payload_burst,
  input  wire          io_axi_r_valid,
  output wire          io_axi_r_ready,
  input  wire [31:0]   io_axi_r_payload_data,
  input  wire [3:0]    io_axi_r_payload_id,
  input  wire [1:0]    io_axi_r_payload_resp,
  input  wire          io_axi_r_payload_last,
  output wire [31:0]   io_com_encode_code,
  input  wire [31:0]   io_com_encode_nPC,
  input  wire          io_com_encode_nPC_vaild,
  output wire [31:0]   io_com_encode_PC,
  input  wire          io_read_en,
  input  wire          io_fence_i,
  output wire          io_finish,
  input  wire          clock,
  input  wire          rst
);

  wire                pc_1_axi4lite_ar_ready;
  wire       [31:0]   pc_1_axi4lite_r_payload_data;
  wire                cache_axi_ar_valid;
  wire       [31:0]   cache_axi_ar_payload_addr;
  wire       [3:0]    cache_axi_ar_payload_id;
  wire       [7:0]    cache_axi_ar_payload_len;
  wire       [2:0]    cache_axi_ar_payload_size;
  wire       [1:0]    cache_axi_ar_payload_burst;
  wire                cache_axi_aw_valid;
  wire       [31:0]   cache_axi_aw_payload_addr;
  wire       [3:0]    cache_axi_aw_payload_id;
  wire       [7:0]    cache_axi_aw_payload_len;
  wire       [2:0]    cache_axi_aw_payload_size;
  wire       [1:0]    cache_axi_aw_payload_burst;
  wire                cache_axi_w_valid;
  wire       [31:0]   cache_axi_w_payload_data;
  wire       [3:0]    cache_axi_w_payload_strb;
  wire                cache_axi_w_payload_last;
  wire                cache_axi_r_ready;
  wire                cache_axi_b_ready;
  wire       [31:0]   cache_com_code;
  wire                cache_com_valid;
  wire       [31:0]   pc_1_com_encode_code;
  wire       [31:0]   pc_1_com_encode_PC;
  wire                pc_1_axi4lite_aw_valid;
  wire       [31:0]   pc_1_axi4lite_aw_payload_addr;
  wire       [2:0]    pc_1_axi4lite_aw_payload_prot;
  wire                pc_1_axi4lite_w_valid;
  wire       [31:0]   pc_1_axi4lite_w_payload_data;
  wire       [3:0]    pc_1_axi4lite_w_payload_strb;
  wire                pc_1_axi4lite_b_ready;
  wire                pc_1_axi4lite_ar_valid;
  wire       [31:0]   pc_1_axi4lite_ar_payload_addr;
  wire       [2:0]    pc_1_axi4lite_ar_payload_prot;
  wire                pc_1_axi4lite_r_ready;
  wire                pc_1_finish;
  wire                pc_1_axi4lite_ar_fire;

  Icache cache (
    .axi_aw_valid         (cache_axi_aw_valid                 ), //o
    .axi_aw_ready         (io_axi_aw_ready                    ), //i
    .axi_aw_payload_addr  (cache_axi_aw_payload_addr[31:0]    ), //o
    .axi_aw_payload_id    (cache_axi_aw_payload_id[3:0]       ), //o
    .axi_aw_payload_len   (cache_axi_aw_payload_len[7:0]      ), //o
    .axi_aw_payload_size  (cache_axi_aw_payload_size[2:0]     ), //o
    .axi_aw_payload_burst (cache_axi_aw_payload_burst[1:0]    ), //o
    .axi_w_valid          (cache_axi_w_valid                  ), //o
    .axi_w_ready          (io_axi_w_ready                     ), //i
    .axi_w_payload_data   (cache_axi_w_payload_data[31:0]     ), //o
    .axi_w_payload_strb   (cache_axi_w_payload_strb[3:0]      ), //o
    .axi_w_payload_last   (cache_axi_w_payload_last           ), //o
    .axi_b_valid          (io_axi_b_valid                     ), //i
    .axi_b_ready          (cache_axi_b_ready                  ), //o
    .axi_b_payload_id     (io_axi_b_payload_id[3:0]           ), //i
    .axi_b_payload_resp   (io_axi_b_payload_resp[1:0]         ), //i
    .axi_ar_valid         (cache_axi_ar_valid                 ), //o
    .axi_ar_ready         (io_axi_ar_ready                    ), //i
    .axi_ar_payload_addr  (cache_axi_ar_payload_addr[31:0]    ), //o
    .axi_ar_payload_id    (cache_axi_ar_payload_id[3:0]       ), //o
    .axi_ar_payload_len   (cache_axi_ar_payload_len[7:0]      ), //o
    .axi_ar_payload_size  (cache_axi_ar_payload_size[2:0]     ), //o
    .axi_ar_payload_burst (cache_axi_ar_payload_burst[1:0]    ), //o
    .axi_r_valid          (io_axi_r_valid                     ), //i
    .axi_r_ready          (cache_axi_r_ready                  ), //o
    .axi_r_payload_data   (io_axi_r_payload_data[31:0]        ), //i
    .axi_r_payload_id     (io_axi_r_payload_id[3:0]           ), //i
    .axi_r_payload_resp   (io_axi_r_payload_resp[1:0]         ), //i
    .axi_r_payload_last   (io_axi_r_payload_last              ), //i
    .com_addr             (pc_1_axi4lite_ar_payload_addr[31:0]), //i
    .com_addr_fire        (pc_1_axi4lite_ar_fire              ), //i
    .com_code             (cache_com_code[31:0]               ), //o
    .com_valid            (cache_com_valid                    ), //o
    .com_ready            (pc_1_axi4lite_r_ready              ), //i
    .fence_i              (io_fence_i                         ), //i
    .clock                (clock                              ), //i
    .rst                  (rst                                )  //i
  );
  PC pc_1 (
    .com_encode_code          (pc_1_com_encode_code[31:0]         ), //o
    .com_encode_nPC           (io_com_encode_nPC[31:0]            ), //i
    .com_encode_nPC_vaild     (io_com_encode_nPC_vaild            ), //i
    .com_encode_PC            (pc_1_com_encode_PC[31:0]           ), //o
    .axi4lite_aw_valid        (pc_1_axi4lite_aw_valid             ), //o
    .axi4lite_aw_ready        (                                   ), //i
    .axi4lite_aw_payload_addr (pc_1_axi4lite_aw_payload_addr[31:0]), //o
    .axi4lite_aw_payload_prot (pc_1_axi4lite_aw_payload_prot[2:0] ), //o
    .axi4lite_w_valid         (pc_1_axi4lite_w_valid              ), //o
    .axi4lite_w_ready         (                                   ), //i
    .axi4lite_w_payload_data  (pc_1_axi4lite_w_payload_data[31:0] ), //o
    .axi4lite_w_payload_strb  (pc_1_axi4lite_w_payload_strb[3:0]  ), //o
    .axi4lite_b_valid         (                                   ), //i
    .axi4lite_b_ready         (pc_1_axi4lite_b_ready              ), //o
    .axi4lite_b_payload_resp  (                                   ), //i
    .axi4lite_ar_valid        (pc_1_axi4lite_ar_valid             ), //o
    .axi4lite_ar_ready        (pc_1_axi4lite_ar_ready             ), //i
    .axi4lite_ar_payload_addr (pc_1_axi4lite_ar_payload_addr[31:0]), //o
    .axi4lite_ar_payload_prot (pc_1_axi4lite_ar_payload_prot[2:0] ), //o
    .axi4lite_r_valid         (cache_com_valid                    ), //i
    .axi4lite_r_ready         (pc_1_axi4lite_r_ready              ), //o
    .axi4lite_r_payload_data  (pc_1_axi4lite_r_payload_data[31:0] ), //i
    .axi4lite_r_payload_resp  (                                   ), //i
    .read_en                  (io_read_en                         ), //i
    .finish                   (pc_1_finish                        ), //o
    .clock                    (clock                              ), //i
    .rst                      (rst                                )  //i
  );
  assign io_axi_aw_valid = cache_axi_aw_valid;
  assign io_axi_aw_payload_addr = cache_axi_aw_payload_addr;
  assign io_axi_aw_payload_id = cache_axi_aw_payload_id;
  assign io_axi_aw_payload_len = cache_axi_aw_payload_len;
  assign io_axi_aw_payload_size = cache_axi_aw_payload_size;
  assign io_axi_aw_payload_burst = cache_axi_aw_payload_burst;
  assign io_axi_w_valid = cache_axi_w_valid;
  assign io_axi_w_payload_data = cache_axi_w_payload_data;
  assign io_axi_w_payload_strb = cache_axi_w_payload_strb;
  assign io_axi_w_payload_last = cache_axi_w_payload_last;
  assign io_axi_b_ready = cache_axi_b_ready;
  assign io_axi_ar_valid = cache_axi_ar_valid;
  assign io_axi_ar_payload_addr = cache_axi_ar_payload_addr;
  assign io_axi_ar_payload_id = cache_axi_ar_payload_id;
  assign io_axi_ar_payload_len = cache_axi_ar_payload_len;
  assign io_axi_ar_payload_size = cache_axi_ar_payload_size;
  assign io_axi_ar_payload_burst = cache_axi_ar_payload_burst;
  assign io_axi_r_ready = cache_axi_r_ready;
  assign io_com_encode_code = pc_1_com_encode_code;
  assign io_com_encode_PC = pc_1_com_encode_PC;
  assign io_finish = pc_1_finish;
  assign pc_1_axi4lite_ar_ready = 1'b1;
  assign pc_1_axi4lite_ar_fire = (pc_1_axi4lite_ar_valid && pc_1_axi4lite_ar_ready);
  assign pc_1_axi4lite_r_payload_data = cache_com_code;

endmodule
