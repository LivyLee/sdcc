/* Register definitions for pic16c554.
 * This file was automatically generated by:
 *   inc2h.pl V1.6
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16c554.h>

data __at (INDF_ADDR) volatile char      INDF;
sfr  __at (TMR0_ADDR)                    TMR0;
data __at (PCL_ADDR) volatile char       PCL;
sfr  __at (STATUS_ADDR)                  STATUS;
sfr  __at (FSR_ADDR)                     FSR;
sfr  __at (PORTA_ADDR)                   PORTA;
sfr  __at (PORTB_ADDR)                   PORTB;
sfr  __at (PCLATH_ADDR)                  PCLATH;
sfr  __at (INTCON_ADDR)                  INTCON;
sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
sfr  __at (TRISA_ADDR)                   TRISA;
sfr  __at (TRISB_ADDR)                   TRISB;
sfr  __at (PCON_ADDR)                    PCON;

// 
// bitfield definitions
// 
volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;
volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;
volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;
volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;
