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
     char LED;
     PORTA=0x00;
     TRISA=0b10000000;
     OSCCON=0b01110000;
      
     while(1) {
        LED=0x01;
        while(LED!=0x00) {
            PORTA=LED;
            __delay_ms(100);
            LED<<=1;      // SHIFT LEFT ONE TIME
        }
    }
}

