#=======================================================================
# UCB VLSI FLOW: Makefile for riscv-bmarks
#-----------------------------------------------------------------------
# Yunsup Lee (yunsup@cs.berkeley.edu)
#

XLEN ?= 32

default: all

src_dir = .
temp_dir = ./wing-temps

instname = riscv-bmarks
instbasedir = $(UCB_VLSI_HOME)/install

#--------------------------------------------------------------------
# Sources
#--------------------------------------------------------------------

bmarks = helloworld 
	#coremark   \
        #dhrystone 

#--------------------------------------------------------------------
# Build rules
#--------------------------------------------------------------------

RISCV_PREFIX ?= riscv$(XLEN)-wing-elf-
RISCV_GCC ?= $(RISCV_PREFIX)gcc

#ISA Configs   Default:M134
    MARCH_CFG = rv32imc_zve32x_zicsr_zicntr_zvw
    ABI_CFG   = ilp32
    CORE_CFG  = CUSTOM

ifdef MTIME_BASE_ADDR
	MTIME_FLAG = -DMTIME_BASE_ADDR=$(MTIME_BASE_ADDR)
endif

RISCV_GCC_OPTS ?= -DPREALLOCATE=1 -mcmodel=medany -static -std=gnu89 -O3 -g3 -fno-inline -fno-builtin-printf -fno-shrink-wrap-separate -u _printf_float -march=$(MARCH_CFG) -mabi=$(ABI_CFG) -DCORE_$(CORE) $(MTIME_FLAG)
#RISCV_GCC_OPTS ?= -specs=semihost.specs -DPREALLOCATE=1 -mcmodel=medany -static -std=gnu99 -O2 -fno-inline -march=$(MARCH_CFG) -mabi=$(ABI_CFG)

#RISCV_LINK ?= $(RISCV_GCC) -T $(src_dir)/common/test.ld $(incs) -vec
RISCV_LINK_OPTS ?= -static -nostartfiles -lm -lgcc -T $(src_dir)/common/test.ld -Wl,--gc-sections #-Wl,--zcmt-force-table-jump
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump --disassemble-all #--section=.text --section=.text.startup --section=.text.init --section=.text.tbljal --section=.data #--disassemble-zeroes

RISCV_SIM ?= spike --isa=$(MARCH_CFG) 

incs  += -I$(src_dir)/env -I$(src_dir)/common $(addprefix -I$(src_dir)/, $(bmarks))
objs  :=

define compile_template
$(1).riscv: $(wildcard $(src_dir)/$(1)/*) $(wildcard $(src_dir)/common/*)
	$$(RISCV_GCC) $$(incs) $$(RISCV_GCC_OPTS) -o $$@ $(wildcard $(src_dir)/$(1)/*.c) $(wildcard $(src_dir)/$(1)/*.S) $(wildcard $(src_dir)/common/*.c) $(wildcard $(src_dir)/common/*.S) $$(RISCV_LINK_OPTS) -save-temps -dumpdir $(temp_dir)/$(1)/
endef

define mkdir_bmark
$(shell mkdir -p $(temp_dir)/$(1)/)
endef

$(foreach bmark,$(bmarks),$(eval $(call mkdir_bmark,$(bmark))  $(call compile_template,$(bmark))))


#------------------------------------------------------------
# Build and run benchmarks on riscv simulator

bmarks_riscv_bin  = $(addsuffix .riscv,  $(bmarks))
bmarks_riscv_dump = $(addsuffix .riscv.dump, $(bmarks))
bmarks_riscv_out  = $(addsuffix .riscv.out,  $(bmarks))

$(bmarks_riscv_dump): %.riscv.dump: %.riscv
	$(RISCV_OBJDUMP) $< > $@

$(bmarks_riscv_out): %.riscv.out: %.riscv
	$(RISCV_SIM) $< > $@

riscv: $(bmarks_riscv_dump)
run: $(bmarks_riscv_out)

junk += $(bmarks_riscv_bin) $(bmarks_riscv_dump) $(bmarks_riscv_hex) $(bmarks_riscv_out) $(temp_dir)

#------------------------------------------------------------
# Default

all: riscv

#------------------------------------------------------------
# Install

date_suffix = $(shell date +%Y-%m-%d_%H-%M)
install_dir = $(instbasedir)/$(instname)-$(date_suffix)
latest_install = $(shell ls -1 -d $(instbasedir)/$(instname)* | tail -n 1)

install:
	mkdir $(install_dir)
	cp -r $(bmarks_riscv_bin) $(bmarks_riscv_dump) $(install_dir)

install-link:
	rm -rf $(instbasedir)/$(instname)
	ln -s $(latest_install) $(instbasedir)/$(instname)

#------------------------------------------------------------
# Clean up

clean:
	rm -rf $(objs) $(junk)
