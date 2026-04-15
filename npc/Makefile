csrc := ./csrc/*.cpp

# DIR ?=WORK
# DIR ?=YSYX_SOC
# 
# vsrc ?=	$(shell find ./vsrc/ -name "*.v")
# vsrc += $(shell find ../$(DIR)/ysyxSoC/perip/ -name "*.v")
# vsrc += $(shell find ../$(DIR)/ysyxSoC/build/ -name "*.v")
# 定义要添加的include目录
# UART_INC = -I$(CURDIR)/../$(DIR)/ysyxSoC/perip/uart16550/rtl
# SPI_INC = -I$(CURDIR)/../$(DIR)/ysyxSoC/perip/spi/rtl

# TOP_MODULE := ysyxSoCFull
WORK ?=F
NPC_HOME := $(AM_HOME)/../npc
ifeq ($(WORK),F)
-include $(NPC_HOME)/scripts/ysyx_study.mk
else ifeq ($(WORK),T)
-include $(NPC_HOME)/scripts/ysyx_work.mk
else ifeq ($(WORK),N)
-include $(NPC_HOME)/scripts/npc.mk
endif

# VERILATOR_INC := $(shell dirname $(shell find ~/environment -name "verilated.h"))
VERILATOR_INC := $(shell find ~/environment -name "verilated.h" 2>/dev/null | head -1 | xargs -r dirname 2>/dev/null)
VERILATOR_INC_FLAG := $(if $(VERILATOR_INC),-I$(VERILATOR_INC),)

USE_WAVE ?=0


# Capstone库设置（可选，仅本地调试使用）
CAPSTONE_HEADER := $(AM_HOME)/../nemu/tools/capstone/repo/include/capstone/capstone.h
ifneq ($(wildcard $(CAPSTONE_HEADER)),)
LIBCAPSTONE = $(AM_HOME)/../nemu/tools/capstone/repo/libcapstone.so.5
INCCAPSTONE := -I$(AM_HOME)/../nemu/tools/capstone/repo/include
CAPSTONE_FLAG := -DHAVE_CAPSTONE
CAPSTONE_LDFLAG := -L$(AM_HOME)/../nemu/tools/capstone/repo -lcapstone
else
LIBCAPSTONE =
INCCAPSTONE :=
CAPSTONE_FLAG :=
CAPSTONE_LDFLAG :=
endif

#diff test链接库及.h文件设置（可选，仅本地调试使用）
NEMU_LIB := $(AM_HOME)/../nemu/build/riscv32-nemu-interpreter-so
ifneq ($(wildcard $(NEMU_LIB)),)
LIBDIFFTEST := $(NEMU_LIB)
DIFFTEST_FLAG := -DHAVE_DIFFTEST
else
LIBDIFFTEST :=
DIFFTEST_FLAG :=
endif
INCDIFFTEST := -I$(AM_HOME)/../nemu/include
INCDIFFTEST += -I$(AM_HOME)/../nemu/src/isa/riscv32/include

# 确保capstone库已编译
$(LIBCAPSTONE):
#	$(MAKE) -C $(AM_HOME)/../nemu/tools/capstone

#-g -fsanitize=address
all: $(LIBCAPSTONE)
	@@verilator --trace  -cc --top-module $(TOP_MODULE) $(VSRCS)  --exe $(csrc) \
		--relative-includes \
		--error-limit 0 \
		-O3 --x-assign fast --x-initial fast \
		-Wno-WIDTH \
		-Wno-UNDRIVEN \
		-Wno-UNUSED \
		-Wno-DECLFILENAME \
		-Wno-PINCONNECTEMPTY \
		-Wno-ASSIGNDLY \
		-Wno-DEFPARAM \
		-Wno-PROCASSINIT \
		-Wno-SYNCASYNCNET\
		-Wno-IGNOREDRETURN\
		-Wno-PINMISSING\
		-Wno-MODDUP\
		--Wno-LATCH\
		--Wno-fatal\
		-Wno-ASSIGNIN\
		--no-timing\
		$(V_INCS)\
		-CFLAGS "$(VERILATOR_INC_FLAG) -I$(NPC_HOME)/include $(INCDIFFTEST) $(INCCAPSTONE) $(CAPSTONE_FLAG) $(DIFFTEST_FLAG) -D__GUEST_ISA__=riscv32 -DTOP_MODULE_NAME=$(TOP_MODULE) " \
		-LDFLAGS "$(CAPSTONE_LDFLAG) -lreadline $(LIBDIFFTEST) -fsanitize=address"
	@@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
#-DBATCH_MODE
# 6. 仿真目标
sim: encode
	$(call git_commit, "sim RTL")
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(AM_HOME)/../nemu/tools/capstone/repo ./obj_dir/V$(TOP_MODULE)
ifeq ($(USE_WAVE),1)
	gtkwave waveform.vcd
endif

encode :
	riscv64-linux-gnu-objdump -D -m riscv:rv64 -EL $(AM_HOME)/../npc/hex/test.elf > $(AM_HOME)/../npc/hex/disasm_result.txt
gtk :
	gtkwave waveform.vcd wave_sign.gtkw
# 7. 清理目标
clean:
	rm -rf ./obj_dir

#添加用于进行CI测试部分
#在build目录下生成verilog代码ysyx_xxxxxxxx.V
SPINAL_DIR := $(AM_HOME)/../SpinalHDL/hw/spinal/MY_Prj
SBT ?= sbt
IVERILOG_HOME = $(AM_HOME)/../iverilog_test
verilog:
	mkdir -p $(AM_HOME)/../npc/build
	rm -rf $(AM_HOME)/../npc/build/*
	(cd $(AM_HOME)/../SpinalHDL && sbt "runMain SysConfig.MyTopLevelApp mycpu")
	(cd $(AM_HOME)/../SpinalHDL && sbt "runMain SysConfig.MyTopLevelApp pipcpu")
	mv $(AM_HOME)/../npc/build/ysyx_26010010_ysyx_26010010.v $(AM_HOME)/../npc/build/ysyx_26010010.v
	sed -i 's/module ysyx_26010010_ysyx_26010010/module ysyx_26010010/g' $(AM_HOME)/../npc/build/ysyx_26010010.v
#	cat $(NPC_HOME)/vsrc/fun/debug_fun.v >> $(AM_HOME)/../npc/build/ysyx_26010010.v
#	cat $(NPC_HOME)/vsrc/fun/ebreak_fun.v >> $(AM_HOME)/../npc/build/ysyx_26010010.v
#	cat $(NPC_HOME)/vsrc/fun/step_fun.v >> $(AM_HOME)/../npc/build/ysyx_26010010.v



# perl -i -pe 's|^\s*IF_IFt_pc <= 32\x27h30000000;|`ifdef ysyx_26010010_USE_IVERILOG\n      IF_IFt_pc <= 32\x27h80000000;\n      `else\n      IF_IFt_pc <= 32\x27h30000000;\n      `endif|g' ./build/ysyx_26010010.v
#用于仿真0x80000000开始的内容
sim-iverilog:
	cp $(IMG) $(IVERILOG_HOME)/hex/test.bin
	make -C $(IVERILOG_HOME) CELL=F clean
	make -C $(IVERILOG_HOME) CELL=F build
	make -C $(IVERILOG_HOME) CELL=F run

#NETLIST CELLS IMG
sim-iverilog-netlist:
	cp $(IMG) $(IVERILOG_HOME)/hex/test.bin
	cp $(NETLIST) $(IVERILOG_HOME)/vsrc/CI_test/net/ysyx_26010010.v
	cp $(CELLS) $(IVERILOG_HOME)/vsrc/CI_test/net/
	make -C $(IVERILOG_HOME) CELL=T clean
	make -C $(IVERILOG_HOME) CELL=T build
	make -C $(IVERILOG_HOME) CELL=T run

include ../Makefile