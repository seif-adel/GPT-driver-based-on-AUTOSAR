 /******************************************************************************
 *
 * Module: GPT
 *
 * File Name: GPT_Regs.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - GPT Driver Registers
 *
 * Author: seif adel
 ******************************************************************************/

#ifndef GPT_REGS_H
#define GPT_REGS_H

#include "Std_Types.h"


/******************************************************************************/
/* GPT Registers base addresses */
#define GPT_TIMER0_BASE_ADDRESS           0x40030000
#define GPT_TIMER1_BASE_ADDRESS           0x40031000
#define GPT_TIMER2_BASE_ADDRESS           0x40032000
#define GPT_TIMER3_BASE_ADDRESS           0x40033000
#define GPT_TIMER4_BASE_ADDRESS           0x40034000
#define GPT_TIMER5_BASE_ADDRESS           0x40035000
#define GPT_WIDE_TIMER0_BASE_ADDRESS      0x40036000
#define GPT_WIDE_TIMER1_BASE_ADDRESS      0x40037000
#define GPT_WIDE_TIMER2_BASE_ADDRESS      0x4004C000
#define GPT_WIDE_TIMER3_BASE_ADDRESS      0x4004D000
#define GPT_WIDE_TIMER4_BASE_ADDRESS      0x4004E000
#define GPT_WIDE_TIMER5_BASE_ADDRESS      0x4004F000
/******************************************************************************/


/******************************************************************************/
/* GPIO Registers offset addresses */
#define GPT_GPTMCFG_REG_OFFSET            0x000
#define GPT_GPTMTAMR_REG_OFFSET           0x004
#define GPT_GPTMTBMR_REG_OFFSET           0x008

/******************************************************************************/

/******************************************************************************/
/* Timers Registers offset addresses */
#define GPT_GPTMCFG_REG_OFFSET              0x000
#define GPT_GPTMTAMR_REG_OFFSET             0x004
#define GPT_GPTMTBMR_REG_OFFSET             0x008
#define GPT_GPTMCTL_REG_OFFSET              0x00C
#define GPT_GPTMSYNC_REG_OFFSET             0x010
#define GPT_GPTMIMR_REG_OFFSET              0x018
#define GPT_GPTMRIS_REG_OFFSET              0x01C
#define GPT_GPTMMIS_REG_OFFSET              0x020
#define GPT_GPTMICR_REG_OFFSET              0x024
#define GPT_GPTMTAILR_REG_OFFSET            0x028
#define GPT_GPTMTBILR_REG_OFFSET            0x02C
#define GPT_GPTMTAMATCHR_REG_OFFSET         0x030
#define GPT_GPTMTBMATCHR_REG_OFFSET         0x034
#define GPT_GPTMTAPR_REG_OFFSET             0x038
#define GPT_GPTMTBPR_REG_OFFSET             0x03C
#define GPT_GPTMTAPMR_REG_OFFSET            0x040
#define GPT_GPTMTBPMR_REG_OFFSET            0x044
#define GPT_GPTMTAR_REG_OFFSET              0x048
#define GPT_GPTMTBR_REG_OFFSET              0x04C
#define GPT_GPTMTAV_REG_OFFSET              0x050
#define GPT_GPTMTBV_REG_OFFSET              0x054
#define GPT_GPTMRTCPD_REG_OFFSET            0x058
#define GPT_GPTMTAPS_REG_OFFSET             0x05C
#define GPT_GPTMTBPS_REG_OFFSET             0x060
#define GPT_GPTMTAPV_REG_OFFSET             0x064
#define GPT_GPTMTBPV_REG_OFFSET             0x068

/******************************************************************************/

/*****************************************************************************
Systick Timer Registers
*****************************************************************************/
#define SYSTICK_CTRL_REG          (*((volatile uint32 *)0xE000E010))
#define SYSTICK_RELOAD_REG        (*((volatile uint32 *)0xE000E014))
#define SYSTICK_CURRENT_REG       (*((volatile uint32 *)0xE000E018))

/*****************************************************************************
PLL Registers
*****************************************************************************/
#define SYSCTL_RIS_REG            (*((volatile uint32 *)0x400FE050))
#define SYSCTL_RCC_REG            (*((volatile uint32 *)0x400FE060))
#define SYSCTL_RCC2_REG           (*((volatile uint32 *)0x400FE070))
/******************************************************************************/

/* Port Clock register */
#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))

#endif /* PORT_REGS_H */