

TOP_MODULE = ysyxsoc_tb


VSRCS = $(shell find ./vsrc/work/ -name "*.v")
VSRCS += $(shell find ./vsrc/work/ -name "*.sv")
VSRCS += $(shell find $(NPC_HOME)/vsrc/fun/ -name "*.v")
VSRCS += $(shell find ../WORK/ysyxSoC/perip/ -name "*.v")
VSRCS += $(shell find ../WORK/ysyxSoC/build/ -name "*.v")
VSRCS += $(shell find ../WORK/ysyxSoC/perip/retroSoC/ \( -path "*/common" -o -path "*/common/*" \) -prune -o -path "../WORK/ysyxSoC/perip/retroSoC/*/rtl/*" -type f -name "*.sv" )
VSRCS += $(shell find ../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils -name "*.sv")
VSRCS += $(shell find ../WORK/ysyxSoC/perip/retroSoC/common/rtl/cdc -name "*.sv")
VSRCS += $(shell find ../WORK/ysyxSoC/perip/retroSoC/common/rtl/clkrst -name "*.sv")
VSRCS += $(shell find ../WORK/ysyxSoC/perip/retroSoC/common/rtl/interface -name "*.sv")

INCLUDE += -I/home/ylqt/study/YSYX_data/ysyx-workbench/npc/csrc
INCLUDE += -I/home/ylqt/study/YSYX_data/ysyx-workbench/iverilog_test/vsrc
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/uart16550/rtl
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/spi/rtl
# 自动包含所有retroSoC子目录下的rtl文件夹作为include路径
RETRO_SOC_INCLUDE_DIRS := $(shell  find ../WORK/ysyxSoC/perip/retroSoC/ \( -path "*/common" -o -path "*/common/*" \) -prune -o  -type d -path "*/rtl")
INCLUDE += $(addprefix -I,$(RETRO_SOC_INCLUDE_DIRS))
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/retroSoC/common/rtl/interface
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/retroSoC/common/rtl/
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/retroSoC/common/rtl/clkrst
INCLUDE += -I$(CURDIR)/../WORK/ysyxSoC/perip/retroSoC/common/rtl/tech


