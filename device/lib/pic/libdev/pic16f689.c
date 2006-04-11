/* Register definitions for pic16f689.
 * This file was automatically generated by:
 *   inc2h.pl V1.6
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16f689.h>

__data __at (INDF_ADDR) volatile char      INDF;
__sfr  __at (TMR0_ADDR)                    TMR0;
__data __at (PCL_ADDR) volatile char       PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR_ADDR)                     FSR;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (PORTB_ADDR)                   PORTB;
__sfr  __at (PORTC_ADDR)                   PORTC;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIR2_ADDR)                    PIR2;
__sfr  __at (TMR1L_ADDR)                   TMR1L;
__sfr  __at (TMR1H_ADDR)                   TMR1H;
__sfr  __at (T1CON_ADDR)                   T1CON;
__sfr  __at (SSPBUF_ADDR)                  SSPBUF;
__sfr  __at (SSPCON_ADDR)                  SSPCON;
__sfr  __at (RCSTA_ADDR)                   RCSTA;
__sfr  __at (TXREG_ADDR)                   TXREG;
__sfr  __at (RCREG_ADDR)                   RCREG;
__sfr  __at (ADRESH_ADDR)                  ADRESH;
__sfr  __at (ADCON0_ADDR)                  ADCON0;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (TRISB_ADDR)                   TRISB;
__sfr  __at (TRISC_ADDR)                   TRISC;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (PIE2_ADDR)                    PIE2;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (OSCCON_ADDR)                  OSCCON;
__sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
__sfr  __at (SSPADD_ADDR)                  SSPADD;
__sfr  __at (MSK_ADDR)                     MSK;
__sfr  __at (SSPMSK_ADDR)                  SSPMSK;
__sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
__sfr  __at (WPU_ADDR)                     WPU;
__sfr  __at (WPUA_ADDR)                    WPUA;
__sfr  __at (IOC_ADDR)                     IOC;
__sfr  __at (IOCA_ADDR)                    IOCA;
__sfr  __at (WDTCON_ADDR)                  WDTCON;
__sfr  __at (TXSTA_ADDR)                   TXSTA;
__sfr  __at (SPBRG_ADDR)                   SPBRG;
__sfr  __at (SPBRGH_ADDR)                  SPBRGH;
__sfr  __at (BAUDCTL_ADDR)                 BAUDCTL;
__sfr  __at (ADRESL_ADDR)                  ADRESL;
__sfr  __at (ADCON1_ADDR)                  ADCON1;
__sfr  __at (EEDATA_ADDR)                  EEDATA;
__sfr  __at (EEADR_ADDR)                   EEADR;
__sfr  __at (EEDATH_ADDR)                  EEDATH;
__sfr  __at (EEADRH_ADDR)                  EEADRH;
__sfr  __at (WPUB_ADDR)                    WPUB;
__sfr  __at (IOCB_ADDR)                    IOCB;
__sfr  __at (VRCON_ADDR)                   VRCON;
__sfr  __at (CM1CON0_ADDR)                 CM1CON0;
__sfr  __at (CM2CON0_ADDR)                 CM2CON0;
__sfr  __at (CM2CON1_ADDR)                 CM2CON1;
__sfr  __at (ANSEL_ADDR)                   ANSEL;
__sfr  __at (ANSELH_ADDR)                  ANSELH;
__sfr  __at (EECON1_ADDR)                  EECON1;
__sfr  __at (EECON2_ADDR)                  EECON2;
__sfr  __at (SRCON_ADDR)                   SRCON;

// 
// bitfield definitions
// 
volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;
volatile __BAUDCTL_bits_t __at(BAUDCTL_ADDR) BAUDCTL_bits;
volatile __CM1CON0_bits_t __at(CM1CON0_ADDR) CM1CON0_bits;
volatile __CM2CON0_bits_t __at(CM2CON0_ADDR) CM2CON0_bits;
volatile __CM2CON1_bits_t __at(CM2CON1_ADDR) CM2CON1_bits;
volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;
volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;
volatile __OSCCON_bits_t __at(OSCCON_ADDR) OSCCON_bits;
volatile __OSCTUNE_bits_t __at(OSCTUNE_ADDR) OSCTUNE_bits;
volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;
volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;
volatile __PIE2_bits_t __at(PIE2_ADDR) PIE2_bits;
volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;
volatile __PIR2_bits_t __at(PIR2_ADDR) PIR2_bits;
volatile __RCSTA_bits_t __at(RCSTA_ADDR) RCSTA_bits;
volatile __SPBRG_bits_t __at(SPBRG_ADDR) SPBRG_bits;
volatile __SPBRGH_bits_t __at(SPBRGH_ADDR) SPBRGH_bits;
volatile __SSPCON_bits_t __at(SSPCON_ADDR) SSPCON_bits;
volatile __SSPSTAT_bits_t __at(SSPSTAT_ADDR) SSPSTAT_bits;
volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;
volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;
volatile __TRISA_bits_t __at(TRISA_ADDR) TRISA_bits;
volatile __TRISB_bits_t __at(TRISB_ADDR) TRISB_bits;
volatile __TRISC_bits_t __at(TRISC_ADDR) TRISC_bits;
volatile __TXSTA_bits_t __at(TXSTA_ADDR) TXSTA_bits;
volatile __VRCON_bits_t __at(VRCON_ADDR) VRCON_bits;
volatile __WDTCON_bits_t __at(WDTCON_ADDR) WDTCON_bits;
volatile __WPUB_bits_t __at(WPUB_ADDR) WPUB_bits;

