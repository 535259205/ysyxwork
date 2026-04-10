// Generator : SpinalHDL v1.12.3    git head : 591e64062329e5e2e2b81f4d52422948053edb97
// Component : ysyxSoCFull

`timescale 1ns/1ps 
module ysyxSoCFull (
  input  wire          reset,
  input  wire          clock
);
  wire clk=clock;
  wire                soc_axi_mem_aw_valid;
  wire       [31:0]   soc_axi_mem_aw_payload_addr;
  wire       [2:0]    soc_axi_mem_aw_payload_prot;
  wire                soc_axi_mem_w_valid;
  wire       [31:0]   soc_axi_mem_w_payload_data;
  wire       [3:0]    soc_axi_mem_w_payload_strb;
  wire                soc_axi_mem_b_ready;
  wire                soc_axi_mem_ar_valid;
  wire       [31:0]   soc_axi_mem_ar_payload_addr;
  wire       [2:0]    soc_axi_mem_ar_payload_prot;
  wire                soc_axi_mem_r_ready;
  wire                soc_uart1_aw_valid;
  wire       [31:0]   soc_uart1_aw_payload_addr;
  wire       [2:0]    soc_uart1_aw_payload_prot;
  wire                soc_uart1_w_valid;
  wire       [31:0]   soc_uart1_w_payload_data;
  wire       [3:0]    soc_uart1_w_payload_strb;
  wire                soc_uart1_b_ready;
  wire                soc_uart1_ar_valid;
  wire       [31:0]   soc_uart1_ar_payload_addr;
  wire       [2:0]    soc_uart1_ar_payload_prot;
  wire                soc_uart1_r_ready;
  wire                soc_uart2_aw_valid;
  wire       [31:0]   soc_uart2_aw_payload_addr;
  wire       [2:0]    soc_uart2_aw_payload_prot;
  wire                soc_uart2_w_valid;
  wire       [31:0]   soc_uart2_w_payload_data;
  wire       [3:0]    soc_uart2_w_payload_strb;
  wire                soc_uart2_b_ready;
  wire                soc_uart2_ar_valid;
  wire       [31:0]   soc_uart2_ar_payload_addr;
  wire       [2:0]    soc_uart2_ar_payload_prot;
  wire                soc_uart2_r_ready;
  wire                uart1_AxiIn_aw_ready;
  wire                uart1_AxiIn_w_ready;
  wire                uart1_AxiIn_b_valid;
  wire       [1:0]    uart1_AxiIn_b_payload_resp;
  wire                uart1_AxiIn_ar_ready;
  wire                uart1_AxiIn_r_valid;
  wire       [31:0]   uart1_AxiIn_r_payload_data;
  wire       [1:0]    uart1_AxiIn_r_payload_resp;
  wire                uart2_AxiIn_aw_ready;
  wire                uart2_AxiIn_w_ready;
  wire                uart2_AxiIn_b_valid;
  wire       [1:0]    uart2_AxiIn_b_payload_resp;
  wire                uart2_AxiIn_ar_ready;
  wire                uart2_AxiIn_r_valid;
  wire       [31:0]   uart2_AxiIn_r_payload_data;
  wire       [1:0]    uart2_AxiIn_r_payload_resp;
  wire                aximem_1_axi4lite_aw_ready;
  wire                aximem_1_axi4lite_w_ready;
  wire                aximem_1_axi4lite_b_valid;
  wire       [1:0]    aximem_1_axi4lite_b_payload_resp;
  wire                aximem_1_axi4lite_ar_ready;
  wire                aximem_1_axi4lite_r_valid;
  wire       [31:0]   aximem_1_axi4lite_r_payload_data;
  wire       [1:0]    aximem_1_axi4lite_r_payload_resp;

  CPU soc (
    .axi_mem_aw_valid        (soc_axi_mem_aw_valid                  ), //o
    .axi_mem_aw_ready        (aximem_1_axi4lite_aw_ready            ), //i
    .axi_mem_aw_payload_addr (soc_axi_mem_aw_payload_addr[31:0]     ), //o
    .axi_mem_aw_payload_prot (soc_axi_mem_aw_payload_prot[2:0]      ), //o
    .axi_mem_w_valid         (soc_axi_mem_w_valid                   ), //o
    .axi_mem_w_ready         (aximem_1_axi4lite_w_ready             ), //i
    .axi_mem_w_payload_data  (soc_axi_mem_w_payload_data[31:0]      ), //o
    .axi_mem_w_payload_strb  (soc_axi_mem_w_payload_strb[3:0]       ), //o
    .axi_mem_b_valid         (aximem_1_axi4lite_b_valid             ), //i
    .axi_mem_b_ready         (soc_axi_mem_b_ready                   ), //o
    .axi_mem_b_payload_resp  (aximem_1_axi4lite_b_payload_resp[1:0] ), //i
    .axi_mem_ar_valid        (soc_axi_mem_ar_valid                  ), //o
    .axi_mem_ar_ready        (aximem_1_axi4lite_ar_ready            ), //i
    .axi_mem_ar_payload_addr (soc_axi_mem_ar_payload_addr[31:0]     ), //o
    .axi_mem_ar_payload_prot (soc_axi_mem_ar_payload_prot[2:0]      ), //o
    .axi_mem_r_valid         (aximem_1_axi4lite_r_valid             ), //i
    .axi_mem_r_ready         (soc_axi_mem_r_ready                   ), //o
    .axi_mem_r_payload_data  (aximem_1_axi4lite_r_payload_data[31:0]), //i
    .axi_mem_r_payload_resp  (aximem_1_axi4lite_r_payload_resp[1:0] ), //i
    .uart1_aw_valid          (soc_uart1_aw_valid                    ), //o
    .uart1_aw_ready          (uart1_AxiIn_aw_ready                  ), //i
    .uart1_aw_payload_addr   (soc_uart1_aw_payload_addr[31:0]       ), //o
    .uart1_aw_payload_prot   (soc_uart1_aw_payload_prot[2:0]        ), //o
    .uart1_w_valid           (soc_uart1_w_valid                     ), //o
    .uart1_w_ready           (uart1_AxiIn_w_ready                   ), //i
    .uart1_w_payload_data    (soc_uart1_w_payload_data[31:0]        ), //o
    .uart1_w_payload_strb    (soc_uart1_w_payload_strb[3:0]         ), //o
    .uart1_b_valid           (uart1_AxiIn_b_valid                   ), //i
    .uart1_b_ready           (soc_uart1_b_ready                     ), //o
    .uart1_b_payload_resp    (uart1_AxiIn_b_payload_resp[1:0]       ), //i
    .uart1_ar_valid          (soc_uart1_ar_valid                    ), //o
    .uart1_ar_ready          (uart1_AxiIn_ar_ready                  ), //i
    .uart1_ar_payload_addr   (soc_uart1_ar_payload_addr[31:0]       ), //o
    .uart1_ar_payload_prot   (soc_uart1_ar_payload_prot[2:0]        ), //o
    .uart1_r_valid           (uart1_AxiIn_r_valid                   ), //i
    .uart1_r_ready           (soc_uart1_r_ready                     ), //o
    .uart1_r_payload_data    (uart1_AxiIn_r_payload_data[31:0]      ), //i
    .uart1_r_payload_resp    (uart1_AxiIn_r_payload_resp[1:0]       ), //i
    .uart2_aw_valid          (soc_uart2_aw_valid                    ), //o
    .uart2_aw_ready          (uart2_AxiIn_aw_ready                  ), //i
    .uart2_aw_payload_addr   (soc_uart2_aw_payload_addr[31:0]       ), //o
    .uart2_aw_payload_prot   (soc_uart2_aw_payload_prot[2:0]        ), //o
    .uart2_w_valid           (soc_uart2_w_valid                     ), //o
    .uart2_w_ready           (uart2_AxiIn_w_ready                   ), //i
    .uart2_w_payload_data    (soc_uart2_w_payload_data[31:0]        ), //o
    .uart2_w_payload_strb    (soc_uart2_w_payload_strb[3:0]         ), //o
    .uart2_b_valid           (uart2_AxiIn_b_valid                   ), //i
    .uart2_b_ready           (soc_uart2_b_ready                     ), //o
    .uart2_b_payload_resp    (uart2_AxiIn_b_payload_resp[1:0]       ), //i
    .uart2_ar_valid          (soc_uart2_ar_valid                    ), //o
    .uart2_ar_ready          (uart2_AxiIn_ar_ready                  ), //i
    .uart2_ar_payload_addr   (soc_uart2_ar_payload_addr[31:0]       ), //o
    .uart2_ar_payload_prot   (soc_uart2_ar_payload_prot[2:0]        ), //o
    .uart2_r_valid           (uart2_AxiIn_r_valid                   ), //i
    .uart2_r_ready           (soc_uart2_r_ready                     ), //o
    .uart2_r_payload_data    (uart2_AxiIn_r_payload_data[31:0]      ), //i
    .uart2_r_payload_resp    (uart2_AxiIn_r_payload_resp[1:0]       ), //i
    .reset                   (reset                                 ), //i
    .clock                   (clk                                   )  //i
  );
  AXIUart uart1 (
    .AxiIn_aw_valid        (soc_uart1_aw_valid              ), //i
    .AxiIn_aw_ready        (uart1_AxiIn_aw_ready            ), //o
    .AxiIn_aw_payload_addr (soc_uart1_aw_payload_addr[31:0] ), //i
    .AxiIn_aw_payload_prot (soc_uart1_aw_payload_prot[2:0]  ), //i
    .AxiIn_w_valid         (soc_uart1_w_valid               ), //i
    .AxiIn_w_ready         (uart1_AxiIn_w_ready             ), //o
    .AxiIn_w_payload_data  (soc_uart1_w_payload_data[31:0]  ), //i
    .AxiIn_w_payload_strb  (soc_uart1_w_payload_strb[3:0]   ), //i
    .AxiIn_b_valid         (uart1_AxiIn_b_valid             ), //o
    .AxiIn_b_ready         (soc_uart1_b_ready               ), //i
    .AxiIn_b_payload_resp  (uart1_AxiIn_b_payload_resp[1:0] ), //o
    .AxiIn_ar_valid        (soc_uart1_ar_valid              ), //i
    .AxiIn_ar_ready        (uart1_AxiIn_ar_ready            ), //o
    .AxiIn_ar_payload_addr (soc_uart1_ar_payload_addr[31:0] ), //i
    .AxiIn_ar_payload_prot (soc_uart1_ar_payload_prot[2:0]  ), //i
    .AxiIn_r_valid         (uart1_AxiIn_r_valid             ), //o
    .AxiIn_r_ready         (soc_uart1_r_ready               ), //i
    .AxiIn_r_payload_data  (uart1_AxiIn_r_payload_data[31:0]), //o
    .AxiIn_r_payload_resp  (uart1_AxiIn_r_payload_resp[1:0] ), //o
    .clk                   (clk                             ), //i
    .reset                 (reset                           )  //i
  );
  AXIUart uart2 (
    .AxiIn_aw_valid        (soc_uart2_aw_valid              ), //i
    .AxiIn_aw_ready        (uart2_AxiIn_aw_ready            ), //o
    .AxiIn_aw_payload_addr (soc_uart2_aw_payload_addr[31:0] ), //i
    .AxiIn_aw_payload_prot (soc_uart2_aw_payload_prot[2:0]  ), //i
    .AxiIn_w_valid         (soc_uart2_w_valid               ), //i
    .AxiIn_w_ready         (uart2_AxiIn_w_ready             ), //o
    .AxiIn_w_payload_data  (soc_uart2_w_payload_data[31:0]  ), //i
    .AxiIn_w_payload_strb  (soc_uart2_w_payload_strb[3:0]   ), //i
    .AxiIn_b_valid         (uart2_AxiIn_b_valid             ), //o
    .AxiIn_b_ready         (soc_uart2_b_ready               ), //i
    .AxiIn_b_payload_resp  (uart2_AxiIn_b_payload_resp[1:0] ), //o
    .AxiIn_ar_valid        (soc_uart2_ar_valid              ), //i
    .AxiIn_ar_ready        (uart2_AxiIn_ar_ready            ), //o
    .AxiIn_ar_payload_addr (soc_uart2_ar_payload_addr[31:0] ), //i
    .AxiIn_ar_payload_prot (soc_uart2_ar_payload_prot[2:0]  ), //i
    .AxiIn_r_valid         (uart2_AxiIn_r_valid             ), //o
    .AxiIn_r_ready         (soc_uart2_r_ready               ), //i
    .AxiIn_r_payload_data  (uart2_AxiIn_r_payload_data[31:0]), //o
    .AxiIn_r_payload_resp  (uart2_AxiIn_r_payload_resp[1:0] ), //o
    .clk                   (clk                             ), //i
    .reset                 (reset                           )  //i
  );
  AXImem aximem_1 (
    .axi4lite_aw_valid        (soc_axi_mem_aw_valid                  ), //i
    .axi4lite_aw_ready        (aximem_1_axi4lite_aw_ready            ), //o
    .axi4lite_aw_payload_addr (soc_axi_mem_aw_payload_addr[31:0]     ), //i
    .axi4lite_aw_payload_prot (soc_axi_mem_aw_payload_prot[2:0]      ), //i
    .axi4lite_w_valid         (soc_axi_mem_w_valid                   ), //i
    .axi4lite_w_ready         (aximem_1_axi4lite_w_ready             ), //o
    .axi4lite_w_payload_data  (soc_axi_mem_w_payload_data[31:0]      ), //i
    .axi4lite_w_payload_strb  (soc_axi_mem_w_payload_strb[3:0]       ), //i
    .axi4lite_b_valid         (aximem_1_axi4lite_b_valid             ), //o
    .axi4lite_b_ready         (soc_axi_mem_b_ready                   ), //i
    .axi4lite_b_payload_resp  (aximem_1_axi4lite_b_payload_resp[1:0] ), //o
    .axi4lite_ar_valid        (soc_axi_mem_ar_valid                  ), //i
    .axi4lite_ar_ready        (aximem_1_axi4lite_ar_ready            ), //o
    .axi4lite_ar_payload_addr (soc_axi_mem_ar_payload_addr[31:0]     ), //i
    .axi4lite_ar_payload_prot (soc_axi_mem_ar_payload_prot[2:0]      ), //i
    .axi4lite_r_valid         (aximem_1_axi4lite_r_valid             ), //o
    .axi4lite_r_ready         (soc_axi_mem_r_ready                   ), //i
    .axi4lite_r_payload_data  (aximem_1_axi4lite_r_payload_data[31:0]), //o
    .axi4lite_r_payload_resp  (aximem_1_axi4lite_r_payload_resp[1:0] ), //o
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );

endmodule
