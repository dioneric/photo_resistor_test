/*
 * File:   main.c
 * Author: eric.dion@thegameofthings.com
 *
 * Created on 1/30/2021 12:45:05 AM UTC
 * "Created in MPLAB Xpress"
 */
#include <xc.h>
#define _XTAL_FREQ 8000000

/* USING INTERNAL OSCILLATOR OF
PIC16F887
AUTHOR: ENG BUNTHA */

void main() {
     PORTA=0x00;
     TRISA=0b00000000;
     TRISB=0b00000000;
     OSCCON=0b01110001;
     PCON=0b00000000;
     
     while(1) {
         PORTA=0xFF;
         __delay_ms(500);
         PORTA=0x00;
         __delay_ms(500);
     }
}

