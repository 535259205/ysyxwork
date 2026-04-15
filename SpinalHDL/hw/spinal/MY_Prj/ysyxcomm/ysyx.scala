package MY_Prj.ysyxcomm
import spinal.core._
import spinal.lib._
import spinal.lib.misc.pipeline._
import spinal.lib.fsm._

import RVFun.RVCodeDef
import spinal.lib.bus.amba4.axi._
import scala.tools.nsc.doc.html.HtmlTags.Tr

import pipCPU.test_cpu


object Ysyx{

val axi4_config =Axi4Config(
    addressWidth = 32,
    dataWidth = 32,
    idWidth = 4,
    useId = true,
    useProt = false,
    useQos = false,
    useCache = false,
    useLock = false,
    useRegion = false,
  )



case class ysyx_axi_master() extends Bundle{

/*
| `input`  |          | `io_master_awready` |
| `output` |          | `io_master_awvalid` |
| `output` | `[31:0]` | `io_master_awaddr`  |
| `output` | `[3:0]`  | `io_master_awid`    |
| `output` | `[7:0]`  | `io_master_awlen`   |
| `output` | `[2:0]`  | `io_master_awsize`  |
| `output` | `[1:0]`  | `io_master_awburst` |
| `input`  |          | `io_master_wready`  |
| `output` |          | `io_master_wvalid`  |
| `output` | `[31:0]` | `io_master_wdata`   |
| `output` | `[3:0]`  | `io_master_wstrb`   |
| `output` |          | `io_master_wlast`   |
| `output` |          | `io_master_bready`  |
| `input`  |          | `io_master_bvalid`  |
| `input`  | `[1:0]`  | `io_master_bresp`   |
| `input`  | `[3:0]`  | `io_master_bid`     |
| `input`  |          | `io_master_arready` |
| `output` |          | `io_master_arvalid` |
| `output` | `[31:0]` | `io_master_araddr`  |
| `output` | `[3:0]`  | `io_master_arid`    |
| `output` | `[7:0]`  | `io_master_arlen`   |
| `output` | `[2:0]`  | `io_master_arsize`  |
| `output` | `[1:0]`  | `io_master_arburst` |
| `output` |          | `io_master_rready`  |
| `input`  |          | `io_master_rvalid`  |
| `input`  | `[1:0]`  | `io_master_rresp`   |
| `input`  | `[31:0]` | `io_master_rdata`   |
| `input`  |          | `io_master_rlast`   |
| `input`  | `[3:0]`  | `io_master_rid`     |
   */
    val awready=in(Bool())
    val awvalid=out(Bool())
    val awaddr=out(Bits(32 bits))
    val awid=out(UInt(4 bits))
    val awlen=out(UInt(8 bits))
    val awsize=out(UInt(3 bits))
    val awburst=out(Bits(2 bits))

    val wready=in(Bool())
    val wvalid=out(Bool())
    val wdata=out(Bits(32 bits))
    val wstrb=out(Bits(4 bits))
    val wlast=out(Bool())

    val bready=out(Bool())
    val bvalid=in(Bool())
    val bresp=in(Bits(2 bits))
    val bid=in(UInt(4 bits))

    val arready=in(Bool())
    val arvalid=out(Bool())
    val araddr=out(Bits(32 bits))
    val arid=out(UInt(4 bits))
    val arlen=out(UInt(8 bits))
    val arsize=out(UInt(3 bits))
    val arburst=out(Bits(2 bits))

    val rready=out(Bool())
    val rvalid=in(Bool())
    val rresp=in(Bits(2 bits))
    val rdata=in(Bits(32 bits))
    val rlast=in(Bool())
    val rid=in(UInt(4 bits))
}


case class AXITrun() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val io_master= new ysyx_axi_master().flip
    val io_slave= new ysyx_axi_master()
    val axi_m=master( Axi4(axi4_config))
    val axi_s=slave( Axi4(axi4_config))
  }
  // AW通道 (io_master -> axi_m)
  io.io_master.awready<>io.axi_m.aw.ready
  io.io_master.awvalid<>io.axi_m.aw.valid
  io.io_master.awaddr<>io.axi_m.aw.payload.addr.asBits
  io.io_master.awid<>io.axi_m.aw.payload.id
  io.io_master.awlen<>io.axi_m.aw.payload.len
  io.io_master.awsize<>io.axi_m.aw.payload.size
  io.io_master.awburst<>io.axi_m.aw.payload.burst
  io.axi_m.aw.payload.addr<>io.io_master.awaddr.asUInt

  // W通道 (io_master -> axi_m)
  io.io_master.wready<>io.axi_m.w.ready
  io.io_master.wvalid<>io.axi_m.w.valid
  io.io_master.wdata<>io.axi_m.w.payload.data
  io.io_master.wstrb<>io.axi_m.w.payload.strb
  io.io_master.wlast<>io.axi_m.w.payload.last

  // B通道 (io_master <- axi_m)
  io.io_master.bready<>io.axi_m.b.ready
  io.io_master.bvalid<>io.axi_m.b.valid
  io.io_master.bresp<>io.axi_m.b.payload.resp
  io.io_master.bid<>io.axi_m.b.payload.id

  // AR通道 (io_master -> axi_m)
  io.io_master.arready<>io.axi_m.ar.ready
  io.io_master.arvalid<>io.axi_m.ar.valid
  io.axi_m.ar.payload.addr<>io.io_master.araddr.asUInt
  io.io_master.arid<>io.axi_m.ar.payload.id
  io.io_master.arlen<>io.axi_m.ar.payload.len
  io.io_master.arsize<>io.axi_m.ar.payload.size
  io.axi_m.ar.payload.burst<>io.io_master.arburst//

  // R通道 (io_master <- axi_m)
  io.io_master.rready<>io.axi_m.r.ready
  io.io_master.rvalid<>io.axi_m.r.valid
  io.io_master.rresp<>io.axi_m.r.payload.resp
  io.io_master.rdata<>io.axi_m.r.payload.data
  io.io_master.rlast<>io.axi_m.r.payload.last
  io.io_master.rid<>io.axi_m.r.payload.id

  // AW通道 (io_slave <- axi_s)
  io.io_slave.awready<>io.axi_s.aw.ready
  io.io_slave.awvalid<>io.axi_s.aw.valid
  io.io_slave.awaddr<>io.axi_s.aw.payload.addr.asBits
  io.io_slave.awid<>io.axi_s.aw.payload.id
  io.io_slave.awlen<>io.axi_s.aw.payload.len
  io.io_slave.awsize<>io.axi_s.aw.payload.size
  io.io_slave.awburst<>io.axi_s.aw.payload.burst

  // W通道 (io_slave <- axi_s)
  io.io_slave.wready<>io.axi_s.w.ready
  io.io_slave.wvalid<>io.axi_s.w.valid
  io.io_slave.wdata<>io.axi_s.w.payload.data
  io.io_slave.wstrb<>io.axi_s.w.payload.strb
  io.io_slave.wlast<>io.axi_s.w.payload.last

  // B通道 (io_slave -> axi_s)
  io.io_slave.bready<>io.axi_s.b.ready
  io.io_slave.bvalid<>io.axi_s.b.valid
  io.io_slave.bresp<>io.axi_s.b.payload.resp
  io.io_slave.bid<>io.axi_s.b.payload.id

  // AR通道 (io_slave <- axi_s)
  io.io_slave.arready<>io.axi_s.ar.ready
  io.io_slave.arvalid<>io.axi_s.ar.valid
  io.io_slave.araddr<>io.axi_s.ar.payload.addr.asBits
  io.io_slave.arid<>io.axi_s.ar.payload.id
  io.io_slave.arlen<>io.axi_s.ar.payload.len
  io.io_slave.arsize<>io.axi_s.ar.payload.size
  io.io_slave.arburst<>io.axi_s.ar.payload.burst

  // R通道 (io_slave -> axi_s)
  io.io_slave.rready<>io.axi_s.r.ready
  io.io_slave.rvalid<>io.axi_s.r.valid
  io.io_slave.rresp<>io.axi_s.r.payload.resp
  io.io_slave.rdata<>io.axi_s.r.payload.data
  io.io_slave.rlast<>io.axi_s.r.payload.last
  io.io_slave.rid<>io.axi_s.r.payload.id
}



}


