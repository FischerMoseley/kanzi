/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* HA1 */
#define HA1__0__INTTYPE CYREG_PICU0_INTTYPE1
#define HA1__0__MASK 0x02u
#define HA1__0__PC CYREG_PRT0_PC1
#define HA1__0__PORT 0u
#define HA1__0__SHIFT 1u
#define HA1__AG CYREG_PRT0_AG
#define HA1__AMUX CYREG_PRT0_AMUX
#define HA1__BIE CYREG_PRT0_BIE
#define HA1__BIT_MASK CYREG_PRT0_BIT_MASK
#define HA1__BYP CYREG_PRT0_BYP
#define HA1__CTL CYREG_PRT0_CTL
#define HA1__DM0 CYREG_PRT0_DM0
#define HA1__DM1 CYREG_PRT0_DM1
#define HA1__DM2 CYREG_PRT0_DM2
#define HA1__DR CYREG_PRT0_DR
#define HA1__INP_DIS CYREG_PRT0_INP_DIS
#define HA1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define HA1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define HA1__LCD_EN CYREG_PRT0_LCD_EN
#define HA1__MASK 0x02u
#define HA1__PORT 0u
#define HA1__PRT CYREG_PRT0_PRT
#define HA1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define HA1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define HA1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define HA1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define HA1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define HA1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define HA1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define HA1__PS CYREG_PRT0_PS
#define HA1__SHIFT 1u
#define HA1__SLW CYREG_PRT0_SLW

/* HA2 */
#define HA2__0__INTTYPE CYREG_PICU3_INTTYPE0
#define HA2__0__MASK 0x01u
#define HA2__0__PC CYREG_PRT3_PC0
#define HA2__0__PORT 3u
#define HA2__0__SHIFT 0u
#define HA2__AG CYREG_PRT3_AG
#define HA2__AMUX CYREG_PRT3_AMUX
#define HA2__BIE CYREG_PRT3_BIE
#define HA2__BIT_MASK CYREG_PRT3_BIT_MASK
#define HA2__BYP CYREG_PRT3_BYP
#define HA2__CTL CYREG_PRT3_CTL
#define HA2__DM0 CYREG_PRT3_DM0
#define HA2__DM1 CYREG_PRT3_DM1
#define HA2__DM2 CYREG_PRT3_DM2
#define HA2__DR CYREG_PRT3_DR
#define HA2__INP_DIS CYREG_PRT3_INP_DIS
#define HA2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define HA2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define HA2__LCD_EN CYREG_PRT3_LCD_EN
#define HA2__MASK 0x01u
#define HA2__PORT 3u
#define HA2__PRT CYREG_PRT3_PRT
#define HA2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define HA2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define HA2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define HA2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define HA2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define HA2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define HA2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define HA2__PS CYREG_PRT3_PS
#define HA2__SHIFT 0u
#define HA2__SLW CYREG_PRT3_SLW

/* HB1 */
#define HB1__0__INTTYPE CYREG_PICU0_INTTYPE3
#define HB1__0__MASK 0x08u
#define HB1__0__PC CYREG_PRT0_PC3
#define HB1__0__PORT 0u
#define HB1__0__SHIFT 3u
#define HB1__AG CYREG_PRT0_AG
#define HB1__AMUX CYREG_PRT0_AMUX
#define HB1__BIE CYREG_PRT0_BIE
#define HB1__BIT_MASK CYREG_PRT0_BIT_MASK
#define HB1__BYP CYREG_PRT0_BYP
#define HB1__CTL CYREG_PRT0_CTL
#define HB1__DM0 CYREG_PRT0_DM0
#define HB1__DM1 CYREG_PRT0_DM1
#define HB1__DM2 CYREG_PRT0_DM2
#define HB1__DR CYREG_PRT0_DR
#define HB1__INP_DIS CYREG_PRT0_INP_DIS
#define HB1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define HB1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define HB1__LCD_EN CYREG_PRT0_LCD_EN
#define HB1__MASK 0x08u
#define HB1__PORT 0u
#define HB1__PRT CYREG_PRT0_PRT
#define HB1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define HB1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define HB1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define HB1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define HB1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define HB1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define HB1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define HB1__PS CYREG_PRT0_PS
#define HB1__SHIFT 3u
#define HB1__SLW CYREG_PRT0_SLW

