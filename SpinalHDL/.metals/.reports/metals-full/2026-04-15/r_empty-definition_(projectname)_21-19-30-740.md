error id: file://<WORKSPACE>/hw/spinal/MY_Prj/McycCPU/MyCpu.scala:
file://<WORKSPACE>/hw/spinal/MY_Prj/McycCPU/MyCpu.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -MY_mod.True.
	 -MY_mod.True#
	 -MY_mod.True().
	 -spinal/core/True.
	 -spinal/core/True#
	 -spinal/core/True().
	 -spinal/lib/True.
	 -spinal/lib/True#
	 -spinal/lib/True().
	 -spinal/lib/experimental/math/True.
	 -spinal/lib/experimental/math/True#
	 -spinal/lib/experimental/math/True().
	 -spinal/lib/com/uart/True.
	 -spinal/lib/com/uart/True#
	 -spinal/lib/com/uart/True().
	 -spinal/lib/fsm/True.
	 -spinal/lib/fsm/True#
	 -spinal/lib/fsm/True().
	 -spinal/lib/pipeline/True.
	 -spinal/lib/pipeline/True#
	 -spinal/lib/pipeline/True().
	 -spinal/lib/misc/pipeline/True.
	 -spinal/lib/misc/pipeline/True#
	 -spinal/lib/misc/pipeline/True().
	 -RVFun.True.
	 -RVFun.True#
	 -RVFun.True().
	 -math/True.
	 -math/True#
	 -math/True().
	 -scala/math/True.
	 -scala/math/True#
	 -scala/math/True().
	 -spinal/core/sim/True.
	 -spinal/core/sim/True#
	 -spinal/core/sim/True().
	 -spinal/lib/com/eth/True.
	 -spinal/lib/com/eth/True#
	 -spinal/lib/com/eth/True().
	 -spinal/lib/bus/amba4/axi/True.
	 -spinal/lib/bus/amba4/axi/True#
	 -spinal/lib/bus/amba4/axi/True().
	 -spinal/lib/bus/amba4/axilite/True.
	 -spinal/lib/bus/amba4/axilite/True#
	 -spinal/lib/bus/amba4/axilite/True().
	 -MY_Prj.ysyxcomm.True.
	 -MY_Prj.ysyxcomm.True#
	 -MY_Prj.ysyxcomm.True().
	 -True.
	 -True#
	 -True().
	 -scala/Predef.True.
	 -scala/Predef.True#
	 -scala/Predef.True().
