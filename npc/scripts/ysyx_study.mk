TOP_MODULE := ysyxSoCFull


VSRCS ?=	$(shell find ./vsrc/ -name "*.v")
VSRCS += $(shell find ../ysyxSoC/perip/ -name "*.v")
VSRCS += $(shell find ../ysyxSoC/build/ -name "*.v")



V_INCS  = -I$(CURDIR)/../ysyxSoC/perip/uart16550/rtl
V_INCS += -I$(CURDIR)/../ysyxSoC/perip/spi/rtl

