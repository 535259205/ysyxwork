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

ifeq ($(WORK),F)
-include ./scripts/ysyx_logsim.mk
else
-include ./scripts/ysyx_work.mk
endif

VERILATOR_INC := $(shell dirname $(shell find ~/environment -name "verilated.h"))

USE_WAVE ?=0


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
#-g -fsanitize=address
all:
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
		-CFLAGS "-I$(VERILATOR_INC) -I$(CURDIR)/include $(INCDIFFTEST) $(INCCAPSTONE)  -D__GUEST_ISA__=riscv32 -DTOP_MODULE_NAME=$(TOP_MODULE) " \
		-LDFLAGS "-L$(CURDIR)/../nemu/tools/capstone/repo -lcapstone -lreadline $(LIBDIFFTEST) -fsanitize=address"
	@@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
#-DBATCH_MODE
# 6. 仿真目标
sim: encode
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(CURDIR)/../nemu/tools/capstone/repo ./obj_dir/V$(TOP_MODULE)
ifeq ($(USE_WAVE),1)
	gtkwave waveform.vcd
endif

encode :
	riscv64-linux-gnu-objdump -D -m riscv:rv64 -EL ./hex/test.elf > ./hex/disasm_result.txt
gtk :
	gtkwave waveform.vcd wave_sign.gtkw



# 7. 清理目标
clean:
	rm -rf ./obj_dir

include ../Makefile