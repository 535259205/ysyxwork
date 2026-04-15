package MY_Prj.AXI
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._
import spinal.lib.fsm._


case class AXI64to32() extends Component{
    val axi64_config =Axi4Config(
        addressWidth = 32,
        dataWidth = 64,
        idWidth = 4,
        useProt = false,
        useQos = false,
        useCache = false,
        useLock = false,
        useRegion = false,
    )

    val axi32_config =Axi4Config(
        addressWidth = 32,
        dataWidth = 32,
        idWidth = 4,
        useProt = false,
        useQos = false,
        useCache = false,
        useLock = false,
        useRegion = false,
    )

    noIoPrefix()
    val io = new Bundle{
        val in = slave(Axi4(axi64_config))
        val out = master(Axi4(axi32_config))
    }
    io.in.aw.valid<>io.out.aw.valid
    io.in.aw.ready<>io.out.aw.ready
    io.in.aw.addr<>io.out.aw.addr
    io.in.aw.id<>io.out.aw.id
    io.in.aw.len<>io.out.aw.len
    io.in.aw.size<>io.out.aw.size
    io.in.aw.burst<>io.out.aw.burst

    io.in.w.valid<>io.out.w.valid
    io.in.w.ready<>io.out.w.ready
    io.out.w.data:=io.in.w.data.resized
    io.out.w.strb:=io.in.w.strb.resized
    io.in.w.last<>io.out.w.last

    io.in.b.valid<>io.out.b.valid
    io.in.b.ready<>io.out.b.ready
    io.in.b.id<>io.out.b.id
    io.in.b.resp<>io.out.b.resp

    io.in.ar.valid<>io.out.ar.valid
    io.in.ar.ready<>io.out.ar.ready
    io.in.ar.addr<>io.out.ar.addr
    io.in.ar.id<>io.out.ar.id
    io.in.ar.len<>io.out.ar.len
    io.in.ar.size<>io.out.ar.size
    io.in.ar.burst<>io.out.ar.burst

    io.in.r.valid<>io.out.r.valid
    io.in.r.ready<>io.out.r.ready
    io.in.r.id<>io.out.r.id
    io.in.r.data:=Cat(io.out.r.data,io.out.r.data).asBits
    io.in.r.resp<>io.out.r.resp
    io.in.r.last<>io.out.r.last


    // io.in.ar.setBlocked()
    // io.in.r.setIdle()
    // io.in.b.setIdle()
    // io.in.w.setBlocked()
    // io.in.aw.setBlocked()

    // io.out.ar.setIdle()
    // io.out.r.setBlocked()
    // io.out.b.setBlocked()
    // io.out.w.setIdle()
    // io.out.aw.setIdle()

    val r = new StateMachine{
    val fifo = new StreamFifo(Bits(64 bits),8)
    fifo.io.push.setIdle()
    fifo.io.pop.setBlocked()

    val arid = Reg(UInt(4 bits)) init 0
    val arsize = Reg(UInt(3 bits))  init 0
    val arlen  = Reg(UInt(8 bits))  init 0
    val araddr = Reg(UInt(32 bits)) init 0
    val arburst = Reg(Bits(2 bits)) init 0
    val r_cnt = Reg(UInt(9 bits)) init 0
    val start = new State with EntryPoint{
        whenIsActive{
            val over_size =io.in.ar.size>Axi4.size.BYTE_4.asUInt
            val over_len =io.in.ar.len>0
            when(io.in.ar.valid){
            when(over_size || over_len){
                arlen := io.in.ar.len
                arsize := io.in.ar.size
                araddr := io.in.ar.addr
                arburst:= io.in.ar.burst
                arid := io.in.ar.id
                io.out.ar.setIdle()
                when(over_size){r_cnt:=((io.in.ar.len<<1)+1).resized}
                .otherwise{r_cnt:=(io.in.ar.len).resized}
                goto(ar)
            }
            }
        }
    }
    val ar : State = new State{
        whenIsActive{
            io.in.r.setIdle()

            io.out.ar.valid:=True
            io.out.ar.addr:=araddr
            io.out.ar.id:=arid
            io.out.ar.len:=r_cnt.resized
            io.out.ar.size:=Axi4.size.BYTE_4.asUInt
            io.out.ar.burst:=arburst
            when(io.out.ar.fire){
                goto(r)
            }
        }
    }
    val r : State = new State{
        val r_ready =Reg(Bool()) init False
        val data_q =Reg(Bits(32 bits)) init 0
        val cnt =Reg(UInt(9 bits)) init 0
        val flag =Reg(Bool()) init False
        onEntry{
            cnt :=0
            r_ready:=False
            flag:=False
        }
        whenIsActive{   
            io.in.r.setIdle()
            io.out.r.ready:=r_ready

            when(io.out.r.valid){
                flag:= !flag
                r_ready:=False
                cnt:=cnt+1
                when(cnt === r_cnt){
                    goto(turn)
                }
                data_q:=io.out.r.data.resized

                when(flag){
                    fifo.io.push.valid:=True
                    fifo.io.push.payload:=Cat(io.out.r.data,data_q).asBits
                }
            }.otherwise{
                r_ready:=True
            }
        }
    }
    val turn : State = new State{
        val r_valid =Reg(Bool()) init False
        onEntry{
            r_valid:=False
        }
        whenIsActive{
            io.in.r.valid:=r_valid
            io.in.r.last:=False
            io.in.r.data:=0
            when(io.in.r.ready && r_valid){
                r_valid:=False
                fifo.io.pop.ready:=True
                io.in.r.data:=fifo.io.pop.payload
                arlen:=arlen-1
                when(arlen === 0){
                    io.in.r.last:=True
                    goto(start)
                }
            }.otherwise{
                r_valid:=True
            }

        }
    }
    }


    val w = new StateMachine{
        val fifo = new StreamFifo(Bits(64 bits),8,withAsyncRead=true)
        fifo.io.flush:=False
        fifo.io.push.setIdle()
        fifo.io.pop.setBlocked()

        val turn_flag =Reg (Bool()) init False
        val addr = Reg(UInt(32 bits)) init 0
        val burst = Reg(Bits(2 bits)) init 0
        val len = Reg(UInt(9 bits)) init 0
        val size = Reg(UInt(3 bits)) init 0
        val id = Reg(UInt(4 bits)) init 0
        val strb =Reg(Bits(8 bits)) init 0  
        val start : State = new State with EntryPoint{
            onEntry{
                turn_flag:=False
            }
            whenIsActive{
                val over_size =io.in.aw.size>Axi4.size.BYTE_4.asUInt
                val over_len =io.in.aw.len>0
                when(io.in.aw.valid && io.in.aw.ready){
                when(over_size || over_len){
                    addr:=io.in.aw.addr
                    fifo.io.push.valid:=True
                    fifo.io.push.payload:=io.in.w.data.asBits
                    burst:=io.in.aw.burst
                    when(over_size){len:=((io.in.aw.len<<1)+1).resized}
                    .otherwise{len:=(io.in.aw.len).resized}
                    id:=io.in.aw.id
                    size:=io.in.aw.size
                    strb:=io.in.w.strb
                    io.out.aw.setIdle()
                    io.out.w.setIdle()
                    when(! io.in.w.last){
                        goto(rx_w)
                    }.otherwise{
                        goto(aw)
                    }
                }.elsewhen(io.in.aw.size===Axi4.size.BYTE_1.asUInt){
                    when(io.in.w.strb(3 downto 0)===0){
                        io.out.aw.addr:=io.in.aw.addr+4
                        io.out.w.strb:=io.in.w.strb(7 downto 4)
                        io.out.w.data:=io.in.w.data(63 downto 32)
                    }
                }
                }
            }
        }
        val rx_w : State = new State{
            whenIsActive{
                io.in.b.setIdle()
                io.in.aw.setBlocked()
                io.out.aw.setIdle()
                io.out.w.setIdle()
                io.in.w.ready:=True
                fifo.io.push.valid:=io.in.w.valid
                fifo.io.push.payload:=io.in.w.data.asBits
                when(io.in.w.last && io.in.w.valid){
                    goto(aw)
                }
            }
        }
        val aw : State = new State{
        whenIsActive{
            io.in.b.setIdle()
            io.in.aw.setBlocked()
            io.in.w.setBlocked()
            io.out.w.setIdle()
            io.out.aw.valid:=True
            io.out.aw.addr:=addr
            io.out.aw.burst:=burst
            io.out.aw.len:=len.resized
            io.out.aw.id:=id
            io.out.aw.size:=Axi4.size.BYTE_4.asUInt 
            when(io.out.aw.ready){
                goto(w)
            }
        }
        }
        val w : State = new State{
        val w_valid =Reg(Bool()) init False
        val w_data_sel =Reg(Bool()) init False
        val fifo_ready =Reg(Bool()) init False
        onEntry{
            w_valid:=True
            w_data_sel:=True
            fifo_ready:=False
        }
        whenIsActive{
            io.out.aw.setIdle()
            io.in.aw.setBlocked()
            io.in.w.setBlocked()
            io.in.b.setIdle()
            fifo.io.pop.ready:=fifo_ready
            io.out.w.valid:=w_valid
            io.out.w.last:=False
            io.out.w.strb:=strb.resized
            io.out.w.data:= Mux(w_data_sel,fifo.io.pop.payload(31 downto 0).asBits,fifo.io.pop.payload(63 downto 32).asBits)
            when(io.out.w.ready && w_valid){
                w_valid:=False
                len:=len-1
                w_data_sel:= !w_data_sel
                when(! w_data_sel){fifo_ready:=True}
                when(len === 0){
                    io.out.w.last:=True
                    goto(ready_b)
                }
            }.otherwise{
                w_valid:=True
            }

            when(fifo_ready){fifo_ready:=False}
        }
        }
        val ready_b : State = new State{
            whenIsActive{
                io.in.aw.setBlocked()
                io.in.w.setBlocked()
                io.in.b.setIdle()
                io.out.aw.setIdle()
                io.out.w.setIdle()
                io.out.b.ready:=True
                when(io.out.b.valid){
                    goto(turn)
                }
            }
        }
        val turn : State = new State{
            val flag =Reg (Bool()) init False
            onEntry{
                flag := False
                fifo.io.flush:=True
            }
            whenIsActive{
                io.in.aw.setBlocked()
                io.in.w.setBlocked()
                io.out.aw.setIdle()
                io.out.w.setIdle()
                io.in.b.valid:=True
                io.in.b.resp:=0
                io.in.b.id:=id
                flag:=True
                when(io.in.b.ready && flag){
                    io.in.b.valid:=False
                    goto(start)
                }
            }
        }
    }

}


