#include"types.h"
#include"hw_ioports.h"
#include"hw_adc.h"
#include"tri_colr_LED.h"
#include"dd_adc.h"
#include"dd_lcd.h"

void Config_IO(void)
{

  DDRC1=1;//PORTC PIN1 as output
  DDRC5=1;//PORTC PIN5 as output
  DDRC7=1;//PORTC PIN7 as output

  PA=0x00;
  //DDRA=0xff;
  DDRD=0xff;

  DDRC0=1;//PORTC PIN0 as output
  DDRC2=1;//PORTC PIN2 as output


}

u16_t adc_input1,adc_input2,adc_input3;

int main(void)
{
   
  Config_IO();
  Init_ADC();
  Init_LCD();

 Set_LCD_Command(LCD_ROW1);
 Set_LCD_String("P1   P2   P3");
 DELAY();
 DELAY();

	while(1)
	 {
              
          adc_input1=Read_Adc(ADC_INPUT1)/10;
		  adc_input2=Read_Adc(ADC_INPUT2)/10;
		  adc_input3=Read_Adc(ADC_INPUT3)/10;

		   Set_LCD_Command(LCD_ROW2);
		   Set_LCD_Num(adc_input1);
		   Set_LCD_String("  ");
	     
		   Set_LCD_Num(adc_input2);
		   Set_LCD_String("  ");
	       
		   Set_LCD_Num(adc_input3);
           
		            		  
		  if(( adc_input3& adc_input2& adc_input3)>60)        
		  {
             GREEN_LED_ON();
			 
          }
	  	   
		 else if(((adc_input1& adc_input2& adc_input3)>=50)&&((adc_input1& adc_input2& adc_input3)<=60))        
		  {
             ORANGE_LED_ON();
			 
          }
	  	  
		 else if((( adc_input1&adc_input2&adc_input3)>=30)&&(( adc_input1& adc_input2& adc_input3)<=50))        
		  {
             RED_LED_ON();
			
          }
	  	   
        else
		 {

		  RED_LED_FLASH();
		  APP_Delay();
		 }

    }
  
   return 0; 
       
}            
      
void DELAY(void)
{
 u16_t dly_ctr;
 for(dly_ctr=0;dly_ctr<=60000;dly_ctr++);
}

	  


 
