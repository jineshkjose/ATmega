#include"hw_ioports.h"
#include"types.h"

#define LED_ALL  PC
//#define BUZZER   PC4

#define KEYPAD_PLUG PIND7

#define PLUG_IN  0
#define PLUG_OUT 1

#define ON       0x00
#define OFF      0xff

void Delay(void)
{
   u16_t dly_ctr;
   for(dly_ctr=0; dly_ctr<=6000; dly_ctr++);
}

void Config_IO(void)
{
	PD7   = 1;
	DDRC  = 0xff;
	DDRD7 = 0;

}
void Keypad_Plug_Indication(void)
{
  LED_ALL=ON;
  Delay();
  LED_ALL=OFF;
  Delay();
}

int main(void)
{
 u8_t PLUGIN_FLAG=0;
 u8_t PLUGOUT_FLAG=0;
 Config_IO();
 LED_ALL=OFF;
 while(1)
 {
  if((KEYPAD_PLUG==PLUG_IN)&&(PLUGIN_FLAG==0))
  {
    Keypad_Plug_Indication();
	 PLUGIN_FLAG=1;
 	 PLUGOUT_FLAG=0;


  }
  else if((KEYPAD_PLUG==PLUG_OUT)&&(PLUGOUT_FLAG==0))
  {
	   Keypad_Plug_Indication();
	    PLUGOUT_FLAG=1;
	    PLUGIN_FLAG=0;
  } 
 } 
 return 0;
}

     
  

  

   
