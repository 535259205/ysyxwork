package MY_Device

import spinal.lib.bus.amba4.axi.Axi4
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._
import spinal.lib.fsm._
import java.security.KeyStore.Entry
import scala.tools.nsc.doc.html.HtmlTags.Tr

import MY_Prj.ysyxcomm.Ysyx._

case class apb() extends Bundle{
    val in_paddr =  UInt(32 bits)   //地址总线
    val in_psel =  Bool()           //只有该信号为高时，对应的从设备才会响应后续的总线操作
    val in_penable =  Bool()        //APB传输使能
    val in_pprot =  UInt(3 bits)    //3位保护信号  区分访问等级
    val in_pwrite =  Bool()         //读写方向控制  H：主写从 L：主读从
    val in_pwdata =  UInt(32 bits)  //写数据总线
    val in_pstrb =  UInt(4 bits)    //4位字节使能信号  每个字节独立使能
    val in_pready =  Bool()        //从设备准备好信号
    val in_prdata =  UInt(32 bits)  //读数据总线
    val in_pslverr =  Bool()        //从设备错误信号 低电平正常传输 高电平传输错误
}
case class apbIO() extends Bundle{
    val in_paddr = in UInt(32 bits)
    val in_psel = in Bool()
    val in_penable = in Bool()
    val in_pprot = in UInt(3 bits)
    val in_pwrite = in Bool()
    val in_pwdata = in UInt(32 bits)
    val in_pstrb = in UInt(4 bits)
    val in_pready = out Bool()
    val in_prdata = out UInt(32 bits)
    val in_pslverr = out Bool()
}

case class spi_xip() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val flash_addr_start=in UInt(32 bits)
    val flash_addr_end=in UInt(32 bits)
    val apb = new apbIO()
    val spi = new apbIO().flip()
  }
  val my_spi = new apb()
  val my_flag=Bool()

  val SPI_BASE=0x10001000      
  val SPI_CTRL=0x10+SPI_BASE
  val SPI_DIV=0x14+SPI_BASE
  val SPI_SS=0x18+SPI_BASE

  my_spi.in_paddr:=0x00000000L
  my_spi.in_psel:=False
  my_spi.in_penable:=False
  my_spi.in_pprot:=0
  my_spi.in_pwrite:=False
  my_spi.in_pwdata:=0
  my_spi.in_pstrb:=0
  //o
  // my_spi.in_pslverr:=False
  // my_spi.in_prdata:=0x00000000L
  // my_spi.in_pready:=False

  my_spi.in_pready:=io.spi.in_pready
  my_spi.in_prdata:=io.spi.in_prdata
  my_spi.in_pslverr:=io.spi.in_pslverr

  io.apb.in_pready:=False
  io.apb.in_prdata:=0x00000000L
  io.apb.in_pslverr:=False


