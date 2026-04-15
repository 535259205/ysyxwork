error id: file://<WORKSPACE>/hw/spinal/MY_Prj/RV_comm/Icache.scala:
file://<WORKSPACE>/hw/spinal/MY_Prj/RV_comm/Icache.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -spinal/core/fen.
	 -spinal/core/fen#
	 -spinal/core/fen().
	 -spinal/lib/fen.
	 -spinal/lib/fen#
	 -spinal/lib/fen().
	 -spinal/lib/misc/pipeline/fen.
	 -spinal/lib/misc/pipeline/fen#
	 -spinal/lib/misc/pipeline/fen().
	 -spinal/lib/fsm/fen.
	 -spinal/lib/fsm/fen#
	 -spinal/lib/fsm/fen().
	 -MY_Prj.ysyxcomm.Ysyx.fen.
	 -MY_Prj.ysyxcomm.Ysyx.fen#
	 -MY_Prj.ysyxcomm.Ysyx.fen().
	 -spinal/lib/bus/amba4/axi/fen.
	 -spinal/lib/bus/amba4/axi/fen#
	 -spinal/lib/bus/amba4/axi/fen().
	 -fen.
	 -fen#
	 -fen().
	 -scala/Predef.fen.
	 -scala/Predef.fen#
	 -scala/Predef.fen().
offset: 2946
uri: file://<WORKSPACE>/hw/spinal/MY_Prj/RV_comm/Icache.scala
text:
```scala
package MY_Prj.RV_comm.Icache

import spinal.core._
import spinal.lib._
import spinal.lib.misc.pipeline._
import spinal.lib.fsm._

import RVFun.RVCodeDef
import MY_Prj.ysyxcomm.Ysyx._
import spinal.lib.bus.amba4.axi._


case class Icache(x_len:Int=1 , y_len:Int=16) extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi = (master(Axi4(axi4_config)))
    val addr = in UInt(32 bits)
    val code = master(Stream(Bits(32 bits)))
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

    io.code.payload:=0
    io.code.valid:=False
  }

  val error_cnt =Reg(UInt(32 bits)) init 0

  val cache_mem =  Mem(UInt(32 bits),x_len*y_len)
  val cache_valid = Vec(Reg(Bool()) init False,y_len)

  def clear_valid() {for(i <- 0 until y_len){cache_valid(i):=False}}

  //已经截位去掉低两位字节
  val pc_offset = io.addr(log2Up(x_len)-1+2 downto 2)
  val pc_index = io.addr(log2Up(x_len*y_len)-1+2 downto log2Up(x_len)+2)
  val pc_tag = io.addr(31 downto log2Up(x_len*y_len)+2)

  val pc_r_addr=(pc_index*x_len+pc_offset).resized

  val cache_tag = Reg(UInt(pc_tag.getWidth bits)) init 0

  // when(io.fence_i){clear_valid()}

  val s = new StateMachine(){
      val pc_tag_reg = Reg(UInt(pc_tag.getWidth bits)) init 0
      val pc_index_reg = Reg(UInt(pc_index.getWidth bits)) init 0
    val start : State = new State with EntryPoint{ 
      whenIsActive{
        //没有命中目标
        io.code.valid:=False
        when(io.fence_i){
          clear_valid()
          goto(axi_r)
        }.elsewhen(True){//ready信号拉高后进行地址判断
          when(cache_tag=/=pc_tag){//cache和pc索引不匹配
            cache_tag:=pc_tag
            error_cnt:=error_cnt+1
            clear_valid()
            goto(axi_r)
          }.elsewhen(!cache_valid(pc_index)){
            error_cnt:=error_cnt+1
            goto(axi_r)
          }.otherwise{
            io.code.payload:=cache_mem(pc_r_addr).asBits
            io.code.valid:=True
          }
        }
      }
    }
    val axi_r : State = new State{
      val cnt=Reg(UInt(log2Up(x_len)+1 bits)) init 0
      val ar_flag=Reg(Bool()) init False
      onEntry{
        pc_tag_reg:=pc_tag
        pc_index_reg:=pc_index
        cnt:=0
        ar_flag:=False
      }
      whenIsActive{
        when(axi.ar.fire){ar_flag:=True}
        axi.ar.valid:= !ar_flag
        axi.ar.addr:=Cat(pc_tag_reg,pc_index_reg,B(0,log2Up(x_len)+2 bits)).asUInt

        when(axi.r.fire){
          cache_mem.write((pc_index_reg*x_len+cnt).resized,axi.r.data.asUInt)
          cnt:=cnt+1
          //写入数据够x_len个时，缓存有效位设为True
          when(cnt===x_len-1){
            axi.r.ready:=False
            cache_valid(pc_index_reg):= ! @@fen
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



```


#### Short summary: 

empty definition using pc, found symbol in pc: 