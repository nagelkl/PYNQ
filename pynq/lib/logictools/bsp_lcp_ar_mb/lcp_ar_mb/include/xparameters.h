#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definitions for bus frequencies */
#define XPAR_CPU_M_AXI_DP_FREQ_HZ 100000000
/******************************************************************/

/* Canonical definitions for bus frequencies */
/******************************************************************/

#define XPAR_CPU_CORE_CLOCK_FREQ_HZ 100000000
#define XPAR_MICROBLAZE_CORE_CLOCK_FREQ_HZ 100000000

/******************************************************************/


/* Definitions for peripheral LCP_AR_MB */
#define XPAR_LCP_AR_MB_ADDR_SIZE 32
#define XPAR_LCP_AR_MB_ADDR_TAG_BITS 17
#define XPAR_LCP_AR_MB_ALLOW_DCACHE_WR 1
#define XPAR_LCP_AR_MB_ALLOW_ICACHE_WR 1
#define XPAR_LCP_AR_MB_AREA_OPTIMIZED 0
#define XPAR_LCP_AR_MB_ASYNC_INTERRUPT 1
#define XPAR_LCP_AR_MB_ASYNC_WAKEUP 3
#define XPAR_LCP_AR_MB_AVOID_PRIMITIVES 0
#define XPAR_LCP_AR_MB_BASE_VECTORS 0x0000000000000000
#define XPAR_LCP_AR_MB_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_LCP_AR_MB_CACHE_BYTE_SIZE 8192
#define XPAR_LCP_AR_MB_DADDR_SIZE 32
#define XPAR_LCP_AR_MB_DATA_SIZE 32
#define XPAR_LCP_AR_MB_DCACHE_ADDR_TAG 17
#define XPAR_LCP_AR_MB_DCACHE_ALWAYS_USED 0
#define XPAR_LCP_AR_MB_DCACHE_BASEADDR 0x00000000
#define XPAR_LCP_AR_MB_DCACHE_BYTE_SIZE 8192
#define XPAR_LCP_AR_MB_DCACHE_DATA_WIDTH 0
#define XPAR_LCP_AR_MB_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_LCP_AR_MB_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_LCP_AR_MB_DCACHE_LINE_LEN 4
#define XPAR_LCP_AR_MB_DCACHE_USE_WRITEBACK 0
#define XPAR_LCP_AR_MB_DCACHE_VICTIMS 0
#define XPAR_LCP_AR_MB_DC_AXI_MON 0
#define XPAR_LCP_AR_MB_DEBUG_COUNTER_WIDTH 32
#define XPAR_LCP_AR_MB_DEBUG_ENABLED 1
#define XPAR_LCP_AR_MB_DEBUG_EVENT_COUNTERS 5
#define XPAR_LCP_AR_MB_DEBUG_EXTERNAL_TRACE 0
#define XPAR_LCP_AR_MB_DEBUG_INTERFACE 0
#define XPAR_LCP_AR_MB_DEBUG_LATENCY_COUNTERS 1
#define XPAR_LCP_AR_MB_DEBUG_PROFILE_SIZE 0
#define XPAR_LCP_AR_MB_DEBUG_TRACE_ASYNC_RESET 0
#define XPAR_LCP_AR_MB_DEBUG_TRACE_SIZE 8192
#define XPAR_LCP_AR_MB_DIV_ZERO_EXCEPTION 0
#define XPAR_LCP_AR_MB_DP_AXI_MON 0
#define XPAR_LCP_AR_MB_DYNAMIC_BUS_SIZING 0
#define XPAR_LCP_AR_MB_D_AXI 1
#define XPAR_LCP_AR_MB_D_LMB 1
#define XPAR_LCP_AR_MB_D_LMB_MON 0
#define XPAR_LCP_AR_MB_ECC_USE_CE_EXCEPTION 0
#define XPAR_LCP_AR_MB_EDGE_IS_POSITIVE 1
#define XPAR_LCP_AR_MB_ENABLE_DISCRETE_PORTS 0
#define XPAR_LCP_AR_MB_ENDIANNESS 1
#define XPAR_LCP_AR_MB_FAULT_TOLERANT 0
#define XPAR_LCP_AR_MB_FPU_EXCEPTION 0
#define XPAR_LCP_AR_MB_FREQ 100000000
#define XPAR_LCP_AR_MB_FSL_EXCEPTION 0
#define XPAR_LCP_AR_MB_FSL_LINKS 0
#define XPAR_LCP_AR_MB_IADDR_SIZE 32
#define XPAR_LCP_AR_MB_ICACHE_ALWAYS_USED 0
#define XPAR_LCP_AR_MB_ICACHE_BASEADDR 0x00000000
#define XPAR_LCP_AR_MB_ICACHE_DATA_WIDTH 0
#define XPAR_LCP_AR_MB_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_LCP_AR_MB_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_LCP_AR_MB_ICACHE_LINE_LEN 4
#define XPAR_LCP_AR_MB_ICACHE_STREAMS 0
#define XPAR_LCP_AR_MB_ICACHE_VICTIMS 0
#define XPAR_LCP_AR_MB_IC_AXI_MON 0
#define XPAR_LCP_AR_MB_ILL_OPCODE_EXCEPTION 0
#define XPAR_LCP_AR_MB_IMPRECISE_EXCEPTIONS 0
#define XPAR_LCP_AR_MB_INSTR_SIZE 32
#define XPAR_LCP_AR_MB_INTERCONNECT 2
#define XPAR_LCP_AR_MB_INTERRUPT_IS_EDGE 0
#define XPAR_LCP_AR_MB_INTERRUPT_MON 0
#define XPAR_LCP_AR_MB_IP_AXI_MON 0
#define XPAR_LCP_AR_MB_I_AXI 0
#define XPAR_LCP_AR_MB_I_LMB 1
#define XPAR_LCP_AR_MB_I_LMB_MON 0
#define XPAR_LCP_AR_MB_LOCKSTEP_MASTER 0
#define XPAR_LCP_AR_MB_LOCKSTEP_SELECT 0
#define XPAR_LCP_AR_MB_LOCKSTEP_SLAVE 0
#define XPAR_LCP_AR_MB_M0_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M0_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M1_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M1_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M2_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M2_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M3_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M3_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M4_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M4_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M5_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M5_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M6_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M6_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M7_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M7_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M8_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M8_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M9_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M9_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M10_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M10_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M11_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M11_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M12_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M12_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M13_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M13_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M14_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M14_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_M15_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M15_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_MMU_DTLB_SIZE 4
#define XPAR_LCP_AR_MB_MMU_ITLB_SIZE 2
#define XPAR_LCP_AR_MB_MMU_PRIVILEGED_INSTR 0
#define XPAR_LCP_AR_MB_MMU_TLB_ACCESS 3
#define XPAR_LCP_AR_MB_MMU_ZONES 16
#define XPAR_LCP_AR_MB_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_LCP_AR_MB_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_LCP_AR_MB_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_DC_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_LCP_AR_MB_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_DC_USER_SIGNALS 0
#define XPAR_LCP_AR_MB_M_AXI_DC_USER_VALUE 31
#define XPAR_LCP_AR_MB_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_DP_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_LCP_AR_MB_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_LCP_AR_MB_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_LCP_AR_MB_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_LCP_AR_MB_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_IC_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_IC_USER_SIGNALS 0
#define XPAR_LCP_AR_MB_M_AXI_IC_USER_VALUE 31
#define XPAR_LCP_AR_MB_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_IP_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_LCP_AR_MB_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_LCP_AR_MB_NUMBER_OF_PC_BRK 1
#define XPAR_LCP_AR_MB_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_LCP_AR_MB_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_LCP_AR_MB_NUM_SYNC_FF_CLK 2
#define XPAR_LCP_AR_MB_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_LCP_AR_MB_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_LCP_AR_MB_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_LCP_AR_MB_NUM_SYNC_FF_DBG_TRACE_CLK 2
#define XPAR_LCP_AR_MB_OPCODE_0X0_ILLEGAL 0
#define XPAR_LCP_AR_MB_OPTIMIZATION 0
#define XPAR_LCP_AR_MB_PC_WIDTH 32
#define XPAR_LCP_AR_MB_PIADDR_SIZE 32
#define XPAR_LCP_AR_MB_PVR 0
#define XPAR_LCP_AR_MB_PVR_USER1 0x00
#define XPAR_LCP_AR_MB_PVR_USER2 0x00000000
#define XPAR_LCP_AR_MB_RESET_MSR 0x00000000
#define XPAR_LCP_AR_MB_RESET_MSR_BIP 0
#define XPAR_LCP_AR_MB_RESET_MSR_DCE 0
#define XPAR_LCP_AR_MB_RESET_MSR_EE 0
#define XPAR_LCP_AR_MB_RESET_MSR_EIP 0
#define XPAR_LCP_AR_MB_RESET_MSR_ICE 0
#define XPAR_LCP_AR_MB_RESET_MSR_IE 0
#define XPAR_LCP_AR_MB_S0_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S0_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S1_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S1_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S2_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S2_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S3_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S3_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S4_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S4_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S5_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S5_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S6_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S6_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S7_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S7_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S8_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S8_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S9_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S9_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S10_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S10_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S11_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S11_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S12_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S12_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S13_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S13_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S14_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S14_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_S15_AXIS_DATA_WIDTH 32
#define XPAR_LCP_AR_MB_S15_AXIS_PROTOCOL GENERIC
#define XPAR_LCP_AR_MB_SCO 0
#define XPAR_LCP_AR_MB_TRACE 0
#define XPAR_LCP_AR_MB_UNALIGNED_EXCEPTIONS 0
#define XPAR_LCP_AR_MB_USE_BARREL 0
#define XPAR_LCP_AR_MB_USE_BRANCH_TARGET_CACHE 0
#define XPAR_LCP_AR_MB_USE_CONFIG_RESET 0
#define XPAR_LCP_AR_MB_USE_DCACHE 0
#define XPAR_LCP_AR_MB_USE_DIV 0
#define XPAR_LCP_AR_MB_USE_EXTENDED_FSL_INSTR 0
#define XPAR_LCP_AR_MB_USE_EXT_BRK 0
#define XPAR_LCP_AR_MB_USE_EXT_NM_BRK 0
#define XPAR_LCP_AR_MB_USE_FPU 0
#define XPAR_LCP_AR_MB_USE_HW_MUL 0
#define XPAR_LCP_AR_MB_USE_ICACHE 0
#define XPAR_LCP_AR_MB_USE_INTERRUPT 1
#define XPAR_LCP_AR_MB_USE_MMU 0
#define XPAR_LCP_AR_MB_USE_MSR_INSTR 0
#define XPAR_LCP_AR_MB_USE_NON_SECURE 0
#define XPAR_LCP_AR_MB_USE_PCMP_INSTR 0
#define XPAR_LCP_AR_MB_USE_REORDER_INSTR 1
#define XPAR_LCP_AR_MB_USE_STACK_PROTECTION 0
#define XPAR_LCP_AR_MB_COMPONENT_NAME system_mb_2
#define XPAR_LCP_AR_MB_EDK_IPTYPE PROCESSOR
#define XPAR_LCP_AR_MB_EDK_SPECIAL microblaze
#define XPAR_LCP_AR_MB_G_TEMPLATE_LIST 0
#define XPAR_LCP_AR_MB_G_USE_EXCEPTIONS 0

