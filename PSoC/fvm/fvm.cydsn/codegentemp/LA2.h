/*******************************************************************************
* File Name: LA2.h  
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

#if !defined(CY_PINS_LA2_H) /* Pins LA2_H */
#define CY_PINS_LA2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LA2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LA2__PORT == 15 && ((LA2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LA2_Write(uint8 value);
void    LA2_SetDriveMode(uint8 mode);
uint8   LA2_ReadDataReg(void);
uint8   LA2_Read(void);
void    LA2_SetInterruptMode(uint16 position, uint16 mode);
uint8   LA2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LA2_SetDriveMode() function.
     *  @{
     */
        #define LA2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LA2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LA2_DM_RES_UP          PIN_DM_RES_UP
        #define LA2_DM_RES_DWN         PIN_DM_RES_DWN
        #define LA2_DM_OD_LO           PIN_DM_OD_LO
        #define LA2_DM_OD_HI           PIN_DM_OD_HI
        #define LA2_DM_STRONG          PIN_DM_STRONG
        #define LA2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LA2_MASK               LA2__MASK
#define LA2_SHIFT              LA2__SHIFT
#define LA2_WIDTH              1u

/* Interrupt constants */
#if defined(LA2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LA2_SetInterruptMode() function.
     *  @{
     */
        #define LA2_INTR_NONE      (uint16)(0x0000u)
        #define LA2_INTR_RISING    (uint16)(0x0001u)
        #define LA2_INTR_FALLING   (uint16)(0x0002u)
        #define LA2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LA2_INTR_MASK      (0x01u) 
#endif /* (LA2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LA2_PS                     (* (reg8 *) LA2__PS)
/* Data Register */
#define LA2_DR                     (* (reg8 *) LA2__DR)
/* Port Number */
#define LA2_PRT_NUM                (* (reg8 *) LA2__PRT) 
/* Connect to Analog Globals */                                                  
#define LA2_AG                     (* (reg8 *) LA2__AG)                       
/* Analog MUX bux enable */
#define LA2_AMUX                   (* (reg8 *) LA2__AMUX) 
/* Bidirectional Enable */                                                        
#define LA2_BIE                    (* (reg8 *) LA2__BIE)
/* Bit-mask for Aliased Register Access */
#define LA2_BIT_MASK               (* (reg8 *) LA2__BIT_MASK)
/* Bypass Enable */
#define LA2_BYP                    (* (reg8 *) LA2__BYP)
/* Port wide control signals */                                                   
#define LA2_CTL                    (* (reg8 *) LA2__CTL)
/* Drive Modes */
#define LA2_DM0                    (* (reg8 *) LA2__DM0) 
#define LA2_DM1                    (* (reg8 *) LA2__DM1)
#define LA2_DM2                    (* (reg8 *) LA2__DM2) 
/* Input Buffer Disable Override */
#define LA2_INP_DIS                (* (reg8 *) LA2__INP_DIS)
/* LCD Common or Segment Drive */
#define LA2_LCD_COM_SEG            (* (reg8 *) LA2__LCD_COM_SEG)
/* Enable Segment LCD */
#define LA2_LCD_EN                 (* (reg8 *) LA2__LCD_EN)
/* Slew Rate Control */
#define LA2_SLW                    (* (reg8 *) LA2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LA2_PRTDSI__CAPS_SEL       (* (reg8 *) LA2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LA2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LA2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LA2_PRTDSI__OE_SEL0        (* (reg8 *) LA2__PRTDSI__OE_SEL0) 
#define LA2_PRTDSI__OE_SEL1        (* (reg8 *) LA2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LA2_PRTDSI__OUT_SEL0       (* (reg8 *) LA2__PRTDSI__OUT_SEL0) 
#define LA2_PRTDSI__OUT_SEL1       (* (reg8 *) LA2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LA2_PRTDSI__SYNC_OUT       (* (reg8 *) LA2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LA2__SIO_CFG)
    #define LA2_SIO_HYST_EN        (* (reg8 *) LA2__SIO_HYST_EN)
    #define LA2_SIO_REG_HIFREQ     (* (reg8 *) LA2__SIO_REG_HIFREQ)
    #define LA2_SIO_CFG            (* (reg8 *) LA2__SIO_CFG)
    #define LA2_SIO_DIFF           (* (reg8 *) LA2__SIO_DIFF)
#endif /* (LA2__SIO_CFG) */

/* Interrupt Registers */
#if defined(LA2__INTSTAT)
    #define LA2_INTSTAT            (* (reg8 *) LA2__INTSTAT)
    #define LA2_SNAP               (* (reg8 *) LA2__SNAP)
    
	#define LA2_0_INTTYPE_REG 		(* (reg8 *) LA2__0__INTTYPE)
#endif /* (LA2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LA2_H */


/* [] END OF FILE */
