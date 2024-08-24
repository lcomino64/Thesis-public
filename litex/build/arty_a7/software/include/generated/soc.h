//--------------------------------------------------------------------------------
// Auto-generated by LiteX (06a26b7c9) on 2024-08-19 16:53:22
//--------------------------------------------------------------------------------
#ifndef __GENERATED_SOC_H
#define __GENERATED_SOC_H
#define CONFIG_PLATFORM_NAME "digilent_arty"
#define CONFIG_CLOCK_FREQUENCY 100000000
#define CONFIG_CPU_HAS_INTERRUPT
#define CONFIG_CPU_RESET_ADDR 0
#define CONFIG_CPU_COUNT 2
#define CONFIG_CPU_ISA "rv32i2p0_ma"
#define CONFIG_CPU_MMU "sv32"
#define CONFIG_CPU_DCACHE_SIZE 4096
#define CONFIG_CPU_DCACHE_WAYS 1
#define CONFIG_CPU_DCACHE_BLOCK_SIZE 64
#define CONFIG_CPU_ICACHE_SIZE 4096
#define CONFIG_CPU_ICACHE_WAYS 1
#define CONFIG_CPU_ICACHE_BLOCK_SIZE 64
#define CONFIG_CPU_DTLB_SIZE 4
#define CONFIG_CPU_DTLB_WAYS 4
#define CONFIG_CPU_ITLB_SIZE 4
#define CONFIG_CPU_ITLB_WAYS 4
#define CONFIG_CPU_TYPE_VEXRISCV_SMP
#define CONFIG_CPU_VARIANT_LINUX
#define CONFIG_CPU_FAMILY "riscv"
#define CONFIG_CPU_NAME "vexriscv"
#define CONFIG_CPU_HUMAN_NAME "VexRiscv SMP-LINUX"
#define CONFIG_CPU_NOP "nop"
#define CONFIG_BIOS_NO_BUILD_TIME
#define CONFIG_IDENTIFIER "LiteX SoC on Arty A7"
#define CONFIG_L2_SIZE 8192
#define LOCALIP1 192
#define LOCALIP2 168
#define LOCALIP3 1
#define LOCALIP4 50
#define REMOTEIP1 192
#define REMOTEIP2 168
#define REMOTEIP3 1
#define REMOTEIP4 100
#define CONFIG_CSR_DATA_WIDTH 32
#define CONFIG_CSR_ALIGNMENT 32
#define CONFIG_BUS_STANDARD "wishbone"
#define CONFIG_BUS_DATA_WIDTH 32
#define CONFIG_BUS_ADDRESS_WIDTH 32
#define CONFIG_BUS_BURSTING 0
#define ETHMAC_RX_SLOTS 2
#define ETHMAC_TX_SLOTS 2
#define ETHMAC_SLOT_SIZE 2048
#define CONFIG_CPU_INTERRUPTS 4
#define ETHMAC_INTERRUPT 3
#define TIMER0_INTERRUPT 2
#define UART_INTERRUPT 1
#define CONFIG_HAS_I2C

#ifndef __ASSEMBLER__
static inline const char * config_platform_name_read(void) {
	return "digilent_arty";
}
static inline int config_clock_frequency_read(void) {
	return 100000000;
}
static inline int config_cpu_reset_addr_read(void) {
	return 0;
}
static inline int config_cpu_count_read(void) {
	return 2;
}
static inline const char * config_cpu_isa_read(void) {
	return "rv32i2p0_ma";
}
static inline const char * config_cpu_mmu_read(void) {
	return "sv32";
}
static inline int config_cpu_dcache_size_read(void) {
	return 4096;
}
static inline int config_cpu_dcache_ways_read(void) {
	return 1;
}
static inline int config_cpu_dcache_block_size_read(void) {
	return 64;
}
static inline int config_cpu_icache_size_read(void) {
	return 4096;
}
static inline int config_cpu_icache_ways_read(void) {
	return 1;
}
static inline int config_cpu_icache_block_size_read(void) {
	return 64;
}
static inline int config_cpu_dtlb_size_read(void) {
	return 4;
}
static inline int config_cpu_dtlb_ways_read(void) {
	return 4;
}
static inline int config_cpu_itlb_size_read(void) {
	return 4;
}
static inline int config_cpu_itlb_ways_read(void) {
	return 4;
}
static inline const char * config_cpu_family_read(void) {
	return "riscv";
}
static inline const char * config_cpu_name_read(void) {
	return "vexriscv";
}
static inline const char * config_cpu_human_name_read(void) {
	return "VexRiscv SMP-LINUX";
}
static inline const char * config_cpu_nop_read(void) {
	return "nop";
}
static inline const char * config_identifier_read(void) {
	return "LiteX SoC on Arty A7";
}
static inline int config_l2_size_read(void) {
	return 8192;
}
static inline int localip1_read(void) {
	return 192;
}
static inline int localip2_read(void) {
	return 168;
}
static inline int localip3_read(void) {
	return 1;
}
static inline int localip4_read(void) {
	return 50;
}
static inline int remoteip1_read(void) {
	return 192;
}
static inline int remoteip2_read(void) {
	return 168;
}
static inline int remoteip3_read(void) {
	return 1;
}
static inline int remoteip4_read(void) {
	return 100;
}
static inline int config_csr_data_width_read(void) {
	return 32;
}
static inline int config_csr_alignment_read(void) {
	return 32;
}
static inline const char * config_bus_standard_read(void) {
	return "wishbone";
}
static inline int config_bus_data_width_read(void) {
	return 32;
}
static inline int config_bus_address_width_read(void) {
	return 32;
}
static inline int config_bus_bursting_read(void) {
	return 0;
}
static inline int ethmac_rx_slots_read(void) {
	return 2;
}
static inline int ethmac_tx_slots_read(void) {
	return 2;
}
static inline int ethmac_slot_size_read(void) {
	return 2048;
}
static inline int config_cpu_interrupts_read(void) {
	return 4;
}
static inline int ethmac_interrupt_read(void) {
	return 3;
}
static inline int timer0_interrupt_read(void) {
	return 2;
}
static inline int uart_interrupt_read(void) {
	return 1;
}
#endif // !__ASSEMBLER__

#endif
