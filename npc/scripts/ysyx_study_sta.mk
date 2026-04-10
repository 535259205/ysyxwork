TOP_MODULE := ysyxSoCFull
SYNC_MODULE := ysyxSoCASIC


NPC_HOME:= $(AM_HOME)/../npc
STUDY_HOME:= $(AM_HOME)/../ysyxSoC

VSRCS ?=	$(shell find $(NPC_HOME)/vsrc/ -name "*.v" )
VSRCS += $(shell find $(STUDY_HOME)/perip/ -name "*.v" ! -name "psram.v" ! -name "sdram.v" ! -name "flash.v")
VSRCS += $(shell find $(STUDY_HOME)/build/ -name "*.v")



V_INCS  = -I$(CURDIR)/../ysyxSoC/perip/uart16550/rtl
V_INCS += -I$(CURDIR)/../ysyxSoC/perip/spi/rtl

