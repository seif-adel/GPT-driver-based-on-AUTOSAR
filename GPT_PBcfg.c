 /******************************************************************************
 *
 * Module: GPT
 *
 * File Name: GPT_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - GPT Driver
 *
 * Author: seif adel
 ******************************************************************************/

#include "GPT.h"

/*
 * Module Version 1.0.0
 */
#define GPT_PBCFG_SW_MAJOR_VERSION              (1U)
#define GPT_PBCFG_SW_MINOR_VERSION              (0U)
#define GPT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define GPT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define GPT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define GPT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((GPT_PBCFG_AR_RELEASE_MAJOR_VERSION != GPT_AR_RELEASE_MAJOR_VERSION)\
 ||  (GPT_PBCFG_AR_RELEASE_MINOR_VERSION != GPT_AR_RELEASE_MINOR_VERSION)\
 ||  (GPT_PBCFG_AR_RELEASE_PATCH_VERSION != GPT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((GPT_PBCFG_SW_MAJOR_VERSION != GPT_SW_MAJOR_VERSION)\
 ||  (GPT_PBCFG_SW_MINOR_VERSION != GPT_SW_MINOR_VERSION)\
 ||  (GPT_PBCFG_SW_PATCH_VERSION != GPT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with GPT_Init API */
const Gpt_ConfigType Gpt_Configuration = {
  
};