// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : CPU

`timescale 1ns/1ps 
module CPU (
  output wire          axi_mem_aw_valid,
  input  wire          axi_mem_aw_ready,
  output wire [31:0]   axi_mem_aw_payload_addr,
  output wire [2:0]    axi_mem_aw_payload_prot,
  output wire          axi_mem_w_valid,
  input  wire          axi_mem_w_ready,
  output wire [31:0]   axi_mem_w_payload_data,
  output wire [3:0]    axi_mem_w_payload_strb,
  input  wire          axi_mem_b_valid,
  output wire          axi_mem_b_ready,
  input  wire [1:0]    axi_mem_b_payload_resp,
  output wire          axi_mem_ar_valid,
  input  wire          axi_mem_ar_ready,
  output wire [31:0]   axi_mem_ar_payload_addr,
  output wire [2:0]    axi_mem_ar_payload_prot,
  input  wire          axi_mem_r_valid,
  output wire          axi_mem_r_ready,
  input  wire [31:0]   axi_mem_r_payload_data,
  input  wire [1:0]    axi_mem_r_payload_resp,
  output wire          axi_clint_aw_valid,
  input  wire          axi_clint_aw_ready,
  output wire [31:0]   axi_clint_aw_payload_addr,
  output wire [2:0]    axi_clint_aw_payload_prot,
  output wire          axi_clint_w_valid,
  input  wire          axi_clint_w_ready,
  output wire [31:0]   axi_clint_w_payload_data,
  output wire [3:0]    axi_clint_w_payload_strb,
  input  wire          axi_clint_b_valid,
  output wire          axi_clint_b_ready,
  input  wire [1:0]    axi_clint_b_payload_resp,
  output wire          axi_clint_ar_valid,
  input  wire          axi_clint_ar_ready,
  output wire [31:0]   axi_clint_ar_payload_addr,
  output wire [2:0]    axi_clint_ar_payload_prot,
  input  wire          axi_clint_r_valid,
  output wire          axi_clint_r_ready,
  input  wire [31:0]   axi_clint_r_payload_data,
  input  wire [1:0]    axi_clint_r_payload_resp,
  output wire          uart1_aw_valid,
  input  wire          uart1_aw_ready,
  output wire [31:0]   uart1_aw_payload_addr,
  output wire [2:0]    uart1_aw_payload_prot,
  output wire          uart1_w_valid,
  input  wire          uart1_w_ready,
  output wire [31:0]   uart1_w_payload_data,
  output wire [3:0]    uart1_w_payload_strb,
  input  wire          uart1_b_valid,
  output wire          uart1_b_ready,
  input  wire [1:0]    uart1_b_payload_resp,
  output wire          uart1_ar_valid,
  input  wire          uart1_ar_ready,
  output wire [31:0]   uart1_ar_payload_addr,
  output wire [2:0]    uart1_ar_payload_prot,
  input  wire          uart1_r_valid,
  output wire          uart1_r_ready,
  input  wire [31:0]   uart1_r_payload_data,
  input  wire [1:0]    uart1_r_payload_resp,
  output wire          uart2_aw_valid,
  input  wire          uart2_aw_ready,
  output wire [31:0]   uart2_aw_payload_addr,
  output wire [2:0]    uart2_aw_payload_prot,
  output wire          uart2_w_valid,
  input  wire          uart2_w_ready,
  output wire [31:0]   uart2_w_payload_data,
  output wire [3:0]    uart2_w_payload_strb,
  input  wire          uart2_b_valid,
  output wire          uart2_b_ready,
  input  wire [1:0]    uart2_b_payload_resp,
  output wire          uart2_ar_valid,
  input  wire          uart2_ar_ready,
  output wire [31:0]   uart2_ar_payload_addr,
  output wire [2:0]    uart2_ar_payload_prot,
  input  wire          uart2_r_valid,
  output wire          uart2_r_ready,
  input  wire [31:0]   uart2_r_payload_data,
  input  wire [1:0]    uart2_r_payload_resp,
  input  wire          reset,
  input  wire          clock
);

  wire                axiarbiter_1_AxiIn_0_w_valid;
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
  wire       [31:0]   encode_1_com_grp_rd;
  wire       [4:0]    encode_1_com_grp_rd_sel;
  wire                encode_1_com_grp_rd_vaild;
  wire       [4:0]    encode_1_com_grp_rs1_sel;
  wire       [4:0]    encode_1_com_grp_rs2_sel;
  wire       [31:0]   encode_1_com_pc_nPC;
  wire                encode_1_com_pc_nPC_vaild;
  wire       [31:0]   encode_1_com_csr_w_data;
  wire                encode_1_com_csr_vaild;
  wire       [11:0]   encode_1_com_csr_csr_sel;
  wire                encode_1_com_csr_ecall;
  wire       [31:0]   encode_1_com_csr_w_pc;
  wire                encode_1_com_csr_mret;
  wire                encode_1_axi4lite_aw_valid;
  wire       [31:0]   encode_1_axi4lite_aw_payload_addr;
  wire       [2:0]    encode_1_axi4lite_aw_payload_prot;
  wire                encode_1_axi4lite_w_valid;
  wire       [31:0]   encode_1_axi4lite_w_payload_data;
  wire       [3:0]    encode_1_axi4lite_w_payload_strb;
  wire                encode_1_axi4lite_b_ready;
  wire                encode_1_axi4lite_ar_valid;
  wire       [31:0]   encode_1_axi4lite_ar_payload_addr;
  wire       [2:0]    encode_1_axi4lite_ar_payload_prot;
  wire                encode_1_axi4lite_r_ready;
  wire       [3:0]    encode_1_ar_size;
  wire                encode_1_fence_i;
  wire       [31:0]   csr_1_com_encode_r_data;
  wire       [31:0]   csr_1_com_encode_r_pc;
  wire       [31:0]   grp_1_com_encode_rs1;
  wire       [31:0]   grp_1_com_encode_rs2;
  wire                axiarbiter_1_AxiIn_0_aw_ready;
  wire                axiarbiter_1_AxiIn_0_w_ready;
  wire                axiarbiter_1_AxiIn_0_b_valid;
  wire       [1:0]    axiarbiter_1_AxiIn_0_b_payload_resp;
  wire                axiarbiter_1_AxiIn_0_ar_ready;
  wire                axiarbiter_1_AxiIn_0_r_valid;
  wire       [31:0]   axiarbiter_1_AxiIn_0_r_payload_data;
  wire       [1:0]    axiarbiter_1_AxiIn_0_r_payload_resp;
  wire                axiarbiter_1_AxiIn_1_aw_ready;
  wire                axiarbiter_1_AxiIn_1_w_ready;
  wire                axiarbiter_1_AxiIn_1_b_valid;
  wire       [1:0]    axiarbiter_1_AxiIn_1_b_payload_resp;
  wire                axiarbiter_1_AxiIn_1_ar_ready;
  wire                axiarbiter_1_AxiIn_1_r_valid;
  wire       [31:0]   axiarbiter_1_AxiIn_1_r_payload_data;
  wire       [1:0]    axiarbiter_1_AxiIn_1_r_payload_resp;
  wire                axiarbiter_1_AxiOut_0_aw_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_0_aw_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_0_aw_payload_prot;
  wire                axiarbiter_1_AxiOut_0_w_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_0_w_payload_data;
  wire       [3:0]    axiarbiter_1_AxiOut_0_w_payload_strb;
  wire                axiarbiter_1_AxiOut_0_b_ready;
  wire                axiarbiter_1_AxiOut_0_ar_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_0_ar_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_0_ar_payload_prot;
  wire                axiarbiter_1_AxiOut_0_r_ready;
  wire                axiarbiter_1_AxiOut_1_aw_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_1_aw_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_1_aw_payload_prot;
  wire                axiarbiter_1_AxiOut_1_w_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_1_w_payload_data;
  wire       [3:0]    axiarbiter_1_AxiOut_1_w_payload_strb;
  wire                axiarbiter_1_AxiOut_1_b_ready;
  wire                axiarbiter_1_AxiOut_1_ar_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_1_ar_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_1_ar_payload_prot;
  wire                axiarbiter_1_AxiOut_1_r_ready;
  wire                axiarbiter_1_AxiOut_2_aw_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_2_aw_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_2_aw_payload_prot;
  wire                axiarbiter_1_AxiOut_2_w_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_2_w_payload_data;
  wire       [3:0]    axiarbiter_1_AxiOut_2_w_payload_strb;
  wire                axiarbiter_1_AxiOut_2_b_ready;
  wire                axiarbiter_1_AxiOut_2_ar_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_2_ar_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_2_ar_payload_prot;
  wire                axiarbiter_1_AxiOut_2_r_ready;
  wire                axiarbiter_1_AxiOut_3_aw_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_3_aw_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_3_aw_payload_prot;
  wire                axiarbiter_1_AxiOut_3_w_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_3_w_payload_data;
  wire       [3:0]    axiarbiter_1_AxiOut_3_w_payload_strb;
  wire                axiarbiter_1_AxiOut_3_b_ready;
  wire                axiarbiter_1_AxiOut_3_ar_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_3_ar_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_3_ar_payload_prot;
  wire                axiarbiter_1_AxiOut_3_r_ready;
  wire                ctrl_u_vaild_0;
  wire                ctrl_u_vaild_1;
  wire                ctrl_u_vaild_2;
  wire                ctrl_u_vaild_3;
  wire                ctrl_u_vaild_4;
  wire                ctrl_r_sel;
  wire                u_vaild_0;
  wire                u_vaild_1;
  wire                u_vaild_2;
  wire                u_vaild_3;
  wire                u_vaild_4;

  PC pc_1 (
    .com_encode_code          (pc_1_com_encode_code[31:0]               ), //o
    .com_encode_nPC           (encode_1_com_pc_nPC[31:0]                ), //i
    .com_encode_nPC_vaild     (encode_1_com_pc_nPC_vaild                ), //i
    .com_encode_PC            (pc_1_com_encode_PC[31:0]                 ), //o
    .axi4lite_aw_valid        (pc_1_axi4lite_aw_valid                   ), //o
    .axi4lite_aw_ready        (                                         ), //i
    .axi4lite_aw_payload_addr (pc_1_axi4lite_aw_payload_addr[31:0]      ), //o
    .axi4lite_aw_payload_prot (pc_1_axi4lite_aw_payload_prot[2:0]       ), //o
    .axi4lite_w_valid         (pc_1_axi4lite_w_valid                    ), //o
    .axi4lite_w_ready         (                                         ), //i
    .axi4lite_w_payload_data  (pc_1_axi4lite_w_payload_data[31:0]       ), //o
    .axi4lite_w_payload_strb  (pc_1_axi4lite_w_payload_strb[3:0]        ), //o
    .axi4lite_b_valid         (                                         ), //i
    .axi4lite_b_ready         (pc_1_axi4lite_b_ready                    ), //o
    .axi4lite_b_payload_resp  (                                         ), //i
    .axi4lite_ar_valid        (pc_1_axi4lite_ar_valid                   ), //o
    .axi4lite_ar_ready        (axiarbiter_1_AxiIn_0_ar_ready            ), //i
    .axi4lite_ar_payload_addr (pc_1_axi4lite_ar_payload_addr[31:0]      ), //o
    .axi4lite_ar_payload_prot (pc_1_axi4lite_ar_payload_prot[2:0]       ), //o
    .axi4lite_r_valid         (axiarbiter_1_AxiIn_0_r_valid             ), //i
    .axi4lite_r_ready         (pc_1_axi4lite_r_ready                    ), //o
    .axi4lite_r_payload_data  (axiarbiter_1_AxiIn_0_r_payload_data[31:0]), //i
    .axi4lite_r_payload_resp  (axiarbiter_1_AxiIn_0_r_payload_resp[1:0] ), //i
    .read_en                  (u_vaild_0                                ), //i
    .finish                   (pc_1_finish                              ), //o
    .clock                    (clock                                    ), //i
    .reset                    (reset                                    )  //i
  );
  Encode encode_1 (
    .com_grp_rd               (encode_1_com_grp_rd[31:0]                ), //o
    .com_grp_rd_sel           (encode_1_com_grp_rd_sel[4:0]             ), //o
    .com_grp_rd_vaild         (encode_1_com_grp_rd_vaild                ), //o
    .com_grp_rs1              (grp_1_com_encode_rs1[31:0]               ), //i
    .com_grp_rs1_sel          (encode_1_com_grp_rs1_sel[4:0]            ), //o
    .com_grp_rs2              (grp_1_com_encode_rs2[31:0]               ), //i
    .com_grp_rs2_sel          (encode_1_com_grp_rs2_sel[4:0]            ), //o
    .com_pc_code              (pc_1_com_encode_code[31:0]               ), //i
    .com_pc_nPC               (encode_1_com_pc_nPC[31:0]                ), //o
    .com_pc_nPC_vaild         (encode_1_com_pc_nPC_vaild                ), //o
    .com_pc_PC                (pc_1_com_encode_PC[31:0]                 ), //i
    .com_csr_w_data           (encode_1_com_csr_w_data[31:0]            ), //o
    .com_csr_r_data           (csr_1_com_encode_r_data[31:0]            ), //i
    .com_csr_vaild            (encode_1_com_csr_vaild                   ), //o
    .com_csr_csr_sel          (encode_1_com_csr_csr_sel[11:0]           ), //o
    .com_csr_ecall            (encode_1_com_csr_ecall                   ), //o
    .com_csr_w_pc             (encode_1_com_csr_w_pc[31:0]              ), //o
    .com_csr_r_pc             (csr_1_com_encode_r_pc[31:0]              ), //i
    .com_csr_mret             (encode_1_com_csr_mret                    ), //o
    .axi4lite_aw_valid        (encode_1_axi4lite_aw_valid               ), //o
    .axi4lite_aw_ready        (axiarbiter_1_AxiIn_1_aw_ready            ), //i
    .axi4lite_aw_payload_addr (encode_1_axi4lite_aw_payload_addr[31:0]  ), //o
    .axi4lite_aw_payload_prot (encode_1_axi4lite_aw_payload_prot[2:0]   ), //o
    .axi4lite_w_valid         (encode_1_axi4lite_w_valid                ), //o
    .axi4lite_w_ready         (axiarbiter_1_AxiIn_1_w_ready             ), //i
    .axi4lite_w_payload_data  (encode_1_axi4lite_w_payload_data[31:0]   ), //o
    .axi4lite_w_payload_strb  (encode_1_axi4lite_w_payload_strb[3:0]    ), //o
    .axi4lite_b_valid         (axiarbiter_1_AxiIn_1_b_valid             ), //i
    .axi4lite_b_ready         (encode_1_axi4lite_b_ready                ), //o
    .axi4lite_b_payload_resp  (axiarbiter_1_AxiIn_1_b_payload_resp[1:0] ), //i
    .axi4lite_ar_valid        (encode_1_axi4lite_ar_valid               ), //o
    .axi4lite_ar_ready        (axiarbiter_1_AxiIn_1_ar_ready            ), //i
    .axi4lite_ar_payload_addr (encode_1_axi4lite_ar_payload_addr[31:0]  ), //o
    .axi4lite_ar_payload_prot (encode_1_axi4lite_ar_payload_prot[2:0]   ), //o
    .axi4lite_r_valid         (axiarbiter_1_AxiIn_1_r_valid             ), //i
    .axi4lite_r_ready         (encode_1_axi4lite_r_ready                ), //o
    .axi4lite_r_payload_data  (axiarbiter_1_AxiIn_1_r_payload_data[31:0]), //i
    .axi4lite_r_payload_resp  (axiarbiter_1_AxiIn_1_r_payload_resp[1:0] ), //i
    .vaild                    (u_vaild_1                                ), //i
    .ar_size                  (encode_1_ar_size[3:0]                    ), //o
    .fence_i                  (encode_1_fence_i                         ), //o
    .clock                    (clock                                    ), //i
    .reset                    (reset                                    )  //i
  );
  CSR csr_1 (
    .com_encode_w_data  (encode_1_com_csr_w_data[31:0] ), //i
    .com_encode_r_data  (csr_1_com_encode_r_data[31:0] ), //o
    .com_encode_vaild   (encode_1_com_csr_vaild        ), //i
    .com_encode_csr_sel (encode_1_com_csr_csr_sel[11:0]), //i
    .com_encode_ecall   (encode_1_com_csr_ecall        ), //i
    .com_encode_w_pc    (encode_1_com_csr_w_pc[31:0]   ), //i
    .com_encode_r_pc    (csr_1_com_encode_r_pc[31:0]   ), //o
    .com_encode_mret    (encode_1_com_csr_mret         ), //i
    .vaild              (1'b1                          ), //i
    .clock              (clock                         ), //i
    .reset              (reset                         )  //i
  );
  GRP grp_1 (
    .com_encode_rd       (encode_1_com_grp_rd[31:0]    ), //i
    .com_encode_rd_sel   (encode_1_com_grp_rd_sel[4:0] ), //i
    .com_encode_rd_vaild (encode_1_com_grp_rd_vaild    ), //i
    .com_encode_rs1      (grp_1_com_encode_rs1[31:0]   ), //o
    .com_encode_rs1_sel  (encode_1_com_grp_rs1_sel[4:0]), //i
    .com_encode_rs2      (grp_1_com_encode_rs2[31:0]   ), //o
    .com_encode_rs2_sel  (encode_1_com_grp_rs2_sel[4:0]), //i
    .w_vaild             (u_vaild_4                    ), //i
    .clock               (clock                        ), //i
    .reset               (reset                        )  //i
  );
  AXIArbiter axiarbiter_1 (
    .AxiIn_0_aw_valid         (1'b0                                       ), //i
    .AxiIn_0_aw_ready         (axiarbiter_1_AxiIn_0_aw_ready              ), //o
    .AxiIn_0_aw_payload_addr  (32'h0                                      ), //i
    .AxiIn_0_aw_payload_prot  (3'b000                                     ), //i
    .AxiIn_0_w_valid          (axiarbiter_1_AxiIn_0_w_valid               ), //i
    .AxiIn_0_w_ready          (axiarbiter_1_AxiIn_0_w_ready               ), //o
    .AxiIn_0_w_payload_data   (32'h0                                      ), //i
    .AxiIn_0_w_payload_strb   (4'b1111                                    ), //i
    .AxiIn_0_b_valid          (axiarbiter_1_AxiIn_0_b_valid               ), //o
    .AxiIn_0_b_ready          (1'b0                                       ), //i
    .AxiIn_0_b_payload_resp   (axiarbiter_1_AxiIn_0_b_payload_resp[1:0]   ), //o
    .AxiIn_0_ar_valid         (pc_1_axi4lite_ar_valid                     ), //i
    .AxiIn_0_ar_ready         (axiarbiter_1_AxiIn_0_ar_ready              ), //o
    .AxiIn_0_ar_payload_addr  (pc_1_axi4lite_ar_payload_addr[31:0]        ), //i
    .AxiIn_0_ar_payload_prot  (pc_1_axi4lite_ar_payload_prot[2:0]         ), //i
    .AxiIn_0_r_valid          (axiarbiter_1_AxiIn_0_r_valid               ), //o
    .AxiIn_0_r_ready          (pc_1_axi4lite_r_ready                      ), //i
    .AxiIn_0_r_payload_data   (axiarbiter_1_AxiIn_0_r_payload_data[31:0]  ), //o
    .AxiIn_0_r_payload_resp   (axiarbiter_1_AxiIn_0_r_payload_resp[1:0]   ), //o
    .AxiIn_1_aw_valid         (encode_1_axi4lite_aw_valid                 ), //i
    .AxiIn_1_aw_ready         (axiarbiter_1_AxiIn_1_aw_ready              ), //o
    .AxiIn_1_aw_payload_addr  (encode_1_axi4lite_aw_payload_addr[31:0]    ), //i
    .AxiIn_1_aw_payload_prot  (encode_1_axi4lite_aw_payload_prot[2:0]     ), //i
    .AxiIn_1_w_valid          (encode_1_axi4lite_w_valid                  ), //i
    .AxiIn_1_w_ready          (axiarbiter_1_AxiIn_1_w_ready               ), //o
    .AxiIn_1_w_payload_data   (encode_1_axi4lite_w_payload_data[31:0]     ), //i
    .AxiIn_1_w_payload_strb   (encode_1_axi4lite_w_payload_strb[3:0]      ), //i
    .AxiIn_1_b_valid          (axiarbiter_1_AxiIn_1_b_valid               ), //o
    .AxiIn_1_b_ready          (encode_1_axi4lite_b_ready                  ), //i
    .AxiIn_1_b_payload_resp   (axiarbiter_1_AxiIn_1_b_payload_resp[1:0]   ), //o
    .AxiIn_1_ar_valid         (encode_1_axi4lite_ar_valid                 ), //i
    .AxiIn_1_ar_ready         (axiarbiter_1_AxiIn_1_ar_ready              ), //o
    .AxiIn_1_ar_payload_addr  (encode_1_axi4lite_ar_payload_addr[31:0]    ), //i
    .AxiIn_1_ar_payload_prot  (encode_1_axi4lite_ar_payload_prot[2:0]     ), //i
    .AxiIn_1_r_valid          (axiarbiter_1_AxiIn_1_r_valid               ), //o
    .AxiIn_1_r_ready          (encode_1_axi4lite_r_ready                  ), //i
    .AxiIn_1_r_payload_data   (axiarbiter_1_AxiIn_1_r_payload_data[31:0]  ), //o
    .AxiIn_1_r_payload_resp   (axiarbiter_1_AxiIn_1_r_payload_resp[1:0]   ), //o
    .AxiOut_0_aw_valid        (axiarbiter_1_AxiOut_0_aw_valid             ), //o
    .AxiOut_0_aw_ready        (axi_mem_aw_ready                           ), //i
    .AxiOut_0_aw_payload_addr (axiarbiter_1_AxiOut_0_aw_payload_addr[31:0]), //o
    .AxiOut_0_aw_payload_prot (axiarbiter_1_AxiOut_0_aw_payload_prot[2:0] ), //o
    .AxiOut_0_w_valid         (axiarbiter_1_AxiOut_0_w_valid              ), //o
    .AxiOut_0_w_ready         (axi_mem_w_ready                            ), //i
    .AxiOut_0_w_payload_data  (axiarbiter_1_AxiOut_0_w_payload_data[31:0] ), //o
    .AxiOut_0_w_payload_strb  (axiarbiter_1_AxiOut_0_w_payload_strb[3:0]  ), //o
    .AxiOut_0_b_valid         (axi_mem_b_valid                            ), //i
    .AxiOut_0_b_ready         (axiarbiter_1_AxiOut_0_b_ready              ), //o
    .AxiOut_0_b_payload_resp  (axi_mem_b_payload_resp[1:0]                ), //i
    .AxiOut_0_ar_valid        (axiarbiter_1_AxiOut_0_ar_valid             ), //o
    .AxiOut_0_ar_ready        (axi_mem_ar_ready                           ), //i
    .AxiOut_0_ar_payload_addr (axiarbiter_1_AxiOut_0_ar_payload_addr[31:0]), //o
    .AxiOut_0_ar_payload_prot (axiarbiter_1_AxiOut_0_ar_payload_prot[2:0] ), //o
    .AxiOut_0_r_valid         (axi_mem_r_valid                            ), //i
    .AxiOut_0_r_ready         (axiarbiter_1_AxiOut_0_r_ready              ), //o
    .AxiOut_0_r_payload_data  (axi_mem_r_payload_data[31:0]               ), //i
    .AxiOut_0_r_payload_resp  (axi_mem_r_payload_resp[1:0]                ), //i
    .AxiOut_1_aw_valid        (axiarbiter_1_AxiOut_1_aw_valid             ), //o
    .AxiOut_1_aw_ready        (uart1_aw_ready                             ), //i
    .AxiOut_1_aw_payload_addr (axiarbiter_1_AxiOut_1_aw_payload_addr[31:0]), //o
    .AxiOut_1_aw_payload_prot (axiarbiter_1_AxiOut_1_aw_payload_prot[2:0] ), //o
    .AxiOut_1_w_valid         (axiarbiter_1_AxiOut_1_w_valid              ), //o
    .AxiOut_1_w_ready         (uart1_w_ready                              ), //i
    .AxiOut_1_w_payload_data  (axiarbiter_1_AxiOut_1_w_payload_data[31:0] ), //o
    .AxiOut_1_w_payload_strb  (axiarbiter_1_AxiOut_1_w_payload_strb[3:0]  ), //o
    .AxiOut_1_b_valid         (uart1_b_valid                              ), //i
    .AxiOut_1_b_ready         (axiarbiter_1_AxiOut_1_b_ready              ), //o
    .AxiOut_1_b_payload_resp  (uart1_b_payload_resp[1:0]                  ), //i
    .AxiOut_1_ar_valid        (axiarbiter_1_AxiOut_1_ar_valid             ), //o
    .AxiOut_1_ar_ready        (uart1_ar_ready                             ), //i
    .AxiOut_1_ar_payload_addr (axiarbiter_1_AxiOut_1_ar_payload_addr[31:0]), //o
    .AxiOut_1_ar_payload_prot (axiarbiter_1_AxiOut_1_ar_payload_prot[2:0] ), //o
    .AxiOut_1_r_valid         (uart1_r_valid                              ), //i
    .AxiOut_1_r_ready         (axiarbiter_1_AxiOut_1_r_ready              ), //o
    .AxiOut_1_r_payload_data  (uart1_r_payload_data[31:0]                 ), //i
    .AxiOut_1_r_payload_resp  (uart1_r_payload_resp[1:0]                  ), //i
    .AxiOut_2_aw_valid        (axiarbiter_1_AxiOut_2_aw_valid             ), //o
    .AxiOut_2_aw_ready        (axi_clint_aw_ready                         ), //i
    .AxiOut_2_aw_payload_addr (axiarbiter_1_AxiOut_2_aw_payload_addr[31:0]), //o
    .AxiOut_2_aw_payload_prot (axiarbiter_1_AxiOut_2_aw_payload_prot[2:0] ), //o
    .AxiOut_2_w_valid         (axiarbiter_1_AxiOut_2_w_valid              ), //o
    .AxiOut_2_w_ready         (axi_clint_w_ready                          ), //i
    .AxiOut_2_w_payload_data  (axiarbiter_1_AxiOut_2_w_payload_data[31:0] ), //o
    .AxiOut_2_w_payload_strb  (axiarbiter_1_AxiOut_2_w_payload_strb[3:0]  ), //o
    .AxiOut_2_b_valid         (axi_clint_b_valid                          ), //i
    .AxiOut_2_b_ready         (axiarbiter_1_AxiOut_2_b_ready              ), //o
    .AxiOut_2_b_payload_resp  (axi_clint_b_payload_resp[1:0]              ), //i
    .AxiOut_2_ar_valid        (axiarbiter_1_AxiOut_2_ar_valid             ), //o
    .AxiOut_2_ar_ready        (axi_clint_ar_ready                         ), //i
    .AxiOut_2_ar_payload_addr (axiarbiter_1_AxiOut_2_ar_payload_addr[31:0]), //o
    .AxiOut_2_ar_payload_prot (axiarbiter_1_AxiOut_2_ar_payload_prot[2:0] ), //o
    .AxiOut_2_r_valid         (axi_clint_r_valid                          ), //i
    .AxiOut_2_r_ready         (axiarbiter_1_AxiOut_2_r_ready              ), //o
    .AxiOut_2_r_payload_data  (axi_clint_r_payload_data[31:0]             ), //i
    .AxiOut_2_r_payload_resp  (axi_clint_r_payload_resp[1:0]              ), //i
    .AxiOut_3_aw_valid        (axiarbiter_1_AxiOut_3_aw_valid             ), //o
    .AxiOut_3_aw_ready        (uart2_aw_ready                             ), //i
    .AxiOut_3_aw_payload_addr (axiarbiter_1_AxiOut_3_aw_payload_addr[31:0]), //o
    .AxiOut_3_aw_payload_prot (axiarbiter_1_AxiOut_3_aw_payload_prot[2:0] ), //o
    .AxiOut_3_w_valid         (axiarbiter_1_AxiOut_3_w_valid              ), //o
    .AxiOut_3_w_ready         (uart2_w_ready                              ), //i
    .AxiOut_3_w_payload_data  (axiarbiter_1_AxiOut_3_w_payload_data[31:0] ), //o
    .AxiOut_3_w_payload_strb  (axiarbiter_1_AxiOut_3_w_payload_strb[3:0]  ), //o
    .AxiOut_3_b_valid         (uart2_b_valid                              ), //i
    .AxiOut_3_b_ready         (axiarbiter_1_AxiOut_3_b_ready              ), //o
    .AxiOut_3_b_payload_resp  (uart2_b_payload_resp[1:0]                  ), //i
    .AxiOut_3_ar_valid        (axiarbiter_1_AxiOut_3_ar_valid             ), //o
    .AxiOut_3_ar_ready        (uart2_ar_ready                             ), //i
    .AxiOut_3_ar_payload_addr (axiarbiter_1_AxiOut_3_ar_payload_addr[31:0]), //o
    .AxiOut_3_ar_payload_prot (axiarbiter_1_AxiOut_3_ar_payload_prot[2:0] ), //o
    .AxiOut_3_r_valid         (uart2_r_valid                              ), //i
    .AxiOut_3_r_ready         (axiarbiter_1_AxiOut_3_r_ready              ), //o
    .AxiOut_3_r_payload_data  (uart2_r_payload_data[31:0]                 ), //i
    .AxiOut_3_r_payload_resp  (uart2_r_payload_resp[1:0]                  ), //i
    .r_sel                    (ctrl_r_sel                                 ), //i
    .clock                    (clock                                      ), //i
    .reset                    (reset                                      )  //i
  );
  AllCtrl ctrl (
    .u_vaild_0     (ctrl_u_vaild_0               ), //o
    .u_vaild_1     (ctrl_u_vaild_1               ), //o
    .u_vaild_2     (ctrl_u_vaild_2               ), //o
    .u_vaild_3     (ctrl_u_vaild_3               ), //o
    .u_vaild_4     (ctrl_u_vaild_4               ), //o
    .axi0_ar_ready (axiarbiter_1_AxiIn_0_ar_ready), //i
    .axi0_ar_vaild (pc_1_axi4lite_ar_valid       ), //i
    .axi0_r_vaild  (axiarbiter_1_AxiIn_0_r_valid ), //i
    .axi0_r_ready  (pc_1_axi4lite_r_ready        ), //i
    .axi0_w_vaild  (axiarbiter_1_AxiIn_0_w_valid ), //i
    .axi0_w_ready  (axiarbiter_1_AxiIn_0_w_ready ), //i
    .axi_ar_ready  (axiarbiter_1_AxiIn_1_ar_ready), //i
    .axi_ar_vaild  (encode_1_axi4lite_ar_valid   ), //i
    .axi_r_vaild   (axiarbiter_1_AxiIn_1_r_valid ), //i
    .axi_r_ready   (encode_1_axi4lite_r_ready    ), //i
    .axi_w_vaild   (encode_1_axi4lite_w_valid    ), //i
    .axi_w_ready   (axiarbiter_1_AxiIn_1_w_ready ), //i
    .r_sel         (ctrl_r_sel                   ), //o
    .clock         (clock                        ), //i
    .reset         (reset                        )  //i
  );
  assign axiarbiter_1_AxiIn_0_w_valid = 1'b0;
  assign axi_mem_aw_valid = axiarbiter_1_AxiOut_0_aw_valid;
  assign axi_mem_aw_payload_addr = axiarbiter_1_AxiOut_0_aw_payload_addr;
  assign axi_mem_aw_payload_prot = axiarbiter_1_AxiOut_0_aw_payload_prot;
  assign axi_mem_w_valid = axiarbiter_1_AxiOut_0_w_valid;
  assign axi_mem_w_payload_data = axiarbiter_1_AxiOut_0_w_payload_data;
  assign axi_mem_w_payload_strb = axiarbiter_1_AxiOut_0_w_payload_strb;
  assign axi_mem_b_ready = axiarbiter_1_AxiOut_0_b_ready;
  assign axi_mem_ar_valid = axiarbiter_1_AxiOut_0_ar_valid;
  assign axi_mem_ar_payload_addr = axiarbiter_1_AxiOut_0_ar_payload_addr;
  assign axi_mem_ar_payload_prot = axiarbiter_1_AxiOut_0_ar_payload_prot;
  assign axi_mem_r_ready = axiarbiter_1_AxiOut_0_r_ready;
  assign uart1_aw_valid = axiarbiter_1_AxiOut_1_aw_valid;
  assign uart1_aw_payload_addr = axiarbiter_1_AxiOut_1_aw_payload_addr;
  assign uart1_aw_payload_prot = axiarbiter_1_AxiOut_1_aw_payload_prot;
  assign uart1_w_valid = axiarbiter_1_AxiOut_1_w_valid;
  assign uart1_w_payload_data = axiarbiter_1_AxiOut_1_w_payload_data;
  assign uart1_w_payload_strb = axiarbiter_1_AxiOut_1_w_payload_strb;
  assign uart1_b_ready = axiarbiter_1_AxiOut_1_b_ready;
  assign uart1_ar_valid = axiarbiter_1_AxiOut_1_ar_valid;
  assign uart1_ar_payload_addr = axiarbiter_1_AxiOut_1_ar_payload_addr;
  assign uart1_ar_payload_prot = axiarbiter_1_AxiOut_1_ar_payload_prot;
  assign uart1_r_ready = axiarbiter_1_AxiOut_1_r_ready;
  assign axi_clint_aw_valid = axiarbiter_1_AxiOut_2_aw_valid;
  assign axi_clint_aw_payload_addr = axiarbiter_1_AxiOut_2_aw_payload_addr;
  assign axi_clint_aw_payload_prot = axiarbiter_1_AxiOut_2_aw_payload_prot;
  assign axi_clint_w_valid = axiarbiter_1_AxiOut_2_w_valid;
  assign axi_clint_w_payload_data = axiarbiter_1_AxiOut_2_w_payload_data;
  assign axi_clint_w_payload_strb = axiarbiter_1_AxiOut_2_w_payload_strb;
  assign axi_clint_b_ready = axiarbiter_1_AxiOut_2_b_ready;
  assign axi_clint_ar_valid = axiarbiter_1_AxiOut_2_ar_valid;
  assign axi_clint_ar_payload_addr = axiarbiter_1_AxiOut_2_ar_payload_addr;
  assign axi_clint_ar_payload_prot = axiarbiter_1_AxiOut_2_ar_payload_prot;
  assign axi_clint_r_ready = axiarbiter_1_AxiOut_2_r_ready;
  assign uart2_aw_valid = axiarbiter_1_AxiOut_3_aw_valid;
  assign uart2_aw_payload_addr = axiarbiter_1_AxiOut_3_aw_payload_addr;
  assign uart2_aw_payload_prot = axiarbiter_1_AxiOut_3_aw_payload_prot;
  assign uart2_w_valid = axiarbiter_1_AxiOut_3_w_valid;
  assign uart2_w_payload_data = axiarbiter_1_AxiOut_3_w_payload_data;
  assign uart2_w_payload_strb = axiarbiter_1_AxiOut_3_w_payload_strb;
  assign uart2_b_ready = axiarbiter_1_AxiOut_3_b_ready;
  assign uart2_ar_valid = axiarbiter_1_AxiOut_3_ar_valid;
  assign uart2_ar_payload_addr = axiarbiter_1_AxiOut_3_ar_payload_addr;
  assign uart2_ar_payload_prot = axiarbiter_1_AxiOut_3_ar_payload_prot;
  assign uart2_r_ready = axiarbiter_1_AxiOut_3_r_ready;
  assign u_vaild_0 = ctrl_u_vaild_0;
  assign u_vaild_1 = ctrl_u_vaild_1;
  assign u_vaild_2 = ctrl_u_vaild_2;
  assign u_vaild_3 = ctrl_u_vaild_3;
  assign u_vaild_4 = ctrl_u_vaild_4;

endmodule