offset: 3762
uri: file://<WORKSPACE>/hw/spinal/MY_Prj/McycCPU/MyCpu.scala
text:
```scala
// package MY_mod
package MyCpu
import MY_mod._
import spinal.core._
import spinal.lib._
import spinal.lib.experimental.math._
import spinal.lib.com.uart._
import spinal.lib.fsm._
import spinal.lib.pipeline._
import spinal.lib.misc.pipeline._
import RVFun._

import math._
import scala.math._
import java.nio.file.FileAlreadyExistsException
import spinal.core.internals.Operator.BitVector.Add
import spinal.core.sim._
import spinal.lib.fsm.StateDelay
import spinal.lib.com.eth._
import java.lang.reflect.Parameter
import java.nio.BufferUnderflowException
import scala.tools.nsc.backend.jvm.opt.BoxUnbox
import spinal.lib.com.usb.phy.UsbHubLsFs.Ctrl
import spinal.lib.experimental.hdl.VerilogToSpinal
import scala.tools.nsc.PipelineMain.Pipeline
import spinal.lib.bus.amba4.axi._
import spinal.lib.bus.amba4.axilite._
import spinal.lib.bus.amba4.axilite.sim.AxiLite4Master
import spinal.lib.bus.amba4.axilite.sim.AxiLite4WriteOnlyMonitor
import spinal.lib.misc.plic.AxiLite4Plic
import spinal.lib.misc.AxiLite4Clint
import spinal.lib.bus.tilelink.AxiLite4BridgeGen
import spinal.lib.bus.tilelink.fabric.AxiLite4Bridge
import spinal.lib.bus.amba4.axilite.sim.AxiLite4Driver
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.pipeline.Stageable
import spinal.lib
import scala.tools.nsc.doc.html.HtmlTags.Tr

import MY_Prj.ysyxcomm._


case class Encode_GRP() extends Bundle{
  val rd=out(Bits(32 bits))
  val rd_sel=out(UInt(5 bits))
  val rd_vaild=out(Bool)

  val rs1=in(Bits(32 bits))
  val rs1_sel=out(UInt(5 bits))
  val rs2=in(Bits(32 bits))
  val rs2_sel=out(UInt(5 bits))
}

case class Encode_PC() extends Bundle{
  val code = in (Bits(32 bits))
  val nPC=out(Bits(32 bits))
  val nPC_vaild=out(Bool)
  val PC = in(Bits(32 bits))
}

case class Encode_EXmem() extends Bundle{
  val w_vaild=out (Bool())
  val w_ready=in(Bool())
  val w_data=out(Bits(32 bits))
  val w_addr=out(Bits(32 bits))
  val w_len=out(UInt(2 bits))

  val r_vaild=in(Bool())
  val r_ready=out(Bool())
  val r_data=in(Bits(32 bits))
  val r_addr=out(Bits(32 bits))
  val r_len=out(UInt(2 bits))
}

case class Encode_CSR() extends Bundle{
  val w_data=out(Bits(32 bits))
  val r_data=in(Bits(32 bits))
  val vaild = out Bool()
  val csr_sel=out(UInt(12 bits))

  val ecall = out Bool()
  val w_pc    = out Bits(32 bits)
  val r_pc    = in Bits(32 bits)
  val mret  = out Bool()
}

case class PipLine() extends Bundle{
  val Dvaild=out(Bool())//传输下一级的有效信号
  val Dready=in (Bool())//传输下一级的准备信号
  val Uvaild=in (Bool())//传输上一级的有效信号
  val Uready=out(Bool())//传输上一级的准备信号

}

case class Axi4liteMonitor() extends Bundle{
  val ar_ready=in Bool()
  val ar_vaild=in Bool()
  val r_vaild=in Bool()
  val r_ready=in Bool()
  val w_vaild=in Bool()
  val w_ready=in Bool()
}




object MyCpu{
//PC程序指针
case class PC() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val com_encode=new Encode_PC().flip()
    val axi4lite=master(AxiLite4(AxiLite4Config(32,32)))
    val read_en = in Bool()
    val finish = out Bool()
  }
  val PC = io.com_encode.PC
  val code = io.com_encode.code
  val nPC = io.com_encode.nPC
  val nPC_vaild = io.com_encode.nPC_vaild

  val PC_cnt=Reg(UInt(32 bits))init 0x80000000L
  

  val axi = io.axi4lite
  val flag =Reg(Bool()) init False    //保证只进行一次操作
  val npc_flag=Reg(Bool()) init False //保证只进行一次操作
  axi.ar.valid.setAsReg()
  axi.r.ready.setAsReg()
  axi.w.setIdle()
  axi.aw.setIdle()
  axi.b.setBlocked()

  io.finish:=False

  when(axi.ar.fire){axi.ar.valid:=False;axi.r.ready:=True}
  .elsewhen(io.read_en  && !flag){axi.ar.valid:=True;flag:=True}//使能的同时不准备

  when(!io.read_en){flag:=False;npc_flag:=T@@rue}

  when(axi.r.fire){axi.r.ready:=False;io.finish:=True}
  // .elsewhen(axi.r.valid){axi.r.ready:=True}

  axi.ar.payload.addr:=PC.asUInt
  axi.ar.payload.prot:=B"100"//用户模式安全访问，指令访问

  code:=axi.r.payload.data.asBits

    when(axi.r.fire && io.read_en)
    {
      PC_cnt:=PC_cnt+4
    }.elsewhen(nPC_vaild && !npc_flag)
    {
      PC_cnt:=nPC.asUInt
      npc_flag:=True
    }


  PC:=PC_cnt.asBits
  val code_reg = Reg(Bits(32 bits))init 0
  when(axi.r.fire){code_reg:=code}
  val debug = new MyBlackBox.my_debug(32,3)
    debug.io.data(0):=PC_cnt.asBits
    debug.io.data(1):=Mux(nPC_vaild,nPC.asBits,PC_cnt.asBits)
    debug.io.data(2):=code_reg.asBits
}

//内部通用寄存器
case class GRP() extends Component{
  noIoPrefix()
  val io =new Bundle{
    val com_encode=new Encode_GRP().flip()
    val w_vaild=in Bool()
  }
  val reg=Vec(Reg(Bits(32 bits)) init 0,32)
  // reg(0):=0
  val rd_vaild=io.com_encode.rd_vaild & io.w_vaild
  when(rd_vaild){
    when(io.com_encode.rd_sel=/=0){
      reg(io.com_encode.rd_sel):=io.com_encode.rd
    }
  }
  when(io.com_encode.rs1_sel=/=0){
    io.com_encode.rs1:=reg(io.com_encode.rs1_sel)
  }.otherwise{
    io.com_encode.rs1:=0
  }
  when(io.com_encode.rs2_sel=/=0){
    io.com_encode.rs2:=reg(io.com_encode.rs2_sel)
  }.otherwise{
    io.com_encode.rs2:=0
  }
  val debug = new MyBlackBox.my_debug(0,32)
    debug.io.data:=reg
}

//CSR寄存器
case class CSR() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val com_encode=new Encode_CSR().flip()
    val vaild=in Bool()
  }
  val mcycle = Reg(Bits(64 bits))init 0
  val mstatus = Reg(Bits(32 bits))init 0x00001800
  val mcause = Reg(Bits(32 bits))init 0x00B
  val mepc = Reg(Bits(32 bits))init 0
  val mtvec = Reg(Bits(32 bits))init 0x80000000L
  mcycle:=(mcycle.asUInt+1).asBits

  val r_data=io.com_encode.r_data
  val vaild = io.com_encode.vaild
  val ecall = io.com_encode.ecall
  val mret = io.com_encode.mret
  val w_pc = io.com_encode.w_pc
  val r_pc = io.com_encode.r_pc
  r_pc:=0
  switch(io.com_encode.csr_sel){
    is(0xB00){r_data:=mcycle(31 downto 0).asBits}
    is(0xB80){r_data:=mcycle(63 downto 32).asBits}
    is(0x300){r_data:=mstatus}
    is(0x305){r_data:=mtvec}
    is(0x342){r_data:=mcause}
    is(0x341){r_data:=mepc}
    is(0xF11){r_data:=0x79737978L}//mvendorid 读出ysyx
    is(0xF12){r_data:=0x018CE19AL}//marchid 读出学号
    default{r_data:=0}
  }
  when(ecall){
    // mcause:=8
    when(io.vaild){mepc:=(w_pc.asUInt).asBits}
    r_pc:=mtvec
  }.elsewhen(mret){
    r_pc:=(mepc.asUInt).asBits
  }.elsewhen(vaild){
    switch(io.com_encode.csr_sel){
      is(0x300){mstatus:=io.com_encode.w_data}
      is(0x305){mtvec:=io.com_encode.w_data}
      is(0x342){mcause:=io.com_encode.w_data}
      is(0x341){mepc:=io.com_encode.w_data}
    }
  }

  val debug = new MyBlackBox.my_debug(35,6)
    debug.io.data(0):=mtvec.asBits
    debug.io.data(1):=mcause.asBits
    debug.io.data(2):=mstatus.asBits
    debug.io.data(3):=mepc.asBits
    debug.io.data(4):=mcycle(31 downto 0).asBits
    debug.io.data(5):=mcycle(63 downto 32).asBits

}

//ADDRESS [0x8000_0000, 0x80ff_ffff)
case class AXImem() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi4lite = slave(AxiLite4(AxiLite4Config(32,32)))
  }
  val axi = io.axi4lite
  val mem = new MyBlackBox.mem_fun()
  mem.io.clk:=ClockDomain.current.readClockWire
  mem.io.rst:=ClockDomain.current.readResetWire

  axi.aw.ready.setAsReg()  init False
  axi.w.ready.setAsReg()  init False
  axi.ar.ready.setAsReg()  init False
  axi.r.valid.setAsReg()  init False
  axi.b.valid.setAsReg()  init False
  //aw w b
  when(axi.aw.fire){axi.aw.ready:=False}
  .elsewhen(axi.aw.valid){axi.aw.ready:=True}
  when(axi.w.fire){axi.w.ready:=False}
  .elsewhen(axi.w.valid){axi.w.ready:=True}
  when(axi.b.fire){axi.b.valid:=False}
  .elsewhen(axi.w.valid){axi.b.valid:=True}
  axi.b.setOKAY()
  //ar r
  when(axi.r.fire){axi.r.valid:=False}
  when(axi.ar.fire){axi.ar.ready:=False;axi.r.valid:=True}
  .elsewhen(axi.ar.valid){axi.ar.ready:=True}

  mem.io.w_data:=axi.w.payload.data
  mem.io.w_addr:=axi.aw.payload.addr.asBits

  switch(axi.w.payload.strb)
  {
    is(B"0001"){mem.io.w_len:=0}
    is(B"0011"){mem.io.w_len:=1}
    is(B"1100"){mem.io.w_len:=1}
    is(B"1111"){mem.io.w_len:=3}
    default{mem.io.w_len:=0}
  }

  mem.io.wen:=axi.aw.fire
  mem.io.r_data<>axi.r.payload.data
  mem.io.r_addr<>axi.ar.payload.addr.asBits
  mem.io.ren:=axi.ar.fire
  mem.io.r_len:=3
}

//ADDRESS [0x1000_0000, 0x1000_ffff)
case class AXIUart() extends Component{
  noIoPrefix()
  val io=new Bundle{
    val AxiIn=slave(AxiLite4(AxiLite4Config(32,32)))
  }
  val axi = io.AxiIn
  val slaveFactory = new AxiLite4SlaveFactory(io.AxiIn)
  val uart_reg = slaveFactory.createReadAndWrite(UInt(32 bits),0x10000000,0)

  val mmio = new MyBlackBox.mmio_fun()
  mmio.io.clk:=ClockDomain.current.readClockWire
  mmio.io.rst:=ClockDomain.current.readResetWire
  mmio.io.wen:= axi.w.fire
  mmio.io.w_data:=axi.w.payload.data
  mmio.io.w_addr:=axi.aw.payload.addr.asBits

  switch(axi.w.payload.strb)
  {
    is(B"0001"){mmio.io.w_len:=0}
    is(B"0011"){mmio.io.w_len:=1}
    is(B"0111"){mmio.io.w_len:=2}
    is(B"1111"){mmio.io.w_len:=3}
    default{mmio.io.w_len:=0}
  }

  mmio.io.ren:=axi.ar.fire
  mmio.io.r_addr:=axi.ar.payload.addr.asBits
  mmio.io.r_len:=3
  slaveFactory.build()
}

//ADDRESS [0x1100_0000, 0x1100_ffff)
case class AXIClint() extends Component{
  noIoPrefix()
  val io=new Bundle{
    val AxiIn=slave(AxiLite4(AxiLite4Config(32,32)))
  }
  val axi = io.AxiIn
  val slaveFactory = new AxiLite4SlaveFactory(io.AxiIn)
  val mtime=Reg(UInt(64 bits)) init 0
  mtime:=mtime+1
  slaveFactory.createReadOnly(mtime(31 downto 0),0x11000000+0XBFF8,0)

  val mmio = new MyBlackBox.mmio_fun()
  mmio.io.clk:=ClockDomain.current.readClockWire
  mmio.io.rst:=ClockDomain.current.readResetWire
  mmio.io.wen:= False
  mmio.io.w_data:=axi.w.payload.data
  mmio.io.w_addr:=axi.aw.payload.addr.asBits

  switch(axi.w.payload.strb)
  {
    is(B"0001"){mmio.io.w_len:=0}
    is(B"0011"){mmio.io.w_len:=1}
    is(B"0111"){mmio.io.w_len:=2}
    is(B"1111"){mmio.io.w_len:=3}
    default{mmio.io.w_len:=0}
  }

  mmio.io.ren:=axi.ar.fire
  mmio.io.r_addr:=axi.ar.payload.addr.asBits
  mmio.io.r_len:=3
  slaveFactory.build()
}
//指令译码
case class Encode() extends Component{
  noIoPrefix()
  val io = new Bundle
  {
    val com_grp=new Encode_GRP()
    val com_pc =new Encode_PC()
    val com_csr=new Encode_CSR()
    val axi4lite = master(AxiLite4(AxiLite4Config(32,32)))
    val vaild= in Bool()
    val ar_size = out Bits(4 bits)
    val fence_i= out Bool()
  }

  val ErrorReg=(Bool())
  ErrorReg:=False
  val ebreak=Bool()
  val code = Reg(Bits(32 bits)) init (B(0x13,32 bits))
  when(io.vaild){code:=io.com_pc.code}
  // code := Mux(io.vaild,io.com_pc.code,B(0x13,32 bits))
  io.com_grp.rd.setAsReg() init 0
  io.com_grp.rd_vaild.setAsReg() init False

  val rd =io.com_grp.rd
  val rd_vaild = io.com_grp.rd_vaild
  val rs1=io.com_grp.rs1
  val rs2=io.com_grp.rs2

  val num_rs1=code(19 downto 15)
  val num_rs2=code(24 downto 20)
  val num_rd=code(11 downto 7)

  val imm_I=Cat(code(31 downto 20)).asSInt.resize(32 bits)
  val imm_U=Cat(code(31 downto 12),B(0,12 bits)).asBits
  val imm_S=Cat(code(31 downto 25),code(11 downto 7)).asSInt.resize(32 bits)
  val imm_B=Cat(code(31),code(7),code(30 downto 25),code(11 downto 8),B(0,1 bits)).asSInt.resize(32 bits)
  val imm_J=Cat(code(31),code(19 downto 12),code(20),code(30 downto 21),B(0,1 bits)).asSInt.resize(32 bits)

  rd_vaild:=True
  rd:=0
  io.com_grp.rs1_sel:=num_rs1.asUInt
  io.com_grp.rs2_sel:=num_rs2.asUInt
  io.com_grp.rd_sel:=num_rd.asUInt

  ebreak:=False
  
  io.fence_i:=False

  val mem=new Area{
    val axi = io.axi4lite
    val w_vaild=axi.w.valid
    val w_strb=axi.w.payload.strb
    val w_addr = axi.aw.payload.addr
    val w_data = axi.w.payload.data
    val aw_vaild = axi.aw.valid

    val r_ready= axi.r.ready
    val ar_vaild = axi.ar.valid
    val r_addr = axi.ar.payload.addr
    val r_data = axi.r.payload.data

    axi.aw.prot:=0
    axi.ar.prot:=0
    
    val b_flag=Reg(Bool()) init False
    when(axi.aw.fire){b_flag:=True}
    when(axi.b.fire){b_flag:=False}
    axi.b.ready:=b_flag

    w_vaild:=False
    w_addr:=0
    w_strb:=0
    w_data:=0
    aw_vaild:=w_vaild

    r_ready:=False
    r_addr:=0
    ar_vaild:=False
    val flag=Reg(Bool()) init False
    val ar_flag=Reg(Bool()) init False

    when(io.vaild){flag:=True;ar_flag:=True}
    when(axi.ar.fire){ar_flag:=False}
    when(axi.w.fire || axi.r.fire){flag:=False}

    io.ar_size:=B"1111"
    def read(addr : UInt, mask: Bits , sign:Bool): Bits={
      r_addr:=addr
      ar_vaild:=ar_flag
      r_ready:=flag & (!ar_flag)
      val addrl=(addr(1 downto 0)<<3)
      val data=Bits(32 bits)
      switch((mask))
      {
        is(B"0001"){
          when(sign){
            data:=(r_data>>addrl)(7 downto 0).asSInt.resize(32 bits).asBits
          }.otherwise{
            data:=(r_data>>addrl)(7 downto 0).asUInt.resize(32 bits).asBits
          }
          }
        is(B"0011"){
          when(sign){
            data:=(r_data>>addrl)(15 downto 0).asSInt.resize(32 bits).asBits
          }.otherwise{
            data:=(r_data>>addrl)(15 downto 0).asUInt.resize(32 bits).asBits
          }
          }
        is(B"1111"){
          data:=r_data.asBits
        }
        default{data:=B(0)}
      }
      io.ar_size:=mask
      data
    }
    def write32(addr :UInt,data :Bits){
      w_addr:=addr
      w_data:=data
      w_vaild:=flag
      w_strb:=B"1111"
      rd_vaild:=False
    }
    def write16(addr :UInt,data :Bits){
      w_addr:=addr
      // w_data:=data
      w_vaild:=flag
      switch(addr(1 downto 0)){
        is(0){w_data:=(data<<0).resized;w_strb:=B"0011"}
        is(2){w_data:=(data<<16).resized;w_strb:=B"1100"}
        default{
          w_data:=(data).resized
          w_strb:=B"0011"
        }
      }
      
      rd_vaild:=False
    }
    def write8(addr :UInt,data :Bits){
      w_addr:=addr
      // w_data:=data
      w_data:=(data<<(addr(1 downto 0)*8)).resized
      w_vaild:=flag
      switch(addr&0x03){
        is(0){w_strb:=B"0001"}
        is(1){w_strb:=B"0010"}
        is(2){w_strb:=B"0100"}
        is(3){w_strb:=B"1000"}
      }
      rd_vaild:=False
    }
  }

  val pc = new Area{
    val pc =Reg(Bits(32 bits)) init (B(0x80000000L,32 bits))
    when(io.vaild){pc:=io.com_pc.PC}
    val PC = pc
    val nPC = io.com_pc.nPC
    val nPC_vaild = io.com_pc.nPC_vaild
    nPC:=0
    nPC_vaild:=False
    
    def branch (eq : Bool){
      rd_vaild:=False
      when(eq===True){
        nPC:=(PC.asUInt+imm_B.asUInt).asBits
        nPC_vaild:=True
      }
    }
    def jalr (){
      nPC:=(rs1.asUInt+imm_I.asUInt).asBits
      nPC_vaild:=True
      rd:=(PC.asUInt+4).asBits
    }
    def auipc(){
      rd:=(PC.asUInt+imm_U.asUInt).asBits
    }
    def jal (){
      nPC:=(PC.asUInt+imm_J.asUInt).asBits
      nPC_vaild:=True
      rd:=(PC.asUInt+4).asBits
    }

    def mret(){
      nPC:=io.com_csr.r_pc
      nPC_vaild:=True
      rd_vaild:=False
    }
    def ecall(){
      nPC:=io.com_csr.r_pc
      nPC_vaild:=True
      rd_vaild:=False
    }
  
  }

  val csr = new Area{
    val csr_code = code(31 downto 20).asUInt
    val csr_sel=io.com_csr.csr_sel
    val w_data=io.com_csr.w_data
    val vaild=io.com_csr.vaild
    val r_data=io.com_csr.r_data
    val rs1_data = rs1
    val ecall = io.com_csr.ecall
    val mret = io.com_csr.mret
    val w_pc = io.com_csr.w_pc
    val r_pc = io.com_csr.r_pc

    val imm = Cat(B(0,27 bits),code(19 downto 15))
    csr_sel := csr_code
    vaild:=False
    w_data:=0
    ecall:=False
    mret:=False
    w_pc:=pc.pc

    def fun(){
      vaild:=True
      rd:=r_data
    }

  }

  switch(code)
  {
    //R型指令
    is(M"0000000_-----_-----_000_-----_0110011"){rd:=(rs1.asSInt+rs2.asSInt).asBits}//ADD 
    is(M"0100000_-----_-----_000_-----_0110011"){rd:=(rs1.asSInt-rs2.asSInt).asBits}//SUB
    is(M"0000000_-----_-----_111_-----_0110011"){rd:=(rs1.asUInt&rs2.asUInt).asBits}//AND
    is(M"0000000_-----_-----_110_-----_0110011"){rd:=(rs1.asUInt|rs2.asUInt).asBits}//OR
    is(M"0000000_-----_-----_100_-----_0110011"){rd:=(rs1.asUInt^rs2.asUInt).asBits}//XOR
    is(M"0000000_-----_-----_001_-----_0110011"){rd:=(rs1.asUInt<<(rs2.asUInt(4 downto 0))).asBits.resized}//SLL
    is(M"0000000_-----_-----_101_-----_0110011"){rd:=(rs1.asUInt>>(rs2.asUInt(4 downto 0))).asBits.resized}//SRL
    is(M"0100000_-----_-----_101_-----_0110011"){rd:=(rs1.asSInt>>(rs2.asUInt(4 downto 0))).asBits.resized}//SRA
    is(M"0000000_-----_-----_010_-----_0110011"){rd:=(rs1.asSInt<rs2.asSInt).asBits.resized}//SLT
    is(M"0000000_-----_-----_011_-----_0110011"){rd:=(rs1.asUInt<rs2.asUInt).asBits.resized}//SLTU 

    //I型
    is(M"-------_-----_-----_000_-----_0010011"){rd:=(rs1.asSInt+imm_I).asBits}//ADDI
    is(M"-------_-----_-----_100_-----_0010011"){rd:=(rs1.asUInt^imm_I.asUInt).asBits}//XORI
    is(M"-------_-----_-----_110_-----_0010011"){rd:=(rs1.asUInt|imm_I.asUInt).asBits}//ORI
    is(M"-------_-----_-----_111_-----_0010011"){rd:=(rs1.asUInt&imm_I.asUInt).asBits}//ANDI
    is(M"0000000_-----_-----_001_-----_0010011"){rd:=(rs1.asUInt<<(imm_I.asUInt(4 downto 0))).asBits.resized}//SLLI
    is(M"0000000_-----_-----_101_-----_0010011"){rd:=(rs1.asUInt>>(imm_I.asUInt(4 downto 0))).asBits.resized}//SRLI
    is(M"0100000_-----_-----_101_-----_0010011"){rd:=(rs1.asSInt>>(imm_I.asUInt(4 downto 0))).asBits.resized}//SRAI
    is(M"-------_-----_-----_010_-----_0010011"){rd:=(rs1.asSInt<imm_I).asBits.resized}//SLTI
    is(M"-------_-----_-----_011_-----_0010011"){rd:=(rs1.asUInt<imm_I.asUInt).asBits.resized}//SLTIU

    is(M"-------_-----_-----_000_-----_0000011"){rd:=(mem.read(rs1.asUInt+imm_I.asUInt,B"0001",True)).asBits}//LB
    is(M"-------_-----_-----_001_-----_0000011"){rd:=(mem.read(rs1.asUInt+imm_I.asUInt,B"0011",True)).asBits}//LH
    is(M"-------_-----_-----_010_-----_0000011"){rd:=(mem.read(rs1.asUInt+imm_I.asUInt,B"1111",True)).asBits}//LW
    
    is(M"-------_-----_-----_100_-----_0000011"){rd:=(mem.read(rs1.asUInt+imm_I.asUInt,B"0001",False)).asBits}//LBU 
    is(M"-------_-----_-----_101_-----_0000011"){rd:=(mem.read(rs1.asUInt+imm_I.asUInt,B"0011",False)).asBits}//LHU

    is(M"-------_-----_-----_000_-----_1100111"){pc.jalr}//JALR

    //S型
    is(M"-------_-----_-----_010_-----_0100011"){mem.write32(rs1.asUInt+imm_S.asUInt,rs2);}//SW
    is(M"-------_-----_-----_001_-----_0100011"){mem.write16(rs1.asUInt+imm_S.asUInt,rs2);}//SH
    is(M"-------_-----_-----_000_-----_0100011"){mem.write8(rs1.asUInt+imm_S.asUInt,rs2);}//SB

    //B型指令
    is(M"-------_-----_-----_000_-----_1100011"){pc.branch(rs1.asUInt===rs2.asUInt)}//BEQ
    is(M"-------_-----_-----_001_-----_1100011"){pc.branch(rs1.asUInt=/=rs2.asUInt)}//BNE
    is(M"-------_-----_-----_100_-----_1100011"){pc.branch(rs1.asSInt<rs2.asSInt)}//BLT
    is(M"-------_-----_-----_101_-----_1100011"){pc.branch(rs1.asSInt>=rs2.asSInt)}//BGE
    is(M"-------_-----_-----_110_-----_1100011"){pc.branch(rs1.asUInt<rs2.asUInt)}//BLTU
    is(M"-------_-----_-----_111_-----_1100011"){pc.branch(rs1.asUInt>=rs2.asUInt)}//BGEU

    //U型指令
    is(M"-------_-----_-----_---_-----_0110111"){rd:=imm_U}//LUI
    is(M"-------_-----_-----_---_-----_0010111"){pc.auipc()}//AUIPC

    //J型指令
    is(M"-------_-----_-----_---_-----_1101111"){pc.jal}//JAL

    //CSR 指令
    is(M"-------_-----_-----_001_-----_1110011"){csr.fun();csr.w_data:=rs1}//CSRRW
    is(M"-------_-----_-----_010_-----_1110011"){csr.fun();csr.w_data:=rs1|csr.r_data}//CSRRS
    is(M"-------_-----_-----_011_-----_1110011"){csr.fun();csr.w_data:=csr.r_data& (~rs1)}//CSRRC

    is(M"-------_-----_-----_101_-----_1110011"){csr.fun();csr.w_data:=csr.imm}//CSRRWI
    is(M"-------_-----_-----_110_-----_1110011"){csr.fun();csr.w_data:=csr.imm | csr.r_data}//CSRRSI
    is(M"-------_-----_-----_111_-----_1110011"){csr.fun();csr.w_data:=csr.imm & (~csr.r_data)}//CSRRCI

    is(0x00100073){ebreak:=True}//ebreak
    is(0x00000073){csr.ecall:=True;pc.ecall}//ecall
    is(0x30200073){csr.mret:=True;pc.mret}//mret  
    is(0x0000100f){io.fence_i:=True}//fence.i 内存屏障指令
    default{ErrorReg:=True}
  }

  val ebreak_module=new MyBlackBox.ebreak_fun()
  ebreak_module.io.ebreak_flag:=ebreak

}

//AXI仲裁器 准备修改为AXI总线桥多入多出
case class AXIArbiter() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val AxiIn=Vec(slave(AxiLite4(AxiLite4Config(32,32))),2)
    val AxiOut=Vec(master(AxiLite4(AxiLite4Config(32,32))),4)
    val r_sel = in Bool()//0为指令操作 1为外部MEM操作
  }
  val wsel = (UInt(2 bits))
  val rsel = Reg(UInt(1 bits)) init 0

  // io.AxiIn(0).r.payload.data.setAsReg() init 0
  // io.AxiIn(1).r.payload.data.setAsReg() init 0
  for(i<-0 until 2){
    if(i==0)
    {
      io.AxiIn(i).aw.ready:=False
      io.AxiIn(i).w.ready:=False
      io.AxiIn(i).b.valid:=False
      io.AxiIn(i).b.setSLVERR()
    }
    io.AxiIn(i).ar.ready:=False
    io.AxiIn(i).r.valid:=False
    io.AxiIn(i).r.payload.data:=0
    // when(io.AxiIn(i).r.fire){io.AxiIn(i).r.payloaid.data:=io.AxiOut.r.payload.data}
    io.AxiIn(i).r.setSLVERR()
  }
  for(i<-0 until 4){
    io.AxiOut(i).w.valid:=False
    io.AxiOut(i).w.payload.data:=0
    io.AxiOut(i).w.payload.strb:=0
    io.AxiOut(i).aw.valid:=False
    io.AxiOut(i).aw.payload.addr:=0
    io.AxiOut(i).aw.payload.prot:=0
    io.AxiOut(i).b.ready:=False
    if(i!=0)
    {
      io.AxiOut(i).ar.valid:=False
      io.AxiOut(i).ar.payload.addr:=0
      io.AxiOut(i).ar.payload.prot:=0
      io.AxiOut(i).r.ready:=False
    }
  }

  rsel :=io.r_sel.asUInt
  when(io.AxiIn(1).aw.payload.addr>=0x80000000L && io.AxiIn(1).aw.payload.addr<0x80ffffffL){
    wsel:=0//对接MEM
  }.elsewhen(io.AxiIn(1).aw.payload.addr>=0x10000000L && io.AxiIn(1).aw.payload.addr<0x1000ffffL){
    wsel:=1//对接串口
  }.elsewhen(io.AxiIn(1).aw.payload.addr>=0x11000000L && io.AxiIn(1).aw.payload.addr<0x1100ffffL){
    wsel:=2//对接Clint中断控制器
  }.otherwise{
    wsel:=3//对接暂时
  }

  io.AxiOut(wsel).w <> io.AxiIn(1).w
  io.AxiOut(wsel).aw <> io.AxiIn(1).aw
  io.AxiOut(wsel).b <> io.AxiIn(1).b

  io.AxiOut(0).r <> io.AxiIn(rsel).r
  io.AxiOut(0).ar <> io.AxiIn(rsel).ar
}

//多周期处理器全局控制器
case class AllCtrl() extends Component{
  noIoPrefix()
  val io=new Bundle{
    val u_vaild=out (Vec(Bool(),5))
    val axi0 = Axi4liteMonitor()
    val axi = Axi4liteMonitor()
    val r_sel = out Bool()
  }
  val pc_vaild  = io.u_vaild(0)
  val encode_vaild = io.u_vaild(1)
  val grp_vaild = io.u_vaild(4)

  val r_sel = io.r_sel

  io.u_vaild(0):=False
  io.u_vaild(1):=False
  io.u_vaild(2):=False
  io.u_vaild(3):=False
  io.u_vaild(4):=False

  r_sel:=False

  val step_fun=new MyBlackBox.step_fun()
  val step = (Bool())
  step_fun.io.clk:=ClockDomain.current.readClockWire
  step_fun.io.step:=step
  step:=False

  val s= new StateMachine{
    val IF : State = new State  with EntryPoint{//取指令
      // onEntry{step:=True}

      whenIsActive{
        pc_vaild:=True
        when(io.axi0.r_ready && io.axi0.r_vaild){
          goto(ID)
        }
      }
    }
    val ID : State = new State {//译码 生成RS1 RS2一类的东西
    onEntry{
      encode_vaild:=True
      step:=True
    }
      whenIsActive{
        goto(EX)
      }
    }
    val EX : State = new State{//执行计算出结果 以及是否发生跳转
      whenIsActive{
        when(io.axi.w_ready && io.axi.w_vaild){
          goto(WB)
        }.elsewhen(io.axi.ar_vaild || io.axi.w_vaild)
        {
          goto(MEM)
        }
        .otherwise{
          goto(WB)
        }
      }
    }
    val MEM : State = new State{//访存
      whenIsActive{
          when(io.axi.w_ready && io.axi.w_vaild || RegNext((io.axi.r_ready && io.axi.r_vaild))){
            goto(WB)
          }
          when(io.axi.ar_vaild || io.axi.r_ready){r_sel:=True }
      }
    }
    val WB : State = new State{//写回
      onEntry{
        grp_vaild:=True
      }

      whenIsActive{
        goto(IF)
      }
    }

  }
}

// case class top() extends Component{
case class CPU() extends Component{
  noIoPrefix()
  val io=new Bundle{
    val axi_mem = master(AxiLite4(AxiLite4Config(32,32)))
    val axi_clint = master(AxiLite4(AxiLite4Config(32,32)))
    val uart1 = master(AxiLite4(AxiLite4Config(32,32)))
    val uart2 = master(AxiLite4(AxiLite4Config(32,32)))
  }
  val reset = ClockDomain.current.readResetWire
  val clock = ClockDomain.current.readClockWire

  val u_vaild=Vec((Bool()),5)

  val pc = new PC()
  pc.io.read_en:=u_vaild(0)

  val encode = new Encode()
  encode.io.com_pc<>pc.io.com_encode
  encode.io.vaild:=u_vaild(1)

  val csr = new CSR()
  csr.io.com_encode<>encode.io.com_csr
  csr.io.vaild:=True

  val grp = new GRP()
  grp.io.com_encode<>encode.io.com_grp
  grp.io.w_vaild:=u_vaild(4)



  //Xbar
  val axiarbiter = new AXIArbiter()
  axiarbiter.io.AxiIn(0).r  <> pc.io.axi4lite.r
  axiarbiter.io.AxiIn(0).ar <> pc.io.axi4lite.ar
  //固定配置部分
  axiarbiter.io.AxiIn(0).w.valid:=False
  axiarbiter.io.AxiIn(0).w.payload.data:=0
  axiarbiter.io.AxiIn(0).w.payload.strb:=b"1111"
  axiarbiter.io.AxiIn(0).aw.valid:=False
  axiarbiter.io.AxiIn(0).aw.payload.addr:=0
  axiarbiter.io.AxiIn(0).aw.payload.prot:=0
  axiarbiter.io.AxiIn(0).b.ready:=False

  axiarbiter.io.AxiIn(1) <> encode.io.axi4lite
  io.axi_mem <> axiarbiter.io.AxiOut(0)
  // val aximem = new AXImem()
  // aximem.io.axi4lite <> axiarbiter.io.AxiOut(0)

  // val uart = new AXIUart()
  io.uart1 <> axiarbiter.io.AxiOut(1)
  // axiarbiter.io.AxiOut(1).ar.prot:=0
  // val clint = new AXIClint()
  // clint.io.AxiIn <> axiarbiter.io.AxiOut(2)
  io.axi_clint <> axiarbiter.io.AxiOut(2)
  // val uart2 = new AXIUart()
  io.uart2 <> axiarbiter.io.AxiOut(3)
  // axiarbiter.io.AxiOut(3).ar.prot:=0

  val ctrl = new AllCtrl()
  ctrl.io.u_vaild<>u_vaild

  axiarbiter.io.r_sel:=ctrl.io.r_sel

  ctrl.io.axi0.ar_ready := axiarbiter.io.AxiIn(0).ar.ready
  ctrl.io.axi0.ar_vaild := axiarbiter.io.AxiIn(0).ar.valid
  ctrl.io.axi0.r_ready := axiarbiter.io.AxiIn(0).r.ready
  ctrl.io.axi0.w_vaild := axiarbiter.io.AxiIn(0).w.valid
  ctrl.io.axi0.w_ready := axiarbiter.io.AxiIn(0).w.ready
  ctrl.io.axi0.r_vaild := axiarbiter.io.AxiIn(0).r.valid


  ctrl.io.axi.ar_ready := axiarbiter.io.AxiIn(1).ar.ready
  ctrl.io.axi.ar_vaild := axiarbiter.io.AxiIn(1).ar.valid
  ctrl.io.axi.r_ready := axiarbiter.io.AxiIn(1).r.ready
  ctrl.io.axi.w_vaild := axiarbiter.io.AxiIn(1).w.valid
  ctrl.io.axi.w_ready := axiarbiter.io.AxiIn(1).w.ready
  ctrl.io.axi.r_vaild := axiarbiter.io.AxiIn(1).r.valid

}

case class ysyxSoCFull() extends Component{
  noIoPrefix()
  val io=new Bundle{
  
  }
  val clock = ClockDomain.current.readClockWire
  val reset = ClockDomain.current.readResetWire
  val soc = new CPU()
  val uart1 = new AXIUart()
  uart1.io.AxiIn <> soc.io.uart1
  val uart2 = new AXIUart()
  uart2.io.AxiIn <> soc.io.uart2
  val aximem = new AXImem()
  aximem.io.axi4lite <> soc.io.axi_mem
  val axint = new AXIClint()
  axint.io.AxiIn <> soc.io.axi_clint
  


}

}


```


#### Short summary: 

empty definition using pc, found symbol in pc: 