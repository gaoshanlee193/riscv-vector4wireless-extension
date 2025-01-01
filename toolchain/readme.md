# Declaration
本工具由隼瞻科技开发，授权给Zvw项目开源使用。

This tool is developed by Wingsemitech Co.ltd, licensed for open source "Zvw" project.

如需咨询工具相关信息，请联系：contact@wingsemitech.com。

For inquiries about the tool, please contact: contact@wingsemitech.com.

# Directory Description

* The gcc directory is the compiler directory, with its binary files located in ./gcc/bin
* The spike directory is the simulator directory
* The openocd directory is the hardware debugger directory
* The debug directory is the debugging directory
* The benchmark directory is the test case directory
* The env and common directories contain some files and linker scripts required for compilation
* coremark, dhrystone, and helloworld are the source codes of three benchmarks

# Dependency Tool Installation
```shell
sudo apt install device-tree-compiler
sudo apt install libboost-all-dev
sudo apt install -y libusb-1.0-0-dev
sudo apt install -y libjaylink-dev
```

# WingGCC Introduction and Description

WingGcc uses riscv32-wing-elf- as a prefix, with the main components including:
* riscv32-wing-elf-gcc Compiler
* riscv32-wing-elf-as Assembler
* riscv32-wing-elf-ld Linker

binutils, other tools related to binary file processing apart from the assembler and linker:
* riscv32-wing-elf-nm
* riscv32-wing-elf-objcopy
* riscv32-wing-elf-objdump
* riscv32-wing-elf-readelf

## WingGCC Directory Structure:

.

├── bin

│ ├── riscv32-wing-elf-addr2line

│ ├── riscv32-wing-elf-ar

│ ├── riscv32-wing-elf-as

│ ├── riscv32-wing-elf-c++

│ ├── riscv32-wing-elf-c++filt

│ ├── riscv32-wing-elf-cpp

│ ├── riscv32-wing-elf-elfedit

│ ├── riscv32-wing-elf-g++

│ ├── riscv32-wing-elf-gcc

│ ├── riscv32-wing-elf-gcc-14.1.0

│ ├── riscv32-wing-elf-gcc-ar

│ ├── riscv32-wing-elf-gcc-nm

│ ├── riscv32-wing-elf-gcc-ranlib

│ ├── riscv32-wing-elf-gcov

│ ├── riscv32-wing-elf-gcov-dump

│ ├── riscv32-wing-elf-gcov-tool

│ ├── riscv32-wing-elf-gdb

│ ├── riscv32-wing-elf-gdb-add-index

│ ├── riscv32-wing-elf-gprof

│ ├── riscv32-wing-elf-ld

│ ├── riscv32-wing-elf-ld.bfd

│ ├── riscv32-wing-elf-lto-dump

│ ├── riscv32-wing-elf-nm

│ ├── riscv32-wing-elf-objcopy

│ ├── riscv32-wing-elf-objdump

│ ├── riscv32-wing-elf-ranlib

│ ├── riscv32-wing-elf-readelf

│ ├── riscv32-wing-elf-run

│ ├── riscv32-wing-elf-size

│ ├── riscv32-wing-elf-strings

│ └── riscv32-wing-elf-strip

├── include

│ ├── gdb

│ └── sim

├── lib

│ ├── bod-plugins

│ ├── gcc

│ ├── libcc1.la

│ ├── libcc1.so -> libcc1.so.0.0.0

│ ├── libcc1.so.0 -> libcc1.so.0.0.0

│ ├── libcc1.so.0.0.0

│ └── libriscv32-wing-elf-sim.a

├── libexec

│ └── gcc

├── riscv32-wing-elf

│ ├── bin

│ ├── include

│ └── lib

└── share

├── gcc-14.1.0

├── gdb

├── info

├── locale

└── man

## RISC-V Architecture Related Options

-march: Specifies the modular instruction set combination for RISC-V. 

The currently supported instruction set combinations are: *rv32imcv_zicsr_zicntr_zvw*

-mabi: Specifies the ABI for the instruction set combination. 

The currently supported ABI is: *ilp32*

# Zvw Intrinsic Description

All instructions support inline assembly.
The currently implemented instruction intrinsics follow the riscv official intrinsic documentation v-intrinsic-spec standard.
Standard rvv intrinsic functions will use different suffixes to declare their EEW and EMUL properties.
The compiler will insert a vsetvl instruction before the intrinsic based on the suffix. Users do not need to add the vsetvl instruction themselves.

## Intrinsic Support for .vv and .vs Instructions

Taking the vdsmul instruction as an example, the .vv suffix is for .vv instructions, and the _vs suffix is for .vs instructions.

