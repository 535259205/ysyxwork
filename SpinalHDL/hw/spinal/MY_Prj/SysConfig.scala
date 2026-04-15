package SysConfig

import TOP._
import pipCPU._

import spinal.core._
import spinal.sim._
import spinal.core.sim._
import java.io.File
import java.io.IOException
import spinal.lib.KeepAttribute.keep


object Sys{
  val spinalConfig =SpinalConfig(
      keepAll = false,
      defaultConfigForClockDomains = ClockDomainConfig(
        clockEdge = RISING,
        resetKind = ASYNC,
        resetActiveLevel = HIGH,
      ),
      defaultClockDomainFrequency = FixedFrequency(50 MHz),
      // targetDirectory = "/home/ylqt/study/YSYX_data/ysyx-workbench/npc/vsrc/ysyxsoc",
      // targetDirectory = "/home/ylqt/study/YSYX_data/ysyx-workbench/YSYX_SOC/ysyxSoC/perip/amba",
      targetDirectory = "hw/verilog/ysyx_soc",

      headerWithRepoHash = false,
      inlineRom = true,
      enumPrefixEnable = true,
      nameWhenByFile = true,

      // mergeAsyncProcess = true,
      // mergeSyncProcess = true,
      dontCareGenAsZero = true,

      inlineConditionalExpression = true,//内联条件表达式
      cutLongExpressions = true,//拆分过长的表达式
      romReuse = true,//复用相同的rom模块
      // enumGlobalEnable = true,//是否全局启用枚举类型
      //DEBUG 相关配置
      // _withEnumString = false,//是否在枚举类型中添加字符串表示
      noAssert = true,//是否禁用断言
      oneFilePerComponent = true,//每个组件生成一个Verilog文件
    )

  def openWave(compiledPath:File)={
    val waveFilePath =new File(compiledPath,"/test/wave.vcd").getAbsolutePath
    val lastFile = new File("simWorkspace/gtksave/save.gtkw").getAbsolutePath
    println(s"open wave file: $waveFilePath")

    val command = Array(
      "gtkwave",    // 命令名
      waveFilePath,  // 波形文件路径参数
      lastFile
    )
    val processBuilder = new ProcessBuilder(command: _*)
      .redirectError(ProcessBuilder.Redirect.INHERIT) // 重定向错误输出到控制台（终端一样的报错）
      .redirectOutput(ProcessBuilder.Redirect.INHERIT) // 重定向标准输出到控制台
      .start().waitFor // 启动进程（等价于终端敲回车执行命令）
  }

}


object MyTopLevelApp extends App {


  val argsSet = args.toSet
  val generateAll = argsSet.isEmpty
  val generatePipCPU = generateAll || argsSet.contains("pipcpu")
  val generateMyCpu = generateAll || argsSet.contains("mycpu")

  // 生成ysyxSoCFull模块的Verilog代码
  if (generatePipCPU) {
  val spinalConfig =SpinalConfig(
      keepAll = false,
      defaultConfigForClockDomains = ClockDomainConfig(
        clockEdge = RISING,
        resetKind = ASYNC,
        resetActiveLevel = HIGH,
      ),
      defaultClockDomainFrequency = FixedFrequency(50 MHz),
      globalPrefix = "ysyx_26010010_",
      headerWithRepoHash = false,
      inlineRom = true,
      enumPrefixEnable = true,
      nameWhenByFile = true,
      inlineConditionalExpression = true,//内联条件表达式
      cutLongExpressions = true,//拆分过长的表达式
      romReuse = true,//复用相同的rom模块
      dontCareGenAsZero = true ,//将dontCare信号生成的Verilog代码设为0
      noAssert = true,//是否禁用断言
      oneFilePerComponent = false,//每个组件生成一个Verilog文件
    )
    spinalConfig.targetDirectory="../npc/build/"
    spinalConfig.generateVerilog(new MY_Prj.pipCPU_TOP.ysyx_26010010()).printPruned()
  }

  // 生成MyCpu模块的Verilog代码
  // if (generateMyCpu) {
  //   println("Generating MyCpu.CPU()...")
  //   spinalConfig.targetDirectory="hw/verilog/ysyx_soc"
  //   spinalConfig.generateVerilog(new MyCpu.MyCpu.ysyxSoCFull).printPruned()
  // }
  
  // // 生成MyCpu模块的Verilog代码
  if (generateMyCpu) {
    val spinalConfig =Sys.spinalConfig
    println("Generating MyCpu.TOP...")
    spinalConfig.targetDirectory="../npc/vsrc_npc/ysyx_soc"
    spinalConfig.generateVerilog(new MyCpu.MyCpu.ysyxSoCFull).printPruned()
  }
}


object TestIdentity extends App {
    val spinalConfig  = Sys.spinalConfig

    val simConfig =SimConfig
    .withConfig(spinalConfig)
    .withWave
    .withVerilator
    .compile(new test_cpu())
    
    simConfig.doSim{ dut =>
    dut.clockDomain.forkStimulus(period = 20)//设置时钟周期20ns 50MHz
    dut.clockDomain.assertReset() 
    sleep(100)
    dut.clockDomain.deassertReset() //高电平复位

    for(i<-0 until 100){
      dut.clockDomain.waitSampling(10)
    }
  }
  Sys.openWave(simConfig.compiledPath)
}
