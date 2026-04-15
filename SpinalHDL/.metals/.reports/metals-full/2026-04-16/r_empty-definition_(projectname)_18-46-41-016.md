error id: file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU_TOP.scala:local18
file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU_TOP.scala
empty definition using pc, found symbol in pc: 
found definition using semanticdb; symbol local18
empty definition using fallback
non-local guesses:

offset: 3149
uri: file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU_TOP.scala
text:
```scala
package MY_Prj.pipCPU_TOP

import spinal.core._
import spinal.lib._
import spinal.lib.misc.pipeline._
import spinal.lib.fsm._

import RVFun.RVCodeDef
import MY_Prj.ysyxcomm.Ysyx._
import spinal.lib.bus.amba4.axi._
import scala.tools.nsc.doc.html.HtmlTags.Tr

import pipCPU.test_cpu
import MY_Prj.ysyxcomm._


case class AXIXbar_new() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi_m = Vec(slave(Axi4(axi4_config)),2)//0:PC AXI 1:Encode AXI
    val axi_s = Vec(master(Axi4(axi4_config)),2)// 0:外部通信接口 1：AXI CLINT
  }
  val axi_m = io.axi_m
  val axi_s = io.axi_s
  for(i<-0 until 2){
    axi_m(i).r.setIdle()
    axi_m(i).ar.setBlocked()
    axi_m(i).w.setBlocked()
    axi_m(i).aw.setBlocked()
    axi_m(i).b.setIdle()

    axi_s(i).r.setBlocked()
    axi_s(i).ar.setIdle()
    axi_s(i).w.setIdle()
    axi_s(i).aw.setIdle()
    axi_s(i).b.setBlocked()
  }

  val r = new StateMachine{
    val sel_m = Reg(UInt(1 bits)) init 0
    val sel_s = Reg(UInt(1 bits)) init 0
    val start : State = new State with EntryPoint{
      whenIsActive{
        when(axi_m(1).ar.valid){
          sel_m:=1
          when(axi_m(1).ar.payload.addr>=0x02000000L && axi_m(1).ar.payload.addr<=0x0200ffffL){sel_s:=1}
          .otherwise{sel_s:=0}
          goto(turn)
        }.elsewhen(axi_m(0).ar.valid){
          sel_m:=0
          sel_s:=0
          goto(turn)
        }
      }
    }
    val turn : State = new State{
      whenIsActive{
        when(sel_s===1){
        axi_m(sel_m).ar<>axi_s(1).ar
        axi_m(sel_m).r<>axi_s(1).r
        }.otherwise{
        axi_m(sel_m).ar<>axi_s(0).ar
        axi_m(sel_m).r<>axi_s(0).r    
        }
        when(axi_m(sel_m).r.fire && axi_m(sel_m).r.last){
          goto(start)
        }
      }
    }
  }
  val w = new StateMachine{
    val sel = Reg(UInt(1 bits)) init 0
    val start : State = new State with EntryPoint{
      whenIsActive{
        when(axi_m(1).aw.valid){
          sel:=1
          goto(turn)
        }
      }
    }
    val turn : State = new State{
      whenIsActive{
        axi_m(sel).aw<>axi_s(0).aw
        axi_m(sel).w<>axi_s(0).w
        axi_m(sel).b<>axi_s(0).b
        when(axi_m(sel).b.fire){
          goto(start)
        }
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

  // val debug = new MyBlackBox.my_debug(39,2)
  // debug.io.data(0):=mtime_L.asBits
  // debug.io.data(1):=mtime_H.asBits


}


case class Soc() extends Component{
    noIoPrefix()
    val io = new Bundle{
    val axi_m = master(Axi4(axi4_config))
    val axi_s = slave(Axi4(axi4_config))
    }
    val cpu = new test_cpu()
    val xbar = new AXIXbar_new()
    // val clint = new AXIClint()
    val axi = slave(Axi4(axi4_config))
    
    cpu.io.axi_if<>xbar.io.axi_m(0)
    cpu.io.axi_mem<>xbar.io.axi_m(1)
    .@@axi<>xbar.io.axi_s(1)
    io.axi_m<>xbar.io.axi_s(0)
    io.axi_s.ar.setBlocked()
    io.axi_s.r.setIdle()
    io.axi_s.w.setBlocked()
    io.axi_s.aw.setBlocked()
    io.axi_s.b.setIdle()
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

case class ysyx_26010010_turn() extends Component{
  noIoPrefix()
  val io=new Bundle{
    val axi_m = master(Axi4(axi4_config))
    val axi_s = slave(Axi4(axi4_config))
  }

  val ysyx = new ysyx_26010010()
  ysyx.io.io_interrupt:=False

  val turn = new AXITrun()
  turn.io.io_slave <> ysyx.io.io_slave
  turn.io.io_master <> ysyx.io.io_master
  turn.io.axi_s <> io.axi_s
  turn.io.axi_m <> io.axi_m


}



case class ysyx_soc_sim() extends  Component{
  noIoPrefix()
  val io = new Bundle{

  }
  val clock=ClockDomain.current.readClockWire
  val reset=ClockDomain.current.readResetWire
  val soc = new ysyx_26010010_turn()
  // val axi_m = master(Axi4(axi4_config))
  // val axi_s = slave(Axi4(axi4_config))

  val axi_s = soc.io.axi_m
  val axi_m = soc.io.axi_s

  // axi_m <> soc.io.axi_m
  // axi_s <> soc.io.axi_s

  axi_m.ar.setIdle()
  axi_m.r.setBlocked()
  axi_m.w.setIdle()
  axi_m.aw.setIdle()
  axi_m.b.setBlocked()


  // axi_s.ar.setBlocked()
  axi_s.r.setIdle()
  // axi_s.w.setBlocked()
  // axi_s.aw.setBlocked()
  axi_s.b.setIdle()
  axi_s.w.ready:=True
  axi_s.aw.ready:=True
  axi_s.ar.ready:=False


  val mem_fun = new MyBlackBox.mem_fun()
  mem_fun.io.clk:=clock
  mem_fun.io.rst:=reset
  mem_fun.io.wen:=False
  mem_fun.io.ren:=False
  mem_fun.io.w_data:=0
  mem_fun.io.w_addr:=0
  mem_fun.io.w_len:=0
  mem_fun.io.r_addr:=0
  mem_fun.io.r_len:=0

  val w = new StateMachine{
    val w_addr = Reg(UInt(32 bits)) init 0
    val w_data = Reg(UInt(32 bits)) init 0
    val w_size = Reg(Bits(3 bits)) init 0
    val start : State = new State with EntryPoint{
      whenIsActive{
        when((axi_s.aw.valid)){
          w_data:=axi_s.w.data.asUInt
          w_addr:=axi_s.aw.addr
          switch(axi_s.aw.size.asBits){
            is(B"000"){w_size:=0}
            is(B"001"){w_size:=1}
            is(B"010"){w_size:=3}
            default{w_size:=0}
          }
          axi_s.w.ready:=False
          axi_s.aw.ready:=False
          goto(w_mem)
        }
      }
    }
    val w_mem : State = new State{
      whenIsActive{
        mem_fun.io.wen:=True
        mem_fun.io.w_data:=w_data.asBits
        mem_fun.io.w_addr:=w_addr.asBits
        mem_fun.io.w_len:=(w_size).asBits.resized
        goto(b)
      }
    }
    val b : State = new State{
      whenIsActive{
        axi_s.b.setOKAY()
        axi_s.b.valid:=True
        when((axi_s.b.valid)){
          goto(start)
        }
      }
    }
  }

  val r = new StateMachine{
    val r_addr = Reg(UInt(32 bits)) init 0
    val r_data = Reg(UInt(32 bits)) init 0
    val r_size = Reg(Bits(3 bits)) init 0
    val r_burst = Reg(Bits(2 bits)) init 0
    val r_len = Reg(UInt(8 bits)) init 0

    val start : State = new State with EntryPoint{
      whenIsActive{
        axi_s.ar.ready:=True
        when((axi_s.ar.valid)){
          r_addr:=axi_s.ar.addr
          switch(axi_s.ar.size.asBits){
            is(B"000"){r_size:=0}
            is(B"001"){r_size:=1}
            is(B"010"){r_size:=3}
            default{r_size:=0}
          }
          r_burst:=axi_s.ar.burst.asBits
          r_len:=axi_s.ar.len
          
          goto(r_mem)
        }
      }
    }
    val r_mem : State = new State{
      val r_valid = Reg(Bool()) init False
      onEntry{
        r_valid:=False
      }
      whenIsActive{
      
      mem_fun.io.r_len:=r_size.asUInt.resized
      mem_fun.io.r_addr:=r_addr.asBits
      axi_s.r.valid:=r_valid
      axi_s.r.data:=(mem_fun.io.r_data<<((r_addr(1 downto 0))<<3)).resized
      when(axi_s.r.fire){
        r_valid:=False
        r_addr:=r_addr+4
        r_len:=r_len-1
        when(r_len===0){
          axi_s.r.last:=True
          goto(start)
        }
      }.otherwise{
        r_valid:=True
        mem_fun.io.ren:=True
      }

      }
    }

  }
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: 