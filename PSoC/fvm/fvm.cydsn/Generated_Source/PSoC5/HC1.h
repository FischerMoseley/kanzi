/*******************************************************************************
* File Name: HC1.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_HC1_H) /* Pins HC1_H */
#define CY_PINS_HC1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "HC1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 HC1__PORT == 15 && ((HC1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    HC1_Write(uint8 value);
void    HC1_SetDriveMode(uint8 mode);
uint8   HC1_ReadDataReg(void);
uint8   HC1_Read(void);
void    HC1_SetInterruptMode(uint16 position, uint16 mode);
uint8   HC1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the HC1_SetDriveMode() function.
     *  @{
     */
        #define HC1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define HC1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define HC1_DM_RES_UP          PIN_DM_RES_UP
        #define HC1_DM_RES_DWN         PIN_DM_RES_DWN
        #define HC1_DM_OD_LO           PIN_DM_OD_LO
        #define HC1_DM_OD_HI           PIN_DM_OD_HI
        #define HC1_DM_STRONG          PIN_DM_STRONG
        #define HC1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define HC1_MASK               HC1__MASK
#define HC1_SHIFT              HC1__SHIFT
#define HC1_WIDTH              1u

/* Interrupt constants */
#if defined(HC1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in HC1_SetInterruptMode() function.
     *  @{
     */
        #define HC1_INTR_NONE      (uint16)(0x0000u)
        #define HC1_INTR_RISING    (uint16)(0x0001u)
        #define HC1_INTR_FALLING   (uint16)(0x0002u)
        #define HC1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define HC1_INTR_MASK      (0x01u) 
#endif /* (HC1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define HC1_PS                     (* (reg8 *) HC1__PS)
/* Data Register */
#define HC1_DR                     (* (reg8 *) HC1__DR)
/* Port Number */
#define HC1_PRT_NUM                (* (reg8 *) HC1__PRT) 
/* Connect to Analog Globals */                                                  
#define HC1_AG                     (* (reg8 *) HC1__AG)                       
/* Analog MUX bux enable */
#define HC1_AMUX                   (* (reg8 *) HC1__AMUX) 
/* Bidirectional Enable */                                                        
#define HC1_BIE                    (* (reg8 *) HC1__BIE)
/* Bit-mask for Aliased Register Access */
#define HC1_BIT_MASK               (* (reg8 *) HC1__BIT_MASK)
/* Bypass Enable */
#define HC1_BYP                    (* (reg8 *) HC1__BYP)
/* Port wide control signals */                                                   
#define HC1_CTL                    (* (reg8 *) HC1__CTL)
/* Drive Modes */
#define HC1_DM0                    (* (reg8 *) HC1__DM0) 
#define HC1_DM1                    (* (reg8 *) HC1__DM1)
#define HC1_DM2                    (* (reg8 *) HC1__DM2) 
/* Input Buffer Disable Override */
#define HC1_INP_DIS                (* (reg8 *) HC1__INP_DIS)
/* LCD Common or Segment Drive */
#define HC1_LCD_COM_SEG            (* (reg8 *) HC1__LCD_COM_SEG)
/* Enable Segment LCD */
#define HC1_LCD_EN                 (* (reg8 *) HC1__LCD_EN)
/* Slew Rate Control */
#define HC1_SLW                    (* (reg8 *) HC1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define HC1_PRTDSI__CAPS_SEL       (* (reg8 *) HC1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define HC1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) HC1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define HC1_PRTDSI__OE_SEL0        (* (reg8 *) HC1__PRTDSI__OE_SEL0) 
#define HC1_PRTDSI__OE_SEL1        (* (reg8 *) HC1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define HC1_PRTDSI__OUT_SEL0       (* (reg8 *) HC1__PRTDSI__OUT_SEL0) 
#define HC1_PRTDSI__OUT_SEL1       (* (reg8 *) HC1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define HC1_PRTDSI__SYNC_OUT       (* (reg8 *) HC1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(HC1__SIO_CFG)
    #define HC1_SIO_HYST_EN        (* (reg8 *) HC1__SIO_HYST_EN)
    #define HC1_SIO_REG_HIFREQ     (* (reg8 *) HC1__SIO_REG_HIFREQ)
    #define HC1_SIO_CFG            (* (reg8 *) HC1__SIO_CFG)
    #define HC1_SIO_DIFF           (* (reg8 *) HC1__SIO_DIFF)
#endif /* (HC1__SIO_CFG) */

/* Interrupt Registers */
#if defined(HC1__INTSTAT)
    #define HC1_INTSTAT            (* (reg8 *) HC1__INTSTAT)
    #define HC1_SNAP               (* (reg8 *) HC1__SNAP)
    
	#define HC1_0_INTTYPE_REG 		(* (reg8 *) HC1__0__INTTYPE)
#endif /* (HC1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_HC1_H */


/* [] END OF FILE */
