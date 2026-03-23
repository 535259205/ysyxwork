include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxsoc.mk
# COMMON_CFLAGS += -march=rv32e_zicsr_zifencei  -mabi=ilp32e  
# LDFLAGS       += -melf32lriscv                    

COMMON_CFLAGS += -march=rv64ima_zicsr_zifencei  -mabi=lp64
LDFLAGS       += -melf64lriscv

# WORK?=F
# ifeq ($(WORK),F)
# LDFLAGS   += --defsym=SDRAM_BASE=0xA0000000 
# else
LDFLAGS   += --defsym=SDRAM_BASE=0x80000000
# endif

# AM_SRCS += riscv/ysyxsoc/libgcc/div.S \
        #    riscv/ysyxsoc/libgcc/muldi3.S \
        #    riscv/ysyxsoc/libgcc/multi3.c \
        #    riscv/ysyxsoc/libgcc/ashldi3.c \
        #    riscv/ysyxsoc/libgcc/unused.c