/* HB2 */
#define HB2__0__INTTYPE CYREG_PICU3_INTTYPE2
#define HB2__0__MASK 0x04u
#define HB2__0__PC CYREG_PRT3_PC2
#define HB2__0__PORT 3u
#define HB2__0__SHIFT 2u
#define HB2__AG CYREG_PRT3_AG
#define HB2__AMUX CYREG_PRT3_AMUX
#define HB2__BIE CYREG_PRT3_BIE
#define HB2__BIT_MASK CYREG_PRT3_BIT_MASK
#define HB2__BYP CYREG_PRT3_BYP
#define HB2__CTL CYREG_PRT3_CTL
#define HB2__DM0 CYREG_PRT3_DM0
#define HB2__DM1 CYREG_PRT3_DM1
#define HB2__DM2 CYREG_PRT3_DM2
#define HB2__DR CYREG_PRT3_DR
#define HB2__INP_DIS CYREG_PRT3_INP_DIS
#define HB2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define HB2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define HB2__LCD_EN CYREG_PRT3_LCD_EN
#define HB2__MASK 0x04u
#define HB2__PORT 3u
#define HB2__PRT CYREG_PRT3_PRT
#define HB2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define HB2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define HB2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define HB2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define HB2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define HB2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define HB2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define HB2__PS CYREG_PRT3_PS
#define HB2__SHIFT 2u
#define HB2__SLW CYREG_PRT3_SLW

/* HC1 */
#define HC1__0__INTTYPE CYREG_PICU0_INTTYPE5
#define HC1__0__MASK 0x20u
#define HC1__0__PC CYREG_PRT0_PC5
#define HC1__0__PORT 0u
#define HC1__0__SHIFT 5u
#define HC1__AG CYREG_PRT0_AG
#define HC1__AMUX CYREG_PRT0_AMUX
#define HC1__BIE CYREG_PRT0_BIE
#define HC1__BIT_MASK CYREG_PRT0_BIT_MASK
#define HC1__BYP CYREG_PRT0_BYP
#define HC1__CTL CYREG_PRT0_CTL
#define HC1__DM0 CYREG_PRT0_DM0
#define HC1__DM1 CYREG_PRT0_DM1
#define HC1__DM2 CYREG_PRT0_DM2
#define HC1__DR CYREG_PRT0_DR
#define HC1__INP_DIS CYREG_PRT0_INP_DIS
#define HC1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define HC1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define HC1__LCD_EN CYREG_PRT0_LCD_EN
#define HC1__MASK 0x20u
#define HC1__PORT 0u
#define HC1__PRT CYREG_PRT0_PRT
#define HC1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define HC1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define HC1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define HC1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define HC1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define HC1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define HC1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define HC1__PS CYREG_PRT0_PS
#define HC1__SHIFT 5u
#define HC1__SLW CYREG_PRT0_SLW

/* HC2 */
#define HC2__0__INTTYPE CYREG_PICU3_INTTYPE4
#define HC2__0__MASK 0x10u
#define HC2__0__PC CYREG_PRT3_PC4
#define HC2__0__PORT 3u
#define HC2__0__SHIFT 4u
#define HC2__AG CYREG_PRT3_AG
#define HC2__AMUX CYREG_PRT3_AMUX
#define HC2__BIE CYREG_PRT3_BIE
#define HC2__BIT_MASK CYREG_PRT3_BIT_MASK
#define HC2__BYP CYREG_PRT3_BYP
#define HC2__CTL CYREG_PRT3_CTL
#define HC2__DM0 CYREG_PRT3_DM0
#define HC2__DM1 CYREG_PRT3_DM1
#define HC2__DM2 CYREG_PRT3_DM2
#define HC2__DR CYREG_PRT3_DR
#define HC2__INP_DIS CYREG_PRT3_INP_DIS
#define HC2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define HC2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define HC2__LCD_EN CYREG_PRT3_LCD_EN
#define HC2__MASK 0x10u
#define HC2__PORT 3u
#define HC2__PRT CYREG_PRT3_PRT
#define HC2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define HC2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define HC2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define HC2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define HC2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define HC2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define HC2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define HC2__PS CYREG_PRT3_PS
#define HC2__SHIFT 4u
#define HC2__SLW CYREG_PRT3_SLW

