//Assignment 1 -Dhiraj23361
#include<pic18f458.h>
#include<stdlib.h>
#include<stdio.h>
#include<xc.h>

void main(void){
    TMR0=0x38;
    TMR1=0x2F;
    TMR2=TMR0-TMR1;
}

or (for 8* bit)

#include<pic18f458.h>
#include<stdlib.h>
#include<stdio.h>

void main(void){
    TMRL=0x38;
    TMRH=0x2F;
    TRISB=0;
    PORTB=TMRL+TMRH;
}