// package MY_mod
package TOP
import MyCpu._
import spinal.core._
import spinal.lib._
import spinal.lib.experimental.math._
import spinal.lib.com.uart._
import spinal.lib.fsm._
import spinal.core.internals.AnalogDriver
import spinal.lib.misc.pipeline._
import SysConfig._


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
import AXI4MFactory.Axi4MasterFactory
import spinal.lib.bus.tilelink.Axi4Bridge
import spinal.lib.bus.amba4.axilite.AxiLite4Utils._
import spinal.lib.bus.amba4.axi._
import java.nio.file.Paths
import java.nio.file.Files
import spinal.lib.bus.amba3.apb.Apb3
import spinal.lib.bus.amba3.apb.Apb3Config
import spinal.lib.generator_backup.MemoryMaster
import spinal.lib.bus.amba4.axi.sim.Axi4Master
import spinal.lib.bus.amba4.axis.sim.Axi4StreamSlave

import MY_Prj.ysyxcomm.Ysyx._
import MY_Prj.ysyxcomm._

//接入ysyxsoc 的多周期处理器 主要是外设部分

case class Axi4Monitor() extends Bundle{
  val ar_ready=in(Bool())
  val ar_valid=in(Bool())
  val r_ready=in(Bool())
  val r_valid=in(Bool())
  val r_fire =in(Bool()) 
  val w_ready=in(Bool())
  val w_valid=in(Bool())
  val w_fire =in(Bool()) 
  val b_ready=in(Bool())
  val b_valid=in(Bool())
  val b_fire =in(Bool()) 
}

object YsyxSoc{


case class PC() extends Component{
  noIoPrefix()
  val io =new Bundle{
    val axi=master(Axi4(axi4_config))
    val com_encode=new Encode_PC().flip()
    val read_en = in Bool()
  }
  val axi=io.axi
  val pc = new MyCpu.PC()
  val pc_axi =pc.io.axi4lite
  pc.io.com_encode<>io.com_encode
  pc.io.read_en<>io.read_en


  axi.ar.valid<>pc_axi.ar.valid
  axi.ar.ready<>pc_axi.ar.ready
  axi.ar.payload.addr<>pc_axi.ar.payload.addr
  axi.ar.payload.id:=0
  axi.ar.payload.len:=0
  axi.ar.payload.size:=Axi4.size.BYTE_4.asUInt //传输4字节32位
  axi.ar.payload.burst:=0 //默认为0使用增量地址

  axi.r.valid<>pc_axi.r.valid
  axi.r.ready<>pc_axi.r.ready
  axi.r.payload.data<>pc_axi.r.payload.data

  axi.w.setIdle()
  axi.aw.setIdle()
  axi.b.setBlocked()
}

case class Encode() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val com_grp=new Encode_GRP()
    val com_pc =new Encode_PC()
    val com_csr=new Encode_CSR()
    val axi = master(Axi4(axi4_config))
    val vaild= in Bool()
    val fence_i = out Bool()
  }
  val axi = io.axi
  val encode = new MyCpu.Encode()
  
  io.fence_i<>encode.io.fence_i

  io.com_grp<>encode.io.com_grp
  io.com_pc<>encode.io.com_pc
  io.com_csr<>encode.io.com_csr
  io.vaild<>encode.io.vaild

  val encode_axi = AxiLite4Rich(encode.io.axi4lite).toAxi()
  axi.aw.addr<>encode_axi.aw.addr
  axi.aw.valid<>encode_axi.aw.valid
  axi.aw.payload.id:=0
  axi.aw.payload.len:=0
  switch(encode.io.axi4lite.w.payload.strb){
    is(B"0001"){axi.aw.payload.size:=Axi4.size.BYTE_1.asUInt}
    is(B"0010"){axi.aw.payload.size:=Axi4.size.BYTE_1.asUInt}
    is(B"0100"){axi.aw.payload.size:=Axi4.size.BYTE_1.asUInt}
    is(B"1000"){axi.aw.payload.size:=Axi4.size.BYTE_1.asUInt}
    is(B"0011"){axi.aw.payload.size:=Axi4.size.BYTE_2.asUInt}
    is(B"1111"){axi.aw.payload.size:=Axi4.size.BYTE_4.asUInt}
    default{
      axi.aw.payload.size:=Axi4.size.BYTE_4.asUInt //传输4字节32位
    }
  }
  axi.aw.payload.burst:=0 //默认为0使用增量地址
  axi.aw.ready<>encode_axi.aw.ready

  axi.b.resp<>encode_axi.b.resp
  axi.b.ready<>encode_axi.b.ready
  axi.b.valid<>encode_axi.b.valid

  axi.r.valid<>encode_axi.r.valid
  axi.r.ready<>encode_axi.r.ready
  axi.r.payload.data<>encode_axi.r.payload.data
  axi.r.payload.resp<>encode_axi.r.payload.resp
  axi.r.payload.last<>encode_axi.r.payload.last


  axi.w<>encode_axi.w

  axi.ar.valid<>encode_axi.ar.valid
  axi.ar.ready<>encode_axi.ar.ready
  axi.ar.payload.addr<>encode_axi.ar.payload.addr
  axi.ar.payload.id:=0
  axi.ar.payload.len:=0
  switch(encode.io.ar_size){
    is(B"0001"){axi.ar.payload.size:=Axi4.size.BYTE_1.asUInt}
    is(B"0011"){axi.ar.payload.size:=Axi4.size.BYTE_2.asUInt}
    is(B"1111"){axi.ar.payload.size:=Axi4.size.BYTE_4.asUInt}
    default{
      axi.ar.payload.size:=Axi4.size.BYTE_4.asUInt //传输4字节32位
    }
  }
  axi.ar.payload.burst:=Axi4.burst.FIXED
}