/* LA1 */
#define LA1__0__INTTYPE CYREG_PICU0_INTTYPE2
#define LA1__0__MASK 0x04u
#define LA1__0__PC CYREG_PRT0_PC2
#define LA1__0__PORT 0u
#define LA1__0__SHIFT 2u
#define LA1__AG CYREG_PRT0_AG
#define LA1__AMUX CYREG_PRT0_AMUX
#define LA1__BIE CYREG_PRT0_BIE
#define LA1__BIT_MASK CYREG_PRT0_BIT_MASK
#define LA1__BYP CYREG_PRT0_BYP
#define LA1__CTL CYREG_PRT0_CTL
#define LA1__DM0 CYREG_PRT0_DM0
#define LA1__DM1 CYREG_PRT0_DM1
#define LA1__DM2 CYREG_PRT0_DM2
#define LA1__DR CYREG_PRT0_DR
#define LA1__INP_DIS CYREG_PRT0_INP_DIS
#define LA1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define LA1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define LA1__LCD_EN CYREG_PRT0_LCD_EN
#define LA1__MASK 0x04u
#define LA1__PORT 0u
#define LA1__PRT CYREG_PRT0_PRT
#define LA1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define LA1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define LA1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define LA1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define LA1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define LA1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define LA1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define LA1__PS CYREG_PRT0_PS
#define LA1__SHIFT 2u
#define LA1__SLW CYREG_PRT0_SLW

/* LA2 */
#define LA2__0__INTTYPE CYREG_PICU3_INTTYPE1
#define LA2__0__MASK 0x02u
#define LA2__0__PC CYREG_PRT3_PC1
#define LA2__0__PORT 3u
#define LA2__0__SHIFT 1u
#define LA2__AG CYREG_PRT3_AG
#define LA2__AMUX CYREG_PRT3_AMUX
#define LA2__BIE CYREG_PRT3_BIE
#define LA2__BIT_MASK CYREG_PRT3_BIT_MASK
#define LA2__BYP CYREG_PRT3_BYP
#define LA2__CTL CYREG_PRT3_CTL
#define LA2__DM0 CYREG_PRT3_DM0
#define LA2__DM1 CYREG_PRT3_DM1
#define LA2__DM2 CYREG_PRT3_DM2
#define LA2__DR CYREG_PRT3_DR
#define LA2__INP_DIS CYREG_PRT3_INP_DIS
#define LA2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LA2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LA2__LCD_EN CYREG_PRT3_LCD_EN
#define LA2__MASK 0x02u
#define LA2__PORT 3u
#define LA2__PRT CYREG_PRT3_PRT
#define LA2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LA2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LA2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LA2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LA2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LA2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LA2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LA2__PS CYREG_PRT3_PS
#define LA2__SHIFT 1u
#define LA2__SLW CYREG_PRT3_SLW

/* LB1 */
#define LB1__0__INTTYPE CYREG_PICU0_INTTYPE4
#define LB1__0__MASK 0x10u
#define LB1__0__PC CYREG_PRT0_PC4
#define LB1__0__PORT 0u
#define LB1__0__SHIFT 4u
#define LB1__AG CYREG_PRT0_AG
#define LB1__AMUX CYREG_PRT0_AMUX
#define LB1__BIE CYREG_PRT0_BIE
#define LB1__BIT_MASK CYREG_PRT0_BIT_MASK
#define LB1__BYP CYREG_PRT0_BYP
#define LB1__CTL CYREG_PRT0_CTL
#define LB1__DM0 CYREG_PRT0_DM0
#define LB1__DM1 CYREG_PRT0_DM1
#define LB1__DM2 CYREG_PRT0_DM2
#define LB1__DR CYREG_PRT0_DR
#define LB1__INP_DIS CYREG_PRT0_INP_DIS
#define LB1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define LB1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define LB1__LCD_EN CYREG_PRT0_LCD_EN
#define LB1__MASK 0x10u
#define LB1__PORT 0u
#define LB1__PRT CYREG_PRT0_PRT
#define LB1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define LB1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define LB1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define LB1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define LB1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define LB1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define LB1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define LB1__PS CYREG_PRT0_PS
#define LB1__SHIFT 4u
#define LB1__SLW CYREG_PRT0_SLW

