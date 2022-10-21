#ifndef DD_UART_H
#define DD_UART_H

#define UART_Sel_Mode()    		UMSEL=0
#define UART_Sel_Stop_Bit()		USBS=0
#define UART_Sel_Data_Size()	UCSZ2=0;\
								UCSZ1=1;\
								UCSZ0=1
#define UART_Sel_Pol()          UCPOL=0
#define UART_Enable_Reciever()	RXEN=1
#define UART_Enable_Transmit()  TXEN=1
#define UART_Disable_Reciever()	RXEN=0
#define UART_Disable_Transmit() TXEN=0

void Init_UART(void);
//void UART_Send_Data(u8_t);
void UART_Send_Char(u8_t dat_Out);
void UART_Send_String(char *str);
void Config_UART(void);
u8_t Receive_Char(void);
u8_t UART_Recieve_Data(void);
u8_t UART_Receive_BCD(void);
#endif