/******************************************************************/

#define XPAR_CPU_ID 2
#define XPAR_MICROBLAZE_ID 2
#define XPAR_MICROBLAZE_ADDR_SIZE 32
#define XPAR_MICROBLAZE_ADDR_TAG_BITS 17
#define XPAR_MICROBLAZE_ALLOW_DCACHE_WR 1
#define XPAR_MICROBLAZE_ALLOW_ICACHE_WR 1
#define XPAR_MICROBLAZE_AREA_OPTIMIZED 0
#define XPAR_MICROBLAZE_ASYNC_INTERRUPT 1
#define XPAR_MICROBLAZE_ASYNC_WAKEUP 3
#define XPAR_MICROBLAZE_AVOID_PRIMITIVES 0
#define XPAR_MICROBLAZE_BASE_VECTORS 0x0000000000000000
#define XPAR_MICROBLAZE_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_MICROBLAZE_CACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DADDR_SIZE 32
#define XPAR_MICROBLAZE_DATA_SIZE 32
#define XPAR_MICROBLAZE_DCACHE_ADDR_TAG 17
#define XPAR_MICROBLAZE_DCACHE_ALWAYS_USED 0
#define XPAR_MICROBLAZE_DCACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_DCACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DCACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_DCACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_DCACHE_USE_WRITEBACK 0
#define XPAR_MICROBLAZE_DCACHE_VICTIMS 0
#define XPAR_MICROBLAZE_DC_AXI_MON 0
#define XPAR_MICROBLAZE_DEBUG_COUNTER_WIDTH 32
#define XPAR_MICROBLAZE_DEBUG_ENABLED 1
#define XPAR_MICROBLAZE_DEBUG_EVENT_COUNTERS 5
#define XPAR_MICROBLAZE_DEBUG_EXTERNAL_TRACE 0
#define XPAR_MICROBLAZE_DEBUG_INTERFACE 0
#define XPAR_MICROBLAZE_DEBUG_LATENCY_COUNTERS 1
#define XPAR_MICROBLAZE_DEBUG_PROFILE_SIZE 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_ASYNC_RESET 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_SIZE 8192
#define XPAR_MICROBLAZE_DIV_ZERO_EXCEPTION 0
#define XPAR_MICROBLAZE_DP_AXI_MON 0
#define XPAR_MICROBLAZE_DYNAMIC_BUS_SIZING 0
#define XPAR_MICROBLAZE_D_AXI 1
#define XPAR_MICROBLAZE_D_LMB 1
#define XPAR_MICROBLAZE_D_LMB_MON 0
#define XPAR_MICROBLAZE_ECC_USE_CE_EXCEPTION 0
#define XPAR_MICROBLAZE_EDGE_IS_POSITIVE 1
#define XPAR_MICROBLAZE_ENABLE_DISCRETE_PORTS 0
#define XPAR_MICROBLAZE_ENDIANNESS 1
#define XPAR_MICROBLAZE_FAULT_TOLERANT 0
#define XPAR_MICROBLAZE_FPU_EXCEPTION 0
#define XPAR_MICROBLAZE_FREQ 100000000
#define XPAR_MICROBLAZE_FSL_EXCEPTION 0
#define XPAR_MICROBLAZE_FSL_LINKS 0
#define XPAR_MICROBLAZE_IADDR_SIZE 32
#define XPAR_MICROBLAZE_ICACHE_ALWAYS_USED 0
#define XPAR_MICROBLAZE_ICACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_ICACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_ICACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_ICACHE_STREAMS 0
#define XPAR_MICROBLAZE_ICACHE_VICTIMS 0
#define XPAR_MICROBLAZE_IC_AXI_MON 0
#define XPAR_MICROBLAZE_ILL_OPCODE_EXCEPTION 0
#define XPAR_MICROBLAZE_IMPRECISE_EXCEPTIONS 0
#define XPAR_MICROBLAZE_INSTR_SIZE 32
#define XPAR_MICROBLAZE_INTERCONNECT 2
#define XPAR_MICROBLAZE_INTERRUPT_IS_EDGE 0
#define XPAR_MICROBLAZE_INTERRUPT_MON 0
#define XPAR_MICROBLAZE_IP_AXI_MON 0
#define XPAR_MICROBLAZE_I_AXI 0
#define XPAR_MICROBLAZE_I_LMB 1
#define XPAR_MICROBLAZE_I_LMB_MON 0
#define XPAR_MICROBLAZE_LOCKSTEP_MASTER 0
#define XPAR_MICROBLAZE_LOCKSTEP_SELECT 0
#define XPAR_MICROBLAZE_LOCKSTEP_SLAVE 0
#define XPAR_MICROBLAZE_M0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_MMU_DTLB_SIZE 4
#define XPAR_MICROBLAZE_MMU_ITLB_SIZE 2
#define XPAR_MICROBLAZE_MMU_PRIVILEGED_INSTR 0
#define XPAR_MICROBLAZE_MMU_TLB_ACCESS 3
#define XPAR_MICROBLAZE_MMU_ZONES 16
#define XPAR_MICROBLAZE_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_DC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_IC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_NUMBER_OF_PC_BRK 1
#define XPAR_MICROBLAZE_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_TRACE_CLK 2
#define XPAR_MICROBLAZE_OPCODE_0X0_ILLEGAL 0
#define XPAR_MICROBLAZE_OPTIMIZATION 0
#define XPAR_MICROBLAZE_PC_WIDTH 32
#define XPAR_MICROBLAZE_PIADDR_SIZE 32
#define XPAR_MICROBLAZE_PVR 0
#define XPAR_MICROBLAZE_PVR_USER1 0x00
#define XPAR_MICROBLAZE_PVR_USER2 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR_BIP 0
#define XPAR_MICROBLAZE_RESET_MSR_DCE 0
#define XPAR_MICROBLAZE_RESET_MSR_EE 0
#define XPAR_MICROBLAZE_RESET_MSR_EIP 0
#define XPAR_MICROBLAZE_RESET_MSR_ICE 0
#define XPAR_MICROBLAZE_RESET_MSR_IE 0
#define XPAR_MICROBLAZE_S0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_SCO 0
#define XPAR_MICROBLAZE_TRACE 0
#define XPAR_MICROBLAZE_UNALIGNED_EXCEPTIONS 0
#define XPAR_MICROBLAZE_USE_BARREL 0
#define XPAR_MICROBLAZE_USE_BRANCH_TARGET_CACHE 0
#define XPAR_MICROBLAZE_USE_CONFIG_RESET 0
#define XPAR_MICROBLAZE_USE_DCACHE 0
#define XPAR_MICROBLAZE_USE_DIV 0
#define XPAR_MICROBLAZE_USE_EXTENDED_FSL_INSTR 0
#define XPAR_MICROBLAZE_USE_EXT_BRK 0
#define XPAR_MICROBLAZE_USE_EXT_NM_BRK 0
#define XPAR_MICROBLAZE_USE_FPU 0
#define XPAR_MICROBLAZE_USE_HW_MUL 0
#define XPAR_MICROBLAZE_USE_ICACHE 0
#define XPAR_MICROBLAZE_USE_INTERRUPT 1
#define XPAR_MICROBLAZE_USE_MMU 0
#define XPAR_MICROBLAZE_USE_MSR_INSTR 0
#define XPAR_MICROBLAZE_USE_NON_SECURE 0
#define XPAR_MICROBLAZE_USE_PCMP_INSTR 0
#define XPAR_MICROBLAZE_USE_REORDER_INSTR 1
#define XPAR_MICROBLAZE_USE_STACK_PROTECTION 0
#define XPAR_MICROBLAZE_COMPONENT_NAME system_mb_2
#define XPAR_MICROBLAZE_EDK_IPTYPE PROCESSOR
#define XPAR_MICROBLAZE_EDK_SPECIAL microblaze
#define XPAR_MICROBLAZE_G_TEMPLATE_LIST 0
#define XPAR_MICROBLAZE_G_USE_EXCEPTIONS 0

