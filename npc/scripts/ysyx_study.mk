TOP_MODULE := ysyxSoCFull
SYNC_MODULE := ysyxSoCASIC


NPC_HOME:= $(AM_HOME)/../npc
STUDY_HOME:= $(AM_HOME)/../ysyxSoC

VSRCS ?=	$(shell find $(NPC_HOME)/vsrc/fun/ -name "*.v")
VSRCS +=	$(shell find $(NPC_HOME)/vsrc/core/ -name "*.v")
VSRCS +=	$(shell find $(NPC_HOME)/build/ -name "*.v")

VSRCS += $(shell find $(STUDY_HOME)/perip/ -name "*.v")
VSRCS += $(shell find $(STUDY_HOME)/build/ -name "*.v")



V_INCS  = -I$(NPC_HOME)/../ysyxSoC/perip/uart16550/rtl
V_INCS += -I$(NPC_HOME)/../ysyxSoC/perip/spi/rtl