/* LB2 */
#define LB2__0__INTTYPE CYREG_PICU3_INTTYPE3
#define LB2__0__MASK 0x08u
#define LB2__0__PC CYREG_PRT3_PC3
#define LB2__0__PORT 3u
#define LB2__0__SHIFT 3u
#define LB2__AG CYREG_PRT3_AG
#define LB2__AMUX CYREG_PRT3_AMUX
#define LB2__BIE CYREG_PRT3_BIE
#define LB2__BIT_MASK CYREG_PRT3_BIT_MASK
#define LB2__BYP CYREG_PRT3_BYP
#define LB2__CTL CYREG_PRT3_CTL
#define LB2__DM0 CYREG_PRT3_DM0
#define LB2__DM1 CYREG_PRT3_DM1
#define LB2__DM2 CYREG_PRT3_DM2
#define LB2__DR CYREG_PRT3_DR
#define LB2__INP_DIS CYREG_PRT3_INP_DIS
#define LB2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LB2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LB2__LCD_EN CYREG_PRT3_LCD_EN
#define LB2__MASK 0x08u
#define LB2__PORT 3u
#define LB2__PRT CYREG_PRT3_PRT
#define LB2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LB2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LB2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LB2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LB2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LB2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LB2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LB2__PS CYREG_PRT3_PS
#define LB2__SHIFT 3u
#define LB2__SLW CYREG_PRT3_SLW

/* LC1 */
#define LC1__0__INTTYPE CYREG_PICU0_INTTYPE6
#define LC1__0__MASK 0x40u
#define LC1__0__PC CYREG_PRT0_PC6
#define LC1__0__PORT 0u
#define LC1__0__SHIFT 6u
#define LC1__AG CYREG_PRT0_AG
#define LC1__AMUX CYREG_PRT0_AMUX
#define LC1__BIE CYREG_PRT0_BIE
#define LC1__BIT_MASK CYREG_PRT0_BIT_MASK
#define LC1__BYP CYREG_PRT0_BYP
#define LC1__CTL CYREG_PRT0_CTL
#define LC1__DM0 CYREG_PRT0_DM0
#define LC1__DM1 CYREG_PRT0_DM1
#define LC1__DM2 CYREG_PRT0_DM2
#define LC1__DR CYREG_PRT0_DR
#define LC1__INP_DIS CYREG_PRT0_INP_DIS
#define LC1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define LC1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define LC1__LCD_EN CYREG_PRT0_LCD_EN
#define LC1__MASK 0x40u
#define LC1__PORT 0u
#define LC1__PRT CYREG_PRT0_PRT
#define LC1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define LC1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define LC1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define LC1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define LC1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define LC1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define LC1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define LC1__PS CYREG_PRT0_PS
#define LC1__SHIFT 6u
#define LC1__SLW CYREG_PRT0_SLW

/* LC2 */
#define LC2__0__INTTYPE CYREG_PICU3_INTTYPE5
#define LC2__0__MASK 0x20u
#define LC2__0__PC CYREG_PRT3_PC5
#define LC2__0__PORT 3u
#define LC2__0__SHIFT 5u
#define LC2__AG CYREG_PRT3_AG
#define LC2__AMUX CYREG_PRT3_AMUX
#define LC2__BIE CYREG_PRT3_BIE
#define LC2__BIT_MASK CYREG_PRT3_BIT_MASK
#define LC2__BYP CYREG_PRT3_BYP
#define LC2__CTL CYREG_PRT3_CTL
#define LC2__DM0 CYREG_PRT3_DM0
#define LC2__DM1 CYREG_PRT3_DM1
#define LC2__DM2 CYREG_PRT3_DM2
#define LC2__DR CYREG_PRT3_DR
#define LC2__INP_DIS CYREG_PRT3_INP_DIS
#define LC2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LC2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LC2__LCD_EN CYREG_PRT3_LCD_EN
#define LC2__MASK 0x20u
#define LC2__PORT 3u
#define LC2__PRT CYREG_PRT3_PRT
#define LC2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LC2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LC2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LC2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LC2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LC2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LC2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LC2__PS CYREG_PRT3_PS
#define LC2__SHIFT 5u
#define LC2__SLW CYREG_PRT3_SLW