/******************************************************************/

#define STDIN_BASEADDRESS 0x00000000
#define STDOUT_BASEADDRESS 0x00000000

/******************************************************************/

/* Definitions for driver AXICDMA */
#define XPAR_XAXICDMA_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_AXI_CDMA_0 */
#define XPAR_LCP_AR_AXI_CDMA_0_DEVICE_ID 0
#define XPAR_LCP_AR_AXI_CDMA_0_BASEADDR 0x44A10000
#define XPAR_LCP_AR_AXI_CDMA_0_HIGHADDR 0x44A1FFFF
#define XPAR_LCP_AR_AXI_CDMA_0_INCLUDE_DRE 0
#define XPAR_LCP_AR_AXI_CDMA_0_USE_DATAMOVER_LITE 0
#define XPAR_LCP_AR_AXI_CDMA_0_M_AXI_DATA_WIDTH 64
#define XPAR_LCP_AR_AXI_CDMA_0_INCLUDE_SG 0
#define XPAR_LCP_AR_AXI_CDMA_0_M_AXI_MAX_BURST_LEN 8
#define XPAR_LCP_AR_AXI_CDMA_0_ADDR_WIDTH 32


/******************************************************************/

/* Canonical definitions for peripheral LCP_AR_AXI_CDMA_0 */
#define XPAR_AXICDMA_0_DEVICE_ID XPAR_LCP_AR_AXI_CDMA_0_DEVICE_ID
#define XPAR_AXICDMA_0_BASEADDR 0x44A10000
#define XPAR_AXICDMA_0_HIGHADDR 0x44A1FFFF
#define XPAR_AXICDMA_0_INCLUDE_DRE 0
#define XPAR_AXICDMA_0_USE_DATAMOVER_LITE 0
#define XPAR_AXICDMA_0_M_AXI_DATA_WIDTH 64
#define XPAR_AXICDMA_0_INCLUDE_SG 0
#define XPAR_AXICDMA_0_M_AXI_MAX_BURST_LEN 8
#define XPAR_AXICDMA_0_ADDR_WIDTH 32


