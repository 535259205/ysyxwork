package RVFun

import spinal.core._
import spinal.lib._

trait RVCodeDef {
    case object  RVCode extends SpinalEnum(defaultEncoding = binarySequential){
    //R型指令
    val ADD,SUB ,AND ,OR  ,XOR ,SLL ,SRL ,SRA ,SLT,SLTU = newElement()
    //I型指令
    val ADDI ,XORI ,ORI  ,ANDI ,SLLI ,SRLI ,SRAI ,SLTI ,SLTIU,LB ,LH,LW,
    LBU,LHU,JALR ,ECALL ,EBREAK,MRET  ,FENCEI  = newElement()
    //S型指令
    val SW,SH,SB = newElement()
    //B型指令
    val BEQ  ,BNE  ,BLT  ,BGE  ,BLTU ,BGEU = newElement()
    //U型指令
    val LUI  ,AUIPC = newElement()
    //J型指令
    val JAL  = newElement()
    //控制相关的指令
    val CSRRW,CSRRS,CSRRC,CSRRWI,CSRRSI,CSRRCI = newElement()
    
    }
    
    
    case object  RVEX_I {
        def ADD(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asSInt+rs2.asSInt).asBits}
        def SUB(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asSInt-rs2.asSInt).asBits}
        def AND(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asUInt&rs2.asUInt).asBits}
        def OR(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asUInt|rs2.asUInt).asBits}
        def XOR(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asUInt^rs2.asUInt).asBits}
        def SLL(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asUInt<<(rs2.asUInt(4 downto 0))).asBits.resized}
        def SRL(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asUInt>>(rs2.asUInt(4 downto 0))).asBits.resized}
        def SRA(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asSInt>>(rs2.asUInt(4 downto 0))).asBits.resized}
        def SLT(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asSInt<rs2.asSInt).asBits.resized}
        def SLTU(rd:Bits,rs1:Bits,rs2:Bits) = {rd := (rs1.asUInt<rs2.asUInt).asBits.resized}

        def ADDI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asSInt+imm.asSInt).asBits}
        def XORI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asUInt^imm.asUInt).asBits}
        def ORI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asUInt|imm.asUInt).asBits}
        def ANDI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asUInt&imm.asUInt).asBits}
        def SLLI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asUInt<<(imm.asUInt(4 downto 0))).asBits.resized}
        def SRLI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asUInt>>(imm.asUInt(4 downto 0))).asBits.resized}
        def SRAI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asSInt>>(imm.asUInt(4 downto 0))).asBits.resized}
        def SLTI(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asSInt<imm.asSInt).asBits.resized}
        def SLTIU(rd:Bits,rs1:Bits,imm:Bits) = {rd := (rs1.asUInt<imm.asUInt).asBits.resized}
    
        def LB(addr:UInt,rs1:Bits,imm:Bits) = {addr := (rs1.asUInt+imm.asUInt)}
        def LH(addr:UInt,rs1:Bits,imm:Bits) = {addr := (rs1.asUInt+imm.asUInt)}
        def LW(addr:UInt,rs1:Bits,imm:Bits) = {addr := (rs1.asUInt+imm.asUInt)}
        def LBU(addr:UInt,rs1:Bits,imm:Bits) = {addr := (rs1.asUInt+imm.asUInt)}
        def LHU(addr:UInt,rs1:Bits,imm:Bits) = {addr := (rs1.asUInt+imm.asUInt)}

        def JALR(rd:Bits,nPC:UInt,nPC_vaild:Bool,PC:UInt,rs1:Bits,imm:Bits) = {rd := (PC+4).asBits ; nPC_vaild := True ; nPC := (rs1.asUInt+imm.asUInt)}
        def SW(addr:UInt,rs1:Bits,rs2:Bits,rd:Bits,imm:Bits,rd_valid : Bool) = {addr := (rs1.asUInt+imm.asUInt);rd:=rs2;rd_valid:=False}
        def SH(addr:UInt,rs1:Bits,rs2:Bits,rd:Bits,imm:Bits,rd_valid : Bool) = {addr := (rs1.asUInt+imm.asUInt);rd:=rs2(15 downto 0).resized;rd_valid:=False}
        def SB(addr:UInt,rs1:Bits,rs2:Bits,rd:Bits,imm:Bits,rd_valid : Bool) = {addr := (rs1.asUInt+imm.asUInt);rd:=rs2(7 downto 0).resized;rd_valid:=False}

        def BEQ(rs1:Bits,rs2:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits,rd_vaild:Bool) = {rd_vaild:=False;when(rs1.asUInt===rs2.asUInt){nPC:=(PC+imm.asUInt);nPC_vaild:=True}}
        def BNE(rs1:Bits,rs2:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits,rd_vaild:Bool) = {rd_vaild:=False;when(rs1.asUInt=/=rs2.asUInt){nPC:=(PC+imm.asUInt);nPC_vaild:=True}}
        def BLT(rs1:Bits,rs2:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits,rd_vaild:Bool) = {rd_vaild:=False;when(rs1.asSInt<rs2.asSInt){nPC:=(PC+imm.asUInt);nPC_vaild:=True}}
        def BGE(rs1:Bits,rs2:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits,rd_vaild:Bool) = {rd_vaild:=False;when(rs1.asSInt>=rs2.asSInt){nPC:=(PC+imm.asUInt);nPC_vaild:=True}}
        def BLTU(rs1:Bits,rs2:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits,rd_vaild:Bool) = {rd_vaild:=False;when(rs1.asUInt<rs2.asUInt){nPC:=(PC+imm.asUInt);nPC_vaild:=True}}
        def BGEU(rs1:Bits,rs2:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits,rd_vaild:Bool) = {rd_vaild:=False;when(rs1.asUInt>=rs2.asUInt){nPC:=(PC+imm.asUInt);nPC_vaild:=True}}
        
        def LUI(rd:Bits,imm:Bits) = {rd := (imm).asBits}
        def AUIPC(rd:Bits,PC:Bits,imm:Bits) = {rd := (PC.asUInt+imm.asUInt).asBits}

        def JAL(rd:Bits,PC:UInt,nPC:UInt,nPC_vaild:Bool,imm:Bits) = {rd := (PC+4).asBits ; nPC_vaild := True ; nPC := (PC+imm.asUInt)}
    }
    
}