- vint8mf8_t __riscv_vdsmul_vv_i8mf8(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl);
- vint8mf8_t __riscv_vdsmul_vs_i8mf8(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl);

## Intrinsic Support for Different EEW and EMUL:

Please refer to the riscv official intrinsic documentation v-intrinsic-spec section 7.1

- vint8mf8_t __riscv_vdsmul_vs_i8mf8(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl);
- vint8mf4_t __riscv_vdsmul_vs_i8mf4(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl);
- vint8mf2_t __riscv_vdsmul_vs_i8mf2(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl);
- vint8m1_t __riscv_vdsmul_vs_i8m1(vint8m1_t vs2, vint8m1_t vs1, size_t vl);
- vint8m2_t __riscv_vdsmul_vs_i8m2(vint8m2_t vs2, vint8m2_t vs1, size_t vl);
- vint8m4_t __riscv_vdsmul_vs_i8m4(vint8m4_t vs2, vint8m4_t vs1, size_t vl);
- vint8m8_t __riscv_vdsmul_vs_i8m8(vint8m8_t vs2, vint8m8_t vs1, size_t vl);

Note that there is no vint16mf8

- vint16mf4_t __riscv_vdsmul_vs_i16mf4(vint16mf4_t vs2, vint16mf4_t vs1, size_t vl);
- vint16mf2_t __riscv_vdsmul_vs_i16mf2(vint16mf2_t vs2, vint16mf2_t vs1, size_t vl);
- vint16m1_t __riscv_vdsmul_vs_i16m1(vint16m1_t vs2, vint16m1_t vs1, size_t vl);
- vint16m2_t __riscv_vdsmul_vs_i16m2(vint16m2_t vs2, vint16m2_t vs1, size_t vl);
- vint16m4_t __riscv_vdsmul_vs_i16m4(vint16m4_t vs2, vint16m4_t vs1, size_t vl);
- vint16m8_t __riscv_vdsmul_vs_i16m8(vint16m8_t vs2, vint16m8_t vs1, size_t vl);
- vint32mf2_t __riscv_vdsmul_vs_i32mf2(vint32mf2_t vs2, vint32mf2_t vs1, size_t vl);
- vint32m1_t __riscv_vdsmul_vs_i32m1(vint32m1_t vs2, vint32m1_t vs1, size_t vl);
- vint32m2_t __riscv_vdsmul_vs_i32m2(vint32m2_t vs2, vint32m2_t vs1, size_t vl);
- vint32m4_t __riscv_vdsmul_vs_i32m4(vint32m4_t vs2, vint32m4_t vs1, size_t vl);
- vint32m8_t __riscv_vdsmul_vs_i32m8(vint32m8_t vs2, vint32m8_t vs1, size_t vl);
- vint64m1_t __riscv_vdsmul_vs_i64m1(vint64m1_t vs2, vint64m1_t vs1, size_t vl);
- vint64m2_t __riscv_vdsmul_vs_i64m2(vint64m2_t vs2, vint64m2_t vs1, size_t vl);
- vint64m4_t __riscv_vdsmul_vs_i64m4(vint64m4_t vs2, vint64m4_t vs1, size_t vl);
- vint64m8_t __riscv_vdsmul_vs_i64m8(vint64m8_t vs2, vint64m8_t vs1, size_t vl);

## Intrinsic Support for int and uint Types, such as

