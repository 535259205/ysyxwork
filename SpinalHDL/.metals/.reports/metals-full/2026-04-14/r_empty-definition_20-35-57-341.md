error id: file://<WORKSPACE>/hw/spinal/MY_Prj/MY_mod.scala:
file://<WORKSPACE>/hw/spinal/MY_Prj/MY_mod.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -spinal/core/dclk1_phe_cnt.
	 -spinal/core/dclk1_phe_cnt#
	 -spinal/core/dclk1_phe_cnt().
	 -spinal/lib/dclk1_phe_cnt.
	 -spinal/lib/dclk1_phe_cnt#
	 -spinal/lib/dclk1_phe_cnt().
	 -spinal/lib/experimental/math/dclk1_phe_cnt.
	 -spinal/lib/experimental/math/dclk1_phe_cnt#
	 -spinal/lib/experimental/math/dclk1_phe_cnt().
	 -IP.dclk1_phe_cnt.
	 -IP.dclk1_phe_cnt#
	 -IP.dclk1_phe_cnt().
	 -math/dclk1_phe_cnt.
	 -math/dclk1_phe_cnt#
	 -math/dclk1_phe_cnt().
	 -scala/math/dclk1_phe_cnt.
	 -scala/math/dclk1_phe_cnt#
	 -scala/math/dclk1_phe_cnt().
	 -spinal/lib/bus/amba4/axilite/dclk1_phe_cnt.
	 -spinal/lib/bus/amba4/axilite/dclk1_phe_cnt#
	 -spinal/lib/bus/amba4/axilite/dclk1_phe_cnt().
	 -spinal/lib/bus/regif/AccessType.dclk1_phe_cnt.
	 -spinal/lib/bus/regif/AccessType.dclk1_phe_cnt#
	 -spinal/lib/bus/regif/AccessType.dclk1_phe_cnt().
	 -spinal/lib/bus/misc/dclk1_phe_cnt.
	 -spinal/lib/bus/misc/dclk1_phe_cnt#
	 -spinal/lib/bus/misc/dclk1_phe_cnt().
	 -spinal/lib/bus/regif/dclk1_phe_cnt.
	 -spinal/lib/bus/regif/dclk1_phe_cnt#
	 -spinal/lib/bus/regif/dclk1_phe_cnt().
	 -dclk1_phe_cnt.
	 -dclk1_phe_cnt#
	 -dclk1_phe_cnt().
	 -scala/Predef.dclk1_phe_cnt.
	 -scala/Predef.dclk1_phe_cnt#
	 -scala/Predef.dclk1_phe_cnt().
