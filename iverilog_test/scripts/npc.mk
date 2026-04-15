

TOP_MODULE = ysyxSoCFull_tb

iverilog_test_home :=$(AM_HOME)/../iverilog_test

VSRCS = $(shell find $(iverilog_test_home)/vsrc/npc/ -name "*.v")
