#include"types.h"
#include"hw_ioports.h"
#include"dd_lcd.h"
#include"hw_uart.h"
#include"dd_uart.h"

void Config_IO(void)
{

  DDRA=0xff;
  DDRC0=1;
  DDRC2=1;
}

 
int main(void)
{

 u8_t recv_data, data;
 
  Config_IO();
  Config_UART();
  Init_LCD();
     while(1)
	   {
	     
		  Set_LCD_Command(LCD_ROW1);
	      for(data=0;data<=16;data++)
		  {
		    while((recv_data= Receive_Char())==0);
		    
		    UART_Send_Char(recv_data);
			Set_LCD_Data(recv_data);
			Set_LCD_Command(0x0f);
			
			
		  }
		  
		   Set_LCD_Command(LCD_ROW2);
	       for(data=0;data<=16;data++)
		  {
		    while((recv_data= Receive_Char())==0);

		    UART_Send_Char(recv_data);
			Set_LCD_Data(recv_data);
			Set_LCD_Command(0x0f);
					  	  
		  }
       }
        
		 return 0;
}
