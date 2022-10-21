#include"types.h"
#include"hw_uart.h"
#include"dd_uart.h"

void Config_URT(void)
{

 Set_UART_Default_Bit_Size();
 Set_UART_Default_Parity();
 Set_UART_Default_Stop_Bit();
 Set_UART_Default_Baudrate();
 Enable_UART_TX();
 Disable_UART_RX();
 Disable_UART_UDRE_Interrupt();
 Disable_UART_TX_Interrupt();
 Disable_UART_RX_Interrupt();
}

void UART_Send_Char(char char_data)
{

 UART_UDRE_Wait();//If Buffer is not empty,wait
 UDRE=char_data;//Load TX Buffer
 UART_TXC_Wait();//Wait for transmission complete
 Clear_UART_TXC_Flag();//Clear the flag
}

void UART_Send_String(char *str)
{

 while(*str!=NULL)
 {
  UART_Send_Char(*str);
  str++;
 }
}

char Receive_Char(void)
{

 u8_t lytemp=0;
 if(UART_RXC_FLAG)//If data is received(RXC=1)
  {
    lytemp=UDR;
  }
  else
   {
    lytemp=0;
   }
   return(lytemp);
}




