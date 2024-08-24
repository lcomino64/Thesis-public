//--------------------------------------------------------------------------------
// Auto-generated by LiteX (06a26b7c9) on 2024-08-19 16:53:22
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// CSR Includes.
//--------------------------------------------------------------------------------

#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */

#ifndef CSR_BASE
#define CSR_BASE 0xf0000000L
#endif /* ! CSR_BASE */

//--------------------------------------------------------------------------------
// CSR Registers/Fields Definition.
//--------------------------------------------------------------------------------

/* CTRL Registers */
#define CSR_CTRL_BASE (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_SIZE 1
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x4L)
#define CSR_CTRL_SCRATCH_SIZE 1
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x8L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1

/* CTRL Fields */
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1

/* DDRPHY Registers */
#define CSR_DDRPHY_BASE (CSR_BASE + 0x800L)
#define CSR_DDRPHY_RST_ADDR (CSR_BASE + 0x800L)
#define CSR_DDRPHY_RST_SIZE 1
#define CSR_DDRPHY_DLY_SEL_ADDR (CSR_BASE + 0x804L)
#define CSR_DDRPHY_DLY_SEL_SIZE 1
#define CSR_DDRPHY_HALF_SYS8X_TAPS_ADDR (CSR_BASE + 0x808L)
#define CSR_DDRPHY_HALF_SYS8X_TAPS_SIZE 1
#define CSR_DDRPHY_WLEVEL_EN_ADDR (CSR_BASE + 0x80cL)
#define CSR_DDRPHY_WLEVEL_EN_SIZE 1
#define CSR_DDRPHY_WLEVEL_STROBE_ADDR (CSR_BASE + 0x810L)
#define CSR_DDRPHY_WLEVEL_STROBE_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_RST_ADDR (CSR_BASE + 0x814L)
#define CSR_DDRPHY_RDLY_DQ_RST_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_INC_ADDR (CSR_BASE + 0x818L)
#define CSR_DDRPHY_RDLY_DQ_INC_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_ADDR (CSR_BASE + 0x81cL)
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_ADDR (CSR_BASE + 0x820L)
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_SIZE 1
#define CSR_DDRPHY_WDLY_DQ_BITSLIP_RST_ADDR (CSR_BASE + 0x824L)
#define CSR_DDRPHY_WDLY_DQ_BITSLIP_RST_SIZE 1
#define CSR_DDRPHY_WDLY_DQ_BITSLIP_ADDR (CSR_BASE + 0x828L)
#define CSR_DDRPHY_WDLY_DQ_BITSLIP_SIZE 1
#define CSR_DDRPHY_RDPHASE_ADDR (CSR_BASE + 0x82cL)
#define CSR_DDRPHY_RDPHASE_SIZE 1
#define CSR_DDRPHY_WRPHASE_ADDR (CSR_BASE + 0x830L)
#define CSR_DDRPHY_WRPHASE_SIZE 1

/* DDRPHY Fields */

/* UART Registers */
#define CSR_UART_BASE (CSR_BASE + 0x1000L)
#define CSR_UART_RXTX_ADDR (CSR_BASE + 0x1000L)
#define CSR_UART_RXTX_SIZE 1
#define CSR_UART_TXFULL_ADDR (CSR_BASE + 0x1004L)
#define CSR_UART_TXFULL_SIZE 1
#define CSR_UART_RXEMPTY_ADDR (CSR_BASE + 0x1008L)
#define CSR_UART_RXEMPTY_SIZE 1
#define CSR_UART_EV_STATUS_ADDR (CSR_BASE + 0x100cL)
#define CSR_UART_EV_STATUS_SIZE 1
#define CSR_UART_EV_PENDING_ADDR (CSR_BASE + 0x1010L)
#define CSR_UART_EV_PENDING_SIZE 1
#define CSR_UART_EV_ENABLE_ADDR (CSR_BASE + 0x1014L)
#define CSR_UART_EV_ENABLE_SIZE 1
#define CSR_UART_TXEMPTY_ADDR (CSR_BASE + 0x1018L)
#define CSR_UART_TXEMPTY_SIZE 1
#define CSR_UART_RXFULL_ADDR (CSR_BASE + 0x101cL)
#define CSR_UART_RXFULL_SIZE 1

