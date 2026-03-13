



# Makefile for iverilog environment

# Variables
IVERILOG = iverilog
VVP = vvp
TOP_MODULE = count_tb
# Source files
VSRCS = $(shell find ./vsrc/ -name "*.v")
CSRCS = $(shell find ./csrc/ -name "*.c")
BUILD_DIR = ./build
# Targets
TARGETS = simv
INCLUDE = /home/ylqt/environment/oss_cad_suite/oss-cad-suite/include/iverilog

# Default target
all: $(TARGETS)

# Build simulation for count_tb
simv: $(VSRCS)
	$(IVERILOG) -o $@ -g2012 $(VSRCS) 


build: $(VSRCS) $(CSRCS)
	@gcc -shared -fPIC -o $(BUILD_DIR)/main.so $(CSRCS) -I$(INCLUDE)
	@iverilog -o $(BUILD_DIR)/$(TOP_MODULE) -g2012 ./vsrc/count.v ./vsrc/count_tb.v -m $(BUILD_DIR)/main.so
	@echo "Build $(TOP_MODULE) done."

# 运行仿真并加载 VPI 模块
run: build
	vvp $(BUILD_DIR)/$(TOP_MODULE)

# Clean
clean:
	rm -rf ./build/*

# Phony targets
.PHONY: all run  clean build
