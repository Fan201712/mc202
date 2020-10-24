#ifndef SYSTEM_H
#define	SYSTEM_H
#include "p33EP32MC202.h"
//配置位
// FICD
#pragma config ICS = PGD1               // ICD通信通道选择位（PGEC1和PGED1通讯）
#pragma config JTAGEN = OFF             // 禁止JTAG
// FPOR
#pragma config ALTI2C1 = OFF            // 备用I2C1引脚（I2C1映射到SDA1 / SCL1引脚）
#pragma config ALTI2C2 = OFF            // 备用I2C2引脚（I2C2映射到SDA2 / SCL2引脚）
#pragma config WDTWIN = WIN25           // 看门狗窗口选择位（WDT窗口为WDT周期的25％）
// FWDT
#pragma config WDTPOST = PS32768        // 看门狗定时器后分频比（1：32,768）
#pragma config WDTPRE = PR128           // 看门狗定时器预分频器位（1：128）
#pragma config PLLKEN = ON              // PLL锁定使能位（PLL源的时钟切换将等待PLL锁定信号有效）。
#pragma config WINDIS = OFF             // 看门狗定时器窗口使能位（非窗口模式下的看门狗定时器）
#pragma config FWDTEN = OFF              // 看门狗定时器使能位（看门狗定时器始终使能）

// FOSC
#pragma config POSCMD = XT            // 主振荡器模式选择位（主振荡器禁用）
#pragma config OSCIOFNC = OFF           // OSC2引脚功能位（OSC2为时钟输出）
#pragma config IOL1WAY = ON             // 外设引脚选择配置（仅允许一次重新配置）
#pragma config FCKSM = CSDCMD           // 时钟切换模式位（时钟切换和故障安全时钟监视器都被禁用）

// FOSCSEL
#pragma config FNOSC = PRIPLL          // 带 PLL 模块的主振荡器 （XT + PLL、 HS + PLL 和 EC + PLL）
#pragma config PWMLOCK = ON             // PWM锁定使能位（某些PWM寄存器只能在按键序列之后写入）
#pragma config IESO = ON                // 双速振荡器起振使能位（使用FRC启动器件，然后切换到用户选择的振荡器源）

// FGS
#pragma config GWRP = OFF               // 通用段写保护位（通用段可写）
#pragma config GCP = OFF                // 通用段代码保护位（通用段代码保护已禁用）
#endif


