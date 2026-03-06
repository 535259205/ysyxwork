AM_SRCS := platform/nemu/trm.c \
           platform/nemu/ioe/ioe.c \
           platform/nemu/ioe/timer.c \
           platform/nemu/ioe/input.c \
           platform/nemu/ioe/gpu.c \
           platform/nemu/ioe/audio.c \
           platform/nemu/ioe/disk.c \
           platform/nemu/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
CFLAGS    += -I$(AM_HOME)/am/src/platform/nemu/include
#链接脚本
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
#批处理模式标志位 传入日志参数
NEMUFLAGS += -l $(shell dirname $(IMAGE).elf)/nemu-log.txt  
#-b --t=$(IMAGE).elf
YSYX ?=N
#image-dep
#mainargs 用于插入到可执行文件中而不是nemu中 最终传入的.c 的不变变的是二进制文件
MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)
#向二进制文件找到对应字符串替换为mainargs
insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"
#生成解析后的txt文件
#去掉素有的 -S 去掉所有符号表和重定位信息  将 ELF 格式转换为裸机程序可以直接运行的二进制格式。
image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin


#NEMUFLAGS 用于增加附属标志位
run: insert-arg
	@echo IMAGE=$(IMAGE)
	@echo NEMU_HOME=$(NEMU_HOME)
ifeq ($(YSYX),N)
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin;
else 
	$(MAKE) ARCH=riscv32e-ysyxsoc insert-arg;

	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(subst -nemu,-ysyxsoc,$(IMAGE)).bin;
endif


gdb: insert-arg
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

.PHONY: insert-arg 
