#include"hw_ioports.h"
#include"types.h"
#include"hw_timer0.h"
#include"dd_timer0.h"


#define LED1     PC4
#define LED2     PC5


#define LED_Toggle()    LED2=~LED2;\
                        LED1=~LED1

#define  Enable_Interrupts()  __asm__ __volatile__("sei"::)  
#define  Disable_Interrupts()  __asm__ __volatile__("cli"::) 


#define TIMER0_CLK_DIV_BY_1024 5

#define ON       1
#define OFF      0

u8_t ctr_25msec;

void Config_25msec_Timer(void)
{

 CS0 = 1;
 CS1 = 0;
 CS2 = 1;
 TCNT0=61;
 TOIE0=1;
}
void  __vector_9(void) __attribute__((interrupt));
void  __vector_9(void)
{

  TCNT0=61;
  ctr_25msec++;

}  
 
void Config_IO(void)
{

 DDRC4=1;
 DDRC5=1;
}

 int main(void)
 {
   Config_25msec_Timer();
   Config_IO();
   Enable_Interrupts();
   ctr_25msec = 0;
   
   while(1)
    {
      if(ctr_25msec >=20)
		{	  
		      LED_Toggle();
			  ctr_25msec =0;
		}
	}
     return 0;
   } 
   