/* PWM1 */
#define PWM1__0__INTTYPE CYREG_PICU3_INTTYPE6
#define PWM1__0__MASK 0x40u
#define PWM1__0__PC CYREG_PRT3_PC6
#define PWM1__0__PORT 3u
#define PWM1__0__SHIFT 6u
#define PWM1__AG CYREG_PRT3_AG
#define PWM1__AMUX CYREG_PRT3_AMUX
#define PWM1__BIE CYREG_PRT3_BIE
#define PWM1__BIT_MASK CYREG_PRT3_BIT_MASK
#define PWM1__BYP CYREG_PRT3_BYP
#define PWM1__CTL CYREG_PRT3_CTL
#define PWM1__DM0 CYREG_PRT3_DM0
#define PWM1__DM1 CYREG_PRT3_DM1
#define PWM1__DM2 CYREG_PRT3_DM2
#define PWM1__DR CYREG_PRT3_DR
#define PWM1__INP_DIS CYREG_PRT3_INP_DIS
#define PWM1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define PWM1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define PWM1__LCD_EN CYREG_PRT3_LCD_EN
#define PWM1__MASK 0x40u
#define PWM1__PORT 3u
#define PWM1__PRT CYREG_PRT3_PRT
#define PWM1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define PWM1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define PWM1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define PWM1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define PWM1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define PWM1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define PWM1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define PWM1__PS CYREG_PRT3_PS
#define PWM1__SHIFT 6u
#define PWM1__SLW CYREG_PRT3_SLW

/* PWM2 */
#define PWM2__0__INTTYPE CYREG_PICU3_INTTYPE7
#define PWM2__0__MASK 0x80u
#define PWM2__0__PC CYREG_PRT3_PC7
#define PWM2__0__PORT 3u
#define PWM2__0__SHIFT 7u
#define PWM2__AG CYREG_PRT3_AG
#define PWM2__AMUX CYREG_PRT3_AMUX
#define PWM2__BIE CYREG_PRT3_BIE
#define PWM2__BIT_MASK CYREG_PRT3_BIT_MASK
#define PWM2__BYP CYREG_PRT3_BYP
#define PWM2__CTL CYREG_PRT3_CTL
#define PWM2__DM0 CYREG_PRT3_DM0
#define PWM2__DM1 CYREG_PRT3_DM1
#define PWM2__DM2 CYREG_PRT3_DM2
#define PWM2__DR CYREG_PRT3_DR
#define PWM2__INP_DIS CYREG_PRT3_INP_DIS
#define PWM2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define PWM2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define PWM2__LCD_EN CYREG_PRT3_LCD_EN
#define PWM2__MASK 0x80u
#define PWM2__PORT 3u
#define PWM2__PRT CYREG_PRT3_PRT
#define PWM2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define PWM2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define PWM2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define PWM2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define PWM2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define PWM2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define PWM2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define PWM2__PS CYREG_PRT3_PS
#define PWM2__SHIFT 7u
#define PWM2__SLW CYREG_PRT3_SLW

