// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : top

`timescale 1ns/1ps 
module top (
  input  wire          rst,
  input  wire          clk
);

  wire       [31:0]   pc_pc_com_encode_code;
  wire       [31:0]   pc_pc_com_encode_PC;
  wire                pc_pc_axi4lite_ar_valid;
  wire       [31:0]   pc_pc_axi4lite_ar_payload_addr;
  wire       [2:0]    pc_pc_axi4lite_ar_payload_prot;
  wire                pc_pc_axi4lite_r_ready;
  wire       [31:0]   other_encode_com_grp_rd;
  wire       [4:0]    other_encode_com_grp_rd_sel;
  wire                other_encode_com_grp_rd_vaild;
  wire       [4:0]    other_encode_com_grp_rs1_sel;
  wire       [4:0]    other_encode_com_grp_rs2_sel;
  wire       [31:0]   other_encode_com_pc_nPC;
  wire                other_encode_com_pc_nPC_vaild;
  wire       [31:0]   other_encode_com_csr_w_data;
  wire                other_encode_com_csr_vaild;
  wire       [11:0]   other_encode_com_csr_csr_sel;
  wire                other_encode_com_csr_ecall;
  wire       [31:0]   other_encode_com_csr_w_pc;
  wire                other_encode_com_csr_mret;
  wire                other_encode_axi4lite_aw_valid;
  wire       [31:0]   other_encode_axi4lite_aw_payload_addr;
  wire       [2:0]    other_encode_axi4lite_aw_payload_prot;
  wire                other_encode_axi4lite_w_valid;
  wire       [31:0]   other_encode_axi4lite_w_payload_data;
  wire       [3:0]    other_encode_axi4lite_w_payload_strb;
  wire                other_encode_axi4lite_b_ready;
  wire                other_encode_axi4lite_ar_valid;
  wire       [31:0]   other_encode_axi4lite_ar_payload_addr;
  wire       [2:0]    other_encode_axi4lite_ar_payload_prot;
  wire                other_encode_axi4lite_r_ready;
  wire       [31:0]   other_csr_com_encode_r_data;
  wire       [31:0]   other_csr_com_encode_r_pc;
  wire       [31:0]   other_grp_com_encode_rs1;
  wire       [31:0]   other_grp_com_encode_rs2;
  wire                aximem_1_axi4lite_aw_ready;
  wire                aximem_1_axi4lite_w_ready;
  wire                aximem_1_axi4lite_b_valid;
  wire       [1:0]    aximem_1_axi4lite_b_payload_resp;
  wire                aximem_1_axi4lite_ar_ready;
  wire                aximem_1_axi4lite_r_valid;
  wire       [31:0]   aximem_1_axi4lite_r_payload_data;
  wire       [1:0]    aximem_1_axi4lite_r_payload_resp;
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
  wire                axiarbiter_1_AxiOut_aw_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_aw_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_aw_payload_prot;
  wire                axiarbiter_1_AxiOut_w_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_w_payload_data;
  wire       [3:0]    axiarbiter_1_AxiOut_w_payload_strb;
  wire                axiarbiter_1_AxiOut_b_ready;
  wire                axiarbiter_1_AxiOut_ar_valid;
  wire       [31:0]   axiarbiter_1_AxiOut_ar_payload_addr;
  wire       [2:0]    axiarbiter_1_AxiOut_ar_payload_prot;
  wire                axiarbiter_1_AxiOut_r_ready;
  wire                axiarbiter_1__zz_axir;
  wire                ctrl_u_vaild_0;
  wire                ctrl_u_vaild_1;
  wire                ctrl_u_vaild_2;
  wire                ctrl_u_vaild_3;
  wire                ctrl_u_vaild_4;
  wire                ctrl__zz_clear;
  wire                u_vaild_0;
  wire                u_vaild_1;
  wire                u_vaild_2;
  wire                u_vaild_3;
  wire                u_vaild_4;
  wire                pc_newClockEnable;
  wire                other_newClockEnable;

  PC pc_pc (
    .com_encode_code          (pc_pc_com_encode_code[31:0]              ), //o
    .com_encode_nPC           (other_encode_com_pc_nPC[31:0]            ), //i
    .com_encode_nPC_vaild     (other_encode_com_pc_nPC_vaild            ), //i
    .com_encode_PC            (pc_pc_com_encode_PC[31:0]                ), //o
    .axi4lite_ar_valid        (pc_pc_axi4lite_ar_valid                  ), //o
    .axi4lite_ar_ready        (axiarbiter_1_AxiIn_0_ar_ready            ), //i
    .axi4lite_ar_payload_addr (pc_pc_axi4lite_ar_payload_addr[31:0]     ), //o
    .axi4lite_ar_payload_prot (pc_pc_axi4lite_ar_payload_prot[2:0]      ), //o
    .axi4lite_r_valid         (axiarbiter_1_AxiIn_0_r_valid             ), //i
    .axi4lite_r_ready         (pc_pc_axi4lite_r_ready                   ), //o
    .axi4lite_r_payload_data  (axiarbiter_1_AxiIn_0_r_payload_data[31:0]), //i
    .axi4lite_r_payload_resp  (axiarbiter_1_AxiIn_0_r_payload_resp[1:0] ), //i
    .clk                      (clk                                      ), //i
    .rst                      (rst                                      ), //i
    .pc_newClockEnable        (pc_newClockEnable                        )  //i
  );
  Encode other_encode (
    .com_grp_rd               (other_encode_com_grp_rd[31:0]              ), //o
    .com_grp_rd_sel           (other_encode_com_grp_rd_sel[4:0]           ), //o
    .com_grp_rd_vaild         (other_encode_com_grp_rd_vaild              ), //o
    .com_grp_rs1              (other_grp_com_encode_rs1[31:0]             ), //i
    .com_grp_rs1_sel          (other_encode_com_grp_rs1_sel[4:0]          ), //o
    .com_grp_rs2              (other_grp_com_encode_rs2[31:0]             ), //i
    .com_grp_rs2_sel          (other_encode_com_grp_rs2_sel[4:0]          ), //o
    .com_pc_code              (pc_pc_com_encode_code[31:0]                ), //i
    .com_pc_nPC               (other_encode_com_pc_nPC[31:0]              ), //o
    .com_pc_nPC_vaild         (other_encode_com_pc_nPC_vaild              ), //o
    .com_pc_PC                (pc_pc_com_encode_PC[31:0]                  ), //i
    .com_csr_w_data           (other_encode_com_csr_w_data[31:0]          ), //o
    .com_csr_r_data           (other_csr_com_encode_r_data[31:0]          ), //i
    .com_csr_vaild            (other_encode_com_csr_vaild                 ), //o
    .com_csr_csr_sel          (other_encode_com_csr_csr_sel[11:0]         ), //o
    .com_csr_ecall            (other_encode_com_csr_ecall                 ), //o
    .com_csr_w_pc             (other_encode_com_csr_w_pc[31:0]            ), //o
    .com_csr_r_pc             (other_csr_com_encode_r_pc[31:0]            ), //i
    .com_csr_mret             (other_encode_com_csr_mret                  ), //o
    .axi4lite_aw_valid        (other_encode_axi4lite_aw_valid             ), //o
    .axi4lite_aw_ready        (axiarbiter_1_AxiIn_1_aw_ready              ), //i
    .axi4lite_aw_payload_addr (other_encode_axi4lite_aw_payload_addr[31:0]), //o
    .axi4lite_aw_payload_prot (other_encode_axi4lite_aw_payload_prot[2:0] ), //o
    .axi4lite_w_valid         (other_encode_axi4lite_w_valid              ), //o
    .axi4lite_w_ready         (axiarbiter_1_AxiIn_1_w_ready               ), //i
    .axi4lite_w_payload_data  (other_encode_axi4lite_w_payload_data[31:0] ), //o
    .axi4lite_w_payload_strb  (other_encode_axi4lite_w_payload_strb[3:0]  ), //o
    .axi4lite_b_valid         (axiarbiter_1_AxiIn_1_b_valid               ), //i
    .axi4lite_b_ready         (other_encode_axi4lite_b_ready              ), //o
    .axi4lite_b_payload_resp  (axiarbiter_1_AxiIn_1_b_payload_resp[1:0]   ), //i
    .axi4lite_ar_valid        (other_encode_axi4lite_ar_valid             ), //o
    .axi4lite_ar_ready        (axiarbiter_1_AxiIn_1_ar_ready              ), //i
    .axi4lite_ar_payload_addr (other_encode_axi4lite_ar_payload_addr[31:0]), //o
    .axi4lite_ar_payload_prot (other_encode_axi4lite_ar_payload_prot[2:0] ), //o
    .axi4lite_r_valid         (axiarbiter_1_AxiIn_1_r_valid               ), //i
    .axi4lite_r_ready         (other_encode_axi4lite_r_ready              ), //o
    .axi4lite_r_payload_data  (axiarbiter_1_AxiIn_1_r_payload_data[31:0]  ), //i
    .axi4lite_r_payload_resp  (axiarbiter_1_AxiIn_1_r_payload_resp[1:0]   )  //i
  );
  CSR other_csr (
    .com_encode_w_data    (other_encode_com_csr_w_data[31:0] ), //i
    .com_encode_r_data    (other_csr_com_encode_r_data[31:0] ), //o
    .com_encode_vaild     (other_encode_com_csr_vaild        ), //i
    .com_encode_csr_sel   (other_encode_com_csr_csr_sel[11:0]), //i
    .com_encode_ecall     (other_encode_com_csr_ecall        ), //i
    .com_encode_w_pc      (other_encode_com_csr_w_pc[31:0]   ), //i
    .com_encode_r_pc      (other_csr_com_encode_r_pc[31:0]   ), //o
    .com_encode_mret      (other_encode_com_csr_mret         ), //i
    .clk                  (clk                               ), //i
    .rst                  (rst                               ), //i
    .other_newClockEnable (other_newClockEnable              )  //i
  );
  GRP other_grp (
    .com_encode_rd        (other_encode_com_grp_rd[31:0]    ), //i
    .com_encode_rd_sel    (other_encode_com_grp_rd_sel[4:0] ), //i
    .com_encode_rd_vaild  (other_encode_com_grp_rd_vaild    ), //i
    .com_encode_rs1       (other_grp_com_encode_rs1[31:0]   ), //o
    .com_encode_rs1_sel   (other_encode_com_grp_rs1_sel[4:0]), //i
    .com_encode_rs2       (other_grp_com_encode_rs2[31:0]   ), //o
    .com_encode_rs2_sel   (other_encode_com_grp_rs2_sel[4:0]), //i
    .clk                  (clk                              ), //i
    .rst                  (rst                              ), //i
    .other_newClockEnable (other_newClockEnable             )  //i
  );
  AXImem aximem_1 (
    .axi4lite_aw_valid        (axiarbiter_1_AxiOut_aw_valid             ), //i
    .axi4lite_aw_ready        (aximem_1_axi4lite_aw_ready               ), //o
    .axi4lite_aw_payload_addr (axiarbiter_1_AxiOut_aw_payload_addr[31:0]), //i
    .axi4lite_aw_payload_prot (axiarbiter_1_AxiOut_aw_payload_prot[2:0] ), //i
    .axi4lite_w_valid         (axiarbiter_1_AxiOut_w_valid              ), //i
    .axi4lite_w_ready         (aximem_1_axi4lite_w_ready                ), //o
    .axi4lite_w_payload_data  (axiarbiter_1_AxiOut_w_payload_data[31:0] ), //i
    .axi4lite_w_payload_strb  (axiarbiter_1_AxiOut_w_payload_strb[3:0]  ), //i
    .axi4lite_b_valid         (aximem_1_axi4lite_b_valid                ), //o
    .axi4lite_b_ready         (axiarbiter_1_AxiOut_b_ready              ), //i
    .axi4lite_b_payload_resp  (aximem_1_axi4lite_b_payload_resp[1:0]    ), //o
    .axi4lite_ar_valid        (axiarbiter_1_AxiOut_ar_valid             ), //i
    .axi4lite_ar_ready        (aximem_1_axi4lite_ar_ready               ), //o
    .axi4lite_ar_payload_addr (axiarbiter_1_AxiOut_ar_payload_addr[31:0]), //i
    .axi4lite_ar_payload_prot (axiarbiter_1_AxiOut_ar_payload_prot[2:0] ), //i
    .axi4lite_r_valid         (aximem_1_axi4lite_r_valid                ), //o
    .axi4lite_r_ready         (axiarbiter_1_AxiOut_r_ready              ), //i
    .axi4lite_r_payload_data  (aximem_1_axi4lite_r_payload_data[31:0]   ), //o
    .axi4lite_r_payload_resp  (aximem_1_axi4lite_r_payload_resp[1:0]    ), //o
    .clk                      (clk                                      ), //i
    .rst                      (rst                                      )  //i
  );
  AXIArbiter axiarbiter_1 (
    .AxiIn_0_aw_valid        (1'b0                                       ), //i
    .AxiIn_0_aw_ready        (axiarbiter_1_AxiIn_0_aw_ready              ), //o
    .AxiIn_0_aw_payload_addr (32'h0                                      ), //i
    .AxiIn_0_aw_payload_prot (3'b000                                     ), //i
    .AxiIn_0_w_valid         (1'b0                                       ), //i
    .AxiIn_0_w_ready         (axiarbiter_1_AxiIn_0_w_ready               ), //o
    .AxiIn_0_w_payload_data  (32'h0                                      ), //i
    .AxiIn_0_w_payload_strb  (4'b1111                                    ), //i
    .AxiIn_0_b_valid         (axiarbiter_1_AxiIn_0_b_valid               ), //o
    .AxiIn_0_b_ready         (1'b0                                       ), //i
    .AxiIn_0_b_payload_resp  (axiarbiter_1_AxiIn_0_b_payload_resp[1:0]   ), //o
    .AxiIn_0_ar_valid        (pc_pc_axi4lite_ar_valid                    ), //i
    .AxiIn_0_ar_ready        (axiarbiter_1_AxiIn_0_ar_ready              ), //o
    .AxiIn_0_ar_payload_addr (pc_pc_axi4lite_ar_payload_addr[31:0]       ), //i
    .AxiIn_0_ar_payload_prot (pc_pc_axi4lite_ar_payload_prot[2:0]        ), //i
    .AxiIn_0_r_valid         (axiarbiter_1_AxiIn_0_r_valid               ), //o
    .AxiIn_0_r_ready         (pc_pc_axi4lite_r_ready                     ), //i
    .AxiIn_0_r_payload_data  (axiarbiter_1_AxiIn_0_r_payload_data[31:0]  ), //o
    .AxiIn_0_r_payload_resp  (axiarbiter_1_AxiIn_0_r_payload_resp[1:0]   ), //o
    .AxiIn_1_aw_valid        (other_encode_axi4lite_aw_valid             ), //i
    .AxiIn_1_aw_ready        (axiarbiter_1_AxiIn_1_aw_ready              ), //o
    .AxiIn_1_aw_payload_addr (other_encode_axi4lite_aw_payload_addr[31:0]), //i
    .AxiIn_1_aw_payload_prot (other_encode_axi4lite_aw_payload_prot[2:0] ), //i
    .AxiIn_1_w_valid         (other_encode_axi4lite_w_valid              ), //i
    .AxiIn_1_w_ready         (axiarbiter_1_AxiIn_1_w_ready               ), //o
    .AxiIn_1_w_payload_data  (other_encode_axi4lite_w_payload_data[31:0] ), //i
    .AxiIn_1_w_payload_strb  (other_encode_axi4lite_w_payload_strb[3:0]  ), //i
    .AxiIn_1_b_valid         (axiarbiter_1_AxiIn_1_b_valid               ), //o
    .AxiIn_1_b_ready         (other_encode_axi4lite_b_ready              ), //i
    .AxiIn_1_b_payload_resp  (axiarbiter_1_AxiIn_1_b_payload_resp[1:0]   ), //o
    .AxiIn_1_ar_valid        (other_encode_axi4lite_ar_valid             ), //i
    .AxiIn_1_ar_ready        (axiarbiter_1_AxiIn_1_ar_ready              ), //o
    .AxiIn_1_ar_payload_addr (other_encode_axi4lite_ar_payload_addr[31:0]), //i
    .AxiIn_1_ar_payload_prot (other_encode_axi4lite_ar_payload_prot[2:0] ), //i
    .AxiIn_1_r_valid         (axiarbiter_1_AxiIn_1_r_valid               ), //o
    .AxiIn_1_r_ready         (other_encode_axi4lite_r_ready              ), //i
    .AxiIn_1_r_payload_data  (axiarbiter_1_AxiIn_1_r_payload_data[31:0]  ), //o
    .AxiIn_1_r_payload_resp  (axiarbiter_1_AxiIn_1_r_payload_resp[1:0]   ), //o
    .AxiOut_aw_valid         (axiarbiter_1_AxiOut_aw_valid               ), //o
    .AxiOut_aw_ready         (aximem_1_axi4lite_aw_ready                 ), //i
    .AxiOut_aw_payload_addr  (axiarbiter_1_AxiOut_aw_payload_addr[31:0]  ), //o
    .AxiOut_aw_payload_prot  (axiarbiter_1_AxiOut_aw_payload_prot[2:0]   ), //o
    .AxiOut_w_valid          (axiarbiter_1_AxiOut_w_valid                ), //o
    .AxiOut_w_ready          (aximem_1_axi4lite_w_ready                  ), //i
    .AxiOut_w_payload_data   (axiarbiter_1_AxiOut_w_payload_data[31:0]   ), //o
    .AxiOut_w_payload_strb   (axiarbiter_1_AxiOut_w_payload_strb[3:0]    ), //o
    .AxiOut_b_valid          (aximem_1_axi4lite_b_valid                  ), //i
    .AxiOut_b_ready          (axiarbiter_1_AxiOut_b_ready                ), //o
    .AxiOut_b_payload_resp   (aximem_1_axi4lite_b_payload_resp[1:0]      ), //i
    .AxiOut_ar_valid         (axiarbiter_1_AxiOut_ar_valid               ), //o
    .AxiOut_ar_ready         (aximem_1_axi4lite_ar_ready                 ), //i
    .AxiOut_ar_payload_addr  (axiarbiter_1_AxiOut_ar_payload_addr[31:0]  ), //o
    .AxiOut_ar_payload_prot  (axiarbiter_1_AxiOut_ar_payload_prot[2:0]   ), //o
    .AxiOut_r_valid          (aximem_1_axi4lite_r_valid                  ), //i
    .AxiOut_r_ready          (axiarbiter_1_AxiOut_r_ready                ), //o
    .AxiOut_r_payload_data   (aximem_1_axi4lite_r_payload_data[31:0]     ), //i
    .AxiOut_r_payload_resp   (aximem_1_axi4lite_r_payload_resp[1:0]      ), //i
    .clear                   (ctrl__zz_clear                             ), //i
    ._zz_axir                (axiarbiter_1__zz_axir                      ), //o
    .clk                     (clk                                        ), //i
    .rst                     (rst                                        )  //i
  );
  AllCtrl ctrl (
    .u_vaild_0 (ctrl_u_vaild_0       ), //o
    .u_vaild_1 (ctrl_u_vaild_1       ), //o
    .u_vaild_2 (ctrl_u_vaild_2       ), //o
    .u_vaild_3 (ctrl_u_vaild_3       ), //o
    .u_vaild_4 (ctrl_u_vaild_4       ), //o
    .axir      (axiarbiter_1__zz_axir), //i
    ._zz_clear (ctrl__zz_clear       ), //o
    .clk       (clk                  ), //i
    .rst       (rst                  )  //i
  );
  assign pc_newClockEnable = (1'b1 && u_vaild_1);
  assign other_newClockEnable = (1'b1 && u_vaild_3);
  assign u_vaild_0 = ctrl_u_vaild_0;
  assign u_vaild_1 = ctrl_u_vaild_1;
  assign u_vaild_2 = ctrl_u_vaild_2;
  assign u_vaild_3 = ctrl_u_vaild_3;
  assign u_vaild_4 = ctrl_u_vaild_4;

endmodule