case class SocCtrl() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val u_vaild= out Vec((Bool()),5)
    val encode = new Axi4Monitor()
    val pc_finish = in Bool()
    val r_sel=out(Bool())
  }
  val pc_vaild  = io.u_vaild(0)
  val encode_vaild = io.u_vaild(1)
  val csr_vaild = io.u_vaild(3)
  val grp_vaild = io.u_vaild(4)


  io.u_vaild(0):=False
  io.u_vaild(1):=False
  io.u_vaild(2):=False
  io.u_vaild(3):=False
  io.u_vaild(4):=False


  val step_fun=new MyBlackBox.step_fun()
  val step = (Bool())
  step_fun.io.step:=step
  step:=False
  val r_sel=io.r_sel
  r_sel:=False

  val IFU_cnt = Reg(UInt(32 bits)) init 0
  val LSU_cnt = Reg(UInt(32 bits)) init 0
  val EXU_cnt = Reg(UInt(32 bits)) init 0

  val debug=new  MyBlackBox.my_debug(41,3)
  debug.io.data(0):=IFU_cnt.asBits
  debug.io.data(1):=LSU_cnt.asBits
  debug.io.data(2):=EXU_cnt.asBits


  val s= new StateMachine{
    val grp_flag = Reg(Bool()) init False
    val IF : State = new State with EntryPoint{//取指令 和PC地址自加
      whenIsActive{
        IFU_cnt:=IFU_cnt+1
        pc_vaild:=True
        when(io.pc_finish){
          goto(ID)
        }
      }
    }
    val ID : State = new State {//译码 生成RS1 RS2一类的东西  将读出的code传递给encode
    onEntry{
      encode_vaild:=True
    }
      whenIsActive{
        goto(EX)
      }
    }
    val EX : State = new State{//执行计算出结果 以及是否发生跳转
    onEntry(csr_vaild:=True)
      whenIsActive{
        EXU_cnt:=EXU_cnt+1
        when(io.encode.b_fire || (io.encode.r_fire) ){
          goto(WB)
        }.elsewhen(io.encode.r_ready || (io.encode.b_ready)|| io.encode.ar_valid){
          goto(MEM)
        }.otherwise{//不涉及内存操作直接WB写GRP寄存器
          goto(WB)
        }
      }
    }
    val MEM : State = new State{//访存
      whenIsActive{
        LSU_cnt:=LSU_cnt+1
          when(io.encode.b_fire || ((io.encode.r_fire))){
            grp_flag:=True
            goto(WB)
          }
      }
    }
    val WB : State = new State{//写回
      onExit{
        step:=True
      }
      whenIsActive{
        grp_vaild:= True
        goto(IF)
      }
    }

  }
}