//要读取之前备份寄存器配置吗？
//先不备份看看
  val s = new StateMachine{
    val addr=Reg(UInt(32 bits)) init 0
    val data=Reg(UInt(32 bits)) init 0
    val cnt =Reg(UInt(4  bits)) init 0
    val entry : State = new State with EntryPoint{
      whenIsActive{
        when(my_flag && io.apb.in_penable){
          goto(start)
        }
      }
    }
    val start : State = new State {
      whenIsActive{
        switch(cnt){
          //基础配置
          is(0){addr:=SPI_CTRL;data:=0x2040;goto(write_reg)}
          is(1){addr:=SPI_DIV;data:=0x02;goto(write_reg)}
          is(2){addr:=SPI_SS;data:=0x01;goto(write_reg)}
          //读取是否完成
          is(3){addr:=SPI_CTRL;goto(read_reg)}
          is(4){when(data(8)){cnt:=cnt-1}.otherwise{cnt:=cnt+1}}
          //准备数据
          is(5){addr:=SPI_BASE;data:=Cat(B(0x03,8 bits),B(0x00,2 bits),io.apb.in_paddr(23 downto 2)).asUInt;goto(write_reg)}
          is(6){addr:=SPI_BASE+4;data:=Cat(B(0x03,8 bits),B(0x00,2 bits),io.apb.in_paddr(23 downto 2)).asUInt;goto(write_reg)}
          is(7){addr:=SPI_CTRL;data:=0x2140;goto(write_reg)}//发送数据
          //判断是否完成
          is(8){addr:=SPI_CTRL;goto(read_reg)}
          is(9){when(data(8)){cnt:=cnt-1}.otherwise{cnt:=cnt+1}}
          //取出FLASH的数据
          is(10){addr:=SPI_BASE;goto(read_reg)}
          is(11){
            io.apb.in_pready:=True
            io.apb.in_prdata:= data
            cnt:=0
            goto(entry)
          }
          default{}
        }
      }
    }
    val read_reg : State = new State {
      whenIsActive{
        my_spi.in_paddr:=addr
        my_spi.in_psel:=True
        my_spi.in_penable:=True
        my_spi.in_pwrite:=False
        my_spi.in_pwdata:=0
        my_spi.in_pstrb:=0xF
        my_spi.in_pprot:=1
        when(my_spi.in_pready){
          data:=my_spi.in_prdata
          cnt:=cnt+1
          goto(start)
        }
      }
    }
    val write_reg : State = new State {
      whenIsActive{
        my_spi.in_paddr:=addr
        my_spi.in_psel:=True
        my_spi.in_penable:=True
        my_spi.in_pwrite:=True
        my_spi.in_pwdata:=data
        my_spi.in_pstrb:=0xF
        my_spi.in_pprot:=1
        when(my_spi.in_pready){
          cnt:=cnt+1
          goto(start)
        }
      }
    }
  }

  when(io.apb.in_paddr>=io.flash_addr_start && io.apb.in_paddr<=io.flash_addr_end){
    my_flag:=True
    io.spi.in_paddr:=my_spi.in_paddr
    io.spi.in_psel:=my_spi.in_psel
    io.spi.in_penable:=my_spi.in_penable
    io.spi.in_pprot:=my_spi.in_pprot
    io.spi.in_pwrite:=my_spi.in_pwrite
    io.spi.in_pwdata:=my_spi.in_pwdata
    io.spi.in_pstrb:=my_spi.in_pstrb
  }.otherwise{
    io.apb<>io.spi
    my_flag:=False
  }

}

case class my_gpio() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val apb= new apbIO()
    val gpio_out = out UInt(16 bits)
    val gpio_in = in UInt(16 bits)
    val gpio_seg = out Vec(UInt(8 bits),8)
  }
  val led_reg=Reg(UInt(16 bits)) init 0
  val sw_reg=Reg(UInt(16 bits)) init 0
  val seg_reg=Reg(UInt(32 bits)) init 0

  val LED_REG=0x10002000L
  val SW_REG =0x10002004L
  val SEG_REG=0x10002008L

  io.gpio_out:=led_reg
  sw_reg:=io.gpio_in
  for(i<-0 until 8){
    val data=Bits(8 bits)
    switch(seg_reg(i*4+3 downto i*4)){
      is(0){data:=B"11111100"}
      is(1){data:=B"01100000"}
      is(2){data:=B"11011010"}
      is(3){data:=B"11110010"}
      is(4){data:=B"01100110"}
      is(5){data:=B"10110110"}
      is(6){data:=B"10111110"}
      is(7){data:=B"11100000"}
      is(8){data:=B"11111110"}
      is(9){data:=B"11110110"}
      is(10){data:=B"11101110"}
      is(11){data:=B"00111110"}
      is(12){data:=B"10011100"}
      is(13){data:=B"01111010"}
      is(14){data:=B"10011110"}
      is(15){data:=B"10001110"}
    }
    io.gpio_seg(i):= ~data .asUInt
  }

  io.apb.in_pready:=False
  io.apb.in_prdata:=0x00000000L
  io.apb.in_pslverr:=False



  val valid=io.apb.in_penable && io.apb.in_psel
  //写请求
  when(valid & io.apb.in_pwrite){
    io.apb.in_pready:=True
    switch(io.apb.in_paddr){
      is(LED_REG){led_reg:=io.apb.in_pwdata.resized}
      // is(SW_REG){sw_reg:=io.apb.in_pwdata}
      is(SEG_REG){seg_reg:=io.apb.in_pwdata.resized}
      default{
        io.apb.in_pslverr:=True
        io.apb.in_pready:=False
      }
    }
  }
  //读请求
  when(valid & !io.apb.in_pwrite){
    io.apb.in_pready:=True
    switch(io.apb.in_paddr){
      is(SW_REG){io.apb.in_prdata:=sw_reg.resized}
      default{
        io.apb.in_pslverr:=True
        io.apb.in_pready:=False
      }
    }
  }

}

