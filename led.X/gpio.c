#include  "gpio.h"
#include "p33EP32MC202.h"
//#include "system.h"
void System_Init(void)
{
   TRISB &= ~0xfc00;//RB10-RB15 ����
    IOCON1 = 0x0000;//GPIO ģ����� PWMxH PWMxL����
}
void Setgpio_Pin( int val ){
   // int P = val;
     PORTB = 1<<(val);
}