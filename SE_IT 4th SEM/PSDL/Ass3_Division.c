//Assignment 3-Dhiraj23361

#include<pic18f458.h>
#include<stdlib.h>
#include<stdio.h>
#include<xc.h>


void main(void){
   int choice=0x0F;
   TMR1L=0xF;
   TMR1H=0x2;
   TRISB=0;
   TRISC=0;
while(1){
     if(choice=1){
        TMR0=TMR1L*TMR1H;
        PORTB=TMR0L;
        PORTC=TMR0H;
}
    if(choice=2){
       PORTB=TMR1H/TMR1H;
       PORTC=TMR1H%TMR1H;
     }
   }
   return;
}
