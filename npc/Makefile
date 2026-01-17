csrc := ./csrc/main.cpp
vsrc := $(wildcard ./vsrc/*.v)
TOP_MODULE := top

VERILATOR_INC := $(shell dirname $(shell find ~/environment -name "verilated.h"))

$(info VERILATOR_INC = $(VERILATOR_INC))

# 4. git_commit函数
define git_commit
	@echo "Sim commit: $1"
endef

all:
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc --top-module $(TOP_MODULE) $(vsrc) --exe $(csrc) \
		--error-limit 0 \
		-Wno-WIDTH \
		-Wno-UNDRIVEN \
		-Wno-UNUSED \
		-CFLAGS "-I$(VERILATOR_INC)" 
	make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE) 

# 6. 仿真目标
sim:
	$(call git_commit, "sim RTL")
	./obj_dir/V$(TOP_MODULE)
	gtkwave waveform.vcd

# 7. 清理目标
clean:
	rm -rf ./obj_dir

include ../Makefile