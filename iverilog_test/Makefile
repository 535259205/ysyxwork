
# Variables
IVERILOG = iverilog
VVP = vvp
TOP_MODULE = ysyxsoc_tb

NPC_HOME = ../npc

# Source files
VSRCS = $(shell find ./vsrc/ -name "*.v")
VSRCS += $(shell find $(NPC_HOME)/vsrc/ -name "*.v")
VSRCS += $(shell find ../WORK/ysyxSoC/perip/ -name "*.v")
VSRCS += $(shell find ../WORK/ysyxSoC/build/ -name "*.v")

CSRCS = $(shell find ./csrc/ -name "*.cpp")
CSRCS += $(NPC_HOME)/csrc/ex_api.cpp

BUILD_DIR = ./build
# Targets
TARGETS = simv
INCLUDE = -I/home/ylqt/environment/oss_cad_suite/oss-cad-suite/include/iverilog
INCLUDE += -I/home/ylqt/study/YSYX_data/ysyx-workbench/npc/csrc
INCLUDE += -I/home/ylqt/study/YSYX_data/ysyx-workbench/iverilog_test/vsrc
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/uart16550/rtl
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/spi/rtl

# Default target
all: $(TARGETS)

# Build simulation for count_tb
simv: $(VSRCS)
	$(IVERILOG) -o $@ -g2012  $(VSRCS) 


build: $(VSRCS) $(CSRCS)
	@g++ -shared -fPIC -o $(BUILD_DIR)/main.so $(CSRCS) $(INCLUDE)
	@iverilog -Wall \
	-Wno-timescale \
	-o $(BUILD_DIR)/$(TOP_MODULE) -g2012  $(VSRCS) -m $(BUILD_DIR)/main.so \
	-s $(TOP_MODULE) \
	$(INCLUDE)
	@echo "Build $(TOP_MODULE) done."

# 运行仿真并加载 VPI 模块
run: build
	vvp $(BUILD_DIR)/$(TOP_MODULE)

gtk:
	gtkwave ysyxsoc_tb.vcd wave.gtkw

# Clean
clean:
	rm -rf ./build/*

# Phony targets
.PHONY: all run  clean build gtk
