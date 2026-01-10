csrc=./csrc/main.cpp
vsrc=./vsrc/top.v

all:
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc $(vsrc) --exe $(csrc)
	make -C obj_dir -f Vtop.mk Vtop 

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	./obj_dir/Vtop
	gtkwave waveform.vcd
clean:
	rm -rf ./obj_dir

include ../Makefile
