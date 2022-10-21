#ifndef DD_UART_H
#define DD_UART_H

//UART Control Macros
#define Enable_UART_TX()              TXEN=1  
#define Disable_UART_TX()             TXEN=0
#define Enable_UART_RX()              RXEN=1
#define Disable_UART_RX()              RXEN=0
#define Enable_UART_UDRE_Interrupt()  UDRIE=1
#define Disable_UART_UDRE_Interrupt() UDRIE=0
#define Enable_UART_TX_Interrupt()    TXCIE=1
#define Disable_UART_TX_Interrupt()   TXCIE=0
#define Enable_UART_RX_Interrupt()    RXCIE=1
#define Disable_UART_RX_Interrupt()   RXCIE=0

//UART Configuration Macros 
#define Set_UART_Default_Bit_Size()   UCSZ0=1;\
                                      UCSZ1=1;\
									  UCSZ2=0 
#define Set_UART_Default_Parity()     UPM0=0;\
                                      UPM1=0
#define Set_UART_Default_Stop_Bit()   USBS=0

//UART Status Flag Macros
#define UART_UDRE_Wait()              while(!UDRE) 
#define UART_TXC_Wait()               while(!TXC)
#define UART_RXC_FLAG()               RXC
#define Clear_UART_TXC_FLAG()         TXC=1
#define Clear_UART_RXC_FLAG()         RXC=1


#endif


