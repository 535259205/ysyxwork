# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop.mk

default: Vtop

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/ylqt/environment/oss_cad_suite/oss-cad-suite/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?=
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?=

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
  -I/home/ylqt/environment/oss_cad_suite/oss-cad-suite/share/verilator/include -I/home/ylqt/study/YSYX_data/ysyx-workbench/npc/include -I/home/ylqt/study/YSYX_data/ysyx-workbench/npc/../nemu/include -I/home/ylqt/study/YSYX_data/ysyx-workbench/npc/../nemu/src/isa/riscv32/include -I/home/ylqt/study/YSYX_data/ysyx-workbench/npc/../nemu/tools/capstone/repo/include -D__GUEST_ISA__=riscv32  -g -fsanitize=address \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
  -L/home/ylqt/study/YSYX_data/ysyx-workbench/npc/../nemu/tools/capstone/repo -lcapstone -lreadline /home/ylqt/study/YSYX_data/ysyx-workbench/npc/../nemu/build/riscv32-nemu-interpreter-so -fsanitize=address \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
  difftest \
  disasm \
  ftrace \
  iringbuf \
  main \
  mem \
  probe \
  sdb \
  sim \
  timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  .. \
  ../csrc \

### Default rules...
# Include list of all generated classes
include Vtop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

difftest.o: ./csrc/difftest.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
disasm.o: ./csrc/disasm.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
ftrace.o: ./csrc/ftrace.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
iringbuf.o: ./csrc/iringbuf.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
main.o: ./csrc/main.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
mem.o: ./csrc/mem.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
probe.o: ./csrc/probe.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
sdb.o: ./csrc/sdb.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
sim.o: ./csrc/sim.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
timer.o: ./csrc/timer.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Vtop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@

# Verilated -*- Makefile -*-
