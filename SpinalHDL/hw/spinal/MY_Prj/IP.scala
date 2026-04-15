package IP

import spinal.core._
import spinal.lib._
import spinal.lib.experimental.math._
// Hardware definition

case class PLL_ip(outnum: Int) extends  BlackBox{
  val io = new Bundle {
    val clk_in1=in Bool()
    val clk_out1=out Bool()
  }
  noIoPrefix()
}

case class FIR_ip(wide_in: Int,wide_out: Int) extends  BlackBox{
  val io = new Bundle {
    val aclk=in Bool()
    val s_axis_data_tvalid=in Bool()
    val s_axis_data_tready=out Bool()
    val s_axis_data_tdata=in SInt(wide_in bits)
    val m_axis_data_tvalid=out Bool()
    val m_axis_data_tdata=out SInt(wide_out bits)
  }
  noIoPrefix()
}

case class MY_filter(wide_in: Int,wide_out: Int) extends BlackBox{
    val io = new Bundle {
      val clk=in Bool()
      val reset=in Bool()
      val filter_in=in SInt(wide_in bits)
      val clk_enable=in Bool()
      val filter_out=out SInt(wide_out bits)
  }
  noIoPrefix()
}

case class ODDR2() extends  BlackBox{
  addGeneric("DDR_ALIGNMENT", "NONE")//输出对齐方式
  addGeneric("INIT", 0)//初始值
  addGeneric("SRTYPE", "SYNC")//同步复位类型
  val io = new Bundle {
    val Q=out Bool()//输出DDR双边沿数据
    val C0=in Bool()//上升沿时钟
    val C1=in Bool()//下降沿时钟
    val CE=in Bool()//使能输入
    val D0=in Bool()//上升沿数据
    val D1=in Bool()//下降沿数据
    val R=in Bool()//复位输入
    val S=in Bool()//置为输入
  }
  noIoPrefix()
}
case class OBUFDS () extends  BlackBox{
  addGeneric("IOSTANDARD", "TMDS_33")//输出对齐方式
  val io = new Bundle {
    val O=out Bool()//差分正极
    val OB=out Bool()//差分负极
    val I=in Bool()//输入时钟
  }
  noIoPrefix()
}