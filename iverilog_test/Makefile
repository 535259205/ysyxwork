
# Variables
IVERILOG = iverilog
VVP = vvp

NPC_HOME = ../npc
INCLUDE = -I/home/ylqt/environment/oss_cad_suite/oss-cad-suite/include/iverilog

-include scripts/npc.mk

CSRCS = $(shell find ./csrc/ -name "*.cpp")
CSRCS += $(NPC_HOME)/csrc/ex_api.cpp
BUILD_DIR = ./build
# Targets

all: $(TARGETS)

# Build simulation for npc_tb
simv: $(VSRCS)
	$(IVERILOG) -v -o $@ -g2012  $(VSRCS) 


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
