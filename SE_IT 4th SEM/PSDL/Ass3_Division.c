//Assignment 3-Dhiraj23361

#include <pic18f458.h>
#include <stdio.h>
#include <xc.h>

void main(void) {
    int choice = 0x0F;
    TMR1H = 0x0F;
    TMR1L = 0x04;
    TRISB = 0x00;
    TRISC = 0x00;

    while (1) {
        if (choice = 1) {
            TMR0 = TMR1L * TMR1H;
            PORTB = TMR0L;
            PORTC = TMR0H;
        }
        if (choice = 2) {
            PORTB= TMR1H/TMR1L;
            PORTC =TMR1H%TMR1L;
        }
    }
    return;
}
