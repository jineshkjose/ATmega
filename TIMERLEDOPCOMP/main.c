#include"types.h"
#include"hw_ioports.h"
#include"hw_timer0.h"
#include"dd_timer0.h"

 int main(void)
 {

   Config_IO();
   Config_25msec_Timer();
   Enable_Interrupts();
  
   while(1)
    {
      if(ctr_25msec>=10)
		{	  
		      LED_Toggle();
			  ctr_25msec =0;
		}
	}

     return 0;
  } 
   
