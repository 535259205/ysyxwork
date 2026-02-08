#***************************************************************************************
# Copyright (c) 2014-2024 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/
# 导入nemu/../Makefile 中的配置 忽略报错并继续执行
-include $(NEMU_HOME)/../Makefile
include $(NEMU_HOME)/scripts/build.mk

include $(NEMU_HOME)/tools/difftest.mk

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY):: compile_git
#构建BINARY之前会构建compile_git
# Some convenient rules
# override y用于覆盖默认值
override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS += $(ARGS_DIFF)

# Command to execute NEMU
IMG ?=
#1. 编译后的可执行文件 ， 2.运行参数 3. 镜像文件
NEMU_EXEC := $(BINARY) $(ARGS) $(IMG)
# 构建记录和DIFF 测试环境
run-env: $(BINARY) $(DIFF_REF_SO)

run: run-env
	$(call git_commit, "run NEMU")
	$(NEMU_EXEC)

gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC)
count:
	@echo "===== nemu/ .c/.h 文件行数统计 ====="
	@echo "1. 总行数（含空行/注释）："
	@find ../ -name "*.c" -o -name "*.h" | xargs wc -l | tail -1
	@echo "2. 非空行数（排除空行/纯空白行）："
	@find ./ -name "*.c" -o -name "*.h" | xargs grep -v "^[[:space:]]*$$" | wc -l
	@echo "===== PA1编写的行数（对比pa0分支） ====="
	@if git rev-parse --verify pa0 >/dev/null 2>&1; then \
		# pa0_total=$$(git show pa0:$$(find ./ -name "*.c" -o -name "*.h" | tr '\n' ' ') | wc -l 2>/dev/null); \
		pa0_total=266829;\
		current_total=$$(find ./ -name "*.c" -o -name "*.h" | xargs wc -l | tail -1 | awk '{print $$1}'); \
		# pa0_nonempty=$$(git show pa0:$$(find ./ -name "*.c" -o -name "*.h" | tr '\n' ' ') | grep -v "^[[:space:]]*$$" | wc -l 2>/dev/null); \
		pa0_nonempty=230404;\
		current_nonempty=$$(find ./ -name "*.c" -o -name "*.h" | xargs grep -v "^[[:space:]]*$$" | wc -l); \
		echo "PA1编写的总行数：$$((current_total - pa0_total))"; \
		echo "PA1编写的非空行数：$$((current_nonempty - pa0_nonempty))"; \
	else \
		echo "⚠️  未找到pa0分支，请确认分支存在！"; \
	fi

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)