- vuint8mf8_t __riscv_vdsmul_vs_u8mf8(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
- vuint16mf4_t __riscv_vdsmul_vs_u16mf4(vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
- vuint32mf2_t __riscv_vdsmul_vs_u32mf2(vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
- vuint64m1_t __riscv_vdsmul_vs_u64m1(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);

## Intrinsic Support for Different Predications vm/vta/vma

Please refer to the riscv official intrinsic documentation v-intrinsic-spec section 6.1. The following examples use EEW=8 and EMUL=1 for the vdsmul instruction intrinsic. Other EEW and EMUL combinations are omitted. No suffix, i.e., vm=1, vta=1

- vint8m1_t __riscv_vdsmul_vs_i8m1(vint8m1_t vs2, vint8m1_t vs1, size_t vl); tu suffix, i.e., vm=1, vta=0
- vint8m1_t __riscv_vdsmul_vv_i8m1_tu(vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl); m suffix, i.e., vm=0, vta=1, vma=1
- vint8m1_t __riscv_vdsmul_vv_i8m1_m(vbool8_t vm, vint8m1_t vs2, vint8m1_t vs1, size_t vl); tum suffix, i.e., vm=0, vta=0, vma=1

When the mask has tu or mu, the intrinsic will add a vd parameter to describe the register vd needed by the instruction during computation Please refer to the riscv official intrinsic documentation v-intrinsic-spec section 9.3

- vint8m1_t __riscv_vdsmul_vv_i8m1_tum(vbool8_t vm, vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl); mu suffix, i.e., vm=0, vta=1, vma=0
- vint8m1_t __riscv_vdsmul_vv_i8m1_mu(vbool8_t vm, vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl); tumu suffix, i.e., vm=0, vta=0, vma=0
- vint8m1_t __riscv_vdsmul_vv_i8m1_tumu(vbool8_t vm, vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl);

# Implemented Instruction Intrinsic Description

Each instruction, depending on the suffix, may have hundreds of related intrinsic functions. Unless otherwise specified, the default instruction intrinsic supports all predications, supports int and uint, and supports different EEW and EMUL. Taking the load instruction vlfcb2w.v as an example, it supports all predications, supports int and uint, and supports different EEW and EMUL, i.e., by default

- vuint32m4_t __riscv_vlfcb2w_v_u32m4(const uint8_t *rs1, size_t vl);
- vuint32mf2_t __riscv_vlfcb2w_v_u32mf2(const uint8_t *rs1, size_t vl);
- vuint32mf2_t __riscv_vlfcb2w_v_u32mf2_m(vbool64_t vm, const uint8_t *rs1, size_t vl);
- vuint32mf2_t __riscv_vlfcb2w_v_u32mf2_tu(vuint32mf2_t vd, const uint8_t *rs1, size_t vl);
- vuint32mf2_t __riscv_vlfcb2w_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd, const uint8_t *rs1, size_t vl)
- vuint32mf2_t __riscv_vlfcb2w_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd, const uint8_t *rs1, size_t vl)
- vuint32mf2_t __riscv_vlfcb2w_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd, const uint8_t *rs1, size_t vl);

Taking the store instruction vsfcw2b.v as an example, the store instruction only has no suffix and m suffix, and has no return value

- void __riscv_vsfcw2b_v_u32m4(uint8_t *rs1, vuint32m4_t vs3, size_t vl);
- void __riscv_vsfcw2b_v_u32mf2(uint8_t *rs1, vuint32mf2_t vs3, size_t vl);
- void __riscv_vsfcw2b_v_u32mf2_m(vbool64_t vm, uint8_t *rs1, vuint32mf2_t vs3, size_t vl);

For instructions that have both .i and .x, the intrinsic only implements the _x suffix to indicate it is a scalar. Immediate numbers or variables can be passed. When the immediate number is out of range, the compiler will automatically select the .x instruction

- __riscv_vdsmacini_x_i8m1(10, vl); // Selects vdsmacini.i 10
- __riscv_vdsmacini_x_i8m1(32, vl); // Selects li a5, 32; vdsmacini.x a5
- vcpack: default
- vdsmul: default
- vdsmacini: no vd parameter, only supports no suffix and m suffix
- vdsmac: intrinsic function adds a return value, no vd parameter, only supports no suffix and m suffix
- vdsmaco: default
- vlsb: default
- vconj: default
- vcunpackr: default
- vcunpacki: default
- vdscmul: default
- vdscmulj: default
- vdscredsum: default
- vdscmac: intrinsic function adds a return value, no vd parameter, only supports no suffix and m suffix
- vdscmacj: intrinsic function adds a return value, no vd parameter, only supports no suffix and m suffix
- vdscmacjo: default
- vdscmaco: default
- vdscmacor: default
- vdscmacoi: default
- vdscmacjor: default
- vdscmacjoi: default
- vdscmulr: default
- vdscmuli: default
- vdscmuljr: default
- vdscmulji: default
- vdsredsum: default
- vdsredsumn: default
- vlfcb2h: default
- vlfcb2w: default
- vlfch2w: default
- vlfcpa2c: default
- vlfcpb2c: default
- vsfch2b store instruction only supports no suffix and m suffix
- vsfcw2b store instruction only supports no suffix and m suffix
- vsfcw2h store instruction only supports no suffix and m suffix
- vsfcc2pa store instruction only supports no suffix and m suffix
- vsfcc2pb store instruction only supports no suffix and m suffix
- vredmaxi default
- vredmini default
- vpharot no vm bit, only supports no suffix and tu suffix
- vperm no vm bit, only supports no suffix and tu suffix
- vfsl no vm bit, only supports no suffix and tu suffix
- vfsr no vm bit, only supports no suffix and tu suffix
- vlnlp no vm bit, no vd parameter, only supports no suffix
- vnle default
- vnlm default