offset: 2512
uri: file://<WORKSPACE>/hw/spinal/MY_Prj/MY_mod.scala
text:
```scala
package MY_mod

import spinal.core._
import spinal.lib._
import spinal.lib.experimental.math._
import IP._
import math._
import scala.math._
import spinal.core
import spinal.lib.bus.amba4.axi.Axi4
import spinal.lib.bus.amba4.axi.Axi4Config
import spinal.lib.bus.amba4.axilite._
import spinal.lib.bus.amba4.axilite.AxiLite4Utils.Axi4WriteOnlyRich
import spinal.lib.bus.amba4.axi.Axi4W
import spinal.lib.bus.regif.AxiLite4BusInterface
import spinal.lib.bus.regif.AccessType._
import spinal.lib.bus.amba4.axilite._
import spinal.lib.bus.misc._
import spinal.lib.bus.regif._
import spinal.lib.com.uart.UartCtrlGenerics
import spinal.lib.com.uart.UartCtrl
import spinal.lib.com.uart.UartParityType
import spinal.lib.com.uart.UartStopType
import spinal.lib.com.uart.Uart
import spinal.lib.fsm.StateMachine
import spinal.lib.fsm.State
import spinal.lib.fsm.EntryPoint
import _root_.java.nio.Buffer





/**
  * 频率计模块
  *
  * @param gate_time  闸门时间
  */
case class MY_pinlvji(gate_time : Double) extends Component {
  val io = new Bundle {
    val Dclk1= in Bool()
    val Dclk2= in Bool()
    val Clk_cnt=out UInt(64 bits)
    val Data_fre= out UInt(64 bits)
    val Data_phe= out UInt(64 bits)
    val Data_duty= out UInt(64 bits)
  }
  io.Clk_cnt.setAsReg()
  io.Data_duty.setAsReg()
  io.Data_fre.setAsReg()
  io.Data_phe.setAsReg()
  val dclk1=BufferCC(io.Dclk1) 
  val dclk2=BufferCC(io.Dclk2)
  val dclk1_fre_cnt=Reg(UInt(64 bits)) init 0
  val dclk1_duty_cnt=Reg(UInt(64 bits)) init 0
  val dclk1_phe_cnt=Reg(UInt(64 bits)) init 0
  val clk_cnt=Reg(UInt(64 bits)) init 0
  val dclk1_start=Reg(Bool()) init False
  val dclk1_duty_start=Reg(Bool()) init False
  val dclk1_phe_start=Reg(Bool()) init False
  when(dclk1.rise){dclk1_start:=True;dclk1_phe_start:=True;dclk1_duty_start:=True}
  when(dclk1_start)
  {
    clk_cnt:=clk_cnt+1
    when(dclk1.rise){dclk1_fre_cnt:=dclk1_fre_cnt+1;dclk1_phe_start:=True;dclk1_duty_start:=True}.elsewhen(dclk1.fall){dclk1_duty_start:=False}
    when(dclk2.rise){dclk1_phe_start:=False}
    when(dclk1_duty_start){dclk1_duty_cnt:=dclk1_duty_cnt+1}
    when(dclk1_phe_start){dclk1_phe_cnt:=dclk1_phe_cnt+1}
    when(clk_cnt>=(ClockDomain.current.frequency.getValue.toLong*gate_time).toInt)
    {
      dclk1_start:=False
      clk_cnt:=0
      dclk1_fre_cnt:=0
      dclk1_duty_cnt:=0
      dclk1_phe_cnt:=0
      io.Clk_cnt:=clk_cnt
      io.Data_duty:=dclk1_duty_cnt
      io.Data_phe:=dclk1_phe_cnt@@
      io.Data_fre:=dclk1_fre_cnt
    }
  }

  noIoPrefix()
}
/**
  * 二进制转BCD码
  *
  */
case class MY_BCD() extends  Component{
    val io = new Bundle {
    val Data_in=in UInt(32 bits)
    val Data_out=out Vec(UInt(4 bits),8)
  }
  val temp1=Reg(UInt(32 bits)) init 0
  val temp2=Reg(UInt(32 bits)) init 0
  val cnt1=Reg(UInt(8 bits)) init 0
  val cnt2=Reg(UInt(8 bits)) init 0
  val data_out=Vec.fill(8)(Reg(UInt(4 bits))) 
  io.Data_out:=data_out

  when(cnt2===8){
    cnt2:=0
    cnt1:=cnt1+1
    temp2:=Cat(temp2(30 downto 0),temp1(30-cnt1.resized)).asUInt
  }.otherwise{
    cnt2:=cnt2+1
    switch(cnt2){
      is(0) {when(temp2(0*4+3 downto 0*4)>=5){temp2(0*4+3 downto 0*4):=temp2(0*4+3 downto 0*4)+3}}
      is(1) {when(temp2(1*4+3 downto 1*4)>=5){temp2(1*4+3 downto 1*4):=temp2(1*4+3 downto 1*4)+3}}
      is(2) {when(temp2(2*4+3 downto 2*4)>=5){temp2(2*4+3 downto 2*4):=temp2(2*4+3 downto 2*4)+3}}
      is(3) {when(temp2(3*4+3 downto 3*4)>=5){temp2(3*4+3 downto 3*4):=temp2(3*4+3 downto 3*4)+3}}
      is(4) {when(temp2(4*4+3 downto 4*4)>=5){temp2(4*4+3 downto 4*4):=temp2(4*4+3 downto 4*4)+3}}
      is(5) {when(temp2(5*4+3 downto 5*4)>=5){temp2(5*4+3 downto 5*4):=temp2(5*4+3 downto 5*4)+3}}
      is(6) {when(temp2(6*4+3 downto 6*4)>=5){temp2(6*4+3 downto 6*4):=temp2(6*4+3 downto 6*4)+3}}
      is(7) {when(temp2(7*4+3 downto 7*4)>=5){temp2(7*4+3 downto 7*4):=temp2(7*4+3 downto 7*4)+3}}
    }
  }
  when(cnt1===0){
    temp1:=io.Data_in
    temp2:=io.Data_in(31).asUInt.resized
  }.elsewhen(cnt1===31){
    cnt1:=0
    for(i<-0 until 8){ 
      data_out(i):=temp2((i+1)*4-1 downto i*4)
    }
  }
}

case class MY_dds_config(
  out_wide: Int =8,
  depth:   Int=1024,
  to_fre : Int  =1000,
  to_phe : Int  =0,
  wave : Int =0
)
/**
  * DDS模块
  *
  * @param config DDS配置
  * @param change 参数是否可以改变
  */
case class MY_dds(config : MY_dds_config,change : Boolean =false)extends Component{
    val io = new Bundle {
    val Data_out=out SInt(config.out_wide bits)
    val Fre_data=change generate in(UInt(64 bits))
    val phe_data=change generate in(UInt(64 bits))
  }
  val fre_data=UInt(64 bits)
  val phe_data=UInt(64 bits)
  if(change==true){
    fre_data:=io.Fre_data
    phe_data:=io.phe_data
  }else{
    fre_data:=(BigDecimal(BigInt(2).pow(64))/ClockDomain.current.frequency.getValue.toLong*config.to_fre).toLong
    phe_data:=BigInt(2).pow(64)*config.to_phe/360
  }

  def sinTable = for(sampleIndex <- 0 until config.depth) yield {
if(config.wave==1){//三角波
  if(sampleIndex<config.depth/2)
    S((sampleIndex*2-config.depth/2+1).toInt,config.out_wide bits)
  else
    S((-2*sampleIndex+1.5*config.depth-1).toInt,config.out_wide bits)
}
else{
  val sinValue = Math.sin(2 * Math.PI * sampleIndex / config.depth)
  S((sinValue * ((1<<config.out_wide)/2-1)).toInt,config.out_wide bits)
  }
}

  val rom_data=Mem(SInt(config.out_wide bits),initialContent = sinTable)
  val add=Reg(UInt(64 bits)) init (0)
  val data_out=Reg(SInt(config.out_wide bits)) init 0  
  
  add:=add+fre_data
  data_out:=rom_data((add+phe_data)(63 downto 64-log2Up(config.depth)))
  io.Data_out:=data_out

}
/**
  * DCO振荡器
  *
  * @param to_fre  频率控制字
  * @param to_phe  相位控制字
  * @param change  参数是否可以改变
  */
case class MY_dco(to_fre: Int,to_phe: Int = 0,change: Boolean = false,use_rst:Boolean = false)extends Component{

    val io = new Bundle {
    val Clk_out=out Bool()
    val Fre_data=change generate in (UInt(64 bits))
    val Phe_data=change generate in (UInt(64 bits))
    val dds_rst= use_rst generate in Bool()
  }
  val fre_data=UInt(64 bits)
  val pre_data=UInt(64 bits)
  if(change==true)
  {
  fre_data:=io.Fre_data
  pre_data:=io.Phe_data
  }
  else{
  fre_data:=(BigDecimal(BigInt(2).pow(64))/ClockDomain.current.frequency.getValue.toLong*to_fre).toLong
  pre_data:=BigInt(2).pow(64)*to_phe/360
  }

  val add=Reg(UInt(64 bits)) init (0)
  add:=add+fre_data
  io.Clk_out:=(add+pre_data)(63)
  if(use_rst==true)
  {
    when(io.dds_rst){
      add:=0
    }
  }

}
/**
  * 均值滤波器
  *
  * @param wide  数据宽度
  * @param depth 滤波器深度
  */
case class MY_filter_mean(wide: Int,depth: Int) extends Component{
  val io = new Bundle {
    val Data_in=in SInt(wide bits)
    val Data_out=out SInt(wide bits)
  }
  val temp=Vec.fill(depth)(Reg(SInt(wide bits)))
  for(i<-0 to depth-1){
    if(i==depth-1)
      temp(i):=io.Data_in
    else
      temp(i):=temp(i+1)
  }
  val sum=temp.reduceBalancedTree(_ +^ _)
  io.Data_out:=(sum/depth).resized
}
/** 简单的FIR滤波器
  * 
  *
  * @param wide  数据宽度
  * @param const 滤波器系数
  */
case class MY_filter_fir(wide: Int,const: Seq[Int]) extends  Component{
  val io=new Bundle{
    val Data_in=in SInt(wide bits)
    val Data_out=out SInt(wide bits)
  }
  val depth=const.length
  val temp=Vec.fill(depth)(Reg(SInt()))
  for(i<-0 to depth-1){
    if(i==depth-1)
      temp(i):=io.Data_in
    else
      temp(i):=temp(i+1)
  }
  val sum=(const zip temp).map { case (a, b) => a * b }.reduce(_ + _)
  io.Data_out :=sum.round(widthOf(sum)-wide)
}


case class SPI_io() extends Bundle {
 val spi_sdi=in Bool()
 val spi_cs_data=in Bool()
 val spi_cs_cmd=in Bool()
 val spi_scl=in Bool()
 val spi_sdo=out Bool()
}
/**
  * 多通道SPI协议
  *
  * @param addr_wide 地址宽度
  * @param data_wide  数据宽度
  */
case class MY_spi(addr_wide : Int=4,data_wide: Int=32) extends Component{
  val io = new Bundle{
    val com= new SPI_io()
    val Data_rx=out Vec(UInt(data_wide bits),BigInt(2).pow(addr_wide).toInt) 
    val Data_tx=in Vec(UInt(data_wide bits),BigInt(2).pow(addr_wide).toInt) default(Vec.fill(BigInt(2).pow(addr_wide).toInt)(0))
    val cs_cmd=out Bool()
    val cs_data=out Bool()
  }
  io.Data_rx.setAsReg()
  io.com.isOutput
  io.com.spi_sdo.setAsReg()
  val scl=BufferCC(io.com.spi_scl)
  val cs_cmd=BufferCC(io.com.spi_cs_cmd)
  val cs_data=BufferCC(io.com.spi_cs_data)
  val addra=Reg(UInt(addr_wide bits)) init 0
  val txdata=Reg(UInt(data_wide bits)) init 0
  val rxdata=Reg(UInt(data_wide bits)) init 0
  io.cs_cmd:=cs_cmd
  io.cs_data:=cs_data
  when(scl.rise && cs_cmd===False){
    addra:=Cat(addra(addr_wide-2 downto 0),io.com.spi_sdi).asUInt
  }.elsewhen(cs_cmd.rise){
    txdata:=io.Data_tx(addra)
  }
  when(cs_data.fall)
  {
    io.com.spi_sdo:=txdata.msb
    txdata:=txdata.rotateLeft(1)
  }.elsewhen(scl.rise && cs_data===False){
    io.com.spi_sdo:=txdata.msb
    txdata:=txdata.rotateLeft(1)
    rxdata:=Cat(rxdata(data_wide-2 downto 0),io.com.spi_sdi).asUInt
  }.elsewhen(cs_data.rise){
    io.Data_rx(addra):=rxdata
  }
  noIoPrefix()
}
/**一个基于SPI协议的RAM存储器
  * 
  *
  * @param Data_wide 输入数据宽度
  * @param Data_Depth RAM深度
  */
case class MY_spi_ram(Data_wide:Int =12,Data_Depth:Int =4096) extends  Component{
  val io = new Bundle {
    val Data_in_clk=in Bool()
    val Data_in=in UInt(Data_wide bits)
    val Data_out_clk=in Bool()
    val Data_out=out UInt(Data_wide bits)
    val DAC_addr=in UInt(log2Up(Data_Depth) bits)
    val DAC_mode=in Bool()
    val clear=in Bool()
    val hold=in Bool()
  }
  val ram=new Mem(UInt(Data_wide bits),Data_Depth)
  val address=Reg(UInt(log2Up(Data_Depth) bits)) init(0)
  val wren=Reg(Bool) init(True)
  io.Data_out.setAsReg()
  when(io.clear){
    address:=0
    wren:=True
  }
  when(io.Data_in_clk.rise && wren){
    ram(address):=io.Data_in
    address:=address+1
  }
  when(io.DAC_mode && !wren){
    io.Data_out:=ram(io.DAC_addr)
  }.elsewhen(io.Data_out_clk.rise && !wren){
    io.Data_out:=ram(address)
    address:=address+1
   }
   when(address===Data_Depth-1 && !io.hold && wren){
    wren:= ~ wren 
   }
}

case class FMC_io()extends Bundle{
  val AD=inout(Analog(UInt(16 bits))) 
  val AA=inout(Analog(UInt(10 bits))) 
  val E_NOE=in Bool()//读数据信号
  val E_NWE=in Bool()//写数据信号
  val E_NE2=in Bool()//片选信号
  val E_NAL=in Bool()//NADV 地址有效信号
  val E_CLK=in Bool()
  
}
case class MY_fmc(addr_wide : Int=4) extends Component{
  val io = new Bundle{
    val com=new FMC_io()
    val Data_tx=in Vec(UInt(16 bits),BigInt(2).pow(addr_wide).toInt) default(Vec.fill(BigInt(2).pow(addr_wide).toInt)(0))
    val Data_rx=out Vec(UInt(16 bits),BigInt(2).pow(addr_wide).toInt)
    val Data_tx_flag=out Vec(Bool(),BigInt(2).pow(addr_wide).toInt)
    val Data_rx_flag=out Vec(Bool(),BigInt(2).pow(addr_wide).toInt)
  }
  io.Data_rx.setAsReg()
  io.Data_tx_flag.setAsReg()
  io.Data_rx_flag.setAsReg()
  val E_NAL=BufferCC(io.com.E_NAL)
  val E_NE2=BufferCC(io.com.E_NE2)
  val E_NOE=BufferCC(io.com.E_NOE)
  val E_NWE=BufferCC(io.com.E_NWE)
  val AD=io.com.AD
  val AA=io.com.AA
  val wen_data= E_NAL & !E_NE2 & E_NOE & !E_NWE
  val ren_data= E_NAL & !E_NE2 & !E_NOE & E_NWE
  val addr_en = !E_NAL & !E_NE2 & E_NOE & E_NWE
  val addra_reg=Reg(UInt(addr_wide bits)) init 0


  when(addr_en){
    addra_reg:=AD.resized
  }
  when(wen_data){//STM32写入
    io.Data_rx_flag(addra_reg):=True
    io.Data_rx(addra_reg):=AD.resized
  }
  when(ren_data){//STM32读取
    AD:=BufferCC(io.Data_tx(addra_reg))
    io.Data_tx_flag(addra_reg):=True
  }  
  when(E_NAL.rise){
    for(i<-0 until BigInt(2).pow(addr_wide).toInt)
    {
      io.Data_tx_flag(i):=False
      io.Data_rx_flag(i):=False
    }
  }

  
  noIoPrefix()
}



case class SDRAM_io(Data_wide :Int,Adr_wide :Int,Bank_wide :Int)extends Bundle{
    val Data=inout (Analog(UInt(Data_wide bits)))
    val Adr=out(UInt(Adr_wide bits)) default(0)//R行0-11 C列0-7
    val Ba=out(UInt(Bank_wide bits)) default(0)//BANK地址
    val QM=out(UInt(2 bits)) default(3)//数据掩码若信号为高电平，在下一个时钟周期的时钟 | 上升沿，数据总线的低(高)字节为高阻态
    val Ras_N=out Bool() default(False)//行选中信号
    val Cas_N=out Bool() default(False)//列选中信号
    val Clk_E=out Bool() default(False)
    val Clk=out Bool()
    val We_N=out Bool() default(False)//低电平写入
    val Cs_N=out Bool() default(False)
    Adr.setAsReg()
    Ba.setAsReg()
    QM.setAsReg()
    Ras_N.setAsReg()
    Cas_N.setAsReg()
    We_N.setAsReg()
    Clk_E.setAsReg()
}




// 定义VGA时序参数类，便于复用和扩展
case class VgaTiming(
  hsSync: UInt,    // 行同步脉冲宽度
  hsFront: UInt,   // 行前沿
  hsVa: UInt,      // 行有效数据宽度
  hsBack: UInt,    // 行后沿
  vsSync: UInt,    // 场同步脉冲宽度
  vsFront: UInt,   // 场前沿
  vsVa: UInt,      // 场有效数据高度
  vsBack: UInt     // 场后沿
) {
  val hsMax = hsSync + hsFront + hsVa + hsBack  // 行总周期
  val vsMax = vsSync + vsFront + vsVa + vsBack  // 场总周期
}

// VGA控制器主组件
case class MY_vga() extends Component {
  val io = new Bundle {
    val RGB_valid = out Bool()
    val Data_X = out UInt(16 bits)  // 1024需要16位(0-1023)
    val Data_Y = out UInt(16 bits)  // 768需要16位(0-767)
    val VGA_HS = out Bool()
    val VGA_VS = out Bool()
  }

  // 1024×768@60Hz时序参数初始化 (VESA标准)
  val timing = VgaTiming(
    hsSync = 136,    // 行同步
    hsFront = 24,    // 行前沿
    hsVa = 1024,     // 行有效像素
    hsBack = 160,    // 行后沿
    vsSync = 6,      // 场同步
    vsFront = 3,     // 场前沿
    vsVa = 768,      // 场有效行数
    vsBack = 29      // 场后沿
  )

  // 计数器寄存器初始化
  val HS_cnt = Reg(UInt(16 bits))  // 1344需要11位(0-1343)
  val VS_cnt = Reg(UInt(16 bits))  // 806需要10位(0-805)

  // 行计数器逻辑
  when(HS_cnt === timing.hsMax - 1) {
    HS_cnt := 0
    // 行计数结束时更新场计数器
    VS_cnt := VS_cnt + 1
    // 场计数器循环
    when(VS_cnt === timing.vsMax - 1) {
      VS_cnt := 0
    }
  }.otherwise {
    HS_cnt := HS_cnt + 1
  }

  // 有效区域判断
  val HS_valid = (HS_cnt >= timing.hsSync + timing.hsFront) && 
                 (HS_cnt < timing.hsSync + timing.hsFront + timing.hsVa)
  val VS_valid = (VS_cnt >= timing.vsSync + timing.vsFront) && 
                 (VS_cnt < timing.vsSync + timing.vsFront + timing.vsVa)

  // 同步信号生成 (低电平有效)
  io.VGA_HS := !(HS_cnt < timing.hsSync)
  io.VGA_VS := !(VS_cnt < timing.vsSync)

  // 坐标计算
  io.Data_X := 0
  io.Data_Y := 0
  when(HS_valid) {
    io.Data_X := HS_cnt - (timing.hsSync + timing.hsFront)
  }
  when(VS_valid) {
    io.Data_Y := VS_cnt - (timing.vsSync + timing.vsFront)
  }

  // 有效信号
  io.RGB_valid := HS_valid && VS_valid
  // 帧起始信号 (仅在第一帧像素有效时触发)

  noIoPrefix()
}


//UART
case class UART_io() extends Bundle {
 val tx=out Bool()
 val rx=in Bool()
}
case class MY_uart(baud: Int=115200) extends Component {
  val io = new Bundle {
    val uart=new UART_io()
    val Tx_data=slave(Stream(Bits(8 bits)))
    val Rx_data=master(Stream(Bits(8 bits)))
  }
  val a_bit_cnt=(ClockDomain.current.frequency.getValue.toInt/baud).toInt
  io.uart.tx.setAsReg()
  io.Tx_data.ready.setAsReg()
  io.Rx_data.valid.setAsReg()
  io.Rx_data.payload.setAsReg() init 0

  //发送数据状态机
  val tx_machine=new StateMachine
  {
    val tx_start=io.Tx_data.valid
    val cnt=Reg(UInt(32 bits)) init(0)
    val data_cnt=Reg(UInt(4 bits)) init(0)
    val tx_start_state : State = new State with EntryPoint
    {
      whenIsActive{
        io.Tx_data.ready:=True;io.uart.tx:=True
        when(tx_start){goto(tx_data_state)}
      }
    }
    val tx_data_state : State = new State
    {
      onEntry(cnt:=0,data_cnt:=0,io.Tx_data.ready:=False,io.uart.tx:=True)
      onExit(io.Tx_data.ready:=True,io.uart.tx:=True)
      whenIsActive{
        cnt:=cnt+1
        when(cnt===a_bit_cnt){
          cnt:=0
          data_cnt:=data_cnt+1
        }
        when(data_cnt===10){goto(tx_start_state)}
        switch(data_cnt)
        {
          is(0){io.uart.tx:=False}
          is(9){io.uart.tx:=True}
          default{io.uart.tx:=io.Tx_data.payload(data_cnt.resize(3)-1)}
        }
      }
    }
  }
  //接收数据状态机
  val rx_machine=new StateMachine
  {
    val rx_start=io.uart.rx.fall()
    val cnt=Reg(UInt(32 bits)) init 0
    val data_cnt=Reg(UInt(4 bits)) init 0
    val rx_start_state : State = new State with EntryPoint
    {
      whenIsActive{
        io.Rx_data.valid:=False
        when(rx_start){goto(rx_data_state)}
      }
    }
    val rx_data_state : State = new State 
    {
      onEntry(cnt:=0 , io.Rx_data.valid:=False , data_cnt:=0)
      onExit(io.Rx_data.valid:=True)
      whenIsActive{
        cnt:=cnt+1
        when(cnt===a_bit_cnt){
          cnt:=0
          data_cnt:=data_cnt+1
        }
        when(cnt===(a_bit_cnt>>1) && data_cnt>=1 && data_cnt<9)
        {
        io.Rx_data.payload(data_cnt.resize(3)-1):=io.uart.rx
        }
        when(data_cnt===9){goto(rx_start_state)}
      }

    }

  }
}
//流水线乘法器
case class MY_Umult(A_wide:Int=12,B_wide:Int=12) extends Component{
    val io = new Bundle {
      val Data_A=in UInt(A_wide bits)
      val Data_B=in UInt(B_wide bits)
      val result=out UInt(A_wide+B_wide bits)
    }
    val temp_data= Vec.fill(B_wide)(Reg(UInt((A_wide + B_wide) bits)) init(0))
    val temp_data_A=Vec.fill(B_wide)(Reg(UInt((A_wide) bits)) init(0))
    val temp_data_B=Vec.fill(B_wide)(Reg(UInt((B_wide) bits)) init(0))
    when(io.Data_B(0)){temp_data(0):=io.Data_A.resized}.otherwise{temp_data(0):=0}
    for(i<-1 to B_wide-1){
      val shiftedA = temp_data_A(i) << i
      when(temp_data_B(i)(i))
      {
        temp_data(i):=(shiftedA + temp_data(i-1)).resized
      }.otherwise{
        temp_data(i):=(temp_data(i-1)).resized
      }
    }
    temp_data_A(0):=io.Data_A
    for(i<-1 to A_wide-1){
     temp_data_A(i):=temp_data_A(i-1)
    }
    temp_data_B(0):=io.Data_B
    for(i<-1 to B_wide-1){
     temp_data_B(i):=temp_data_B(i-1)
    }
    io.result:=temp_data(B_wide-1)
    noIoPrefix()
}

case class MY_Smult(A_wide:Int=12,B_wide:Int=12) extends Component{
    val io = new Bundle {
      val Data_A=in SInt(A_wide bits)
      val Data_B=in SInt(B_wide bits)
      val result=out SInt(A_wide+B_wide bits)
    }


  noIoPrefix()
}

case class MY_lms(Data_wide:Int=12,Order_num:Int=8,u:Int=1) extends Component{
    val io = new Bundle {
    val Data_in=in SInt(Data_wide bits)
    val Ref_data_in=in SInt(Data_wide bits)
    val Data_out=out SInt(Data_wide bits)
    }
    val Coe=Vec(Reg(SInt(32 bits)) init(0),Order_num)
    val Data_in_reg=Vec(Reg(SInt(Data_wide bits)) init(0),Order_num)

    val sum=(Data_in_reg zip Coe).map { case (a, b) => a*b}.reduce(_ + _)

    val Data_out=sum(sum.getWidth-1 downto sum.getWidth-Data_wide)
    val Error_data=(io.Ref_data_in-Data_out)//误差数据
    //更新coe
    
    for(i<-0 to Order_num-1){
      Coe(i):=(Coe(i)+((Error_data*Data_in_reg(i)*u)>>10)(15 downto 0)).resized
    }
    //对参考信号和输入信号进行移位寄存
    Data_in_reg(0):=io.Data_in
    for(i<-1 to Order_num-1){
     Data_in_reg(i):=Data_in_reg(i-1)
    }
    io.Data_out:=Data_out
    noIoPrefix()
}

case class MY_avg(Data_wide:Int=12,Depth:Int=16) extends Component{
    val io = new Bundle {
      val in_clk=in Bool()
      val out_clk=out Bool()
      val Data_in=in SInt(Data_wide bits)
      val Data_out=out SInt(Data_wide bits)
    }
    io.Data_out.setAsReg()
    val sum=Reg(SInt(Data_wide+(log2Up(Depth)) bits)) init 0
    val cnt=Reg(UInt(log2Up(Depth) bits)) init 0
    
    io.out_clk:=False 
    when(cnt===Depth-1){
      cnt:=0
      sum:=0
      io.out_clk:=True 
      io.Data_out:=(sum>>log2Up(Depth)).resized
    }.elsewhen(io.in_clk.rise){
      sum:=sum+io.Data_in
      cnt:=cnt+1 
    }
    noIoPrefix()
}

case class MY_comparer(Data_wide:Int=12) extends Component{
    val io = new Bundle {
      val out_clk=out Bool()
      val Data_in=in UInt(Data_wide bits)
      val Tri_data=in UInt(Data_wide bits)
    }
    val out_reg=Reg(Bool())
    io.out_clk:=out_reg
    when(io.Data_in>io.Tri_data){
      out_reg:=True
    }.otherwise{
      out_reg:=False
    }
    noIoPrefix()
}
case class MY_get_vpp(Data_wide:Int=12) extends Component{
    val io = new Bundle {
      val Data_in=in UInt(Data_wide bits)
      val Vpp_out=out UInt(Data_wide bits)
      val Data_max=out UInt(Data_wide bits)
      val Data_min=out UInt(Data_wide bits)
      val Clear_flag=in Bool()
    } 
    when(io.Clear_flag){
      io.Data_max:=0
      io.Data_min:=BigInt(2).pow(Data_wide)-1  
    }.otherwise{
      when(io.Data_in>io.Data_max){
        io.Data_max:=io.Data_in
      }
      when(io.Data_in<io.Data_min){
        io.Data_min:=io.Data_in
      } 
    }
    io.Vpp_out:=io.Data_max-io.Data_min
    noIoPrefix()
}


//D 为抽取倍数,N 为滤波器级数
//DOWN:true 降采样率滤波器哦，false升采样率滤波器
case class MY_cic(Data_wide:Int=12,N:Int=1,D:Int=1,DOWN:Boolean =true) extends Component{
  val out_wide=Data_wide+N*log2Up(D)
    val io = new Bundle {
      val Data_in=in SInt(Data_wide bits)
      val Data_out=out SInt(out_wide bits)
      val Data_out_clk=in Bool()
    } 

 
    val jif_in=SInt(out_wide bits)
    val jif_out=SInt(out_wide bits)
    val shu_in=SInt(out_wide bits)
    val shu_out=SInt(out_wide bits)
    io.Data_out:=shu_out
    //积分器
    val Data_jif = Vec(Reg(SInt(out_wide bits)) init (0),N)
    for (i <- 0 until N) {
      if(i==0)
      Data_jif(i) := jif_in+RegNext(Data_jif(i))
      else
      Data_jif(i) := Data_jif(i-1)+RegNext(Data_jif(i))
    }
    //梳状器
    val out_clk=ClockDomain(io.Data_out_clk,ClockDomain.current.readResetWire)
    val out_area=new ClockingArea(out_clk)
    {
    val Data_shu = Vec(Reg(SInt(out_wide bits)) init (0),N) 
    val Data_in=BufferCC(shu_in)
    for (i <- 0 until N) {
      if(i==0)
      Data_shu(i) := Data_in-RegNext(Data_in)
      else
      Data_shu(i) := Data_shu(i-1)-RegNext(Data_shu(i-1))
    }
    }
    jif_in:=io.Data_in.resized
    shu_in:=jif_out
    
    jif_out:=Data_jif(N-1)
    shu_out:=out_area.Data_shu(N-1)

    noIoPrefix()
}

case class MY_DDRO(Data_wide:Int=1) extends Component{
    val io = new Bundle {//上升沿左，下降沿右
      val Data_in=in UInt(Data_wide*2 bits)
      val Data_out=out UInt(Data_wide bits)
    }
    val d_in=Reg(UInt(Data_wide*2 bits))
    d_in:=io.Data_in
    val d_2=(UInt(Data_wide bits))
    for(i<-0 to Data_wide-1){
      d_2(i):=d_in(2*i)
    }
    val n=new ClockingArea(ClockDomain(ClockDomain.readClockWire,ClockDomain.current.readResetWire,config = ClockDomainConfig(clockEdge = FALLING)))
    {
      val d_n=Reg(UInt(Data_wide bits))
      for(i<-0 to Data_wide-1){
        d_n(i):=d_in(2*i+1)
      }
    }
    io.Data_out:=Mux(ClockDomain.current.readClockWire,n.d_n.addTag(crossClockDomain),d_2)
    noIoPrefix()
}

case class MY_button(num : Int = 1) extends Component{
    val io = new Bundle {
      val btn=in UInt(num bits)
      val btn_out=out UInt(num bits)
    }
    val delay_cnt=Reg(UInt(20 bits)) init 0
    val btn_temp=BufferCC(io.btn)
    io.btn_out.setAsReg()
    when(delay_cnt>500000){//10ms速度扫描
      delay_cnt:=0
      io.btn_out:=btn_temp
    }.otherwise{
      delay_cnt:=delay_cnt+1
    }
    noIoPrefix()
}
















```


#### Short summary: 

empty definition using pc, found symbol in pc: 