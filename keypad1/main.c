#include"hw_ioports.h"
#include"types.h"
#include"hw_keypad.h"
#include"dd_keypad.h"

void Config_IO(void);
int main(void)
 {
   u8_t key;
   Config_IO();
   LED0=OFF;
   LED1=OFF;
   LED2=OFF;
   LED3=OFF;
  
  while(1)
  {
   while(!(key=Read_Key()));
    
  // LED=~(key%10); 

   if(key=='0')
	 {
	  LED0=OFF;
	  LED1=OFF;
	  LED2=OFF;
	  LED3=OFF;
	 }
   else if(key=='1')
	 {
	  LED0=ON;
	  LED1=OFF;
	  LED2=OFF;
	  LED3=OFF;
     }
   else if(key=='2')
	 {
	  LED0=OFF;
	  LED1=ON;
	  LED2=OFF;
	  LED3=OFF;
     }
   else if(key=='3')
	 {
	  LED0=ON;
	  LED1=ON;
	  LED2=OFF;
	  LED3=OFF;
     }
   else if(key=='4')
	 {
	  LED0=OFF;
	  LED1=OFF;
	  LED2=ON;
	  LED3=OFF;
     }
  else if(key=='5')
	 {
	  LED0=ON;
	  LED1=OFF;
	  LED2=ON;
	  LED3=OFF;
     }
   else if(key=='6')
	 {
	  LED0=OFF;
	  LED1=ON;
	  LED2=ON;
	  LED3=OFF;
     }
   else if(key=='7')
	 {
	  LED0=ON;
	  LED1=ON;
	  LED2=ON;
	  LED3=OFF;
     }
   else if(key=='8')
	 {
	  LED0=OFF;
	  LED1=OFF;
	  LED2=OFF;
	  LED3=ON;
     }	    
   else if(key=='9')
	 {
	  LED0=ON;
	  LED1=OFF;
	  LED2=OFF;
	  LED3=ON;
     }
   else if(key=='*')
	 {
	  LED0=OFF;
	  LED1=ON;
	  LED2=OFF;
	  LED3=ON;
     }
   else if(key=='9')
	 {
	  LED0=ON;
	  LED1=ON;
	  LED2=OFF;
	  LED3=ON;
     }
  //else
  //;
  
  }
   return 0;
 }
void Config_IO(void)
{

 PA0=1;
 PA1=1;
 PA2=1;
 PA3=1;
PA4=1;
PA5=1;
PA6=1;
PA7=1;
 DDRA4=0;
 DDRA5=0;
 DDRA6=0;

 DDRA0=1;
 DDRA1=1;
 DDRA2=1;
 DDRA3=1;

 DDRC0=1;
 DDRC1=1;
 DDRC2=1;
 DDRC3=1;

}

