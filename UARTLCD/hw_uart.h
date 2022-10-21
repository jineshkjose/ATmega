#ifndef HW_UART_H
#define HW_UART_H


//FOR UART INTT
#define U_UDR (*(volatile bit_byte_def_t *)0x2c)
#define UDR	U_UDR.byte

#define U_UCSRA (*(volatile bit_byte_def_t *)0x2B)
#define UCSRA	U_UCSRA.byte

#define MPCM   U_UCSRA.bit.B0
#define U2X    U_UCSRA.bit.B1
#define PE     U_UCSRA.bit.B2
#define DOR    U_UCSRA.bit.B3
#define FE     U_UCSRA.bit.B4
#define UDRE   U_UCSRA.bit.B5
#define TXC    U_UCSRA.bit.B6
#define RXC    U_UCSRA.bit.B7

#define U_UCSRB (*(volatile bit_byte_def_t *)0x2A)
#define UCSRB	U_UCSRB.byte

#define TXB8   U_UCSRB.bit.B0
#define RXB8   U_UCSRB.bit.B1
#define UCSZ2  U_UCSRB.bit.B2
#define TXEN   U_UCSRB.bit.B3
#define RXEN   U_UCSRB.bit.B4
#define UDRIE  U_UCSRB.bit.B5
#define TXCIE  U_UCSRB.bit.B6
#define RXCIE  U_UCSRB.bit.B7

#define U_UCSRC (*(volatile bit_byte_def_t *)0x40)
#define UCSRC	U_UCSRC.byte

#define UCPOL  U_UCSRC.bit.B0
#define UCSZ0  U_UCSRC.bit.B1
#define UCSZ1  U_UCSRC.bit.B2
#define USBS   U_UCSRC.bit.B3
#define UPM0   U_UCSRC.bit.B4
#define UPM1   U_UCSRC.bit.B5
#define UMSEL  U_UCSRC.bit.B6
#define URSEL  U_UCSRC.bit.B7

#define U_UBRRH (*(volatile bit_byte_def_t *)0x40)
#define UBRRH	U_UBRRH.byte

#define U_UBRRL (*(volatile bit_byte_def_t *)0x29)
#define UBRRL	U_UBRRL.byte


#endif