/* UART Fields */
#define CSR_UART_EV_STATUS_TX_OFFSET 0
#define CSR_UART_EV_STATUS_TX_SIZE 1
#define CSR_UART_EV_STATUS_RX_OFFSET 1
#define CSR_UART_EV_STATUS_RX_SIZE 1
#define CSR_UART_EV_PENDING_TX_OFFSET 0
#define CSR_UART_EV_PENDING_TX_SIZE 1
#define CSR_UART_EV_PENDING_RX_OFFSET 1
#define CSR_UART_EV_PENDING_RX_SIZE 1
#define CSR_UART_EV_ENABLE_TX_OFFSET 0
#define CSR_UART_EV_ENABLE_TX_SIZE 1
#define CSR_UART_EV_ENABLE_RX_OFFSET 1
#define CSR_UART_EV_ENABLE_RX_SIZE 1

/* TIMER0 Registers */
#define CSR_TIMER0_BASE (CSR_BASE + 0x1800L)
#define CSR_TIMER0_LOAD_ADDR (CSR_BASE + 0x1800L)
#define CSR_TIMER0_LOAD_SIZE 1
#define CSR_TIMER0_RELOAD_ADDR (CSR_BASE + 0x1804L)
#define CSR_TIMER0_RELOAD_SIZE 1
#define CSR_TIMER0_EN_ADDR (CSR_BASE + 0x1808L)
#define CSR_TIMER0_EN_SIZE 1
#define CSR_TIMER0_UPDATE_VALUE_ADDR (CSR_BASE + 0x180cL)
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
#define CSR_TIMER0_VALUE_ADDR (CSR_BASE + 0x1810L)
#define CSR_TIMER0_VALUE_SIZE 1
#define CSR_TIMER0_EV_STATUS_ADDR (CSR_BASE + 0x1814L)
#define CSR_TIMER0_EV_STATUS_SIZE 1
#define CSR_TIMER0_EV_PENDING_ADDR (CSR_BASE + 0x1818L)
#define CSR_TIMER0_EV_PENDING_SIZE 1
#define CSR_TIMER0_EV_ENABLE_ADDR (CSR_BASE + 0x181cL)
#define CSR_TIMER0_EV_ENABLE_SIZE 1
#define CSR_TIMER0_UPTIME_LATCH_ADDR (CSR_BASE + 0x1820L)
#define CSR_TIMER0_UPTIME_LATCH_SIZE 1
#define CSR_TIMER0_UPTIME_CYCLES_ADDR (CSR_BASE + 0x1824L)
#define CSR_TIMER0_UPTIME_CYCLES_SIZE 2

/* TIMER0 Fields */
#define CSR_TIMER0_EV_STATUS_ZERO_OFFSET 0
#define CSR_TIMER0_EV_STATUS_ZERO_SIZE 1
#define CSR_TIMER0_EV_PENDING_ZERO_OFFSET 0
#define CSR_TIMER0_EV_PENDING_ZERO_SIZE 1
#define CSR_TIMER0_EV_ENABLE_ZERO_OFFSET 0
#define CSR_TIMER0_EV_ENABLE_ZERO_SIZE 1

/* ETHMAC Registers */
#define CSR_ETHMAC_BASE (CSR_BASE + 0x2000L)
#define CSR_ETHMAC_SRAM_WRITER_SLOT_ADDR (CSR_BASE + 0x2000L)
#define CSR_ETHMAC_SRAM_WRITER_SLOT_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_LENGTH_ADDR (CSR_BASE + 0x2004L)
#define CSR_ETHMAC_SRAM_WRITER_LENGTH_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_ERRORS_ADDR (CSR_BASE + 0x2008L)
#define CSR_ETHMAC_SRAM_WRITER_ERRORS_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_ADDR (CSR_BASE + 0x200cL)
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_ADDR (CSR_BASE + 0x2010L)
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_ADDR (CSR_BASE + 0x2014L)
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_SIZE 1
#define CSR_ETHMAC_SRAM_READER_START_ADDR (CSR_BASE + 0x2018L)
#define CSR_ETHMAC_SRAM_READER_START_SIZE 1
#define CSR_ETHMAC_SRAM_READER_READY_ADDR (CSR_BASE + 0x201cL)
#define CSR_ETHMAC_SRAM_READER_READY_SIZE 1
#define CSR_ETHMAC_SRAM_READER_LEVEL_ADDR (CSR_BASE + 0x2020L)
#define CSR_ETHMAC_SRAM_READER_LEVEL_SIZE 1
#define CSR_ETHMAC_SRAM_READER_SLOT_ADDR (CSR_BASE + 0x2024L)
#define CSR_ETHMAC_SRAM_READER_SLOT_SIZE 1
#define CSR_ETHMAC_SRAM_READER_LENGTH_ADDR (CSR_BASE + 0x2028L)
#define CSR_ETHMAC_SRAM_READER_LENGTH_SIZE 1
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_ADDR (CSR_BASE + 0x202cL)
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_SIZE 1
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_ADDR (CSR_BASE + 0x2030L)
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_SIZE 1
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_ADDR (CSR_BASE + 0x2034L)
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_SIZE 1
#define CSR_ETHMAC_PREAMBLE_CRC_ADDR (CSR_BASE + 0x2038L)
#define CSR_ETHMAC_PREAMBLE_CRC_SIZE 1
#define CSR_ETHMAC_RX_DATAPATH_PREAMBLE_ERRORS_ADDR (CSR_BASE + 0x203cL)
#define CSR_ETHMAC_RX_DATAPATH_PREAMBLE_ERRORS_SIZE 1
#define CSR_ETHMAC_RX_DATAPATH_CRC_ERRORS_ADDR (CSR_BASE + 0x2040L)
#define CSR_ETHMAC_RX_DATAPATH_CRC_ERRORS_SIZE 1