case class ps2_keyboard() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val clk = in Bool()
    val resetn = in Bool()
    val ps2_clk = in Bool()
    val ps2_data = in Bool()
    val ps2_get = out Bool()
    val ps2_getdata = out UInt(8 bits)
  }
}

case class my_ps2() extends Component{
  noIoPrefix()
  val io =new Bundle{
    val apb= new apbIO()
    val ps2_clk=in Bool()
    val ps2_data=in Bool()
  }
  val DAT_REG=0x10011000L
  val ps2_data=Reg(UInt(8 bits)) init 0
  val ps2 = new ps2_keyboard()
  val fifo = new StreamFifo(UInt(8 bits),16)
  ps2.io.clk:=ClockDomain.current.readClockWire
  ps2.io.resetn:= ! ClockDomain.current.readResetWire
  ps2.io.ps2_clk:=io.ps2_clk
  ps2.io.ps2_data:=io.ps2_data

  fifo.io.push.valid:=ps2.io.ps2_get.rise
  fifo.io.push.payload:=ps2.io.ps2_getdata
  fifo.io.pop.ready:=False
  // when(ps2.io.ps2_get.rise){
  //   ps2_data:=ps2.io.ps2_getdata
  // }

  io.apb.in_pready:=False
  io.apb.in_prdata:=0x00000000L
  io.apb.in_pslverr:=False
  val valid=io.apb.in_penable && io.apb.in_psel
  //写请求
  when(valid & io.apb.in_pwrite){
    io.apb.in_pready:=True
    io.apb.in_pslverr:=True
  }
  //读请求
  when(valid & !io.apb.in_pwrite){
    io.apb.in_pready:=True
    switch(io.apb.in_paddr){
      is(DAT_REG){
        when(fifo.io.pop.valid){
        io.apb.in_prdata:=fifo.io.pop.payload.resized
        }.otherwise{
          io.apb.in_prdata:=0
        }
        fifo.io.pop.ready:=True
      }
      default{
        io.apb.in_pslverr:=True
        io.apb.in_pready:=False
      }
    }
  }

}

case class vga_ctrl() extends BlackBox{
  noIoPrefix()
  val io = new Bundle{
    val pclk=in Bool()
    val reset=in Bool()
    val vga_data=in UInt(24 bits)
    val h_addr=out UInt(10 bits)
    val v_addr=out UInt(10 bits)
    val hsync=out Bool()
    val vsync=out Bool()
    val valid=out Bool()
    val vga_r=out UInt(8 bits)
    val vga_g=out UInt(8 bits)
    val vga_b=out UInt(8 bits)
  }
}

