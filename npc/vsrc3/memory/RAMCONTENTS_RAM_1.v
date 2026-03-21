/******************************************************************************
 ** Logisim-evolution goes FPGA automatic generated Verilog code             **
 ** https://github.com/logisim-evolution/                                    **
 **                                                                          **
 ** Component : RAMCONTENTS_RAM_1                                            **
 **                                                                          **
 *****************************************************************************/

module RAMCONTENTS_RAM_1( address,
                          byteEnable0,
                          byteEnable1,
                          byteEnable2,
                          byteEnable3,
                          clock,
                          dataIn,
                          dataOut,
                          oe,
                          tick,
                          we );

   /*******************************************************************************
   ** Here all private types are defined                                         **
   *******************************************************************************/
      typedef logic [7:0] byteArray [1048576:0];

   /*******************************************************************************
   ** The inputs are defined here                                                **
   *******************************************************************************/
   input [19:0] address;
   input        byteEnable0;
   input        byteEnable1;
   input        byteEnable2;
   input        byteEnable3;
   input        clock;
   input [31:0] dataIn;
   input        oe;
   input        tick;
   input        we;

   /*******************************************************************************
   ** The outputs are defined here                                               **
   *******************************************************************************/
   output [31:0] dataOut;

   /*******************************************************************************
   ** The wires are defined here                                                 **
   *******************************************************************************/
   wire        s_byteEnable0;
   wire        s_byteEnable1;
   wire        s_byteEnable2;
   wire        s_byteEnable3;
   wire [19:0] s_ramAddress;
   wire        s_we0;
   wire        s_we1;
   wire        s_we2;
   wire        s_we3;

   /*******************************************************************************
   ** The registers are defined here                                             **
   *******************************************************************************/
   reg [3:0]  s_byteEnableReg;
   reg [31:0] s_dataInReg;
   reg [31:0] s_dataOutReg;
   reg        s_oeReg;
   reg [31:0] s_ramDataOut;
   reg [19:0] s_readAddressReg;
   reg [2:0]  s_tickDelayLine;
   reg        s_weReg;
   reg [19:0] s_writeAddressReg;

   /*******************************************************************************
   ** The type defined signals are defined here                                  **
   *******************************************************************************/
   byteArray s_byteMem0Contents;
   byteArray s_byteMem1Contents;
   byteArray s_byteMem2Contents;
   byteArray s_byteMem3Contents;

   /*******************************************************************************
   ** The module functionality is described here                                 **
   *******************************************************************************/

   /*******************************************************************************
   ** The control signals are defined here                                       **
   *******************************************************************************/
   assign s_byteEnable0 = s_byteEnableReg[0] & s_tickDelayLine[2] & s_oeReg;
   assign s_we0         = s_byteEnableReg[0] & s_tickDelayLine[2] & s_weReg;
   assign s_byteEnable1 = s_byteEnableReg[1] & s_tickDelayLine[2] & s_oeReg;
   assign s_we1         = s_byteEnableReg[1] & s_tickDelayLine[2] & s_weReg;
   assign s_byteEnable2 = s_byteEnableReg[2] & s_tickDelayLine[2] & s_oeReg;
   assign s_we2         = s_byteEnableReg[2] & s_tickDelayLine[2] & s_weReg;
   assign s_byteEnable3 = s_byteEnableReg[3] & s_tickDelayLine[2] & s_oeReg;
   assign s_we3         = s_byteEnableReg[3] & s_tickDelayLine[2] & s_weReg;

   /*******************************************************************************
   ** The input registers are defined here                                       **
   *******************************************************************************/
   always @(posedge clock)
   begin
     s_readAddressReg <= (s_tickDelayLine[0] == 1'b1) ? address : s_readAddressReg;
      if (tick == 1'b1)
        begin
          s_dataInReg       <= dataIn;
          s_writeAddressReg <= address;
          s_weReg           <= we;
          s_oeReg           <= oe;
          s_byteEnableReg[0] <= byteEnable0;
          s_byteEnableReg[1] <= byteEnable1;
          s_byteEnableReg[2] <= byteEnable2;
          s_byteEnableReg[3] <= byteEnable3;
     end
   end

   always @(posedge clock)
     s_tickDelayLine <= {s_tickDelayLine[1:0], tick};

   /*******************************************************************************
   ** The actual memorie(s) is(are) defined here                                 **
   *******************************************************************************/
   assign s_ramAddress = (s_tickDelayLine[2] == 1'b1) ? s_writeAddressReg : s_readAddressReg;

   always @(posedge clock)
     begin
       if (s_we0 == 1'b1)
         s_byteMem0Contents[s_ramAddress] <= s_dataInReg[7:0];
       s_ramDataOut[7:0] <= s_byteMem0Contents[s_ramAddress];
     end

   always @(posedge clock)
     begin
       if (s_we1 == 1'b1)
         s_byteMem1Contents[s_ramAddress] <= s_dataInReg[15:8];
       s_ramDataOut[15:8] <= s_byteMem1Contents[s_ramAddress];
     end

   always @(posedge clock)
     begin
       if (s_we2 == 1'b1)
         s_byteMem2Contents[s_ramAddress] <= s_dataInReg[23:16];
       s_ramDataOut[23:16] <= s_byteMem2Contents[s_ramAddress];
     end

   always @(posedge clock)
     begin
       if (s_we3 == 1'b1)
         s_byteMem3Contents[s_ramAddress] <= s_dataInReg[31:24];
       s_ramDataOut[31:24] <= s_byteMem3Contents[s_ramAddress];
     end


   /*******************************************************************************
   ** The output register is defined here                                        **
   *******************************************************************************/
   assign dataOut = s_dataOutReg;
   always @(posedge clock)
     if (s_byteEnable0 == 1'b1)
       s_dataOutReg[7:0] <= s_ramDataOut[7:0];

   always @(posedge clock)
     if (s_byteEnable1 == 1'b1)
       s_dataOutReg[15:8] <= s_ramDataOut[15:8];

   always @(posedge clock)
     if (s_byteEnable2 == 1'b1)
       s_dataOutReg[23:16] <= s_ramDataOut[23:16];

   always @(posedge clock)
     if (s_byteEnable3 == 1'b1)
       s_dataOutReg[31:24] <= s_ramDataOut[31:24];


endmodule