/* ETHMAC Fields */
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_AVAILABLE_OFFSET 0
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_AVAILABLE_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_AVAILABLE_OFFSET 0
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_AVAILABLE_SIZE 1
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_AVAILABLE_OFFSET 0
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_AVAILABLE_SIZE 1
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_EVENT0_OFFSET 0
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_EVENT0_SIZE 1
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_EVENT0_OFFSET 0
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_EVENT0_SIZE 1
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_EVENT0_OFFSET 0
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_EVENT0_SIZE 1

/* ETHPHY Registers */
#define CSR_ETHPHY_BASE (CSR_BASE + 0x2800L)
#define CSR_ETHPHY_CRG_RESET_ADDR (CSR_BASE + 0x2800L)
#define CSR_ETHPHY_CRG_RESET_SIZE 1
#define CSR_ETHPHY_MDIO_W_ADDR (CSR_BASE + 0x2804L)
#define CSR_ETHPHY_MDIO_W_SIZE 1
#define CSR_ETHPHY_MDIO_R_ADDR (CSR_BASE + 0x2808L)
#define CSR_ETHPHY_MDIO_R_SIZE 1

/* ETHPHY Fields */
#define CSR_ETHPHY_MDIO_W_MDC_OFFSET 0
#define CSR_ETHPHY_MDIO_W_MDC_SIZE 1
#define CSR_ETHPHY_MDIO_W_OE_OFFSET 1
#define CSR_ETHPHY_MDIO_W_OE_SIZE 1
#define CSR_ETHPHY_MDIO_W_W_OFFSET 2
#define CSR_ETHPHY_MDIO_W_W_SIZE 1
#define CSR_ETHPHY_MDIO_R_R_OFFSET 0
#define CSR_ETHPHY_MDIO_R_R_SIZE 1

/* I2C0 Registers */
#define CSR_I2C0_BASE (CSR_BASE + 0x3000L)
#define CSR_I2C0_W_ADDR (CSR_BASE + 0x3000L)
#define CSR_I2C0_W_SIZE 1
#define CSR_I2C0_R_ADDR (CSR_BASE + 0x3004L)
#define CSR_I2C0_R_SIZE 1

/* I2C0 Fields */
#define CSR_I2C0_W_SCL_OFFSET 0
#define CSR_I2C0_W_SCL_SIZE 1
#define CSR_I2C0_W_OE_OFFSET 1
#define CSR_I2C0_W_OE_SIZE 1
#define CSR_I2C0_W_SDA_OFFSET 2
#define CSR_I2C0_W_SDA_SIZE 1
#define CSR_I2C0_R_SDA_OFFSET 0
#define CSR_I2C0_R_SDA_SIZE 1

/* IDENTIFIER_MEM Registers */
#define CSR_IDENTIFIER_MEM_BASE (CSR_BASE + 0x3800L)

/* IDENTIFIER_MEM Fields */