/******************************************************************/

/* Definitions for driver AXIDMA */
#define XPAR_XAXIDMA_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_TRACE_ANALYZER_AXI_DMA_0 */
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_DEVICE_ID 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_BASEADDR 0x41E00000
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_HIGHADDR 0x41E0FFFF
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_SG_INCLUDE_STSCNTRL_STRM 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_INCLUDE_MM2S_DRE 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_INCLUDE_S2MM_DRE 1
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_INCLUDE_MM2S 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_INCLUDE_S2MM 1
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_M_AXI_MM2S_DATA_WIDTH 32
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_M_AXI_S2MM_DATA_WIDTH 64
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_INCLUDE_SG 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_ENABLE_MULTI_CHANNEL 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_NUM_MM2S_CHANNELS 1
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_NUM_S2MM_CHANNELS 1
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_MM2S_BURST_SIZE 16
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_S2MM_BURST_SIZE 64
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_MICRO_DMA 0
#define XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_ADDR_WIDTH 32


/******************************************************************/

/* Canonical definitions for peripheral LCP_AR_TRACE_ANALYZER_AXI_DMA_0 */
#define XPAR_AXIDMA_0_DEVICE_ID XPAR_LCP_AR_TRACE_ANALYZER_AXI_DMA_0_DEVICE_ID
#define XPAR_AXIDMA_0_BASEADDR 0x41E00000
#define XPAR_AXIDMA_0_SG_INCLUDE_STSCNTRL_STRM 0
#define XPAR_AXIDMA_0_INCLUDE_MM2S 0
#define XPAR_AXIDMA_0_INCLUDE_MM2S_DRE 0
#define XPAR_AXIDMA_0_M_AXI_MM2S_DATA_WIDTH 32
#define XPAR_AXIDMA_0_INCLUDE_S2MM 1
#define XPAR_AXIDMA_0_INCLUDE_S2MM_DRE 1
#define XPAR_AXIDMA_0_M_AXI_S2MM_DATA_WIDTH 64
#define XPAR_AXIDMA_0_INCLUDE_SG 0
#define XPAR_AXIDMA_0_ENABLE_MULTI_CHANNEL 0
#define XPAR_AXIDMA_0_NUM_MM2S_CHANNELS 1
#define XPAR_AXIDMA_0_NUM_S2MM_CHANNELS 1
#define XPAR_AXIDMA_0_MM2S_BURST_SIZE 16
#define XPAR_AXIDMA_0_S2MM_BURST_SIZE 64
#define XPAR_AXIDMA_0_MICRO_DMA 0
#define XPAR_AXIDMA_0_c_addr_width 32


