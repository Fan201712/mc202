#include"Colck.h"
#include "p33EP32MC202.h"
//振荡器配置
void System_Colck(void)
{
    //产生Fosc = 140MHz 70MIPS
    CLKDIVbits.PLLPRE = 0;//N1 = 2  7.3728MHz/2= 2MHz
    PLLFBDbits.PLLDIV = 74;//M = 76  3.6864*76 = 279.68MHz
    CLKDIVbits.PLLPOST = 0;//N2 = 2 279.68/2 = 139.84MHz
    while (OSCCONbits.COSC!= 0b011)
    while (OSCCONbits.LOCK!= 1) {};//PLL 处于锁定状态
}
