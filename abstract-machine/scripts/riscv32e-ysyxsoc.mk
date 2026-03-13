include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxsoc.mk
COMMON_CFLAGS += -march=rv32e_zicsr_zifencei  -mabi=ilp32e  # overwrite
LDFLAGS       += -melf32lriscv                    # overwrite

WORK?=F
ifeq ($(WORK),F)
LDFLAGS   += --defsym=SDRAM_BASE=0xA0000000 
else
LDFLAGS   += --defsym=SDRAM_BASE=0x80000000 
endif

AM_SRCS += riscv/npc/libgcc/div.S \
           riscv/npc/libgcc/muldi3.S \
           riscv/npc/libgcc/multi3.c \
           riscv/npc/libgcc/ashldi3.c \
           riscv/npc/libgcc/unused.c
