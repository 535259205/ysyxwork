csrc := ./csrc/*.cpp

# vsrc := $(wildcard ./vsrc/fun/*.v ./vsrc/*.v ../ysyxSoC/perip/**/*.v ../ysyxSoC/build/*.v)
vsrc ?=	$(shell find ./vsrc/ -name "*.v")
vsrc += $(shell find ../YSYX_SOC/ysyxSoC/perip/ -name "*.v")
vsrc += $(shell find ../YSYX_SOC/ysyxSoC/build/ -name "*.v")


TOP_MODULE := ysyxSoCFull

VERILATOR_INC := $(shell dirname $(shell find ~/environment -name "verilated.h"))

USE_WAVE ?=0
# 定义要添加的include目录
UART_INC = -I$(CURDIR)/../YSYX_SOC/ysyxSoC/perip/uart16550/rtl
SPI_INC = -I$(CURDIR)/../YSYX_SOC/ysyxSoC/perip/spi/rtl
# Capstone库设置
LIBCAPSTONE = $(CURDIR)/../nemu/tools/capstone/repo/libcapstone.so.5
INCCAPSTONE := -I$(CURDIR)/../nemu/tools/capstone/repo/include
#diff test链接库及.h文件设置
LIBDIFFTEST := $(CURDIR)/../nemu/build/riscv32-nemu-interpreter-so
INCDIFFTEST := -I$(CURDIR)/../nemu/include
INCDIFFTEST += -I$(CURDIR)/../nemu/src/isa/riscv32/include
# 确保capstone库已编译
$(LIBCAPSTONE):
	$(MAKE) -C $(CURDIR)/../nemu/tools/capstone
# 编译前确保capstone库已准备好
$(CURDIR)/csrc/disasm.cpp: $(LIBCAPSTONE)

all:
	@@verilator -Wall --trace -cc --top-module $(TOP_MODULE) $(vsrc) --exe $(csrc) \
		--error-limit 0 \
		-Wno-WIDTH \
		-Wno-UNDRIVEN \
		-Wno-UNUSED \
		-Wno-DECLFILENAME \
		-Wno-PINCONNECTEMPTY \
		-Wno-ASSIGNDLY \
		-Wno-DEFPARAM \
		-Wno-PROCASSINIT \
		-Wno-SYNCASYNCNET\
		--timescale "1ns/1ns"\
		--no-timing\
		$(UART_INC) $(SPI_INC)\
		-CFLAGS "-I$(VERILATOR_INC) -I$(CURDIR)/include $(INCDIFFTEST) $(INCCAPSTONE)  -D__GUEST_ISA__=riscv32  -g " \
		-LDFLAGS "-L$(CURDIR)/../nemu/tools/capstone/repo -lcapstone -lreadline $(LIBDIFFTEST) "
	@@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
#-DBATCH_MODE
# 6. 仿真目标
sim:
	$(call git_commit, "sim RTL")	
	
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(CURDIR)/../nemu/tools/capstone/repo ./obj_dir/V$(TOP_MODULE)
ifeq ($(USE_WAVE),1)
	gtkwave waveform.vcd
endif

gdb:
	$(call git_commit, "sim RTL")
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(CURDIR)/../nemu/tools/capstone/repo gdb ./obj_dir/V$(TOP_MODULE)

encode :
	riscv64-linux-gnu-objdump -D -b binary -m riscv:rv32 -EL --start-address=0x00000000 ./hex/test.bin > ./hex/disasm_result.txt

gtk :
	gtkwave waveform.vcd wave_sign.gtkw
# 7. 清理目标
clean:
	rm -rf ./obj_dir

include ../Makefile