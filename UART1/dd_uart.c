/*This file is the device driver for the on chip UART*/
/*File contains All the functions neccessory for the communication*/
/*File supports ATmega16 controller*/
/*File is written By "Ravi.K.L" on 23rd Aug and Modified On 29th Aug*/

#include"types.h"
#include"hw_uart.h"
#include"dd_uart.h"


/*Intialisation of UART with 9600 buad,8 data bit,1 STAR bit and 1 STOP bit*/

void Config_UART(void)
{
UART_Enable_Transmit();
UART_Enable_Reciever();
UART_Sel_Mode();		//Asynchronous mode
UPM0=0;
UPM1=0;
UART_Sel_Stop_Bit();    //1 stop bit
UART_Sel_Data_Size();   //8 bit data size
UBRRH=00;
UBRRL=71;				//9600 Baud rate
RXCIE=0;                //All inturrupts are dissabled
TXCIE=0;
UDRIE=0;


         
}
/*This Function sends the data to the target through the UART*/

void UART_Send_Char(u8_t dat_Out)
{
while(!UDRE);
UDR=dat_Out;
while(!TXC);
TXC=1;
}
/*This Function sends the String to the target through the UART*/
void UART_Send_String(char *ctr)
{
while(*ctr!='\0')
{
 UART_Send_Char(*ctr);
  ctr++;
}
}

/*This Function Receives the data from the target through the UART*/
u8_t Receive_Char(void)
{

	u8_t temp;
	
	if(RXC)
	{
	
		temp = UDR;
	
	}
	else
	{
	
		temp = 0;

	}

	return temp;
}


u8_t UART_Receive_BCD(void)//Receives bcd number from the Serial port
{
 u8_t temp,bcd_dat;
 temp=Receive_Char();
 temp=(temp-0x30)*0x10;
 bcd_dat=Receive_Char();
 bcd_dat=(bcd_dat-0x30)|temp;
 return(bcd_dat);
 }