case class AXIClint() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi = slave(Axi4(axi4_config))
  }
  val axi = new Axi4SlaveFactory(io.axi)
  val mtime_L = axi.createReadOnly(UInt(32 bits),0x02000000,0) init 0
  val mtime_H = axi.createReadOnly(UInt(32 bits),0x02000004,0) init 0

  mtime_L:=mtime_L+1
  when(mtime_L===0xFFFFFFFFL){
    mtime_H:=mtime_H+1
  }
  axi.build()
}

case class AXIXbar() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi_m = Vec(slave(Axi4(axi4_config)),2)//0:PC AXI 1:Encode AXI
    val axi_s = Vec(master(Axi4(axi4_config)),2)// 0:外部通信接口 1：AXI CLINT
    val r_sel=in(Bool())
  }
  for(i<-0 until 2){
    if(i==0)
    {
    io.axi_m(i).w.setBlocked()
    io.axi_m(i).aw.setBlocked()
    io.axi_m(i).b.setIdle()
    }

    io.axi_m(i).r.setIdle()
    io.axi_m(i).ar.setBlocked()
  }

  val sel=Bool()
  val clint_en=Bool()
  clint_en:=False
  io.axi_s(1).r.setBlocked()
  io.axi_s(1).ar.setIdle()

  when((io.axi_m(1).r.ready) || io.axi_m(1).ar.valid){
    when(io.axi_m(1).ar.payload.addr>=0x02000000L && io.axi_m(1).ar.payload.addr<=0x0200ffffL){
    io.axi_s(1).r <> io.axi_m(1).r
    io.axi_s(1).ar <> io.axi_m(1).ar
    io.axi_s(0).r.setBlocked()
    io.axi_s(0).ar.setIdle()
    clint_en:=True
    }.otherwise{
    io.axi_s(0).r <> io.axi_m(1).r
    io.axi_s(0).ar <> io.axi_m(1).ar
    }
    sel:=True
  }.otherwise{
    io.axi_s(0).r <> io.axi_m(0).r
    io.axi_s(0).ar <> io.axi_m(0).ar
    sel:=False
  }

  io.axi_s(1).w.setIdle()
  io.axi_s(1).aw.setIdle()
  io.axi_s(1).b.setBlocked()

  io.axi_s(0).w<>io.axi_m(1).w
  io.axi_s(0).aw<>io.axi_m(1).aw
  io.axi_s(0).b<>io.axi_m(1).b

}

case class Soc() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi_m=master(Axi4(axi4_config))
    val axi_s=slave(Axi4(axi4_config))
  }
  val rst = ClockDomain.current.readResetWire

  val u_vaild=Vec((Bool()),5)

  val pc = new PC_cache()
  pc.io.read_en:=u_vaild(0)

  val encode = new Encode()
  encode.io.com_pc<>pc.io.com_encode
  encode.io.vaild:=u_vaild(1)
  encode.io.fence_i<>pc.io.fence_i
  
  val csr = new MyCpu.CSR()
  csr.io.com_encode<>encode.io.com_csr
  csr.io.vaild:=u_vaild(3)

  val grp = new MyCpu.GRP()
  grp.io.com_encode<>encode.io.com_grp
  grp.io.w_vaild:=u_vaild(4)
  
  val clint = new AXIClint()
  val xbar = new AXIXbar()
  xbar.io.axi_m(0) <> pc.io.axi
  xbar.io.axi_m(1) <> encode.io.axi
  io.axi_m <> xbar.io.axi_s(0)
  clint.io.axi <> xbar.io.axi_s(1)

  io.axi_s.w.setBlocked()
  io.axi_s.aw.setBlocked()
  io.axi_s.b.setIdle()
  io.axi_s.r.setIdle()
  io.axi_s.ar.setBlocked()

  val ctrl = new SocCtrl()
  ctrl.io.u_vaild<>u_vaild
  ctrl.io.encode.w_valid:=encode.io.axi.w.valid
  ctrl.io.encode.w_ready:=encode.io.axi.w.ready
  ctrl.io.encode.r_valid:=encode.io.axi.r.valid
  ctrl.io.encode.r_ready:=encode.io.axi.r.ready
  ctrl.io.encode.r_fire:=encode.io.axi.r.fire
  ctrl.io.encode.w_fire:=encode.io.axi.w.fire
  ctrl.io.encode.ar_valid:=encode.io.axi.ar.valid
  ctrl.io.encode.ar_ready:=encode.io.axi.ar.ready
  ctrl.io.encode.b_ready:=encode.io.axi.b.ready
  ctrl.io.encode.b_valid:=encode.io.axi.b.valid
  ctrl.io.encode.b_fire:=encode.io.axi.b.fire

  ctrl.io.pc_finish:=pc.io.finish

  xbar.io.r_sel<>ctrl.io.r_sel
}