case class my_vga() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val apb= new apbIO()
    val vga_r=out UInt(8 bits)
    val vga_g=out UInt(8 bits)
    val vga_b=out UInt(8 bits)
    val vga_hsync=out Bool()
    val vga_vsync=out Bool()
    val vga_valid=out Bool()
  }
  val vga = new vga_ctrl()
  val vga_ram = new Mem(UInt(32 bits),640*480)

  vga.io.pclk:=ClockDomain.current.readClockWire
  vga.io.reset:=ClockDomain.current.readResetWire
  vga.io.vga_data:= vga_ram((vga.io.v_addr*640+vga.io.h_addr).resized).resized
  io.vga_r:=vga.io.vga_r
  io.vga_g:=vga.io.vga_g
  io.vga_b:=vga.io.vga_b
  io.vga_hsync:=vga.io.hsync
  io.vga_vsync:=vga.io.vsync
  io.vga_valid:=vga.io.valid


  io.apb.in_pready:=False
  io.apb.in_prdata:=0x00000000L
  io.apb.in_pslverr:=False
  val valid=io.apb.in_penable && io.apb.in_psel
  //写请求
  when(valid & io.apb.in_pwrite){
    io.apb.in_pready:=True
    vga_ram((io.apb.in_paddr>>2).resized) := io.apb.in_pwdata.resized
    io.apb.in_pslverr:=False
  }
  //读请求
  when(valid & !io.apb.in_pwrite){
    io.apb.in_pready:=True
    io.apb.in_prdata:=vga_ram((io.apb.in_paddr>>2).resized)

    io.apb.in_pslverr:=False
  }

}


case class apb_delayer_my() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val in= new apbIO()
    val out= new apbIO().flip()
  }
  val gain = 100000
  val delay_max=  (3.93607 *gain).toInt
  val delay_cnt = Reg(UInt(32 bits)) init 0
  val r_data=Reg(UInt(32 bits)) init 0
  val flag=Reg(Bool()) init False
  val clock=ClockDomain.current.readClockWire
  io.in.in_prdata:=0
  io.in.in_pslverr:=False
  io.in.in_pready:=False  

  when(!flag){
    io.in.in_paddr<>io.out.in_paddr
    io.in.in_psel<>io.out.in_psel
    io.in.in_penable<>io.out.in_penable
    io.in.in_pprot<>io.out.in_pprot
    io.in.in_pwrite<>io.out.in_pwrite
    io.in.in_pwdata<>io.out.in_pwdata
    io.in.in_pstrb<>io.out.in_pstrb
    when(io.out.in_pready){
      r_data:=io.out.in_prdata
      flag:=True
    }
  }.otherwise{
    io.out.in_paddr:=0
    io.out.in_psel:=False
    io.out.in_penable:=False
    io.out.in_pprot:=0
    io.out.in_pwrite:=False
    io.out.in_pwdata:=0
    io.out.in_pstrb:=0
  }
  when(flag){
    delay_cnt:=delay_cnt+gain
    when(delay_cnt>=delay_max){
      delay_cnt:=delay_cnt-delay_max
      flag:=False
      io.in.in_pready:=True
      io.in.in_prdata:=r_data
    }
  }
}

case class axi4IO() extends Bundle{
  // AR channel
  val arready = out Bool()
  val arvalid = in Bool()
  val arid = in UInt(4 bits)
  val araddr = in UInt(32 bits)
  val arlen = in UInt(8 bits)
  val arsize = in UInt(3 bits)
  val arburst = in UInt(2 bits)
  
  // R channel
  val rready = in Bool()
  val rvalid = out Bool()
  val rid = out UInt(4 bits)
  val rdata = out UInt(32 bits)
  val rresp = out UInt(2 bits)
  val rlast = out Bool()
  
  // AW channel
  val awready = out Bool()
  val awvalid = in Bool()
  val awid = in UInt(4 bits)
  val awaddr = in UInt(32 bits)
  val awlen = in UInt(8 bits)
  val awsize = in UInt(3 bits)
  val awburst = in UInt(2 bits)
  
  // W channel
  val wready = out Bool()
  val wvalid = in Bool()
  val wdata = in UInt(32 bits)
  val wstrb = in UInt(4 bits)
  val wlast = in Bool()
  
  // B channel
  val bready = in Bool()
  val bvalid = out Bool()
  val bid = out UInt(4 bits)
  val bresp = out UInt(2 bits)
}


