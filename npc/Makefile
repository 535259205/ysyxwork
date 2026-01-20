csrc := ./csrc/*.cpp

vsrc := $(wildcard ./vsrc/fun/*.v ./vsrc/*.v)
TOP_MODULE := top

VERILATOR_INC := $(shell dirname $(shell find ~/environment -name "verilated.h"))

USE_WAVE ?=0

# Capstone库设置
LIBCAPSTONE = $(CURDIR)/../nemu/tools/capstone/repo/libcapstone.so.5

# 确保capstone库已编译
$(LIBCAPSTONE):
	$(MAKE) -C $(CURDIR)/../nemu/tools/capstone

# 编译前确保capstone库已准备好
$(CURDIR)/csrc/disasm.cpp: $(LIBCAPSTONE)

all:
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc --top-module $(TOP_MODULE) $(vsrc) --exe $(csrc) \
		--error-limit 0 \
		-Wno-WIDTH \
		-Wno-UNDRIVEN \
		-Wno-UNUSED \
		-CFLAGS "-I$(VERILATOR_INC) -I$(CURDIR)/include -I$(CURDIR)/../nemu/tools/capstone/repo/include -g" \
		-LDFLAGS "-L$(CURDIR)/../nemu/tools/capstone/repo -lcapstone"
	make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)

# 6. 仿真目标
sim:
	$(call git_commit, "sim RTL")	
	
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(CURDIR)/../nemu/tools/capstone/repo ./obj_dir/V$(TOP_MODULE)
ifeq ($(USE_WAVE),1)
	gtkwave waveform.vcd
endif

gdb:
	$(call git_commit, "sim RTL")
	# 设置LD_LIBRARY_PATH以便调试时能找到capstone库
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(CURDIR)/../nemu/tools/capstone/repo gdb ./obj_dir/V$(TOP_MODULE)

encode :
	riscv64-linux-gnu-objdump -D -b binary -m riscv:rv32 -EL --start-address=0x00000000 ./hex/test.bin > ./hex/disasm_result.txt


# 7. 清理目标
clean:
	rm -rf ./obj_dir

include ../Makefile