object MyBlackBox{

case class mem_fun() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val clk =in Bool()
    val rst =in Bool()

    val wen=in(Bool)
    val w_data=in(Bits(32 bits))
    val w_addr=in(Bits(32 bits))
    val w_len=in(Bits(2 bits))

    val ren=in(Bool())
    val r_data=out(Bits(32 bits))
    val r_addr=in(Bits(32 bits))
    val r_len =in(UInt(2 bits))
  }
}

case class rom_fun() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val clk = in(Bool())
    val addr=in(Bits(32 bits))
    val code=out(Bits(32 bits))
  }
}

case class ebreak_fun() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val ebreak_flag=in(Bool)
  }
  this.setBlackBoxName("ysyx_26010010_ebreak_fun")
setInlineVerilog(
"""
    |module ysyx_26010010_ebreak_fun(
    |  input ebreak_flag
    |);
    |
    |`ifndef SYNTHESIS
    |  `ifndef USE_IVERILOG
    |import "DPI-C" function void ebreak(input int test);
    |always@(*)
    |begin
    |  if(ebreak_flag)
    |    ebreak(1);
    |end 
    |
    |  `else
    |always@(*)
    |begin
    |  if(ebreak_flag)
    |    $sys_ctr(32'd800,32'd1);
    |end 
    |
    |  `endif
    |`endif
    |
    |endmodule
  |    """.stripMargin
  )


}

