#include"types.h"
#include"hw_ioports.h"
#include"hw_interrupt.h"
#include"hw_adc.h"
#include"dd_adc.h"
#include"tri_colour_led.h"

u16_t P1.P2,P3,res;



void Config_IO(void)
{
	DDRC4=1;//output config
	DDRC5=1;//output config
	DDRC6=1

}

int main(void)
{
Config_IO();
 Disable_ADC_Interrupt();
 Enable_ADC();
 Set_ADC_Clock(ADC_CLOCK_DIV_BY_128);
 Set_ADC_Reference(VREF_AVCC);
 
 
 while(1)
 {
  Set_ADC_Input(ANALOG_CHANNEL1);
  Start_ADC();
  ADC_Wait();
  Clear_ADC_Flag();
  P1=Read_ADC();
  


    
  if(P1>=60)
   {
    	GREEN_LED_ON();
   }
  else if((P1>=50)&&(P1<=60))
   {
    	ORANGE_LED_ON();
   }
  else if((P1>=30)&&(P1<=50))
   {
    	RED_LED_ON();
   }
  else
   {
    	Exec_LED_Flash();
   }


  }
   return 0;
}













