error id: 59E4510BB8923E6995F542A83C12D25B
file://<WORKSPACE>/hw/spinal/MY_Prj/pipCPU/pipCPU_TOP.scala
### java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)

occurred in the presentation compiler.



action parameters:
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
  // val axi = new Axi4SlaveFactory(io.axi)
  // val mtime_L = axi.createReadOnly(UInt(32 bits),0x02000000,0) init 0
  // val mtime_H = axi.createReadOnly(UInt(32 bits),0x02000004,0) init 0
  val mtime=Reg(UInt(64 bits)) init 0
  mtime:=mtime+1
  // mtime_L:=mtime_L+1
  // when(mtime_L===0xFFFFFFFFL){
    // mtime_H:=mtime_H+1
  // }
  // axi.build()

  // io.axi.ar.setBlocked()
  io.axi.r.setIdle()
  io.axi.w.setBlocked()
  io.axi.aw.setBlocked()
  io.axi.b.setIdle()

  io.axi.ar.ready.setAsReg() init True
  io.axi.r.valid.setAsReg() init False
  io.axi.r.last:=io.axi.r.valid

  val r = new StateMachine{

    val start : State = new State with EntryPoint{
      whenIsActive{
        io.axi.ar.ready:=True
        when(io.axi.ar.fire){
          io.axi.ar.ready:=False
          goto(r)
        }
      }
    }
    val r : State = new State{
      whenIsActive{
        io.axi.r.valid:=True
        io.axi.r.
        when(io.axi.r.fire){
          io.axi.r.valid:=True
          goto(start)
        }
      }
    }

  }

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
    val clint = new AXIClint()
    
    cpu.io.axi_if<>xbar.io.axi_m(0)
    cpu.io.axi_mem<>xbar.io.axi_m(1)
    clint.io.axi<>xbar.io.axi_s(1)
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


presentation compiler configuration:
Scala version: 2.13.14
Classpath:
<WORKSPACE>/.bloop/projectname/bloop-bsp-clients-classes/classes-Metals-0B7OP6UaR-Cqkq9Gp7BBxw== [exists ], <HOME>/.cache/bloop/semanticdb/com.sourcegraph.semanticdb-javac.0.11.2/semanticdb-javac-0.11.2.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.14/scala-library-2.13.14.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/spinalhdl/spinalhdl-core_2.13/1.12.3/spinalhdl-core_2.13-1.12.3.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/spinalhdl/spinalhdl-lib_2.13/1.12.3/spinalhdl-lib_2.13-1.12.3.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/spinalhdl/spinalhdl-idsl-plugin_2.13/1.12.3/spinalhdl-idsl-plugin_2.13-1.12.3.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/spinalhdl/spinalhdl-sim_2.13/1.12.3/spinalhdl-sim_2.13-1.12.3.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scalactic/scalactic_2.13/3.2.10/scalactic_2.13-3.2.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-reflect/2.13.14/scala-reflect-2.13.14.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/scopt/scopt_2.13/4.1.0/scopt_2.13-4.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/sourcecode_2.13/0.3.0/sourcecode_2.13-0.3.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/commons-io/commons-io/2.11.0/commons-io-2.11.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-compiler/2.13.14/scala-compiler-2.13.14.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/spinalhdl/spinalhdl-idsl-payload_2.13/1.12.3/spinalhdl-idsl-payload_2.13-1.12.3.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/net/openhft/affinity/3.23.2/affinity-3.23.2.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/slf4j/slf4j-simple/2.0.5/slf4j-simple-2.0.5.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/oshi/oshi-core/6.4.0/oshi-core-6.4.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/io/github/java-diff-utils/java-diff-utils/4.12/java-diff-utils-4.12.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/jline/jline/3.25.1/jline-3.25.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/net/java/dev/jna/jna/5.14.0/jna-5.14.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/slf4j/slf4j-api/2.0.5/slf4j-api-2.0.5.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/net/java/dev/jna/jna-platform/5.12.1/jna-platform-5.12.1.jar [exists ]
Options:
-Yrangepos -Xplugin-require:semanticdb




#### Error stacktrace:

