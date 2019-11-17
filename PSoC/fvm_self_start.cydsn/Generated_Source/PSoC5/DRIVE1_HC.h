/*******************************************************************************
* File Name: DRIVE1_HC.h  
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

#if !defined(CY_PINS_DRIVE1_HC_H) /* Pins DRIVE1_HC_H */
#define CY_PINS_DRIVE1_HC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DRIVE1_HC_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DRIVE1_HC__PORT == 15 && ((DRIVE1_HC__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DRIVE1_HC_Write(uint8 value);
void    DRIVE1_HC_SetDriveMode(uint8 mode);
uint8   DRIVE1_HC_ReadDataReg(void);
uint8   DRIVE1_HC_Read(void);
void    DRIVE1_HC_SetInterruptMode(uint16 position, uint16 mode);
uint8   DRIVE1_HC_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DRIVE1_HC_SetDriveMode() function.
     *  @{
     */
        #define DRIVE1_HC_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DRIVE1_HC_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DRIVE1_HC_DM_RES_UP          PIN_DM_RES_UP
        #define DRIVE1_HC_DM_RES_DWN         PIN_DM_RES_DWN
        #define DRIVE1_HC_DM_OD_LO           PIN_DM_OD_LO
        #define DRIVE1_HC_DM_OD_HI           PIN_DM_OD_HI
        #define DRIVE1_HC_DM_STRONG          PIN_DM_STRONG
        #define DRIVE1_HC_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DRIVE1_HC_MASK               DRIVE1_HC__MASK
#define DRIVE1_HC_SHIFT              DRIVE1_HC__SHIFT
#define DRIVE1_HC_WIDTH              1u

/* Interrupt constants */
#if defined(DRIVE1_HC__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DRIVE1_HC_SetInterruptMode() function.
     *  @{
     */
        #define DRIVE1_HC_INTR_NONE      (uint16)(0x0000u)
        #define DRIVE1_HC_INTR_RISING    (uint16)(0x0001u)
        #define DRIVE1_HC_INTR_FALLING   (uint16)(0x0002u)
        #define DRIVE1_HC_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DRIVE1_HC_INTR_MASK      (0x01u) 
#endif /* (DRIVE1_HC__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DRIVE1_HC_PS                     (* (reg8 *) DRIVE1_HC__PS)
/* Data Register */
#define DRIVE1_HC_DR                     (* (reg8 *) DRIVE1_HC__DR)
/* Port Number */
#define DRIVE1_HC_PRT_NUM                (* (reg8 *) DRIVE1_HC__PRT) 
/* Connect to Analog Globals */                                                  
#define DRIVE1_HC_AG                     (* (reg8 *) DRIVE1_HC__AG)                       
/* Analog MUX bux enable */
#define DRIVE1_HC_AMUX                   (* (reg8 *) DRIVE1_HC__AMUX) 
/* Bidirectional Enable */                                                        
#define DRIVE1_HC_BIE                    (* (reg8 *) DRIVE1_HC__BIE)
/* Bit-mask for Aliased Register Access */
#define DRIVE1_HC_BIT_MASK               (* (reg8 *) DRIVE1_HC__BIT_MASK)
/* Bypass Enable */
#define DRIVE1_HC_BYP                    (* (reg8 *) DRIVE1_HC__BYP)
/* Port wide control signals */                                                   
#define DRIVE1_HC_CTL                    (* (reg8 *) DRIVE1_HC__CTL)
/* Drive Modes */
#define DRIVE1_HC_DM0                    (* (reg8 *) DRIVE1_HC__DM0) 
#define DRIVE1_HC_DM1                    (* (reg8 *) DRIVE1_HC__DM1)
#define DRIVE1_HC_DM2                    (* (reg8 *) DRIVE1_HC__DM2) 
/* Input Buffer Disable Override */
#define DRIVE1_HC_INP_DIS                (* (reg8 *) DRIVE1_HC__INP_DIS)
/* LCD Common or Segment Drive */
#define DRIVE1_HC_LCD_COM_SEG            (* (reg8 *) DRIVE1_HC__LCD_COM_SEG)
/* Enable Segment LCD */
#define DRIVE1_HC_LCD_EN                 (* (reg8 *) DRIVE1_HC__LCD_EN)
/* Slew Rate Control */
#define DRIVE1_HC_SLW                    (* (reg8 *) DRIVE1_HC__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DRIVE1_HC_PRTDSI__CAPS_SEL       (* (reg8 *) DRIVE1_HC__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DRIVE1_HC_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DRIVE1_HC__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DRIVE1_HC_PRTDSI__OE_SEL0        (* (reg8 *) DRIVE1_HC__PRTDSI__OE_SEL0) 
#define DRIVE1_HC_PRTDSI__OE_SEL1        (* (reg8 *) DRIVE1_HC__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DRIVE1_HC_PRTDSI__OUT_SEL0       (* (reg8 *) DRIVE1_HC__PRTDSI__OUT_SEL0) 
#define DRIVE1_HC_PRTDSI__OUT_SEL1       (* (reg8 *) DRIVE1_HC__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DRIVE1_HC_PRTDSI__SYNC_OUT       (* (reg8 *) DRIVE1_HC__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DRIVE1_HC__SIO_CFG)
    #define DRIVE1_HC_SIO_HYST_EN        (* (reg8 *) DRIVE1_HC__SIO_HYST_EN)
    #define DRIVE1_HC_SIO_REG_HIFREQ     (* (reg8 *) DRIVE1_HC__SIO_REG_HIFREQ)
    #define DRIVE1_HC_SIO_CFG            (* (reg8 *) DRIVE1_HC__SIO_CFG)
    #define DRIVE1_HC_SIO_DIFF           (* (reg8 *) DRIVE1_HC__SIO_DIFF)
#endif /* (DRIVE1_HC__SIO_CFG) */

/* Interrupt Registers */
#if defined(DRIVE1_HC__INTSTAT)
    #define DRIVE1_HC_INTSTAT            (* (reg8 *) DRIVE1_HC__INTSTAT)
    #define DRIVE1_HC_SNAP               (* (reg8 *) DRIVE1_HC__SNAP)
    
	#define DRIVE1_HC_0_INTTYPE_REG 		(* (reg8 *) DRIVE1_HC__0__INTTYPE)
#endif /* (DRIVE1_HC__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DRIVE1_HC_H */


/* [] END OF FILE */