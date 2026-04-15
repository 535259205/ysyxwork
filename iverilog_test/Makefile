
# Variables
IVERILOG = iverilog
VVP = vvp

IVERILOG_HOME = $(AM_HOME)/../iverilog_test
INCLUDE = -I$(shell dirname $(shell which iverilog))/../include/iverilog

# -include scripts/npc_net.mk
# -include scripts/npc.mk
# -include scripts/work_net.mk
# -include scripts/work.mk

-include scripts/CI_test.mk

CSRCS = $(shell find $(IVERILOG_HOME)/csrc/ -name "*.cpp")
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
	$(INCLUDE)\
	$(EXTRA_DEFINES)
	@echo "Build $(TOP_MODULE) done."

# 运行仿真并加载 VPI 模块
run: 
	vvp $(BUILD_DIR)/$(TOP_MODULE)

gtk:
	gtkwave ysyxsoc_tb.vcd wave.gtkw

turn:
	@@hexdump -v -e '1/4 "%08x\n"' ./hex/test.bin > ./hex/test.mem
# Clean
clean:
	rm -rf ./build/*

# Phony targets
.PHONY: all run  clean build gtk turn