```
scala.collection.mutable.ArrayBuffer.apply(ArrayBuffer.scala:102)
	scala.reflect.internal.Types$Type.findMemberInternal$1(Types.scala:1030)
	scala.reflect.internal.Types$Type.findMember(Types.scala:1035)
	scala.reflect.internal.Types$Type.memberBasedOnName(Types.scala:661)
	scala.reflect.internal.Types$Type.nonLocalMember(Types.scala:652)
	scala.tools.nsc.typechecker.Typers$Typer.member(Typers.scala:684)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelect$1(Typers.scala:5442)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelectOrSuperCall$1(Typers.scala:5604)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6206)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6261)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$41(Typers.scala:5233)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:713)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5235)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5267)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6205)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6261)
	scala.tools.nsc.typechecker.Typers$Typer.computeType(Typers.scala:6350)
	scala.tools.nsc.typechecker.Namers$Namer.assignTypeToTree(Namers.scala:1105)
	scala.tools.nsc.typechecker.Namers$Namer.inferredValTpt$1(Namers.scala:1752)
	scala.tools.nsc.typechecker.Namers$Namer.valDefSig(Namers.scala:1765)
	scala.tools.nsc.typechecker.Namers$Namer.memberSig(Namers.scala:1953)
	scala.tools.nsc.typechecker.Namers$Namer.typeSig(Namers.scala:1903)
	scala.tools.nsc.typechecker.Namers$Namer$ValTypeCompleter.completeImpl(Namers.scala:918)
	scala.tools.nsc.typechecker.Namers$Namer$AccessorTypeCompleter.completeImpl(Namers.scala:942)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete(Namers.scala:2100)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete$(Namers.scala:2098)
	scala.tools.nsc.typechecker.Namers$TypeCompleterBase.complete(Namers.scala:2093)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1566)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1538)
	scala.reflect.internal.Symbols$Symbol.tpe_$times(Symbols.scala:1521)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedBlock$2(Typers.scala:2635)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedBlock$2$adapted(Typers.scala:2633)
	scala.collection.immutable.List.exists(List.scala:396)
	scala.tools.nsc.typechecker.Typers$Typer.matchesVisibleMember$1(Typers.scala:2633)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedBlock$3(Typers.scala:2643)
	scala.reflect.internal.Scopes$Scope.foreach(Scopes.scala:455)
	scala.tools.nsc.typechecker.Typers$Typer.typedBlock(Typers.scala:2639)
	scala.tools.nsc.typechecker.Typers$Typer.typedOutsidePatternMode$1(Typers.scala:6179)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6215)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6261)
	scala.tools.nsc.typechecker.Typers$Typer.computeType(Typers.scala:6350)
	scala.tools.nsc.typechecker.Namers$Namer.assignTypeToTree(Namers.scala:1105)
	scala.tools.nsc.typechecker.Namers$Namer.inferredValTpt$1(Namers.scala:1752)
	scala.tools.nsc.typechecker.Namers$Namer.valDefSig(Namers.scala:1765)
	scala.tools.nsc.typechecker.Namers$Namer.memberSig(Namers.scala:1953)
	scala.tools.nsc.typechecker.Namers$Namer.typeSig(Namers.scala:1903)
	scala.tools.nsc.typechecker.Namers$Namer$ValTypeCompleter.completeImpl(Namers.scala:918)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete(Namers.scala:2100)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete$(Namers.scala:2098)
	scala.tools.nsc.typechecker.Namers$TypeCompleterBase.complete(Namers.scala:2093)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1566)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1538)
	scala.reflect.internal.Symbols$Symbol.initialize(Symbols.scala:1733)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5835)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6261)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6339)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$9(Typers.scala:3539)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3539)
	scala.tools.nsc.typechecker.Typers$Typer.typedTemplate(Typers.scala:2144)
	scala.tools.nsc.typechecker.Typers$Typer.typedClassDef(Typers.scala:1982)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6168)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6261)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6339)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$9(Typers.scala:3539)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3539)
	scala.tools.nsc.typechecker.Typers$Typer.typedPackageDef$1(Typers.scala:5844)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6171)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6261)
	scala.tools.nsc.typechecker.Analyzer$typerFactory$TyperPhase.apply(Analyzer.scala:125)
	scala.tools.nsc.Global$GlobalPhase.applyPhase(Global.scala:481)
	scala.tools.nsc.interactive.Global$TyperRun.applyPhase(Global.scala:1369)
	scala.tools.nsc.interactive.Global$TyperRun.typeCheck(Global.scala:1362)
	scala.tools.nsc.interactive.Global.typeCheck(Global.scala:680)
	scala.meta.internal.pc.Compat.$anonfun$runOutline$1(Compat.scala:74)
	scala.collection.IterableOnceOps.foreach(IterableOnce.scala:619)
	scala.collection.IterableOnceOps.foreach$(IterableOnce.scala:617)
	scala.collection.AbstractIterable.foreach(Iterable.scala:935)
	scala.meta.internal.pc.Compat.runOutline(Compat.scala:66)
	scala.meta.internal.pc.Compat.runOutline(Compat.scala:35)
	scala.meta.internal.pc.Compat.runOutline$(Compat.scala:33)
	scala.meta.internal.pc.MetalsGlobal.runOutline(MetalsGlobal.scala:39)
	scala.meta.internal.pc.ScalaCompilerWrapper.compiler(ScalaCompilerAccess.scala:18)
	scala.meta.internal.pc.ScalaCompilerWrapper.compiler(ScalaCompilerAccess.scala:13)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$semanticTokens$1(ScalaPresentationCompiler.scala:206)
	scala.meta.internal.pc.CompilerAccess.withSharedCompiler(CompilerAccess.scala:148)
	scala.meta.internal.pc.CompilerAccess.$anonfun$withInterruptableCompiler$1(CompilerAccess.scala:92)
	scala.meta.internal.pc.CompilerAccess.$anonfun$onCompilerJobQueue$1(CompilerAccess.scala:209)
	scala.meta.internal.pc.CompilerJobQueue$Job.run(CompilerJobQueue.scala:152)
	java.base/java.util.concurrent.ThreadPoolExecutor.runWorker(ThreadPoolExecutor.java:1136)
	java.base/java.util.concurrent.ThreadPoolExecutor$Worker.run(ThreadPoolExecutor.java:635)
	java.base/java.lang.Thread.run(Thread.java:840)
```
#### Short summary: 

java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)