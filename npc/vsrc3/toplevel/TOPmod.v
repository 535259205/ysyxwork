/******************************************************************************
 ** Logisim-evolution goes FPGA automatic generated Verilog code             **
 ** https://github.com/logisim-evolution/                                    **
 **                                                                          **
 ** Component : logisimTopLevelShell                                         **
 **                                                                          **
 *****************************************************************************/

module TOPmod( clock,
                             reset );

   /*******************************************************************************
   ** The inputs are defined here                                                **
   *******************************************************************************/
   input clock;
   input reset;

   /*******************************************************************************
   ** The wires are defined here                                                 **
   *******************************************************************************/
   wire       s_fpgaTick;
   wire [4:0] s_logisimClockTree0;
   wire       s_reset;
   wire       s_synthesizedClock;

   /*******************************************************************************
   ** The module functionality is described here                                 **
   *******************************************************************************/

   /*******************************************************************************
   ** All signal adaptations are performed here                                  **
   *******************************************************************************/
   assign s_reset = reset;

   /*******************************************************************************
   ** The clock tree components are defined here                                 **
   *******************************************************************************/
   synthesizedClockGenerator   BASE_0 (.FPGAClock(clock),
                                       .SynthesizedClock(s_synthesizedClock));

   logisimTickGenerator #(.nrOfBits(3),
                          .reloadValue(4))
      BASE_1 (.FPGAClock(s_synthesizedClock),
              .FPGATick(s_fpgaTick));

   LogisimClockComponent #(.highTicks(1),
                           .lowTicks(1),
                           .nrOfBits(1),
                           .phase(1))
      BASE_2 (.clockBus(s_logisimClockTree0),
              .clockTick(s_fpgaTick),
              .globalClock(s_synthesizedClock));

   /*******************************************************************************
   ** The toplevel component is connected here                                   **
   *******************************************************************************/
   main   CIRCUIT_0 (.logisimClockTree0(s_logisimClockTree0),
                     .reset(s_reset));
endmodule