/******************************************************************/

/* Definitions for driver BOOLEAN_GENERATOR */
#define XPAR_BOOLEAN_GENERATOR_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_BOOLEAN_GENERATOR_BOOLEAN_GENERATOR */
#define XPAR_LCP_AR_BOOLEAN_GENERATOR_BOOLEAN_GENERATOR_DEVICE_ID 0
#define XPAR_LCP_AR_BOOLEAN_GENERATOR_BOOLEAN_GENERATOR_S_AXI_BASEADDR 0x44A00000
#define XPAR_LCP_AR_BOOLEAN_GENERATOR_BOOLEAN_GENERATOR_S_AXI_HIGHADDR 0x44A0FFFF


/******************************************************************/

/* Definitions for driver FSM_IO_SWITCH */
#define XPAR_FSM_IO_SWITCH_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_FSM_GENERATOR_FSM_IO_SWITCH */
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_IO_SWITCH_DEVICE_ID 0
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_IO_SWITCH_S_AXI_BASEADDR 0x44A30000
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_IO_SWITCH_S_AXI_HIGHADDR 0x44A3FFFF


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 4

/* Definitions for peripheral LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR */
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR_BASEADDR 0x40030000
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR_HIGHADDR 0x4003FFFF
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR_DEVICE_ID 0
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR_INTERRUPT_PRESENT 0
#define XPAR_LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR_IS_DUAL 0


