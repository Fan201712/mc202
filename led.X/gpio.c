#include  "gpio.h"
#include "p33EP32MC202.h"
//#include "system.h"
void System_Init(void)
{
   TRISB &= ~0xfc00;//RB10-RB15 清零
    IOCON1 = 0x0000;//GPIO 模块控制 PWMxH PWMxL引脚
}
void Setgpio_Pin( int val ){
   // int P = val;
     PORTB = 1<<(val);
}