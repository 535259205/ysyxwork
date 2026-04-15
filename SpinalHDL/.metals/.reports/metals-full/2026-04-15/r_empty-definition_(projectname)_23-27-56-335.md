error id: file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU.scala:pipCPU/test_cpu#RD_sel.
file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU.scala
empty definition using pc, found symbol in pc: 
found definition using semanticdb; symbol pipCPU/test_cpu#RD_sel.
empty definition using fallback
non-local guesses:

offset: 20437
uri: file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU.scala
text:
```scala
package pipCPU
import spinal.core._
import spinal.lib._
import spinal.lib.misc.pipeline._
import spinal.lib.fsm._

import RVFun.RVCodeDef
import MY_Prj.ysyxcomm.Ysyx._
import spinal.lib.bus.amba4.axi._
import scala.tools.nsc.doc.html.HtmlTags.Tr
import MY_Prj.ysyxcomm._

case class EX_IF() extends Bundle{
  val nPC=UInt(32 bits)
  val valid=Bool()
}

class IF_stage(
    val stage : CtrlLink,
    val PC : Payload[UInt],
    val CODE : Payload[Bits],
    val ADDR : UInt,
    val CODE_IN :Stream[Bits],
    val from_EX : EX_IF
)extends Area{
    val pc =Reg(UInt(32 bits)) init 0x30000000L
    when(from_EX.valid ){
        pc:=from_EX.nPC
    }.elsewhen(stage.down.isFiring && CODE_IN.valid){
        pc:=pc+4
    }
    ADDR:=pc
    CODE_IN.ready:=True
    // when(RegNext(CODE_IN.valid)){CODE_IN.ready:=False; }
    // .elsewhen(!from_EX.valid){CODE_IN.ready:=True}
    // .otherwise{CODE_IN.ready:=False}


    stage.down(CODE) := CODE_IN.payload
    stage.down(PC) := pc
}

case class EX_WB() extends Bundle{
  val rd = Bits(32 bits)
  val rd_sel = UInt(5 bits)
  val rd_valid = Bool()
}

case class ID_EX() extends Bundle with RVCodeDef{
  val fun=( (RVCode() ))
  val rd_sel=(UInt(5 bits))
  val imm=(Bits(32 bits))
  val rs1=(Bits(32 bits))
  val rs2=(Bits(32 bits))
}
class ID_stage(
    val stage : CtrlLink,
    val CODE : Payload[Bits],
    val to_EX : Payload[ID_EX],
    val rs1_sel : UInt,
    val rs2_sel : UInt,
)extends Area with RVCodeDef{
    val rs1=stage.down(to_EX).rs1
    val rs2=stage.down(to_EX).rs2
    val rd=stage.down(to_EX).rd_sel
    val code = stage(CODE)
    val imm= stage.down(to_EX).imm

  def setFun(fun: RVCode.E,TYPE : String)={
    stage.down(to_EX).fun.assignFromBits(fun.asBits)

    val rs1_t=code(19 downto 15).asUInt
    val rs2_t=code(24 downto 20).asUInt
    val rd_t =code(11 downto 7).asUInt
    val imm_I=code(31 downto 20).asSInt.resize(32 bits)
    val imm_U=Cat(code(31 downto 12),B(0,12 bits)).asBits
    val imm_S=Cat(code(31 downto 25),code(11 downto 7)).asSInt.resize(32 bits)
    val imm_B=Cat(code(31),code(7),code(30 downto 25),code(11 downto 8),B(0,1 bits)).asSInt.resize(32 bits)
    val imm_J=Cat(code(31),code(19 downto 12),code(20),code(30 downto 21),B(0,1 bits)).asSInt.resize(32 bits)

    TYPE match{
      case "R" =>
        rs1_sel:=rs1_t
        rs2_sel:=rs2_t
        rd:=rd_t
      case "I" =>
        rs1_sel:=rs1_t
        rd:=rd_t
        imm:=imm_I.asBits
      case "S" =>
        rs1_sel:=rs1_t
        rs2_sel:=rs2_t
        imm:=imm_S.asBits
      case "B" =>
        rs1_sel:=rs1_t
        rs2_sel:=rs2_t
        imm:=imm_B.asBits
      case "U" =>
        rd:=rd_t
        imm:=imm_U
      case "J" =>
        rd:=rd_t
        imm:=imm_J.asBits
      case _ =>
        assert(false,"ERROR_TYPE CMD")
    }
  }
  stage.down(to_EX).fun.assignFromBits(0)
  stage.down(to_EX).imm:=0
  stage.down(to_EX).rd_sel:=0
  rs1_sel:=0
  rs2_sel:=0
  val error_flag = Bool()
  error_flag:=False

  when(stage.up.isFiring){
  switch(code)
  {
    import RVCode._
    //R型指令
    is(M"0000000_-----_-----_000_-----_0110011"){setFun(ADD,"R")}//ADD 
    is(M"0100000_-----_-----_000_-----_0110011"){setFun(SUB,"R")}//SUB
    is(M"0000000_-----_-----_111_-----_0110011"){setFun(AND,"R")}//AND
    is(M"0000000_-----_-----_110_-----_0110011"){setFun(OR,"R")}//OR
    is(M"0000000_-----_-----_100_-----_0110011"){setFun(XOR,"R")}//XOR
    is(M"0000000_-----_-----_001_-----_0110011"){setFun(SLL,"R")}//SLL
    is(M"0000000_-----_-----_101_-----_0110011"){setFun(SRL,"R")}//SRL
    is(M"0100000_-----_-----_101_-----_0110011"){setFun(SRA,"R")}//SRA
    is(M"0000000_-----_-----_010_-----_0110011"){setFun(SLT,"R")}//SLT
    is(M"0000000_-----_-----_011_-----_0110011"){setFun(SLTU,"R")}//SLTU 

    //I型
    is(M"-------_-----_-----_000_-----_0010011"){setFun(ADDI,"I")}//ADDI
    is(M"-------_-----_-----_100_-----_0010011"){setFun(XORI,"I")}//XORI
    is(M"-------_-----_-----_110_-----_0010011"){setFun(ORI,"I")}//ORI
    is(M"-------_-----_-----_111_-----_0010011"){setFun(ANDI,"I")}//ANDI
    is(M"0000000_-----_-----_001_-----_0010011"){setFun(SLLI,"I")}//SLLI
    is(M"0000000_-----_-----_101_-----_0010011"){setFun(SRLI,"I")}//SRLI
    is(M"0100000_-----_-----_101_-----_0010011"){setFun(SRAI,"I")}//SRAI
    is(M"-------_-----_-----_010_-----_0010011"){setFun(SLTI,"I")}//SLTI
    is(M"-------_-----_-----_011_-----_0010011"){setFun(SLTIU,"I")}//SLTIU

    is(M"-------_-----_-----_000_-----_0000011"){setFun(LB,"I") }//LB
    is(M"-------_-----_-----_001_-----_0000011"){setFun(LH,"I") }//LH
    is(M"-------_-----_-----_010_-----_0000011"){setFun(LW,"I") }//LW
    is(M"-------_-----_-----_100_-----_0000011"){setFun(LBU,"I")}//LBU 
    is(M"-------_-----_-----_101_-----_0000011"){setFun(LHU,"I")}//LHU
    is(M"-------_-----_-----_000_-----_1100111"){setFun(JALR,"I")}//JALR
    is(0x30200073){setFun(MRET,"I")}//mret  
    is(0x0000100f){setFun(FENCEI,"I")}//fence.i 内存屏障指令
    is(0x00100073){setFun(EBREAK,"I")}//ebreak
    is(0x00000073){setFun(ECALL,"I")}//ecall

    //S型
    is(M"-------_-----_-----_010_-----_0100011"){setFun(SW,"S")}//SW
    is(M"-------_-----_-----_001_-----_0100011"){setFun(SH,"S")}//SH
    is(M"-------_-----_-----_000_-----_0100011"){setFun(SB,"S")}//SB

    //B型指令
    is(M"-------_-----_-----_000_-----_1100011"){setFun(BEQ,"B")}//BEQ
    is(M"-------_-----_-----_001_-----_1100011"){setFun(BNE,"B")}//BNE
    is(M"-------_-----_-----_100_-----_1100011"){setFun(BLT,"B")}//BLT
    is(M"-------_-----_-----_101_-----_1100011"){setFun(BGE,"B")}//BGE
    is(M"-------_-----_-----_110_-----_1100011"){setFun(BLTU,"B")}//BLTU
    is(M"-------_-----_-----_111_-----_1100011"){setFun(BGEU,"B")}//BGEU

    //U型指令
    is(M"-------_-----_-----_---_-----_0110111"){setFun(LUI,"U")}//LUI
    is(M"-------_-----_-----_---_-----_0010111"){setFun(AUIPC,"U")}//AUIPC

    //J型指令
    is(M"-------_-----_-----_---_-----_1101111"){setFun(JAL,"J")}//JAL

    //CSR 指令
    is(M"-------_-----_-----_001_-----_1110011"){setFun(CSRRW,"I")}//CSRRW
    is(M"-------_-----_-----_010_-----_1110011"){setFun(CSRRS,"I")}//CSRRS
    is(M"-------_-----_-----_011_-----_1110011"){setFun(CSRRC,"I")}//CSRRC
    is(M"-------_-----_-----_101_-----_1110011"){setFun(CSRRWI,"I")}//CSRRWI
    is(M"-------_-----_-----_110_-----_1110011"){setFun(CSRRSI,"I")}//CSRRSI
    is(M"-------_-----_-----_111_-----_1110011"){setFun(CSRRCI,"I")}//CSRRCI

    default{
      error_flag:=True
      assert(False,"ERROR_CODE")}
  }
  }
  
}

//问题：EX 数据经过MEM延时导致上一拍读取数据错误
class EX_stage(
    val stage : CtrlLink,
    val PC : Payload[UInt],
    val from_ID : Payload[ID_EX],

    val MEM_addr : Payload[UInt],
    val MEM_mask : Payload[Bits],
    val MEM_unsigned : Payload[Bool],
    val MEM_read_valid : Payload[Bool],
    val MEM_write_valid : Payload[Bool],
    val RD_sel : Payload[UInt],
    val RD : Payload[Bits],
    val RD_valid : Payload[Bool],

    val CSR_valid : Payload[Bool],
    val CSR_sel : Payload[UInt],

    val fence_i : Bool,
    val to_IF : EX_IF
)extends Area with RVCodeDef{
    val rs1=stage(from_ID).rs1
    val rs2=stage(from_ID).rs2
    val rd_sel_up=stage(from_ID).rd_sel

    val rd_sel_down=stage.down(RD_sel)
    val rd =stage(RD)
    val rd_valid =stage(RD_valid)
    
    val pc =stage(PC)
    val fun = stage(from_ID).fun
    val imm = stage(from_ID).imm

    val mem_addr = stage.down(MEM_addr)
    val read_valid = stage.down(MEM_read_valid)
    val write_valid = stage.down(MEM_write_valid)
    val mem_mask = stage.down(MEM_mask)
    val mem_unsigned = stage.down(MEM_unsigned)
    mem_addr:=0
    read_valid:=False
    write_valid:=False
    mem_mask:=B"0000"
    mem_unsigned:=False

    val csr_valid = stage.down(CSR_valid)
    val csr_sel = stage.down(CSR_sel)
    csr_sel:=0
    csr_valid:=False

    rd_sel_down:=rd_sel_up

    rd:=0
    rd_valid:=True
    val nPC=UInt(32 bits)
    val nPC_valid=Bool()
    nPC:=0
    nPC_valid:=False
    //特殊指令
  val ebreak = new MyBlackBox.ebreak_fun()
  ebreak.io.ebreak_flag:=False
  fence_i:=False
  when(stage.up.isFiring){
  switch(fun){
    import RVCode._
    is(ADD){RVEX_I.ADD(rd,rs1,rs2)}
    is(SUB){RVEX_I.SUB(rd,rs1,rs2)}
    is(AND){RVEX_I.AND(rd,rs1,rs2)}
    is(OR){RVEX_I.OR(rd,rs1,rs2)}
    is(XOR){RVEX_I.XOR(rd,rs1,rs2)}
    is(SLL){RVEX_I.SLL(rd,rs1,rs2)}
    is(SRL){RVEX_I.SRL(rd,rs1,rs2)}
    is(SRA){RVEX_I.SRA(rd,rs1,rs2)}
    is(SLT){RVEX_I.SLT(rd,rs1,rs2)}
    is(SLTU){RVEX_I.SLTU(rd,rs1,rs2)}

    is(ADDI){RVEX_I.ADDI(rd,rs1,imm)}
    is(XORI){RVEX_I.XORI(rd,rs1,imm)}
    is(ORI){RVEX_I.ORI(rd,rs1,imm)}
    is(ANDI){RVEX_I.ANDI(rd,rs1,imm)}
    is(SLLI){RVEX_I.SLLI(rd,rs1,imm)}
    is(SRLI){RVEX_I.SRLI(rd,rs1,imm)}
    is(SRAI){RVEX_I.SRAI(rd,rs1,imm)}
    is(SLTI){RVEX_I.SLTI(rd,rs1,imm)}
    is(SLTIU){RVEX_I.SLTIU(rd,rs1,imm)}

    is(LB) {RVEX_I.LB(mem_addr,rs1,imm) ;rd_valid:=False;read_valid:=True;mem_mask:=B"0001"}
    is(LH) {RVEX_I.LH(mem_addr,rs1,imm) ;rd_valid:=False;read_valid:=True;mem_mask:=B"0011"}
    is(LW) {RVEX_I.LW(mem_addr,rs1,imm) ;rd_valid:=False;read_valid:=True;mem_mask:=B"1111"}
    is(LBU){RVEX_I.LBU(mem_addr,rs1,imm);rd_valid:=False;read_valid:=True;mem_mask:=B"0001";mem_unsigned:=True}
    is(LHU){RVEX_I.LHU(mem_addr,rs1,imm);rd_valid:=False;read_valid:=True;mem_mask:=B"0011";mem_unsigned:=True}
    is(SW){RVEX_I.SW(mem_addr,rs1,rs2,rd,imm,rd_valid);write_valid:=True;mem_mask:=B"1111"}
    is(SH){RVEX_I.SH(mem_addr,rs1,rs2,rd,imm,rd_valid);write_valid:=True;mem_mask:=B"0011"}
    is(SB){RVEX_I.SB(mem_addr,rs1,rs2,rd,imm,rd_valid);write_valid:=True;mem_mask:=B"0001"}

    is(JALR){RVEX_I.JALR(rd,nPC,nPC_valid,pc,rs1,imm)}

    is(BEQ){RVEX_I.BEQ(rs1,rs2,pc,nPC,nPC_valid,imm,rd_valid)}
    is(BNE){RVEX_I.BNE(rs1,rs2,pc,nPC,nPC_valid,imm,rd_valid)}
    is(BLT){RVEX_I.BLT(rs1,rs2,pc,nPC,nPC_valid,imm,rd_valid)}
    is(BGE){RVEX_I.BGE(rs1,rs2,pc,nPC,nPC_valid,imm,rd_valid)}
    is(BLTU){RVEX_I.BLTU(rs1,rs2,pc,nPC,nPC_valid,imm,rd_valid)}
    is(BGEU){RVEX_I.BGEU(rs1,rs2,pc,nPC,nPC_valid,imm,rd_valid)}

    is(LUI){RVEX_I.LUI(rd,imm)}
    is(AUIPC){RVEX_I.AUIPC(rd,pc.asBits,imm)}
    is(JAL){RVEX_I.JAL(rd,pc,nPC,nPC_valid,imm)}

    is(EBREAK){ebreak.io.ebreak_flag:=True}
    is(FENCEI){
      fence_i:=True
      nPC_valid:=True
      nPC:=pc+4
      rd_valid:=False
    }

    is(ECALL ){csr_valid:=True;rd_valid:=False;}
    is(MRET  ){csr_valid:=True;rd_valid:=False;}
    is(CSRRW ){csr_valid:=True;rd_valid:=False;csr_sel:=imm(11 downto 0).asUInt}
    is(CSRRS ){csr_valid:=True;rd_valid:=False;csr_sel:=imm(11 downto 0).asUInt}
    is(CSRRC ){csr_valid:=True;rd_valid:=False;csr_sel:=imm(11 downto 0).asUInt}
    is(CSRRWI){csr_valid:=True;rd_valid:=False;csr_sel:=imm(11 downto 0).asUInt}
    is(CSRRSI){csr_valid:=True;rd_valid:=False;csr_sel:=imm(11 downto 0).asUInt}
    is(CSRRCI){csr_valid:=True;rd_valid:=False;csr_sel:=imm(11 downto 0).asUInt}
    default{assert(False,"ERROR_CODE")}
  }}

  to_IF.nPC := nPC
  to_IF.valid := nPC_valid
  when(! stage.up.isFiring){
    rd_valid:=False
  }

}

case class mem_io() extends Bundle{
  val addr = UInt(32 bits)
  val mask = Bits(4 bits)
  val w_data = Stream(Bits(32 bits))
  val r_data = Stream(Bits(32 bits))
}

class MEM_stage(
  val stage : CtrlLink,
  val MEM_addr : Payload[UInt],
  val MEM_mask : Payload[Bits],
  val MEM_unsigned : Payload[Bool],
  val MEM_read_valid : Payload[Bool],
  val MEM_write_valid : Payload[Bool],
  val RD_sel : Payload[UInt],
  val RD : Payload[Bits],
  val RD_valid : Payload[Bool],
  val axi_m : Axi4
)extends Area{
  
  val mem_write_valid = stage(MEM_write_valid)
  val mem_read_valid = stage(MEM_read_valid)
  val mem_unsigned = stage(MEM_unsigned)
  val mem_addr = stage(MEM_addr)
  val mem_mask = stage(MEM_mask)
  val rd = stage(RD)


  val addrl = mem_addr(1 downto 0)
  val w_strb = (mem_mask<<addrl).resize(4 bits)
  val w_data = (rd<<(addrl<<3)).resize(32 bits)
  val r_data = (axi_m.r.data>>(addrl<<3))


  val axi = axi_m
  axi.aw.setIdle()
  axi.w.setIdle()
  axi.b.setBlocked()
  axi.ar.setIdle()
  axi.r.setBlocked()
  
    val w_flag =Reg(Bool()) init False
    val r_flag =Reg(Bool()) init False
    val once_flag =Reg(Bool()) init False

    when(stage.up.isFiring){once_flag:=True}
    when(stage.up.valid && mem_write_valid && once_flag){w_flag:=True;once_flag:=False;stage.haltIt()}
    when(stage.up.valid && mem_read_valid && once_flag){r_flag:=True ;once_flag:=False;stage.haltIt()}
    when(w_flag || r_flag){stage.haltIt()}

  // stage.down(RD_valid):=False

  val w = new StateMachine{
    val start : State = new State with EntryPoint{
      onEntry{w_flag:=False}
      whenIsActive{
        when(w_flag){
          goto(w)
        }
      }
    }
    val w : State = new State{
      whenIsActive{
        axi.aw.valid:=True
        axi.aw.addr:=mem_addr
        switch(mem_mask){
          is(B"0001"){axi.aw.size:=Axi4.size.BYTE_1.asUInt}
          is(B"0011"){axi.aw.size:=Axi4.size.BYTE_2.asUInt}
          default{axi.aw.size:=Axi4.size.BYTE_4.asUInt}
        }
        axi.aw.len:=0
        axi.aw.id:=0
        axi.w.valid:=True
        axi.w.data:=w_data
        axi.w.strb:=w_strb
        axi.w.last:=True
        when(axi.aw.fire){
          goto(b)
        }
      }
    }
    val b : State = new State{
      whenIsActive{
        axi.b.ready:=True
        when(axi.b.fire){
          goto(start)
        }
      }
    }
  }


  val r = new StateMachine{

    val start : State = new State with EntryPoint{
      onEntry{r_flag:=False}
      whenIsActive{
        when(r_flag){
          goto(ar)
        }
      }
    }
    val ar : State = new State{
      whenIsActive{
        axi.ar.valid:=True
        axi.ar.addr:=mem_addr
        switch(mem_mask){
          is(B"0001"){axi.ar.size:=Axi4.size.BYTE_1.asUInt}
          is(B"0011"){axi.ar.size:=Axi4.size.BYTE_2.asUInt}
          default{axi.ar.size:=Axi4.size.BYTE_4.asUInt}
        }
        axi.ar.len:=0
        axi.ar.id:=0
        when(axi.ar.fire){
          goto(r)
        }
      }
    }
    val r : State = new State{
      whenIsActive{
        axi.r.ready:=True
        when(axi.r.fire){
          stage.down(RD_valid):=True
          switch(mem_mask){
            is(B"0001"){rd:=Mux(mem_unsigned,(r_data(7 downto 0).asUInt).resize(32 bits).asBits,( r_data(7 downto 0).asSInt).resize(32 bits).asBits)}
            is(B"0011"){rd:=Mux(mem_unsigned,(r_data(15 downto 0).asUInt).resize(32 bits).asBits,(r_data(15 downto 0).asSInt).resize(32 bits).asBits)}
            default{rd:=r_data}
          }
        goto(delay)
        }
      }
    }
    val delay : State = new State{
      whenIsActive{
        goto(start)
      }
    }
  }
}


case class AXI_IF() extends Component{
  noIoPrefix()
  val io = new Bundle{
    val axi_m = master(Axi4(axi4_config))
    val addr = in (UInt(32 bits))
    val code = master Stream(Bits(32 bits))
  }
  val axi =io.axi_m
  axi.aw.setIdle()
  axi.w.setIdle()
  axi.b.setBlocked()
  axi.ar.setIdle()
  axi.r.setBlocked()
  io.code.valid:=False
  io.code.payload:=0
  val s = new StateMachine{
    val start : State = new State with EntryPoint{
      whenIsActive{
        when(io.code.ready){
          goto(ar)
        }
      }
    }
    val ar : State = new State{
    whenIsActive{
      axi.ar.valid:=True
      axi.ar.addr:=io.addr
      axi.ar.size:=Axi4.size.BYTE_4.asUInt
      axi.ar.len:=0
      axi.ar.id:=0
      when(axi.ar.fire){
        goto(r)
      }
    }
    }
    val r : State = new State{
      whenIsActive{
        axi.r.ready:=True
        when(axi.r.fire){
          io.code.valid:=True
          io.code.payload:=axi.r.data
          goto(start)
        }
      }
    }
  }
}

//要解决的问题：mret 和 ecall的PC地址跳转处理
case class CSR () extends Component{
  noIoPrefix()
  val io = new Bundle{
    val w_data = in Bits(32 bits)
    val w_valid = in Bool()
    val r_data = out Bits(32 bits)
    val csr_wsel = in UInt(12 bits)
    val csr_rsel = in UInt(12 bits)
  }
  val r_data = io.r_data
  val w_data = io.w_data
  val w_valid = io.w_valid
  val mcycle = Reg(Bits(64 bits))init 0
  val mstatus = Reg(Bits(32 bits))init 0x00001800
  val mcause = Reg(Bits(32 bits))init 0x00B
  val mepc = Reg(Bits(32 bits))init 0
  val mtvec = Reg(Bits(32 bits))init 0x30000000L

  mcycle:=(mcycle.asUInt+1).asBits

  switch(io.csr_rsel){
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
  val debug = new MyBlackBox.my_debug(35,4)
  debug.io.data(0):=(mtvec).asBits
  debug.io.data(1):=(mcause).asBits
  debug.io.data(2):=(mstatus).asBits
  debug.io.data(3):=(mepc).asBits

  when(w_valid){
    switch(io.csr_wsel){
      is(0x300){mstatus:=w_data;debug.io.data(2):=w_data}
      is(0x305){mtvec:=w_data;debug.io.data(0):=w_data}
      is(0x342){mcause:=w_data;debug.io.data(1):=w_data}
      is(0x341){mepc:=w_data;debug.io.data(3):=w_data}
      default{}
    }
  }
  // debug.io.data(0):=RegNext(mtvec).asBits
  // debug.io.data(1):=RegNext(mcause).asBits
  // debug.io.data(2):=RegNext(mstatus).asBits
  // debug.io.data(3):=RegNext(mepc).asBits



}


case class test_cpu()extends Component with RVCodeDef{
    noIoPrefix()
    val io = new Bundle{
      val axi_if = master(Axi4(axi4_config))
      val axi_mem = master(Axi4(axi4_config))
      // val axi_s = slave(Axi4(TOP.YsyxSoc.axi4_config))
    }
    val pip = new StageCtrlPipeline()

    val gpr = Vec(Reg(Bits(32 bits)) init 0,16)

    val PC =Payload(UInt(32 bits))
    val CODE =Payload(Bits(32 bits))
    val EXtoIF = EX_IF()
    val fence_i = Bool()
    val IF = new pip.Ctrl(1){ 
      import MY_Prj.RV_comm.Icache._
      val axi_if = new Icache(16,8)
      val addr =UInt(32 bits)
      val code =  Stream(Bits(32 bits))
      io.axi_if<>axi_if.io.axi
      axi_if.io.fence_i:=fence_i
      axi_if.io.addr<>addr
      axi_if.io.code<>code
      pip.ctrl(1).up.valid:=True
      
      val IFt = new IF_stage(
       stage = pip.ctrl(1),
       ADDR = addr,
       CODE_IN = code,
       PC = PC,
       CODE = CODE,
       from_EX = EXtoIF,
      )
    }

    val IDtoEX =Payload(ID_EX())
    val CSR_rs1_imm = Payload(UInt(5 bits))


//译码控制部分
    val id_rs1 = Bits(32 bits)
    val id_rs2 = Bits(32 bits)
    val id_rs1_sel = UInt(5 bits)
    val id_rs2_sel = UInt(5 bits)
    val ID = new pip.Ctrl(2){
      val IDt = new ID_stage(
          stage = pip.ctrl(2),
          CODE = CODE,
          to_EX = IDtoEX,
          rs1_sel = id_rs1_sel,
          rs2_sel = id_rs2_sel,
        )
        IDtoEX.rs1:=id_rs1
        IDtoEX.rs2:=id_rs2
        CSR_rs1_imm:=CODE(19 downto 15).asUInt
    }

//执行控制部分
    val MEM_addr =Payload(UInt(32 bits))
    val MEM_data =Payload(UInt(32 bits))
    val MEM_mask =Payload(Bits(4 bits))
    val MEM_unsigned =Payload(Bool())
    val MEM_read_valid =Payload(Bool())
    val MEM_write_valid =Payload(Bool())
    val RD_sel =Payload(UInt(5 bits))
    val RD =Payload(Bits(32 bits))
    val RD_valid =Payload(Bool())
    val CSR_valid =Payload(Bool())
    val CSR_sel =Payload(UInt(12 bits))
    val EX = new pip.Ctrl(3){
      val EXt = new EX_stage(
          stage = pip.ctrl(3),
          PC = PC,
          from_ID = IDtoEX,
          MEM_addr = MEM_addr,
          MEM_mask = MEM_mask,
          MEM_unsigned = MEM_unsigned,
          MEM_read_valid = MEM_read_valid,
          MEM_write_valid = MEM_write_valid,
          RD_sel = RD_sel,
          RD = RD,
          RD_valid = RD_valid,
          CSR_valid = CSR_valid,
          CSR_sel = CSR_sel,
          fence_i = fence_i,
          to_IF = EXtoIF,
      )

    }
//访存控制部分
    val axi_mem = (Axi4(axi4_config))
    io.axi_mem<>axi_mem
    val MEM_RD_valid = Payload(Bool())
    val MEM = new pip.Ctrl(4){
      val MEMt = new MEM_stage(
        stage = pip.ctrl(4),
        MEM_addr = MEM_addr,
        MEM_mask = MEM_mask,
        MEM_unsigned = MEM_unsigned,
        MEM_read_valid = MEM_read_valid,
        MEM_write_valid = MEM_write_valid,
        RD_sel = RD_sel,
        RD = RD,
        RD_valid = RD_valid,
        axi_m = axi_mem,
      )
    }
//写回控制部分

    val WB = new pip.Ctrl(5){

      when((RD_valid)&& (RD_sel) =/= 0 && !MEM(CSR_valid)){
        gpr(RD_sel.resize(4 bi@@t)):=(RD)
      }

      val csr = new CSR()
      // val CSR_rs1_imm = CODE(19 downto 15).asUInt
      val csr_rdata = csr.io.r_data
      val csr_wdata = csr.io.w_data
      val gpr_rdata = gpr(CSR_rs1_imm)

      csr.io.w_valid:=CSR_valid
      csr.io.csr_wsel:=CSR_sel
      csr.io.csr_rsel:=CSR_sel
      csr.io.w_data:=0

      val csr_flag= Bool()
      csr_flag:=False

      when(CSR_valid){
      
      when(RD_sel=/=0){gpr(RD_sel):=csr_rdata}

      switch(IDtoEX.fun){
      import  RVCode._
      is(ECALL ){
        csr.io.csr_wsel:=0x341
        csr.io.csr_rsel:=0x305
        csr.io.w_data:=PC.asBits
        EXtoIF.valid:=True
        EXtoIF.nPC:=csr_rdata.asUInt
        pip.ctrl(2).throwIt()
        pip.ctrl(3).throwIt()
        pip.ctrl(4).throwIt()
        csr_flag:=True
      }
      is(MRET  ){
        csr.io.w_valid:=False
        csr.io.csr_rsel:=0x341
        EXtoIF.valid:=True
        EXtoIF.nPC:=csr_rdata.asUInt
        pip.ctrl(2).throwIt()
        pip.ctrl(3).throwIt()
        pip.ctrl(4).throwIt()
        csr_flag:=True
      }
      is(CSRRW ){csr_wdata:=gpr_rdata}
      is(CSRRS ){csr_wdata:=gpr_rdata | csr_rdata}
      is(CSRRC ){csr_wdata:=csr_rdata & ~ gpr_rdata}
      is(CSRRWI){csr_wdata:=CSR_rs1_imm.asBits.resized}
      is(CSRRSI){csr_wdata:=(gpr_rdata.asUInt | CSR_rs1_imm.resize(32 bits)).asBits}
      is(CSRRCI){csr_wdata:=csr_rdata & ~ (CSR_rs1_imm.resize(32 bits).asBits)}
      }
      }
    }

//读取数据加入空操作
  when(EX(MEM_read_valid)|MEM(MEM_read_valid)|EX(CSR_valid)|MEM(CSR_valid)|WB(CSR_valid)) {
    pip.ctrl(2).haltIt()      
  }


//数据转发
    val pass_valid = Bool()
    pass_valid:=False
    //当写数并且MEM阶段没有东西的时候进行数据转发
    when(pip.ctrl(3).up.isFiring){
      pass_valid:=True
      WB.bypass(RD):=EX(RD)
      WB.bypass(RD_sel):=EX(RD_sel)
      WB.bypass(RD_valid):=EX(RD_valid)
      WB.bypass(PC):=EX(PC)
      WB.bypass(CODE):=EX(CODE)
    }
//数据前递部分

    when(id_rs1_sel===WB(RD_sel) && WB(RD_sel)=/=0 && WB(RD_valid)){id_rs1:=WB(RD)}
    .otherwise{id_rs1:=gpr(id_rs1_sel)}
    when(id_rs2_sel===WB(RD_sel) && WB(RD_sel)=/=0 && WB(RD_valid)){id_rs2:=WB(RD)}
    .otherwise{id_rs2:=gpr(id_rs2_sel)}

    when(!IF.code.valid){
      pip.ctrl(1).haltIt()
    }

    pip.ctrl(2).throwWhen(RegNext(EXtoIF.valid) | (EXtoIF.valid))

    pip.build()


//接入外部的和Veriltor联调的部分
  val debug = new Area{
  val gpr_debug = new MyBlackBox.my_debug(0,32)
  for(i<-0 until 32){
    gpr_debug.io.data(i):=RegNext(gpr(i))
  }

  val step = new MyBlackBox.step_fun()
  step.io.clk:=ClockDomain.current.readClockWire
  val flag =Reg(Bool()) init False
  val step_flag =Bool()
  // step.io.step:=(pip.ctrl(4).down.valid)
  step.io.step:=step_flag

  val difftest = new MyBlackBox.my_debug(32,3)


  step_flag:=False
  difftest.io.data(0):=0
  difftest.io.data(2):=WB(CODE).asBits
  difftest.io.data(1):=RegNextWhen(EXtoIF.nPC,EXtoIF.valid).asBits

  when((MEM.up.isFiring)){
    step_flag:=True
    difftest.io.data(0):=MEM(PC).asBits
    difftest.io.data(2):=MEM(CODE).asBits
  }
  val performance = new MyBlackBox.my_debug(41,3)
  val IFU_cnt =Reg(UInt(32 bits)) init 0
  val IDU_cnt =Reg(UInt(32 bits)) init 0
  val EXU_cnt =Reg(UInt(32 bits)) init 0
  when(pip.ctrl(1).down.valid){IFU_cnt:=IFU_cnt+1}
  when(pip.ctrl(2).down.valid){IDU_cnt:=IDU_cnt+1}
  when(pip.ctrl(3).down.valid){EXU_cnt:=EXU_cnt+1}

  performance.io.data(0):=IFU_cnt.asBits
  performance.io.data(1):=IDU_cnt.asBits
  performance.io.data(2):=EXU_cnt.asBits
  }

  
}


```


#### Short summary: 

empty definition using pc, found symbol in pc: 