/* SDRAM Registers */
#define CSR_SDRAM_BASE (CSR_BASE + 0x4000L)
#define CSR_SDRAM_DFII_CONTROL_ADDR (CSR_BASE + 0x4000L)
#define CSR_SDRAM_DFII_CONTROL_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ADDR (CSR_BASE + 0x4004L)
#define CSR_SDRAM_DFII_PI0_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_ADDR (CSR_BASE + 0x4008L)
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI0_ADDRESS_ADDR (CSR_BASE + 0x400cL)
#define CSR_SDRAM_DFII_PI0_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI0_BADDRESS_ADDR (CSR_BASE + 0x4010L)
#define CSR_SDRAM_DFII_PI0_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI0_WRDATA_ADDR (CSR_BASE + 0x4014L)
#define CSR_SDRAM_DFII_PI0_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI0_RDDATA_ADDR (CSR_BASE + 0x4018L)
#define CSR_SDRAM_DFII_PI0_RDDATA_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_ADDR (CSR_BASE + 0x401cL)
#define CSR_SDRAM_DFII_PI1_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_ADDR (CSR_BASE + 0x4020L)
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI1_ADDRESS_ADDR (CSR_BASE + 0x4024L)
#define CSR_SDRAM_DFII_PI1_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI1_BADDRESS_ADDR (CSR_BASE + 0x4028L)
#define CSR_SDRAM_DFII_PI1_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI1_WRDATA_ADDR (CSR_BASE + 0x402cL)
#define CSR_SDRAM_DFII_PI1_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI1_RDDATA_ADDR (CSR_BASE + 0x4030L)
#define CSR_SDRAM_DFII_PI1_RDDATA_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_ADDR (CSR_BASE + 0x4034L)
#define CSR_SDRAM_DFII_PI2_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_ADDR (CSR_BASE + 0x4038L)
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI2_ADDRESS_ADDR (CSR_BASE + 0x403cL)
#define CSR_SDRAM_DFII_PI2_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI2_BADDRESS_ADDR (CSR_BASE + 0x4040L)
#define CSR_SDRAM_DFII_PI2_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI2_WRDATA_ADDR (CSR_BASE + 0x4044L)
#define CSR_SDRAM_DFII_PI2_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI2_RDDATA_ADDR (CSR_BASE + 0x4048L)
#define CSR_SDRAM_DFII_PI2_RDDATA_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_ADDR (CSR_BASE + 0x404cL)
#define CSR_SDRAM_DFII_PI3_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_ADDR (CSR_BASE + 0x4050L)
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI3_ADDRESS_ADDR (CSR_BASE + 0x4054L)
#define CSR_SDRAM_DFII_PI3_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI3_BADDRESS_ADDR (CSR_BASE + 0x4058L)
#define CSR_SDRAM_DFII_PI3_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI3_WRDATA_ADDR (CSR_BASE + 0x405cL)
#define CSR_SDRAM_DFII_PI3_WRDATA_SIZE 1
#define CSR_SDRAM_DFII_PI3_RDDATA_ADDR (CSR_BASE + 0x4060L)
#define CSR_SDRAM_DFII_PI3_RDDATA_SIZE 1