/* HALL_A1 */
#define HALL_A1__0__INTTYPE CYREG_PICU1_INTTYPE5
#define HALL_A1__0__MASK 0x20u
#define HALL_A1__0__PC CYREG_PRT1_PC5
#define HALL_A1__0__PORT 1u
#define HALL_A1__0__SHIFT 5u
#define HALL_A1__AG CYREG_PRT1_AG
#define HALL_A1__AMUX CYREG_PRT1_AMUX
#define HALL_A1__BIE CYREG_PRT1_BIE
#define HALL_A1__BIT_MASK CYREG_PRT1_BIT_MASK
#define HALL_A1__BYP CYREG_PRT1_BYP
#define HALL_A1__CTL CYREG_PRT1_CTL
#define HALL_A1__DM0 CYREG_PRT1_DM0
#define HALL_A1__DM1 CYREG_PRT1_DM1
#define HALL_A1__DM2 CYREG_PRT1_DM2
#define HALL_A1__DR CYREG_PRT1_DR
#define HALL_A1__INP_DIS CYREG_PRT1_INP_DIS
#define HALL_A1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define HALL_A1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define HALL_A1__LCD_EN CYREG_PRT1_LCD_EN
#define HALL_A1__MASK 0x20u
#define HALL_A1__PORT 1u
#define HALL_A1__PRT CYREG_PRT1_PRT
#define HALL_A1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define HALL_A1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define HALL_A1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define HALL_A1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define HALL_A1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define HALL_A1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define HALL_A1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define HALL_A1__PS CYREG_PRT1_PS
#define HALL_A1__SHIFT 5u
#define HALL_A1__SLW CYREG_PRT1_SLW

/* HALL_A2 */
#define HALL_A2__0__INTTYPE CYREG_PICU12_INTTYPE2
#define HALL_A2__0__MASK 0x04u
#define HALL_A2__0__PC CYREG_PRT12_PC2
#define HALL_A2__0__PORT 12u
#define HALL_A2__0__SHIFT 2u
#define HALL_A2__AG CYREG_PRT12_AG
#define HALL_A2__BIE CYREG_PRT12_BIE
#define HALL_A2__BIT_MASK CYREG_PRT12_BIT_MASK
#define HALL_A2__BYP CYREG_PRT12_BYP
#define HALL_A2__DM0 CYREG_PRT12_DM0
#define HALL_A2__DM1 CYREG_PRT12_DM1
#define HALL_A2__DM2 CYREG_PRT12_DM2
#define HALL_A2__DR CYREG_PRT12_DR
#define HALL_A2__INP_DIS CYREG_PRT12_INP_DIS
#define HALL_A2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define HALL_A2__MASK 0x04u
#define HALL_A2__PORT 12u
#define HALL_A2__PRT CYREG_PRT12_PRT
#define HALL_A2__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define HALL_A2__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define HALL_A2__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define HALL_A2__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define HALL_A2__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define HALL_A2__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define HALL_A2__PS CYREG_PRT12_PS
#define HALL_A2__SHIFT 2u
#define HALL_A2__SIO_CFG CYREG_PRT12_SIO_CFG
#define HALL_A2__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define HALL_A2__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define HALL_A2__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define HALL_A2__SLW CYREG_PRT12_SLW

/* HALL_B1 */
#define HALL_B1__0__INTTYPE CYREG_PICU1_INTTYPE6
#define HALL_B1__0__MASK 0x40u
#define HALL_B1__0__PC CYREG_PRT1_PC6
#define HALL_B1__0__PORT 1u
#define HALL_B1__0__SHIFT 6u
#define HALL_B1__AG CYREG_PRT1_AG
#define HALL_B1__AMUX CYREG_PRT1_AMUX
#define HALL_B1__BIE CYREG_PRT1_BIE
#define HALL_B1__BIT_MASK CYREG_PRT1_BIT_MASK
#define HALL_B1__BYP CYREG_PRT1_BYP
#define HALL_B1__CTL CYREG_PRT1_CTL
#define HALL_B1__DM0 CYREG_PRT1_DM0
#define HALL_B1__DM1 CYREG_PRT1_DM1
#define HALL_B1__DM2 CYREG_PRT1_DM2
#define HALL_B1__DR CYREG_PRT1_DR
#define HALL_B1__INP_DIS CYREG_PRT1_INP_DIS
#define HALL_B1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define HALL_B1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define HALL_B1__LCD_EN CYREG_PRT1_LCD_EN
#define HALL_B1__MASK 0x40u
#define HALL_B1__PORT 1u
#define HALL_B1__PRT CYREG_PRT1_PRT
#define HALL_B1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define HALL_B1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define HALL_B1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define HALL_B1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define HALL_B1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define HALL_B1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define HALL_B1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define HALL_B1__PS CYREG_PRT1_PS
#define HALL_B1__SHIFT 6u
#define HALL_B1__SLW CYREG_PRT1_SLW

