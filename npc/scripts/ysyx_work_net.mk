
NPC_HOME:= $(AM_HOME)/../npc
WORK_HOME:= $(NPC_HOME)/../WORK

TOP_MODULE :=TOPmod

VSRCS :=  $(shell find $(NPC_HOME)/vsrc_work_net/ -name "*.v")
# VSRCS += $(shell find $(NPC_HOME)/vsrc/ -name "*.sv")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/ -name "*.v" ! -name "TOPmod.v")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/build/ -name "*.v")
# VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/temp/ -name "*.v")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/ \( -path "*/common" -o -path "*/common/*" \) -prune -o -path "$(WORK_HOME)/ysyxSoC/perip/retroSoC/*/rtl/*" -type f -name "*.sv" -print)
# VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/ -type f -path "*/rtl/*.sv" ! -path "*/common/*" )
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/utils -name "*.sv")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/cdc -name "*.sv")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/clkrst -name "*.sv")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/interface -name "*.sv")
VSRCS += $(shell find $(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/tech -name "*.sv")

VSRCS += +define+__VERILOG__ +define+SYNTHESIS

RETRO_SOC_INCLUDE_DIRS = $(shell  find $(WORK_HOME)/ysyxSoC/perip/retroSoC/ \( -path "*/common" -o -path "*/common/**" \) -prune -o  -type d -path "*/rtl" -print)
# RETRO_SOC_INCLUDE_DIRS = $(shell  find $(WORK_HOME)/ysyxSoC/perip/retroSoC/ -type d -path "*/rtl" -print)

V_INCS := $(addprefix -I,$(RETRO_SOC_INCLUDE_DIRS))

V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/interface
V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/
V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/utils
V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/clkrst
V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/retroSoC/common/rtl/tech
V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/uart16550/rtl
V_INCS += -I$(WORK_HOME)/ysyxSoC/perip/spi/rtl
