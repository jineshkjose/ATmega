#include"hw_ioports.h"
#include"types.h"
#include"hw_timer0.h"
#include"dd_timer0.h"

 int main(void)
 {
   Config_IO();
   Config_Timer0();
   Enable_Interrupts();
  
     return 0;
 } 
   