/* HALL_B2 */
#define HALL_B2__0__INTTYPE CYREG_PICU12_INTTYPE3
#define HALL_B2__0__MASK 0x08u
#define HALL_B2__0__PC CYREG_PRT12_PC3
#define HALL_B2__0__PORT 12u
#define HALL_B2__0__SHIFT 3u
#define HALL_B2__AG CYREG_PRT12_AG
#define HALL_B2__BIE CYREG_PRT12_BIE
#define HALL_B2__BIT_MASK CYREG_PRT12_BIT_MASK
#define HALL_B2__BYP CYREG_PRT12_BYP
#define HALL_B2__DM0 CYREG_PRT12_DM0
#define HALL_B2__DM1 CYREG_PRT12_DM1
#define HALL_B2__DM2 CYREG_PRT12_DM2
#define HALL_B2__DR CYREG_PRT12_DR
#define HALL_B2__INP_DIS CYREG_PRT12_INP_DIS
#define HALL_B2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define HALL_B2__MASK 0x08u
#define HALL_B2__PORT 12u
#define HALL_B2__PRT CYREG_PRT12_PRT
#define HALL_B2__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define HALL_B2__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define HALL_B2__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define HALL_B2__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define HALL_B2__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define HALL_B2__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define HALL_B2__PS CYREG_PRT12_PS
#define HALL_B2__SHIFT 3u
#define HALL_B2__SIO_CFG CYREG_PRT12_SIO_CFG
#define HALL_B2__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define HALL_B2__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define HALL_B2__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define HALL_B2__SLW CYREG_PRT12_SLW

/* HALL_C1 */
#define HALL_C1__0__INTTYPE CYREG_PICU1_INTTYPE7
#define HALL_C1__0__MASK 0x80u
#define HALL_C1__0__PC CYREG_PRT1_PC7
#define HALL_C1__0__PORT 1u
#define HALL_C1__0__SHIFT 7u
#define HALL_C1__AG CYREG_PRT1_AG
#define HALL_C1__AMUX CYREG_PRT1_AMUX
#define HALL_C1__BIE CYREG_PRT1_BIE
#define HALL_C1__BIT_MASK CYREG_PRT1_BIT_MASK
#define HALL_C1__BYP CYREG_PRT1_BYP
#define HALL_C1__CTL CYREG_PRT1_CTL
#define HALL_C1__DM0 CYREG_PRT1_DM0
#define HALL_C1__DM1 CYREG_PRT1_DM1
#define HALL_C1__DM2 CYREG_PRT1_DM2
#define HALL_C1__DR CYREG_PRT1_DR
#define HALL_C1__INP_DIS CYREG_PRT1_INP_DIS
#define HALL_C1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define HALL_C1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define HALL_C1__LCD_EN CYREG_PRT1_LCD_EN
#define HALL_C1__MASK 0x80u
#define HALL_C1__PORT 1u
#define HALL_C1__PRT CYREG_PRT1_PRT
#define HALL_C1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define HALL_C1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define HALL_C1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define HALL_C1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define HALL_C1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define HALL_C1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define HALL_C1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define HALL_C1__PS CYREG_PRT1_PS
#define HALL_C1__SHIFT 7u
#define HALL_C1__SLW CYREG_PRT1_SLW

/* HALL_C2 */
#define HALL_C2__0__INTTYPE CYREG_PICU12_INTTYPE4
#define HALL_C2__0__MASK 0x10u
#define HALL_C2__0__PC CYREG_PRT12_PC4
#define HALL_C2__0__PORT 12u
#define HALL_C2__0__SHIFT 4u
#define HALL_C2__AG CYREG_PRT12_AG
#define HALL_C2__BIE CYREG_PRT12_BIE
#define HALL_C2__BIT_MASK CYREG_PRT12_BIT_MASK
#define HALL_C2__BYP CYREG_PRT12_BYP
#define HALL_C2__DM0 CYREG_PRT12_DM0
#define HALL_C2__DM1 CYREG_PRT12_DM1
#define HALL_C2__DM2 CYREG_PRT12_DM2
#define HALL_C2__DR CYREG_PRT12_DR
#define HALL_C2__INP_DIS CYREG_PRT12_INP_DIS
#define HALL_C2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define HALL_C2__MASK 0x10u
#define HALL_C2__PORT 12u
#define HALL_C2__PRT CYREG_PRT12_PRT
#define HALL_C2__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define HALL_C2__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define HALL_C2__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define HALL_C2__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define HALL_C2__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define HALL_C2__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define HALL_C2__PS CYREG_PRT12_PS
#define HALL_C2__SHIFT 4u
#define HALL_C2__SIO_CFG CYREG_PRT12_SIO_CFG
#define HALL_C2__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define HALL_C2__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define HALL_C2__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define HALL_C2__SLW CYREG_PRT12_SLW

