/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on 2020年10月24日, 下午12:42
 */

#include <stdio.h>
#include <stdlib.h>
#include "system.h"
#include  "p33EP32MC202.h"
#include "delay.h"
#include "Colck.h"
#include  "gpio.h"
int main(int argc, char** argv) {

    System_Colck();
    System_Init();
   while(1)
    {
       delay_ms(1000);
       Setgpio_Pin(10);
       delay_ms(1000);
       Setgpio_Pin(11);
       delay_ms(1000);
       Setgpio_Pin(12);
       delay_ms(1000);
      // PORTB =~PORTB;
    }
    return (EXIT_SUCCESS);
}

