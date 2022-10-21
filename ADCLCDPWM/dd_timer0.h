#ifndef DD_TIMER0_H
#define DD_TIMER0_H

#define LED     PB3

#define  Enable_Interrupts()  __asm__ __volatile__("sei"::)  
#define  Disable_Interrupts()  __asm__ __volatile__("cli"::) 

#define TIMER0_CLK_DIV_BY_1024 5

void Config_Timer0();
void Config_IO();

#endif