case class Axi_test() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi_m= master(Axi4(axi4_config))
    val axi_s= slave(Axi4(axi4_config))
  }

  val mfatcr= new Axi4MasterFactory(io.axi_m)

  val cnt = Reg(UInt(32 bits)) init 0
  when(!mfatcr.wait_read())
  {
    mfatcr.read(0x20000000+cnt,0)
    cnt:=cnt+4
  }
  when(!mfatcr.wait_write()){
    mfatcr.write(cnt,0x12345678,0)
  }
  io.axi_s.w.setBlocked()
  io.axi_s.aw.setBlocked()
  io.axi_s.b.setIdle()
  io.axi_s.r.setIdle()
  io.axi_s.ar.setBlocked()
}

case class ysyx_26010010() extends Component{
  noIoPrefix()
  val io=new Bundle{
    val io_master= new ysyx_axi_master()
    val io_slave= new ysyx_axi_master().flip
    val io_interrupt= in Bool()
  }
  val clock=ClockDomain.current.readClockWire
  val reset=ClockDomain.current.readResetWire
  val turn = new AXITrun()
  io.io_master <> turn.io.io_slave
  io.io_slave <> turn.io.io_master

  val soc = new Soc()
  soc.io.axi_m <> turn.io.axi_s
  soc.io.axi_s <> turn.io.axi_m

}

}
//修改方向
case class Icache_Pc() extends Bundle{
  val addr = in UInt(32 bits)
  val addr_fire = in Bool()
  val code = out UInt(32 bits)
  val valid = out Bool()
  val ready = in Bool()
}