/* 
  基本时序逻辑：
  读操作：
AR：
    1. 当in_arvalid为高时，out_arvalid为高同时ar其他的信号实现in和out对接，除了arready信号。t0设置为当前的cnt标志位设置为高此时cnt开始++gain
    2. 当out_arready为高时，设置delaymax =(cnt-t0)*delay_max/gain+t0
    3. 当cnt>=delaymax时，设置in_arready为高 然后cnt=cnt-delaymax 跳转到R状态
R：
    1. 当in_rready为高的时候，out_rready为高，除了rready信号。t0设置为当前的cnt标志位设置为高此时cnt开始++gain
    2. 当out_rvalid为高时，设置delaymax_(0-4) =(cnt-t0)*delay_max/gain+t0 采集rdata数据到fifo里面，fifo深度为8（暂定）
    3. 当cnt>=delaymax时，设置in_rready为高 然后cnt=cnt-delaymax 跳转到AR状态
  写操作：

*/
case class axi4_delayer_my() extends Component{
  noIoPrefix()
  //放大倍数
  val gain = 100000
  val delay_max=  (3.93607*gain).toInt

  val io = new Bundle{
    val in= new axi4IO()
    val out= new axi4IO().flip()
  }

  val clock=ClockDomain.current.readClockWire

  val init = new Area{


  //AR
  io.in.arready:=False
  io.in.rvalid:=False
  io.in.rid:=0
  io.in.rdata:=0
  io.in.rresp:=0
  io.in.rlast:=False

  io.out.arvalid:=False
  io.out.arid:=0
  io.out.araddr:=0
  io.out.arlen:=0
  io.out.arsize:=0
  io.out.arburst:=0
  io.out.rready:=False

  // io.in.arready<>io.out.arready
  // io.in.arvalid<>io.out.arvalid
  // io.in.arid<>io.out.arid
  // io.in.araddr<>io.out.araddr
  // io.in.arlen<>io.out.arlen
  // io.in.arsize<>io.out.arsize
  // io.in.arburst<>io.out.arburst

  // io.in.rready<>io.out.rready
  // io.in.rvalid<>io.out.rvalid
  // io.in.rid<>io.out.rid
  // io.in.rdata<>io.out.rdata
  // io.in.rresp<>io.out.rresp
  // io.in.rlast<>io.out.rlast

  io.in.awready:=False
  io.in.wready:=False
  io.in.bvalid:=False
  io.in.bid:=0
  io.in.bresp:=0

  io.out.awvalid:=False
  io.out.awid:=0
  io.out.awaddr:=0
  io.out.awlen:=0
  io.out.awsize:=0
  io.out.awburst:=0
  io.out.wvalid:=False
  io.out.wdata:=0
  io.out.wstrb:=0
  io.out.wlast:=True
  io.out.bready:=True
  }

  val r = new StateMachine{
    val r_data = new Mem(UInt(32 bits),8)
    val cnt=Reg(UInt(32 bits)) init 0
    val max_cnt=Reg(UInt(32 bits)) init 0
    val t0=Reg(UInt(32 bits)) init 0
    val flag = Reg(Bool()) init False
    val ar :State = new State with EntryPoint{
      onEntry{
        flag:=False
      }
      whenIsActive{
        when(flag)
        {
          when(cnt>=max_cnt){
            cnt:=cnt-max_cnt
            flag:=False
            io.in.arready:=True
            t0:=cnt-max_cnt
            goto(r)
          }.otherwise{
            cnt:=cnt+gain
          }
        }.elsewhen(io.out.arready){
          max_cnt:=((cnt-t0)*delay_max/gain+t0).resized
          flag:=True
          cnt:=cnt+gain
          assert(cnt>=t0)
        }
        when(io.in.arvalid && !flag){
          io.out.arvalid:=True
          io.out.arid<>io.in.arid
          io.out.araddr<>io.in.araddr
          io.out.arlen<>io.in.arlen
          io.out.arsize<>io.in.arsize
          io.out.arburst<>io.in.arburst
          cnt:=cnt+gain
        }
      }
    }
  val r : State = new State{
    val mem_index=Reg(UInt(3 bits)) init 0
    val r_index=Reg(UInt(3 bits)) init 0
    onEntry{
      mem_index:=0
      r_index:=0
    }
    whenIsActive{
      when(io.out.rvalid && !flag){
        r_data(mem_index):=io.out.rdata
        mem_index:=mem_index+1
      }
      when(io.in.rready && io.out.rvalid && !flag){
        io.out.rready:=True
        cnt:=cnt+gain
        when(io.out.rlast){
          max_cnt:=((cnt-t0)*delay_max/gain+t0).resized
          flag:=True
        }
      }
      when(flag){
        when(cnt>=max_cnt){
          cnt:=cnt-max_cnt
          io.in.rid:=0
          io.in.rvalid:=True
          io.in.rresp:=0
          io.in.rdata := r_data(r_index)
          r_index:=r_index+1
          when((r_index+1)===mem_index){
            io.in.rlast:=True
            flag:=False
            t0:=cnt-max_cnt
            goto(ar)
          }
        }.otherwise{
          cnt:=cnt+gain
        }
      }
    }
  }
  }

  val w = new StateMachine{
    val cnt=Reg(UInt(32 bits)) init 0
    val max_cnt=Reg(UInt(32 bits)) init 0
    val max_cnt_b=Reg(UInt(32 bits)) init 0
    val t0=Reg(UInt(32 bits)) init 0
    val flag = Reg(Bool()) init False
    val aw_flag=Reg(Bool()) init False
    val aw : State = new State with EntryPoint{
      onEntry{
        flag:=False
        t0:=cnt
      }
      whenIsActive{
        when(flag)
        {
          when(cnt>=max_cnt_b){
            flag:=False
            aw_flag:=False
            io.in.bvalid:=True
            cnt:=cnt-max_cnt_b
            t0:=cnt-max_cnt
          }.elsewhen(cnt>=max_cnt){
            // cnt:=cnt-max_cnt
            // flag:=False
            io.in.awready:=True
            io.in.wready:=True
            cnt:=cnt+gain
            // t0:=cnt-max_cnt
          }.otherwise{
            cnt:=cnt+gain
          }
        }.elsewhen(io.out.awready){
          max_cnt:=((cnt-t0)*delay_max/gain+t0).resized
          cnt:=cnt+gain
          aw_flag:=True
        }.elsewhen(io.out.bvalid){
          max_cnt_b:=((cnt-t0)*delay_max/gain+t0).resized
          flag:=True
          cnt:=cnt+gain
        }

        when(io.in.awvalid && !aw_flag){
          io.out.awvalid:=True
          io.out.awid<>io.in.awid
          io.out.awaddr<>io.in.awaddr
          io.out.awlen<>io.in.awlen
          io.out.awsize<>io.in.awsize
          io.out.awburst<>io.in.awburst
          
          io.out.wvalid<>io.in.wvalid
          io.out.wdata<>io.in.wdata
          io.out.wstrb<>io.in.wstrb

          cnt:=cnt+gain
        }
      }
    }
  }
}
case class axi4_delayer_test() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi_m=master(Axi4(axi4_config))
    val axi_s=slave(Axi4(axi4_config))
  }
  val delayer = new axi4_delayer_my()
  delayer.io.in.araddr<>io.axi_s.ar.addr
  delayer.io.in.arburst<>(io.axi_s.ar.burst.asUInt)
  delayer.io.in.arsize<>io.axi_s.ar.size
  delayer.io.in.arlen<>io.axi_s.ar.len
  delayer.io.in.arready<>io.axi_s.ar.ready
  delayer.io.in.arvalid<>io.axi_s.ar.valid
  delayer.io.in.arid<>io.axi_s.ar.id

  delayer.io.in.rready<>io.axi_s.r.ready
  delayer.io.in.rlast<>io.axi_s.r.last
  io.axi_s.r.resp:=delayer.io.in.rresp.asBits
  delayer.io.in.rid<>io.axi_s.r.id
  io.axi_s.r.data:=delayer.io.in.rdata.asBits
  delayer.io.in.rvalid<>io.axi_s.r.valid

  delayer.io.in.awaddr<>io.axi_s.aw.addr
  delayer.io.in.awburst<>(io.axi_s.aw.burst.asUInt)
  delayer.io.in.awsize<>io.axi_s.aw.size
  delayer.io.in.awlen<>io.axi_s.aw.len
  delayer.io.in.awready<>io.axi_s.aw.ready
  delayer.io.in.wready<>io.axi_s.w.ready
  delayer.io.in.wdata<>(io.axi_s.w.data.asUInt)
  delayer.io.in.wstrb<>(io.axi_s.w.strb.asUInt)
  delayer.io.in.wlast<>io.axi_s.w.last

  delayer.io.in.bready<>io.axi_s.b.ready
  delayer.io.in.bvalid<>io.axi_s.b.valid
  delayer.io.in.bid<>io.axi_s.b.id
  io.axi_s.b.resp:=delayer.io.in.bresp.asBits

  delayer.io.out.arvalid<>io.axi_m.ar.valid
  delayer.io.out.arid<>io.axi_m.ar.id
  delayer.io.out.araddr<>io.axi_m.ar.addr
  delayer.io.out.arlen<>io.axi_m.ar.len
  delayer.io.out.arsize<>io.axi_m.ar.size

  io.axi_m.ar.burst:=delayer.io.out.arburst.asBits

  delayer.io.out.arready<>io.axi_m.ar.ready
  delayer.io.out.rready<>io.axi_m.r.ready
  delayer.io.out.rvalid<>io.axi_m.r.valid
  delayer.io.out.rid<>io.axi_m.r.id
  delayer.io.out.rdata<>(io.axi_m.r.data.asUInt)
  delayer.io.out.rresp<>(io.axi_m.r.resp.asUInt)
  delayer.io.out.rlast<>io.axi_m.r.last
  delayer.io.out.awvalid<>io.axi_m.aw.valid
  delayer.io.out.awid<>io.axi_m.aw.id
  delayer.io.out.awaddr<>io.axi_m.aw.addr
  delayer.io.out.awlen<>io.axi_m.aw.len
  delayer.io.out.awsize<>io.axi_m.aw.size
  io.axi_m.aw.burst:=delayer.io.out.awburst.asBits
  delayer.io.out.wvalid<>io.axi_m.w.valid
  io.axi_m.w.data:=delayer.io.out.wdata.asBits
  io.axi_m.w.strb:=delayer.io.out.wstrb.asBits
  delayer.io.out.wlast<>io.axi_m.w.last
  delayer.io.out.bready<>io.axi_m.b.ready
  delayer.io.out.bvalid<>io.axi_m.b.valid
  delayer.io.out.bid<>io.axi_m.b.id
  delayer.io.out.bresp<>(io.axi_m.b.resp.asUInt)
}