/* Definitions for peripheral LCP_AR_CONTROLLERS_REG */
#define XPAR_LCP_AR_CONTROLLERS_REG_BASEADDR 0x40050000
#define XPAR_LCP_AR_CONTROLLERS_REG_HIGHADDR 0x4005FFFF
#define XPAR_LCP_AR_CONTROLLERS_REG_DEVICE_ID 1
#define XPAR_LCP_AR_CONTROLLERS_REG_INTERRUPT_PRESENT 0
#define XPAR_LCP_AR_CONTROLLERS_REG_IS_DUAL 0


/* Definitions for peripheral LCP_AR_GENERATOR_SELECT_FUNCTION_SEL */
#define XPAR_LCP_AR_GENERATOR_SELECT_FUNCTION_SEL_BASEADDR 0x40020000
#define XPAR_LCP_AR_GENERATOR_SELECT_FUNCTION_SEL_HIGHADDR 0x4002FFFF
#define XPAR_LCP_AR_GENERATOR_SELECT_FUNCTION_SEL_DEVICE_ID 2
#define XPAR_LCP_AR_GENERATOR_SELECT_FUNCTION_SEL_INTERRUPT_PRESENT 0
#define XPAR_LCP_AR_GENERATOR_SELECT_FUNCTION_SEL_IS_DUAL 1


