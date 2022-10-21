#ifndef DD_TIMER0_H
#define DD_TIMER0_H

#define LED1     PC4
#define LED2     PC5

#define LED_Toggle()    LED2=~LED2;\
                        LED1=~LED1

#define  Enable_Interrupts()  __asm__ __volatile__("sei"::)  
#define  Disable_Interrupts()  __asm__ __volatile__("cli"::) 

#define TIMER0_CLK_DIV_BY_1024 5

void Config_25msec_Timer();
void Config_IO();
//void  __vector_19();
extern u8_t ctr_25msec;


#endif
