/*
 * File:   Smart.c
 * Author: juradoceronfrancisco
 *
 * Created on 5 de octubre de 2020, 10:35 PM
 */


#pragma config CONFIG1 = 0x2CD4
#pragma config CONFIG2 = 0x0700
 
//LCD module connections
#define LCD_RS       RD0
#define LCD_EN       RD1
#define LCD_D4       RD2
#define LCD_D5       RD3
#define LCD_D6       RD4
#define LCD_D7       RD5
#define LCD_RS_DIR   TRISD0
#define LCD_EN_DIR   TRISD1
#define LCD_D4_DIR   TRISD2
#define LCD_D5_DIR   TRISD3
#define LCD_D6_DIR   TRISD4
#define LCD_D7_DIR   TRISD5
//End LCD module connections

#include <xc.h>
#define _XTAL_FREQ 4000000
#include <stdio.h>
#include <stdlib.h>
#include "LCD_lib.h"

void main(void) {
    
    ANSEL=ANSELH=0;
    
    TRISB  = 1;   
    PORTB  = 0;     

    __delay_ms(1000);  

    LCD_Begin();       // initialize LCD module
    unsigned char iteml[10];
    while(1){
        LCD_Goto(7, 1);
        sprintf(iteml,"SmartTransport","");
        LCD_Print(iteml);
    } 
}
