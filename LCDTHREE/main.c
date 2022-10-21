#include"types.h"
#include"hw_ioports.h"
#include"dd_lcd.h"

void DELAY(void)
{

 u16_t lcddly;
 for(lcddly=0;lcddly<=50000;lcddly++);
}
void Config_IO(void)
{

  DDRA=0xff;
  DDRC0=1;
  DDRC2=1;

}

int main(void)
{

 u16_t count=0;
 Config_IO();
 Init_LCD();

 Set_LCD_Command(LCD_ROW1);
 Set_LCD_String("UPCOUNTER");
 DELAY();
  //DELAY();

   while(1)
    {
	          
	   Set_LCD_Command(LCD_ROW2);
	   Set_LCD_Num(count);
	   App_Delay();
	   //App_Delay();
	   //App_Delay();

	   count++;
	   if(count==999)
	    {
          count=0;
        }
	}
	return 0;
}		 
void App_Delay(void)
{

 u16_t dly_ctr;
 for(dly_ctr=0;dly_ctr<=60000;dly_ctr++);
}

