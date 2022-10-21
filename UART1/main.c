#include"types.h"
#include"hw_uart.h"
#include"dd_uart.h"


int main(void)
{
  
  u8_t rec_char;
  
  Config_UART();
  

  UART_Send_String("SASIKALA"); 
  while(1)
   {

     rec_char=Receive_Char();
	 if(rec_char=='a')
	  {
	   UART_Send_String("SASIKALA");
	  }
    }
	  return 0;
}