/* SDRAM Fields */
#define CSR_SDRAM_DFII_CONTROL_SEL_OFFSET 0
#define CSR_SDRAM_DFII_CONTROL_SEL_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_CKE_OFFSET 1
#define CSR_SDRAM_DFII_CONTROL_CKE_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_ODT_OFFSET 2
#define CSR_SDRAM_DFII_CONTROL_ODT_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_RESET_N_OFFSET 3
#define CSR_SDRAM_DFII_CONTROL_RESET_N_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_OFFSET 0
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_WE_OFFSET 1
#define CSR_SDRAM_DFII_PI0_COMMAND_WE_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CAS_OFFSET 2
#define CSR_SDRAM_DFII_PI0_COMMAND_CAS_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_RAS_OFFSET 3
#define CSR_SDRAM_DFII_PI0_COMMAND_RAS_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_WREN_OFFSET 4
#define CSR_SDRAM_DFII_PI0_COMMAND_WREN_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_RDEN_OFFSET 5
#define CSR_SDRAM_DFII_PI0_COMMAND_RDEN_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_TOP_OFFSET 6
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_TOP_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_BOTTOM_OFFSET 7
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_BOTTOM_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_OFFSET 0
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_WE_OFFSET 1
#define CSR_SDRAM_DFII_PI1_COMMAND_WE_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CAS_OFFSET 2
#define CSR_SDRAM_DFII_PI1_COMMAND_CAS_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_RAS_OFFSET 3
#define CSR_SDRAM_DFII_PI1_COMMAND_RAS_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_WREN_OFFSET 4
#define CSR_SDRAM_DFII_PI1_COMMAND_WREN_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_RDEN_OFFSET 5
#define CSR_SDRAM_DFII_PI1_COMMAND_RDEN_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_TOP_OFFSET 6
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_TOP_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_BOTTOM_OFFSET 7
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_BOTTOM_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_CS_OFFSET 0
#define CSR_SDRAM_DFII_PI2_COMMAND_CS_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_WE_OFFSET 1
#define CSR_SDRAM_DFII_PI2_COMMAND_WE_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_CAS_OFFSET 2
#define CSR_SDRAM_DFII_PI2_COMMAND_CAS_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_RAS_OFFSET 3
#define CSR_SDRAM_DFII_PI2_COMMAND_RAS_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_WREN_OFFSET 4
#define CSR_SDRAM_DFII_PI2_COMMAND_WREN_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_RDEN_OFFSET 5
#define CSR_SDRAM_DFII_PI2_COMMAND_RDEN_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_CS_TOP_OFFSET 6
#define CSR_SDRAM_DFII_PI2_COMMAND_CS_TOP_SIZE 1
#define CSR_SDRAM_DFII_PI2_COMMAND_CS_BOTTOM_OFFSET 7
#define CSR_SDRAM_DFII_PI2_COMMAND_CS_BOTTOM_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_CS_OFFSET 0
#define CSR_SDRAM_DFII_PI3_COMMAND_CS_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_WE_OFFSET 1
#define CSR_SDRAM_DFII_PI3_COMMAND_WE_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_CAS_OFFSET 2
#define CSR_SDRAM_DFII_PI3_COMMAND_CAS_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_RAS_OFFSET 3
#define CSR_SDRAM_DFII_PI3_COMMAND_RAS_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_WREN_OFFSET 4
#define CSR_SDRAM_DFII_PI3_COMMAND_WREN_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_RDEN_OFFSET 5
#define CSR_SDRAM_DFII_PI3_COMMAND_RDEN_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_CS_TOP_OFFSET 6
#define CSR_SDRAM_DFII_PI3_COMMAND_CS_TOP_SIZE 1
#define CSR_SDRAM_DFII_PI3_COMMAND_CS_BOTTOM_OFFSET 7
#define CSR_SDRAM_DFII_PI3_COMMAND_CS_BOTTOM_SIZE 1

/* SPI Registers */
#define CSR_SPI_BASE (CSR_BASE + 0x4800L)
#define CSR_SPI_CONTROL_ADDR (CSR_BASE + 0x4800L)
#define CSR_SPI_CONTROL_SIZE 1
#define CSR_SPI_STATUS_ADDR (CSR_BASE + 0x4804L)
#define CSR_SPI_STATUS_SIZE 1
#define CSR_SPI_MOSI_ADDR (CSR_BASE + 0x4808L)
#define CSR_SPI_MOSI_SIZE 1
#define CSR_SPI_MISO_ADDR (CSR_BASE + 0x480cL)
#define CSR_SPI_MISO_SIZE 1
#define CSR_SPI_CS_ADDR (CSR_BASE + 0x4810L)
#define CSR_SPI_CS_SIZE 1
#define CSR_SPI_LOOPBACK_ADDR (CSR_BASE + 0x4814L)
#define CSR_SPI_LOOPBACK_SIZE 1

/* SPI Fields */
#define CSR_SPI_CONTROL_START_OFFSET 0
#define CSR_SPI_CONTROL_START_SIZE 1
#define CSR_SPI_CONTROL_LENGTH_OFFSET 8
#define CSR_SPI_CONTROL_LENGTH_SIZE 8
#define CSR_SPI_STATUS_DONE_OFFSET 0
#define CSR_SPI_STATUS_DONE_SIZE 1
#define CSR_SPI_STATUS_MODE_OFFSET 1
#define CSR_SPI_STATUS_MODE_SIZE 1
#define CSR_SPI_CS_SEL_OFFSET 0
#define CSR_SPI_CS_SEL_SIZE 1
#define CSR_SPI_CS_MODE_OFFSET 16
#define CSR_SPI_CS_MODE_SIZE 1
#define CSR_SPI_LOOPBACK_MODE_OFFSET 0
#define CSR_SPI_LOOPBACK_MODE_SIZE 1

//--------------------------------------------------------------------------------
// CSR Registers Access Functions.
//--------------------------------------------------------------------------------

#ifndef LITEX_CSR_ACCESS_FUNCTIONS
#define LITEX_CSR_ACCESS_FUNCTIONS 1
#endif

#if LITEX_CSR_ACCESS_FUNCTIONS

/* CTRL Access Functions */
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x0L));
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x0L));
}
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple((CSR_BASE + 0x4L));
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4L));
}
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x8L));
}

