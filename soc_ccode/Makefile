
# 源文件和目标文件
SRC_C = $(shell find ./src -name "*.c")
SRC_S = $(shell find ./src -name "*.s")  # 添加汇编文件，支持.S和.s扩展名
BUILD_DIR = build

# 将目标文件路径修改为build目录下
OBJ_C = $(addprefix $(BUILD_DIR)/,$(notdir $(SRC_C:.c=.o)))
OBJ_S = $(addprefix $(BUILD_DIR)/,$(notdir $(SRC_S:.s=.ao)))  # 汇编文件的目标文件，使用.ao后缀避免冲突
MAIN_C = ./src/main

# 所有目标文件（C和汇编）
ALL_OBJ = $(OBJ_C) $(OBJ_S)

# 工具链配置
CC = riscv64-linux-gnu-gcc
AS = riscv64-linux-gnu-as  # 添加汇编编译器
LD = riscv64-linux-gnu-ld
OBJCOPY = riscv64-linux-gnu-objcopy
OBJDUMP = riscv64-linux-gnu-objdump

# 编译和链接选项
COMMON_CFLAGS = -march=rv32e -mabi=ilp32e -ffreestanding -nostdlib -c
LDFLAGS = -m elf32lriscv -T link.ld  # 添加-m elf32lriscv选项解决32位ABI问题

# 目标文件（放在build目录下）
TARGET_ELF = $(BUILD_DIR)/output.elf
TARGET_BIN = $(BUILD_DIR)/output.bin
TARGET_DISASM = $(BUILD_DIR)/output.disasm.txt

# 创建build目录
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# 编译规则（将C文件的.o文件生成到build目录）
$(BUILD_DIR)/%.o: ./src/%.c | $(BUILD_DIR)
	@$(CC) $(COMMON_CFLAGS) $< -o $@

# 汇编规则（将.s文件的.ao文件生成到build目录）
$(BUILD_DIR)/%.ao: ./src/%.s | $(BUILD_DIR)
	@$(AS) -march=rv32e -mabi=ilp32e $< -o $@

# 链接规则（生成ELF文件到build目录，包含所有目标文件）
$(TARGET_ELF): $(ALL_OBJ) | $(BUILD_DIR)
	@$(LD) $(LDFLAGS) $^ -o $@

# 反汇编规则（生成txt文件到build目录）
$(TARGET_DISASM): $(TARGET_ELF)
	@$(OBJDUMP) -D -m riscv $< > $@

$(TARGET_BIN): $(TARGET_ELF)
	@$(OBJCOPY) -O binary $< $@

# 主目标
all: $(TARGET_ELF) $(TARGET_DISASM) $(TARGET_BIN)
	@echo "Build completed successfully!"
	@echo "Generated files:"
	@echo "  - $(TARGET_ELF)"
	@echo "  - $(TARGET_DISASM)"
	@echo "  - $(TARGET_BIN)"
	@echo "  - Object files in $(BUILD_DIR)/"

# 清理规则
clean:
	@rm -rf $(BUILD_DIR)
	@echo "Cleaned all generated files!"

# 伪目标
.PHONY: all clean