/* Definitions for peripheral LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE */
#define XPAR_LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE_BASEADDR 0x40010000
#define XPAR_LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE_HIGHADDR 0x4001FFFF
#define XPAR_LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE_DEVICE_ID 3
#define XPAR_LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE_INTERRUPT_PRESENT 0
#define XPAR_LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE_IS_DUAL 1


/******************************************************************/

/* Canonical definitions for peripheral LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR */
#define XPAR_GPIO_0_BASEADDR 0x40030000
#define XPAR_GPIO_0_HIGHADDR 0x4003FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_LCP_AR_FSM_GENERATOR_FSM_BRAM_RST_ADDR_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_GPIO_0_IS_DUAL 0

/* Canonical definitions for peripheral LCP_AR_CONTROLLERS_REG */
#define XPAR_GPIO_1_BASEADDR 0x40050000
#define XPAR_GPIO_1_HIGHADDR 0x4005FFFF
#define XPAR_GPIO_1_DEVICE_ID XPAR_LCP_AR_CONTROLLERS_REG_DEVICE_ID
#define XPAR_GPIO_1_INTERRUPT_PRESENT 0
#define XPAR_GPIO_1_IS_DUAL 0

/* Canonical definitions for peripheral LCP_AR_GENERATOR_SELECT_FUNCTION_SEL */
#define XPAR_GPIO_2_BASEADDR 0x40020000
#define XPAR_GPIO_2_HIGHADDR 0x4002FFFF
#define XPAR_GPIO_2_DEVICE_ID XPAR_LCP_AR_GENERATOR_SELECT_FUNCTION_SEL_DEVICE_ID
#define XPAR_GPIO_2_INTERRUPT_PRESENT 0
#define XPAR_GPIO_2_IS_DUAL 1

/* Canonical definitions for peripheral LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE */
#define XPAR_GPIO_3_BASEADDR 0x40010000
#define XPAR_GPIO_3_HIGHADDR 0x4001FFFF
#define XPAR_GPIO_3_DEVICE_ID XPAR_LCP_AR_PATTERN_GENERATOR_PATTERN_GENERATOR_NSAMPLES_AND_SINGLE_DEVICE_ID
#define XPAR_GPIO_3_INTERRUPT_PRESENT 0
#define XPAR_GPIO_3_IS_DUAL 1


/******************************************************************/

