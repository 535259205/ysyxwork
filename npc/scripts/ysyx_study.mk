TOP_MODULE := ysyxSoCFull


VSRCS ?=	$(shell find ./vsrc/ -name "*.v")
VSRCS += $(shell find ../YSYX_SOC/ysyxSoC/perip/ -name "*.v")
VSRCS += $(shell find ../YSYX_SOC/ysyxSoC/build/ -name "*.v")



V_INCS  = -I$(CURDIR)/../YSYX_SOC/ysyxSoC/perip/uart16550/rtl
V_INCS += -I$(CURDIR)/../YSYX_SOC/ysyxSoC/perip/spi/rtl

