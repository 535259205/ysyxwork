package AXI4MFactory

import spinal.lib.bus.amba4.axi.Axi4
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._


class Axi4MasterFactory(bus: Axi4)
{
  bus.aw.valid.setAsReg()  init False
  bus.aw.payload.addr.setAsReg()  init 0
  bus.aw.payload.id.setAsReg()  init 0
  bus.aw.payload.len.setAsReg()  init 0
  bus.aw.payload.size.setAsReg()  init 0
  bus.aw.payload.burst.setAsReg()  init 0

  bus.w.valid.setAsReg()  init False
  bus.w.data.setAsReg()  init 0
  bus.w.payload.strb.setAsReg()  init 0
  bus.w.payload.last.setAsReg()  init False

  bus.b.ready.setAsReg()  init False

  val w_flag =Reg(Bool()) init False
  val w_result=Reg(Bits(2 bits)) init 0
  when(w_flag){
    when(bus.aw.valid){
    bus.aw.valid:=False
    }
    when(bus.w.fire){
      bus.w.setIdle()
      bus.aw.setIdle()
    }
    when(bus.b.fire){
      bus.w.payload.last:=False
      bus.b.ready:=False
      w_flag:=False
    }.elsewhen(bus.b.valid){
      bus.b.ready:=True
    }
  }.otherwise{
    w_result:=bus.b.payload.resp
  }

  def write(addr: UInt, data: Bits, id: UInt = U(0)) = {//如果是单次传输的话就是直接是透传的
      bus.aw.payload.addr:=addr
      bus.aw.payload.id:=id //标识ID暂时好像没有什么用处
      bus.aw.payload.len:=0 //突发长度0 表示 1 拍
      bus.aw.payload.size:=Axi4.size.BYTE_4.asUInt //传输4字节32位
      bus.aw.payload.burst:=0 //默认为0使用增量地址
      bus.aw.valid:= True //fire的时候立刻拉低

      bus.w.valid:=True
      bus.w.payload.data:=data
      bus.w.payload.strb:=b"1111"
      bus.w.payload.last:=True
      w_flag:=True
  }
  def wait_write() : Bool = {//返回是否完成写入 为低电平代表没有写入时间在进行
    w_flag
  }
  def get_write_result() : Bits = {//返回B值的结果
    w_result
  }

  val r_flag =Reg(Bool()) init False
  val r_data= Reg(Bits(32 bits)) init 0

  bus.r.ready.setAsReg()  init False

  bus.ar.valid.setAsReg()  init False
  bus.ar.payload.addr.setAsReg()  init 0
  bus.ar.payload.id.setAsReg()  init 0
  bus.ar.payload.len.setAsReg()  init 0
  bus.ar.payload.size.setAsReg()  init 0
  bus.ar.payload.burst.setAsReg()  init 0

  when(r_flag){
    when(bus.ar.fire){
      bus.ar.setIdle()
      bus.r.ready:=True
    }
    when(bus.r.fire){
      bus.r.setBlocked()
      r_data:=bus.r.payload.data
      r_flag:=False
    }
  }

  def read(addr: UInt, id: UInt = U(0)){
    bus.ar.payload.addr:=addr
    bus.ar.payload.id:=id //标识ID暂时好像没有什么用处
    bus.ar.payload.len:=0 //突发长度0 表示 1 拍
    bus.ar.payload.size:=Axi4.size.BYTE_4.asUInt //传输4字节32位
    bus.ar.payload.burst:=0 //默认为0使用增量地址
    bus.ar.valid:= True //fire的时候立刻拉低
    r_flag:=True
  }
  def wait_read() : Bool = {//返回是否完成读取 为低电平代表没有读取时间在进行
    r_flag
  }
  def get_read_data() : Bits = {//返回R值的结果
    r_data
  }
}
 