#define XPAR_INTC_MAX_NUM_INTR_INPUTS 1
#define XPAR_XINTC_HAS_IPR 1
#define XPAR_XINTC_HAS_SIE 1
#define XPAR_XINTC_HAS_CIE 1
#define XPAR_XINTC_HAS_IVR 1
/* Definitions for driver INTC */
#define XPAR_XINTC_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_INTC */
#define XPAR_LCP_AR_INTC_DEVICE_ID 0
#define XPAR_LCP_AR_INTC_BASEADDR 0x41200000
#define XPAR_LCP_AR_INTC_HIGHADDR 0x4120FFFF
#define XPAR_LCP_AR_INTC_KIND_OF_INTR 0xFFFFFFFE
#define XPAR_LCP_AR_INTC_HAS_FAST 0
#define XPAR_LCP_AR_INTC_IVAR_RESET_VALUE 0x00000010
#define XPAR_LCP_AR_INTC_NUM_INTR_INPUTS 1


/******************************************************************/

#define XPAR_INTC_SINGLE_BASEADDR 0x41200000
#define XPAR_INTC_SINGLE_HIGHADDR 0x4120FFFF
#define XPAR_INTC_SINGLE_DEVICE_ID XPAR_LCP_AR_INTC_DEVICE_ID
#define XPAR_LCP_AR_INTC_TYPE 0U
#define XPAR_LCP_AR_AXI_CDMA_0_CDMA_INTROUT_MASK 0X000001U
#define XPAR_LCP_AR_INTC_LCP_AR_AXI_CDMA_0_CDMA_INTROUT_INTR 0U

/******************************************************************/

/* Canonical definitions for peripheral LCP_AR_INTC */
#define XPAR_INTC_0_DEVICE_ID XPAR_LCP_AR_INTC_DEVICE_ID
#define XPAR_INTC_0_BASEADDR 0x41200000U
#define XPAR_INTC_0_HIGHADDR 0x4120FFFFU
#define XPAR_INTC_0_KIND_OF_INTR 0xFFFFFFFEU
#define XPAR_INTC_0_HAS_FAST 0U
#define XPAR_INTC_0_IVAR_RESET_VALUE 0x00000010U
#define XPAR_INTC_0_NUM_INTR_INPUTS 1U
#define XPAR_INTC_0_INTC_TYPE 0U

#define XPAR_INTC_0_AXICDMA_0_VEC_ID XPAR_LCP_AR_INTC_LCP_AR_AXI_CDMA_0_CDMA_INTROUT_INTR

/******************************************************************/

/* Definitions for driver INTRGPIO */
#define XPAR_INTRGPIO_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_INTR */
#define XPAR_LCP_AR_INTR_BASEADDR 0x40040000
#define XPAR_LCP_AR_INTR_HIGHADDR 0x4004FFFF
#define XPAR_LCP_AR_INTR_DEVICE_ID 0
#define XPAR_LCP_AR_INTR_INTERRUPT_PRESENT 0
#define XPAR_LCP_AR_INTR_IS_DUAL 0


/******************************************************************/

/* Definitions for driver TRACE_CNTRL_64 */
#define XPAR_XTRACE_CNTRL_64_NUM_INSTANCES 1

/* Definitions for peripheral LCP_AR_TRACE_ANALYZER_TRACE_CNTRL_64_0 */
#define XPAR_LCP_AR_TRACE_ANALYZER_TRACE_CNTRL_64_0_DEVICE_ID 0
#define XPAR_LCP_AR_TRACE_ANALYZER_TRACE_CNTRL_64_0_S_AXI_TRACE_CNTRL_BASEADDR 0x44A20000
#define XPAR_LCP_AR_TRACE_ANALYZER_TRACE_CNTRL_64_0_S_AXI_TRACE_CNTRL_HIGHADDR 0x44A2FFFF


/******************************************************************/

/* Canonical definitions for peripheral LCP_AR_TRACE_ANALYZER_TRACE_CNTRL_64_0 */
#define XPAR_XTRACE_CNTRL_64_0_DEVICE_ID XPAR_LCP_AR_TRACE_ANALYZER_TRACE_CNTRL_64_0_DEVICE_ID
#define XPAR_XTRACE_CNTRL_64_0_S_AXI_TRACE_CNTRL_BASEADDR 0x44A20000
#define XPAR_XTRACE_CNTRL_64_0_S_AXI_TRACE_CNTRL_HIGHADDR 0x44A2FFFF


/******************************************************************/

#endif  /* end of protection macro */
