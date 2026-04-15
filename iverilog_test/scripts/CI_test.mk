

TOP_MODULE = ysyxSoCFull_tb

IVERILOG_HOME :=$(AM_HOME)/../iverilog_test
YSYX_SOC_HOME :=$(AM_HOME)/../ysyxSoC
NPC_HOME:= $(AM_HOME)/../npc

ifeq ($(CELL),T)
VSRCS = $(shell find $(IVERILOG_HOME)/vsrc/CI_test/ -name "*.v")
else
VSRCS = $(shell find $(IVERILOG_HOME)/vsrc/CI_test/  -path "$(IVERILOG_HOME)/vsrc/CI_test/net" -prune -o -name "*.v" -print)
endif

ifeq ($(CELL),F)
VSRCS +=$(shell find $(NPC_HOME)/build/ -name "*.v")
endif
# VSRCS +=$(shell find $(NPC_HOME)/vsrc/fun/ -name "*.v")
# VSRCS += $(shell find $(YSYX_SOC_HOME)/perip/ -name "*.v")
# VSRCS += $(shell find $(YSYX_SOC_HOME)/build/ -name "*.v")

INCLUDE += -I$(YSYX_SOC_HOME)/perip/uart16550/rtl
INCLUDE += -I$(YSYX_SOC_HOME)/perip/spi/rtl


EXTRA_DEFINES ?= -DSOC_FLAG