/* DDRPHY Access Functions */
static inline uint32_t ddrphy_rst_read(void) {
	return csr_read_simple((CSR_BASE + 0x800L));
}
static inline void ddrphy_rst_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x800L));
}
static inline uint32_t ddrphy_dly_sel_read(void) {
	return csr_read_simple((CSR_BASE + 0x804L));
}
static inline void ddrphy_dly_sel_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x804L));
}
static inline uint32_t ddrphy_half_sys8x_taps_read(void) {
	return csr_read_simple((CSR_BASE + 0x808L));
}
static inline void ddrphy_half_sys8x_taps_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x808L));
}
static inline uint32_t ddrphy_wlevel_en_read(void) {
	return csr_read_simple((CSR_BASE + 0x80cL));
}
static inline void ddrphy_wlevel_en_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x80cL));
}
static inline uint32_t ddrphy_wlevel_strobe_read(void) {
	return csr_read_simple((CSR_BASE + 0x810L));
}
static inline void ddrphy_wlevel_strobe_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x810L));
}
static inline uint32_t ddrphy_rdly_dq_rst_read(void) {
	return csr_read_simple((CSR_BASE + 0x814L));
}
static inline void ddrphy_rdly_dq_rst_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x814L));
}
static inline uint32_t ddrphy_rdly_dq_inc_read(void) {
	return csr_read_simple((CSR_BASE + 0x818L));
}
static inline void ddrphy_rdly_dq_inc_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x818L));
}
static inline uint32_t ddrphy_rdly_dq_bitslip_rst_read(void) {
	return csr_read_simple((CSR_BASE + 0x81cL));
}
static inline void ddrphy_rdly_dq_bitslip_rst_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x81cL));
}
static inline uint32_t ddrphy_rdly_dq_bitslip_read(void) {
	return csr_read_simple((CSR_BASE + 0x820L));
}
static inline void ddrphy_rdly_dq_bitslip_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x820L));
}
static inline uint32_t ddrphy_wdly_dq_bitslip_rst_read(void) {
	return csr_read_simple((CSR_BASE + 0x824L));
}
static inline void ddrphy_wdly_dq_bitslip_rst_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x824L));
}
static inline uint32_t ddrphy_wdly_dq_bitslip_read(void) {
	return csr_read_simple((CSR_BASE + 0x828L));
}
static inline void ddrphy_wdly_dq_bitslip_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x828L));
}
static inline uint32_t ddrphy_rdphase_read(void) {
	return csr_read_simple((CSR_BASE + 0x82cL));
}
static inline void ddrphy_rdphase_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x82cL));
}
static inline uint32_t ddrphy_wrphase_read(void) {
	return csr_read_simple((CSR_BASE + 0x830L));
}
static inline void ddrphy_wrphase_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x830L));
}

/* UART Access Functions */
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple((CSR_BASE + 0x1000L));
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1000L));
}
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple((CSR_BASE + 0x1004L));
}
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple((CSR_BASE + 0x1008L));
}
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x100cL));
}
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple((CSR_BASE + 0x1010L));
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1010L));
}
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x1014L));
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1014L));
}
static inline uint32_t uart_txempty_read(void) {
	return csr_read_simple((CSR_BASE + 0x1018L));
}
static inline uint32_t uart_rxfull_read(void) {
	return csr_read_simple((CSR_BASE + 0x101cL));
}

/* TIMER0 Access Functions */
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple((CSR_BASE + 0x1800L));
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1800L));
}
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple((CSR_BASE + 0x1804L));
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1804L));
}
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple((CSR_BASE + 0x1808L));
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1808L));
}
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple((CSR_BASE + 0x180cL));
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x180cL));
}
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple((CSR_BASE + 0x1810L));
}
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x1814L));
}
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple((CSR_BASE + 0x1818L));
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1818L));
}
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x181cL));
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x181cL));
}
static inline uint32_t timer0_uptime_latch_read(void) {
	return csr_read_simple((CSR_BASE + 0x1820L));
}
static inline void timer0_uptime_latch_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1820L));
}
static inline uint64_t timer0_uptime_cycles_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x1824L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x1828L));
	return r;
}

