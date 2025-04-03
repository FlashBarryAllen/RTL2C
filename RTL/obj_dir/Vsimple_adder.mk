# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vsimple_adder.mk

default: libVsimple_adder

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /00_ycl/02_download/verilator-master
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= include/systemc
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= lib/systemc

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 1
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 0
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vsimple_adder
# Module prefix (from --prefix)
VM_MODPREFIX = Vsimple_adder
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \


### Default rules...
# Include list of all generated classes
include Vsimple_adder_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Library rules (default lib mode)
libVsimple_adder.a: $(VK_OBJS) $(VK_USER_OBJS) $(VM_HIER_LIBS)
libverilated.a: $(VK_GLOBAL_OBJS)
libVsimple_adder: libVsimple_adder.a libverilated.a $(VM_PREFIX)__ALL.a

# Verilated -*- Makefile -*-
