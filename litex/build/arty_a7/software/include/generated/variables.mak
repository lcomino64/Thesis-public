PACKAGES=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata bios
PACKAGE_DIRS=/home/lachlancomino/repos/litex/litex/soc/software/libc /home/lachlancomino/repos/litex/litex/soc/software/libcompiler_rt /home/lachlancomino/repos/litex/litex/soc/software/libbase /home/lachlancomino/repos/litex/litex/soc/software/libfatfs /home/lachlancomino/repos/litex/litex/soc/software/liblitespi /home/lachlancomino/repos/litex/litex/soc/software/liblitedram /home/lachlancomino/repos/litex/litex/soc/software/libliteeth /home/lachlancomino/repos/litex/litex/soc/software/liblitesdcard /home/lachlancomino/repos/litex/litex/soc/software/liblitesata /home/lachlancomino/repos/litex/litex/soc/software/bios
LIBS=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata
TRIPLE=riscv64-unknown-elf
CPU=vexriscv
CPUFAMILY=riscv
CPUFLAGS= -march=rv32i2p0_ma -mabi=ilp32 -D__vexriscv_smp__ -D__riscv_plic__
CPUENDIANNESS=little
CLANG=0
CPU_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/cores/cpu/vexriscv_smp
SOC_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc
PICOLIBC_DIRECTORY=/home/lachlancomino/repos/pythondata-software-picolibc/pythondata_software_picolibc/data
PICOLIBC_FORMAT=integer
COMPILER_RT_DIRECTORY=/home/lachlancomino/repos/pythondata-software-compiler_rt/pythondata_software_compiler_rt/data
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/home/lachlancomino/Thesis/Project/scpns/litex/build/arty_a7/software/include
LIBC_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/libc
LIBCOMPILER_RT_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/libbase
LIBFATFS_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/libfatfs
LIBLITESPI_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/liblitespi
LIBLITEDRAM_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/liblitedram
LIBLITEETH_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/libliteeth
LIBLITESDCARD_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/liblitesdcard
LIBLITESATA_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/liblitesata
BIOS_DIRECTORY=/home/lachlancomino/repos/litex/litex/soc/software/bios
LTO=0
BIOS_CONSOLE_FULL=1