case class debug_fun() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val clk = in(Bool())
    val addr=in(Bits(32 bits))
    val data=in(Bits(32 bits))
  }
  this.setBlackBoxName("ysyx_26010010_debug_fun")
  setInlineVerilog(
"""
    |module ysyx_26010010_debug_fun(
    |  input               clk,
    |  input         [31:0]addr,
    |  input         [31:0]data
    |);
    |`ifndef SYNTHESIS
    |
    |  `ifndef USE_IVERILOG
    |
    |import "DPI-C" function void debug(input int addr,input int data);
    |always @(posedge clk)
    |begin
    |    debug(addr,data);
    |end
    |  `else 
    |always @(posedge clk)
    |begin
    |    $sys_ctr(addr,data);
    |end
    |
    |  `endif
    |`endif
    |
    |
    |endmodule
  |    """.stripMargin
  )
}

case class step_fun() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val step=in(Bool())
    val clk = in(Bool())
  }
  this.setBlackBoxName("ysyx_26010010_step_fun")
  setInlineVerilog(
"""
      |module ysyx_26010010_step_fun(
      |  input step,
      |  input clk
      |);
      |`ifndef SYNTHESIS
      |
      |`ifndef USE_IVERILOG
      |import "DPI-C" function void SimStep1(input int step_data);
      |always@(posedge clk)
      |begin
      |    if(step)
      |    SimStep1(1);
      |end 
      |`else
      |
      |always@(posedge step)
      |begin
      |    $sys_ctr(32'd801,1);
      |end 
      |
      |`endif 
      |`endif
      |endmodule


  |    """.stripMargin
  )

}

case class my_debug(start_addr:Int , num:Int) extends Component{
  noIoPrefix()
  val io = new Bundle{
    val data=in(Vec(Bits(32 bits),num))
  }
  for(i<-0 until num){
    val debug = new MyBlackBox.debug_fun()
    debug.io.clk:=ClockDomain.current.readClockWire
    debug.io.addr:=start_addr+i
    debug.io.data:=io.data(i)
  }
  }

case class mmio_fun() extends BlackBox{
  noIoPrefix()
  val io =new Bundle{
    val clk =in Bool()
    val rst =in Bool()

    val wen=in(Bool)
    val w_data=in(Bits(32 bits))
    val w_addr=in(Bits(32 bits))
    val w_len=in(Bits(2 bits))

    val ren=in(Bool())
    val r_data=out(Bits(32 bits))
    val r_addr=in(Bits(32 bits))
    val r_len =in(UInt(2 bits))
  }
}
}


