AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/trap.S \
           riscv/ysyxsoc/uart.c \
           platform/dummy/vme.c \
           platform/dummy/mpe.c 

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m


CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker_soc.ld


# LDFLAGS   += --defsym=_pmem_start=0x20000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)

NV ?= F

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
ifeq ($(ARCH),minirv-npc)
	@cp $(IMAGE).bin $(AM_HOME)/../npc/hex/test.bin
	@cp $(IMAGE).elf $(AM_HOME)/../npc/hex/test.elf

	$(MAKE) -C $(AM_HOME)/../npc sim; 

else ifeq ($(ARCH),riscv32e-npc)
	@echo TEST $(AM_HOME)/../npc/hex/test.bin
	@cp $(IMAGE).bin $(AM_HOME)/../npc/hex/test.bin
	@cp $(IMAGE).elf $(AM_HOME)/../npc/hex/test.elf

	$(MAKE) -C $(AM_HOME)/../npc sim;
else ifeq ($(ARCH),riscv32e-ysyxsoc)
ifeq ($(NV),F)
	@echo TEST $(AM_HOME)/../npc/hex/test.bin
	@cp $(IMAGE).bin $(AM_HOME)/../npc/hex/test.bin
	@cp $(IMAGE).elf $(AM_HOME)/../npc/hex/test.elf
	$(MAKE) -C $(AM_HOME)/../npc sim;
else ifeq ($(NV),T)
	@echo TEST $(AM_HOME)/../nvboard/MY_Test/ysyx/gpio/hex/test.bin
	@cp $(IMAGE).bin $(AM_HOME)/../nvboard/MY_Test/ysyx/gpio/hex/test.bin
	@cp $(IMAGE).elf $(AM_HOME)/../nvboard/MY_Test/ysyx/gpio/hex/test.elf
	$(MAKE) -C $(AM_HOME)/../nvboard/MY_Test/ysyx/gpio sim;
endif
endif


.PHONY: insert-arg