/* ETHMAC Access Functions */
static inline uint32_t ethmac_sram_writer_slot_read(void) {
	return csr_read_simple((CSR_BASE + 0x2000L));
}
static inline uint32_t ethmac_sram_writer_length_read(void) {
	return csr_read_simple((CSR_BASE + 0x2004L));
}
static inline uint32_t ethmac_sram_writer_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x2008L));
}
static inline uint32_t ethmac_sram_writer_ev_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x200cL));
}
static inline uint32_t ethmac_sram_writer_ev_pending_read(void) {
	return csr_read_simple((CSR_BASE + 0x2010L));
}
static inline void ethmac_sram_writer_ev_pending_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2010L));
}
static inline uint32_t ethmac_sram_writer_ev_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x2014L));
}
static inline void ethmac_sram_writer_ev_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2014L));
}
static inline uint32_t ethmac_sram_reader_start_read(void) {
	return csr_read_simple((CSR_BASE + 0x2018L));
}
static inline void ethmac_sram_reader_start_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2018L));
}
static inline uint32_t ethmac_sram_reader_ready_read(void) {
	return csr_read_simple((CSR_BASE + 0x201cL));
}
static inline uint32_t ethmac_sram_reader_level_read(void) {
	return csr_read_simple((CSR_BASE + 0x2020L));
}
static inline uint32_t ethmac_sram_reader_slot_read(void) {
	return csr_read_simple((CSR_BASE + 0x2024L));
}
static inline void ethmac_sram_reader_slot_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2024L));
}
static inline uint32_t ethmac_sram_reader_length_read(void) {
	return csr_read_simple((CSR_BASE + 0x2028L));
}
static inline void ethmac_sram_reader_length_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2028L));
}
static inline uint32_t ethmac_sram_reader_ev_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x202cL));
}
static inline uint32_t ethmac_sram_reader_ev_pending_read(void) {
	return csr_read_simple((CSR_BASE + 0x2030L));
}
static inline void ethmac_sram_reader_ev_pending_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2030L));
}
static inline uint32_t ethmac_sram_reader_ev_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x2034L));
}
static inline void ethmac_sram_reader_ev_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2034L));
}
static inline uint32_t ethmac_preamble_crc_read(void) {
	return csr_read_simple((CSR_BASE + 0x2038L));
}
static inline uint32_t ethmac_rx_datapath_preamble_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x203cL));
}
static inline uint32_t ethmac_rx_datapath_crc_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x2040L));
}

/* ETHPHY Access Functions */
static inline uint32_t ethphy_crg_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x2800L));
}
static inline void ethphy_crg_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2800L));
}
static inline uint32_t ethphy_mdio_w_read(void) {
	return csr_read_simple((CSR_BASE + 0x2804L));
}
static inline void ethphy_mdio_w_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2804L));
}
static inline uint32_t ethphy_mdio_r_read(void) {
	return csr_read_simple((CSR_BASE + 0x2808L));
}

/* I2C0 Access Functions */
static inline uint32_t i2c0_w_read(void) {
	return csr_read_simple((CSR_BASE + 0x3000L));
}
static inline void i2c0_w_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3000L));
}
static inline uint32_t i2c0_r_read(void) {
	return csr_read_simple((CSR_BASE + 0x3004L));
}

/* IDENTIFIER_MEM Access Functions */