case class Icache(x_len:Int=1 , y_len:Int=16) extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi = (master(Axi4(axi4_config)))
    val com = new Icache_Pc()
    val fence_i = in Bool()
  }
  val axi = io.axi
  val fun = new Area{
    axi.w.setIdle()
    axi.aw.setIdle()
    axi.b.setBlocked()

    axi.ar.id:=0
    axi.ar.valid:=False
    axi.ar.addr:=0
    axi.ar.len:=(x_len-1)
    axi.ar.setFullSize()//32bits
    if(x_len==1)    axi.ar.setBurstFIXED()
    else            axi.ar.setBurstINCR()

    axi.r.ready.setAsReg() init False

    io.com.code:=0
    io.com.valid:=False
  }

  val error_cnt =Reg(UInt(32 bits)) init 0

  val cache_mem =  Mem(UInt(32 bits),x_len*y_len)
  val cache_valid = Vec(Reg(Bool()) init False,y_len)

  def clear_valid() {for(i <- 0 until y_len){cache_valid(i):=False}}

  //已经截位去掉低两位字节
  val pc_offset = io.com.addr(log2Up(x_len)-1+2 downto 2)
  val pc_index = io.com.addr(log2Up(x_len*y_len)-1+2 downto log2Up(x_len)+2)
  val pc_tag = io.com.addr(31 downto log2Up(x_len*y_len)+2)

  val pc_r_addr=(pc_index*x_len+pc_offset).resized

  val cache_tag = Reg(UInt(pc_tag.getWidth bits)) init 0

  when(io.fence_i){clear_valid()}

  val s = new StateMachine(){
    val start : State = new State with EntryPoint{ 
      val flag = Reg(Bool()) init False
      whenIsActive{
        //没有命中目标
        when(io.com.addr_fire){
          flag:=True
          cache_tag:=pc_tag
          when(cache_tag=/=pc_tag){
            clear_valid()
          }}
          when(!cache_valid(pc_index) && io.com.ready){
            error_cnt:=error_cnt+1
            goto(axi_r)
          }
          when(cache_valid(pc_index)){
            io.com.code:=cache_mem(pc_r_addr)
            when(io.com.ready){
              io.com.valid:=flag
              flag:=False
            }
          }
        
      }
    }
    val axi_r : State = new State{
      val cnt=Reg(UInt(log2Up(x_len)+1 bits)) init 0
      val ar_flag=Reg(Bool()) init False
      onEntry{
        cnt:=0
        ar_flag:=False
      }
      whenIsActive{
        when(axi.ar.fire){ar_flag:=True}
        axi.ar.valid:= !ar_flag
        axi.ar.addr:=Cat(pc_tag,pc_index,B(0,log2Up(x_len)+2 bits)).asUInt

        when(axi.r.fire){
          cache_mem.write((pc_index*x_len+cnt).resized,axi.r.data.asUInt)
          cnt:=cnt+1
          //写入数据够x_len个时，缓存有效位设为True
          when(cnt===x_len-1){
            axi.r.ready:=False
            cache_valid(pc_index):=True
            goto(start)
          }
        }.otherwise{axi.r.ready:=True}
      }
    }
  }

  assert(
    x_len > 0 && (x_len & (x_len - 1)) == 0,  
    s"x_len必须是2的幂如 1、2、4、8 当前值 $x_len" 
  )
  assert(
    y_len > 0 && (y_len & (y_len - 1)) == 0,  
    s"y_len必须是2的幂 如1、2、4、8 当前值 $y_len"  
  )
}

case class Icache_test() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi = (slave(Axi4(axi4_config)))
  }
  val axi = Axi4SlaveFactory(io.axi)
  val tim = Vec(Reg(UInt(32 bits)) init (random()*32768L).toInt,64)
  for(i<-0 until 64){
    axi.createReadOnly(UInt(32 bits),0x00+i*4):=tim(i)
  }
  axi.build()

}

case class Test() extends Component{
  val axim=new Icache(8,4)
  val axis=new Icache_test()
  axim.io.axi <> axis.io.axi
  val addr =Reg(UInt(32 bits)) init 0
  val valid =Reg(Bool()) init False
  axim.io.com.valid:=valid
  axim.io.com.addr:=addr
  when(axim.io.com.ready && axim.io.com.valid){
    addr:=addr+4
    valid:=False
  }.otherwise{
    valid:=True
  }
}

case class PC_cache() extends Component{
  val io =new Bundle{
    val axi=master(Axi4(axi4_config))
    val com_encode=new Encode_PC().flip()
    val read_en = in Bool()
    val fence_i = in Bool()
    val finish = out Bool()
  }
  val axi=io.axi
  val cache = new Icache(4,4)
  cache.io.axi<>io.axi
  cache.io.fence_i<>io.fence_i

  val pc = new MyCpu.PC()
  val pc_axi =pc.io.axi4lite
  pc.io.com_encode<>io.com_encode
  pc.io.read_en<>io.read_en

  io.finish<>pc.io.finish

  pc_axi.ar.ready:=True
  cache.io.com.addr_fire:=pc.io.axi4lite.ar.fire

  cache.io.com.valid<>pc_axi.r.valid
  cache.io.com.addr<>pc_axi.ar.payload.addr
  cache.io.com.ready<>pc_axi.r.ready
  pc_axi.r.payload.data:=cache.io.com.code.asBits

}


