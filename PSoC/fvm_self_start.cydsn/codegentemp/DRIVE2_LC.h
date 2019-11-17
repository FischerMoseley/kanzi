/*******************************************************************************
* File Name: DRIVE2_LC.h  
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

#if !defined(CY_PINS_DRIVE2_LC_H) /* Pins DRIVE2_LC_H */
#define CY_PINS_DRIVE2_LC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DRIVE2_LC_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DRIVE2_LC__PORT == 15 && ((DRIVE2_LC__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DRIVE2_LC_Write(uint8 value);
void    DRIVE2_LC_SetDriveMode(uint8 mode);
uint8   DRIVE2_LC_ReadDataReg(void);
uint8   DRIVE2_LC_Read(void);
void    DRIVE2_LC_SetInterruptMode(uint16 position, uint16 mode);
uint8   DRIVE2_LC_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DRIVE2_LC_SetDriveMode() function.
     *  @{
     */
        #define DRIVE2_LC_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DRIVE2_LC_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DRIVE2_LC_DM_RES_UP          PIN_DM_RES_UP
        #define DRIVE2_LC_DM_RES_DWN         PIN_DM_RES_DWN
        #define DRIVE2_LC_DM_OD_LO           PIN_DM_OD_LO
        #define DRIVE2_LC_DM_OD_HI           PIN_DM_OD_HI
        #define DRIVE2_LC_DM_STRONG          PIN_DM_STRONG
        #define DRIVE2_LC_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DRIVE2_LC_MASK               DRIVE2_LC__MASK
#define DRIVE2_LC_SHIFT              DRIVE2_LC__SHIFT
#define DRIVE2_LC_WIDTH              1u

/* Interrupt constants */
#if defined(DRIVE2_LC__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DRIVE2_LC_SetInterruptMode() function.
     *  @{
     */
        #define DRIVE2_LC_INTR_NONE      (uint16)(0x0000u)
        #define DRIVE2_LC_INTR_RISING    (uint16)(0x0001u)
        #define DRIVE2_LC_INTR_FALLING   (uint16)(0x0002u)
        #define DRIVE2_LC_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DRIVE2_LC_INTR_MASK      (0x01u) 
#endif /* (DRIVE2_LC__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DRIVE2_LC_PS                     (* (reg8 *) DRIVE2_LC__PS)
/* Data Register */
#define DRIVE2_LC_DR                     (* (reg8 *) DRIVE2_LC__DR)
/* Port Number */
#define DRIVE2_LC_PRT_NUM                (* (reg8 *) DRIVE2_LC__PRT) 
/* Connect to Analog Globals */                                                  
#define DRIVE2_LC_AG                     (* (reg8 *) DRIVE2_LC__AG)                       
/* Analog MUX bux enable */
#define DRIVE2_LC_AMUX                   (* (reg8 *) DRIVE2_LC__AMUX) 
/* Bidirectional Enable */                                                        
#define DRIVE2_LC_BIE                    (* (reg8 *) DRIVE2_LC__BIE)
/* Bit-mask for Aliased Register Access */
#define DRIVE2_LC_BIT_MASK               (* (reg8 *) DRIVE2_LC__BIT_MASK)
/* Bypass Enable */
#define DRIVE2_LC_BYP                    (* (reg8 *) DRIVE2_LC__BYP)
/* Port wide control signals */                                                   
#define DRIVE2_LC_CTL                    (* (reg8 *) DRIVE2_LC__CTL)
/* Drive Modes */
#define DRIVE2_LC_DM0                    (* (reg8 *) DRIVE2_LC__DM0) 
#define DRIVE2_LC_DM1                    (* (reg8 *) DRIVE2_LC__DM1)
#define DRIVE2_LC_DM2                    (* (reg8 *) DRIVE2_LC__DM2) 
/* Input Buffer Disable Override */
#define DRIVE2_LC_INP_DIS                (* (reg8 *) DRIVE2_LC__INP_DIS)
/* LCD Common or Segment Drive */
#define DRIVE2_LC_LCD_COM_SEG            (* (reg8 *) DRIVE2_LC__LCD_COM_SEG)
/* Enable Segment LCD */
#define DRIVE2_LC_LCD_EN                 (* (reg8 *) DRIVE2_LC__LCD_EN)
/* Slew Rate Control */
#define DRIVE2_LC_SLW                    (* (reg8 *) DRIVE2_LC__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DRIVE2_LC_PRTDSI__CAPS_SEL       (* (reg8 *) DRIVE2_LC__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DRIVE2_LC_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DRIVE2_LC__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DRIVE2_LC_PRTDSI__OE_SEL0        (* (reg8 *) DRIVE2_LC__PRTDSI__OE_SEL0) 
#define DRIVE2_LC_PRTDSI__OE_SEL1        (* (reg8 *) DRIVE2_LC__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DRIVE2_LC_PRTDSI__OUT_SEL0       (* (reg8 *) DRIVE2_LC__PRTDSI__OUT_SEL0) 
#define DRIVE2_LC_PRTDSI__OUT_SEL1       (* (reg8 *) DRIVE2_LC__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DRIVE2_LC_PRTDSI__SYNC_OUT       (* (reg8 *) DRIVE2_LC__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DRIVE2_LC__SIO_CFG)
    #define DRIVE2_LC_SIO_HYST_EN        (* (reg8 *) DRIVE2_LC__SIO_HYST_EN)
    #define DRIVE2_LC_SIO_REG_HIFREQ     (* (reg8 *) DRIVE2_LC__SIO_REG_HIFREQ)
    #define DRIVE2_LC_SIO_CFG            (* (reg8 *) DRIVE2_LC__SIO_CFG)
    #define DRIVE2_LC_SIO_DIFF           (* (reg8 *) DRIVE2_LC__SIO_DIFF)
#endif /* (DRIVE2_LC__SIO_CFG) */

/* Interrupt Registers */
#if defined(DRIVE2_LC__INTSTAT)
    #define DRIVE2_LC_INTSTAT            (* (reg8 *) DRIVE2_LC__INTSTAT)
    #define DRIVE2_LC_SNAP               (* (reg8 *) DRIVE2_LC__SNAP)
    
	#define DRIVE2_LC_0_INTTYPE_REG 		(* (reg8 *) DRIVE2_LC__0__INTTYPE)
#endif /* (DRIVE2_LC__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DRIVE2_LC_H */


/* [] END OF FILE */