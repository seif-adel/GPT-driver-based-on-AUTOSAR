/******************************************************************************
 *
 * Module: EcuM
 *
 * File Name:  EcuM_Cbk.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - EcuM Driver
 *
 * Author: seif adel
 ******************************************************************************/

#ifndef ECUM_Cbk_H
#define ECUM_Cbk_H

/* Id for the company in the AUTOSAR
 * for example Sayed Badr's ID = 1000 :) */
#define DET_VENDOR_ID                 (1000U)

/* EcuM Module Id */
#define EcuM_MODULE_ID                 (10U)

/* EcuM Instance Id */
#define EcuM_INSTANCE_ID               (0U)

/*
 * EcuM Software Module Version 1.0.0
 */
#define EcuM_SW_MAJOR_VERSION          (1U)
#define EcuM_SW_MINOR_VERSION          (0U)
#define EcuM_SW_PATCH_VERSION          (0U)

/*
 * EcuM AUTOSAR Version 4.0.3
 */
#define EcuM_AR_MAJOR_VERSION          (4U)
#define EcuM_AR_MINOR_VERSION          (0U)
#define EcuM_AR_PATCH_VERSION          (3U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Det Modules */
#if ((EcuM_AR_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
 || (EcuM_AR_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
 || (EcuM_AR_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif


/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
/* Type definition for EcuM_WakeupSourceType. */
typedef uint32 EcuM_WakeupSourceType;



#endif /* ECUM_CbkH */