case class sdram_axi_16to32() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val in=slave(Axi4(axi4_config))
    val out=master(Axi4(axi4_config))
  }
  
  io.in.aw.setBlocked()
  io.in.w.setBlocked()
  io.in.ar.setBlocked()
  io.in.r.setIdle()
  io.in.b.setIdle()

  io.out.ar.setIdle()
  io.out.r.setBlocked()
  io.out.b.setBlocked()
  io.out.aw.setIdle()
  io.out.w.setIdle()

  val w= new StateMachine{
    val addr=Reg(UInt(32 bits))
    val aw : State = new State with EntryPoint{
    whenIsActive{
      io.out.aw.ready<>io.in.aw.ready
      io.out.aw.id<>io.in.aw.id
      io.out.aw.addr<>io.in.aw.addr
      io.out.aw.len<>io.in.aw.len
      io.out.aw.size<>io.in.aw.size
      io.out.aw.burst<>io.in.aw.burst
      when(io.in.aw.fire){
        addr:=io.in.aw.addr
        goto(w)
      }
    }
    }
    val w : State = new State{
    val flag=Reg(Bool())
    onEntry{
      flag:=False
    }
      whenIsActive{
        when(io.in.w.valid){

        }
      }
    }
  }


  val ar=Reg(UInt(32 bits))
  when(io.in.ar.fire){ar:=io.in.ar.addr}
  io.in.ar.ready:=True

}