/* SDRAM Access Functions */
static inline uint32_t sdram_dfii_control_read(void) {
	return csr_read_simple((CSR_BASE + 0x4000L));
}
static inline void sdram_dfii_control_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4000L));
}
static inline uint32_t sdram_dfii_pi0_command_read(void) {
	return csr_read_simple((CSR_BASE + 0x4004L));
}
static inline void sdram_dfii_pi0_command_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4004L));
}
static inline uint32_t sdram_dfii_pi0_command_issue_read(void) {
	return csr_read_simple((CSR_BASE + 0x4008L));
}
static inline void sdram_dfii_pi0_command_issue_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4008L));
}
static inline uint32_t sdram_dfii_pi0_address_read(void) {
	return csr_read_simple((CSR_BASE + 0x400cL));
}
static inline void sdram_dfii_pi0_address_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x400cL));
}
static inline uint32_t sdram_dfii_pi0_baddress_read(void) {
	return csr_read_simple((CSR_BASE + 0x4010L));
}
static inline void sdram_dfii_pi0_baddress_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4010L));
}
static inline uint32_t sdram_dfii_pi0_wrdata_read(void) {
	return csr_read_simple((CSR_BASE + 0x4014L));
}
static inline void sdram_dfii_pi0_wrdata_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4014L));
}
static inline uint32_t sdram_dfii_pi0_rddata_read(void) {
	return csr_read_simple((CSR_BASE + 0x4018L));
}
static inline uint32_t sdram_dfii_pi1_command_read(void) {
	return csr_read_simple((CSR_BASE + 0x401cL));
}
static inline void sdram_dfii_pi1_command_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x401cL));
}
static inline uint32_t sdram_dfii_pi1_command_issue_read(void) {
	return csr_read_simple((CSR_BASE + 0x4020L));
}
static inline void sdram_dfii_pi1_command_issue_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4020L));
}
static inline uint32_t sdram_dfii_pi1_address_read(void) {
	return csr_read_simple((CSR_BASE + 0x4024L));
}
static inline void sdram_dfii_pi1_address_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4024L));
}
static inline uint32_t sdram_dfii_pi1_baddress_read(void) {
	return csr_read_simple((CSR_BASE + 0x4028L));
}
static inline void sdram_dfii_pi1_baddress_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4028L));
}
static inline uint32_t sdram_dfii_pi1_wrdata_read(void) {
	return csr_read_simple((CSR_BASE + 0x402cL));
}
static inline void sdram_dfii_pi1_wrdata_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x402cL));
}
static inline uint32_t sdram_dfii_pi1_rddata_read(void) {
	return csr_read_simple((CSR_BASE + 0x4030L));
}
static inline uint32_t sdram_dfii_pi2_command_read(void) {
	return csr_read_simple((CSR_BASE + 0x4034L));
}
static inline void sdram_dfii_pi2_command_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4034L));
}
static inline uint32_t sdram_dfii_pi2_command_issue_read(void) {
	return csr_read_simple((CSR_BASE + 0x4038L));
}
static inline void sdram_dfii_pi2_command_issue_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4038L));
}
static inline uint32_t sdram_dfii_pi2_address_read(void) {
	return csr_read_simple((CSR_BASE + 0x403cL));
}
static inline void sdram_dfii_pi2_address_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x403cL));
}
static inline uint32_t sdram_dfii_pi2_baddress_read(void) {
	return csr_read_simple((CSR_BASE + 0x4040L));
}
static inline void sdram_dfii_pi2_baddress_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4040L));
}
static inline uint32_t sdram_dfii_pi2_wrdata_read(void) {
	return csr_read_simple((CSR_BASE + 0x4044L));
}
static inline void sdram_dfii_pi2_wrdata_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4044L));
}
static inline uint32_t sdram_dfii_pi2_rddata_read(void) {
	return csr_read_simple((CSR_BASE + 0x4048L));
}
static inline uint32_t sdram_dfii_pi3_command_read(void) {
	return csr_read_simple((CSR_BASE + 0x404cL));
}
static inline void sdram_dfii_pi3_command_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x404cL));
}
static inline uint32_t sdram_dfii_pi3_command_issue_read(void) {
	return csr_read_simple((CSR_BASE + 0x4050L));
}
static inline void sdram_dfii_pi3_command_issue_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4050L));
}
static inline uint32_t sdram_dfii_pi3_address_read(void) {
	return csr_read_simple((CSR_BASE + 0x4054L));
}
static inline void sdram_dfii_pi3_address_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4054L));
}
static inline uint32_t sdram_dfii_pi3_baddress_read(void) {
	return csr_read_simple((CSR_BASE + 0x4058L));
}
static inline void sdram_dfii_pi3_baddress_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4058L));
}
static inline uint32_t sdram_dfii_pi3_wrdata_read(void) {
	return csr_read_simple((CSR_BASE + 0x405cL));
}
static inline void sdram_dfii_pi3_wrdata_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x405cL));
}
static inline uint32_t sdram_dfii_pi3_rddata_read(void) {
	return csr_read_simple((CSR_BASE + 0x4060L));
}

/* SPI Access Functions */
static inline uint32_t spi_control_read(void) {
	return csr_read_simple((CSR_BASE + 0x4800L));
}
static inline void spi_control_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4800L));
}
static inline uint32_t spi_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x4804L));
}
static inline uint32_t spi_mosi_read(void) {
	return csr_read_simple((CSR_BASE + 0x4808L));
}
static inline void spi_mosi_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4808L));
}
static inline uint32_t spi_miso_read(void) {
	return csr_read_simple((CSR_BASE + 0x480cL));
}
static inline uint32_t spi_cs_read(void) {
	return csr_read_simple((CSR_BASE + 0x4810L));
}
static inline void spi_cs_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4810L));
}
static inline uint32_t spi_loopback_read(void) {
	return csr_read_simple((CSR_BASE + 0x4814L));
}
static inline void spi_loopback_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4814L));
}
#endif /* LITEX_CSR_ACCESS_FUNCTIONS */

#endif /* ! __GENERATED_CSR_H */