/* REVERSE1 */
#define REVERSE1__0__INTTYPE CYREG_PICU15_INTTYPE0
#define REVERSE1__0__MASK 0x01u
#define REVERSE1__0__PC CYREG_IO_PC_PRT15_PC0
#define REVERSE1__0__PORT 15u
#define REVERSE1__0__SHIFT 0u
#define REVERSE1__AG CYREG_PRT15_AG
#define REVERSE1__AMUX CYREG_PRT15_AMUX
#define REVERSE1__BIE CYREG_PRT15_BIE
#define REVERSE1__BIT_MASK CYREG_PRT15_BIT_MASK
#define REVERSE1__BYP CYREG_PRT15_BYP
#define REVERSE1__CTL CYREG_PRT15_CTL
#define REVERSE1__DM0 CYREG_PRT15_DM0
#define REVERSE1__DM1 CYREG_PRT15_DM1
#define REVERSE1__DM2 CYREG_PRT15_DM2
#define REVERSE1__DR CYREG_PRT15_DR
#define REVERSE1__INP_DIS CYREG_PRT15_INP_DIS
#define REVERSE1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define REVERSE1__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define REVERSE1__LCD_EN CYREG_PRT15_LCD_EN
#define REVERSE1__MASK 0x01u
#define REVERSE1__PORT 15u
#define REVERSE1__PRT CYREG_PRT15_PRT
#define REVERSE1__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define REVERSE1__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define REVERSE1__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define REVERSE1__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define REVERSE1__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define REVERSE1__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define REVERSE1__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define REVERSE1__PS CYREG_PRT15_PS
#define REVERSE1__SHIFT 0u
#define REVERSE1__SLW CYREG_PRT15_SLW

/* REVERSE2 */
#define REVERSE2__0__INTTYPE CYREG_PICU15_INTTYPE1
#define REVERSE2__0__MASK 0x02u
#define REVERSE2__0__PC CYREG_IO_PC_PRT15_PC1
#define REVERSE2__0__PORT 15u
#define REVERSE2__0__SHIFT 1u
#define REVERSE2__AG CYREG_PRT15_AG
#define REVERSE2__AMUX CYREG_PRT15_AMUX
#define REVERSE2__BIE CYREG_PRT15_BIE
#define REVERSE2__BIT_MASK CYREG_PRT15_BIT_MASK
#define REVERSE2__BYP CYREG_PRT15_BYP
#define REVERSE2__CTL CYREG_PRT15_CTL
#define REVERSE2__DM0 CYREG_PRT15_DM0
#define REVERSE2__DM1 CYREG_PRT15_DM1
#define REVERSE2__DM2 CYREG_PRT15_DM2
#define REVERSE2__DR CYREG_PRT15_DR
#define REVERSE2__INP_DIS CYREG_PRT15_INP_DIS
#define REVERSE2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define REVERSE2__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define REVERSE2__LCD_EN CYREG_PRT15_LCD_EN
#define REVERSE2__MASK 0x02u
#define REVERSE2__PORT 15u
#define REVERSE2__PRT CYREG_PRT15_PRT
#define REVERSE2__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define REVERSE2__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define REVERSE2__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define REVERSE2__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define REVERSE2__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define REVERSE2__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define REVERSE2__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define REVERSE2__PS CYREG_PRT15_PS
#define REVERSE2__SHIFT 1u
#define REVERSE2__SLW CYREG_PRT15_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "fvm"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
