#ifndef HW_IOPORT_H
#define HW_IOPORT_H


#define IO_PORTA (*(volatile Register_t *)0x3B)

#define PA   	IO_PORTA.Byte
#define PA0 	IO_PORTA.Bit.B0
#define PA1		IO_PORTA.Bit.B1
#define PA2 	IO_PORTA.Bit.B2
#define PA3 	IO_PORTA.Bit.B3
#define PA4		IO_PORTA.Bit.B4
#define PA5 	IO_PORTA.Bit.B5
#define PA6 	IO_PORTA.Bit.B6
#define PA7 	IO_PORTA.Bit.B7


#define IO_PORTA_DDRA (*(volatile Register_t *)0x3A)

#define DDRA   	IO_PORTA_DDRA.Byte
#define DDA0	IO_PORTA_DDRA.Bit.B0
#define DDA1	IO_PORTA_DDRA.Bit.B1
#define DDA2 	IO_PORTA_DDRA.Bit.B2
#define DDA3 	IO_PORTA_DDRA.Bit.B3
#define DDA4	IO_PORTA_DDRA.Bit.B4
#define DDA5 	IO_PORTA_DDRA.Bit.B5
#define DDA6 	IO_PORTA_DDRA.Bit.B6
#define DDA7 	IO_PORTA_DDRA.Bit.B7


#define IO_PORTA_PINA (*(volatile Register_t *)0x39)

#define PINA 	IO_PORTA_PINA.Byte
#define PINA0	IO_PORTA_PINA.Bit.B0
#define PINA1	IO_PORTA_PINA.Bit.B1
#define PINA2 	IO_PORTA_PINA.Bit.B2
#define PINA3 	IO_PORTA_PINA.Bit.B3
#define PINA4	IO_PORTA_PINA.Bit.B4
#define PINA5 	IO_PORTA_PINA.Bit.B5
#define PINA6 	IO_PORTA_PINA.Bit.B6
#define PINA7 	IO_PORTA_PINA.Bit.B7

#define IO_PORTB (*(volatile Register_t *)0x38)

#define PB   	IO_PORTB.Byte
#define PB0 	IO_PORTB.Bit.B0
#define PB1		IO_PORTB.Bit.B1
#define PB2 	IO_PORTB.Bit.B2
#define PB3 	IO_PORTB.Bit.B3
#define PB4		IO_PORTB.Bit.B4
#define PB5 	IO_PORTB.Bit.B5
#define PB6 	IO_PORTB.Bit.B6
#define PB7 	IO_PORTB.Bit.B7

#define IO_PORTB_DDRB (*(volatile Register_t *)0x37)

#define DDRB   	IO_PORTB_DDRB.Byte
#define DDB0	IO_PORTB_DDRB.Bit.B0
#define DDB1	IO_PORTB_DDRB.Bit.B1
#define DDB2 	IO_PORTB_DDRB.Bit.B2
#define DDB3 	IO_PORTB_DDRB.Bit.B3
#define DDB4	IO_PORTB_DDRB.Bit.B4
#define DDB5 	IO_PORTB_DDRB.Bit.B5
#define DDB6 	IO_PORTB_DDRB.Bit.B6
#define DDB7 	IO_PORTB_DDRB.Bit.B7


#define IO_PORTB_PINB (*(volatile Register_t *)0x36)

#define PINB 	IO_PORTB_PINB.Byte
#define PINB0	IO_PORTB_PINB.Bit.B0
#define PINB1	IO_PORTB_PINB.Bit.B1
#define PINB2 	IO_PORTB_PINB.Bit.B2
#define PINB3 	IO_PORTB_PINB.Bit.B3
#define PINB4	IO_PORTB_PINB.Bit.B4
#define PINB5 	IO_PORTB_PINB.Bit.B5
#define PINB6 	IO_PORTB_PINB.Bit.B6
#define PINB7 	IO_PORTB_PINB.Bit.B7


#define IO_PORTC (*(volatile Register_t *)0x35)

#define PC   	IO_PORTC.Byte
#define PC0 	IO_PORTC.Bit.B0
#define PC1		IO_PORTC.Bit.B1
#define PC2 	IO_PORTC.Bit.B2
#define PC3 	IO_PORTC.Bit.B3
#define PC4		IO_PORTC.Bit.B4
#define PC5 	IO_PORTC.Bit.B5
#define PC6 	IO_PORTC.Bit.B6
#define PC7 	IO_PORTC.Bit.B7

#define IO_PORTC_DDRC (*(volatile Register_t *)0x34)

#define DDRC   	IO_PORTC_DDRC.Byte
#define DDC0	IO_PORTC_DDRC.Bit.B0
#define DDC1	IO_PORTC_DDRC.Bit.B1
#define DDC2 	IO_PORTC_DDRC.Bit.B2
#define DDC3 	IO_PORTC_DDRC.Bit.B3
#define DDC4	IO_PORTC_DDRC.Bit.B4
#define DDC5 	IO_PORTC_DDRC.Bit.B5
#define DDC6 	IO_PORTC_DDRC.Bit.B6
#define DDC7 	IO_PORTC_DDRC.Bit.B7


#define IO_PORTC_PINC (*(volatile Register_t *)0x33)

#define PINC 	IO_PORTC_PINC.Byte
#define PINC0	IO_PORTC_PINC.Bit.B0
#define PINC1	IO_PORTC_PINC.Bit.B1
#define PINC2 	IO_PORTC_PINC.Bit.B2
#define PINC3 	IO_PORTC_PINC.Bit.B3
#define PINC4	IO_PORTC_PINC.Bit.B4
#define PINC5 	IO_PORTC_PINC.Bit.B5
#define PINC6 	IO_PORTC_PINC.Bit.B6
#define PINC7 	IO_PORTC_PINC.Bit.B7


#define IO_PORTD (*(volatile Register_t *)0x32)

#define PD   	IO_PORTD.Byte
#define PD0 	IO_PORTD.Bit.B0
#define PD1		IO_PORTD.Bit.B1
#define PD2 	IO_PORTD.Bit.B2
#define PD3 	IO_PORTD.Bit.B3
#define PD4		IO_PORTD.Bit.B4
#define PD5 	IO_PORTD.Bit.B5
#define PD6 	IO_PORTD.Bit.B6
#define PD7 	IO_PORTD.Bit.B7

#define IO_PORTD_DDRD (*(volatile Register_t *)0x31)

#define DDRD   	IO_PORTD_DDRD.Byte
#define DDD0	IO_PORTD_DDRD.Bit.B0
#define DDD1	IO_PORTD_DDRD.Bit.B1
#define DDD2 	IO_PORTD_DDRD.Bit.B2
#define DDD3 	IO_PORTD_DDRD.Bit.B3
#define DDD4	IO_PORTD_DDRD.Bit.B4
#define DDD5 	IO_PORTD_DDRD.Bit.B5
#define DDD6 	IO_PORTD_DDRD.Bit.B6
#define DDD7 	IO_PORTD_DDRD.Bit.B7


#define IO_PORTD_PIND (*(volatile Register_t *)0x30)

#define PIND 	IO_PORTD_PIND.Byte
#define PIND0	IO_PORTD_PIND.Bit.B0
#define PIND1	IO_PORTD_PIND.Bit.B1
#define PIND2 	IO_PORTD_PIND.Bit.B2
#define PIND3 	IO_PORTD_PIND.Bit.B3
#define PIND4	IO_PORTD_PIND.Bit.B4
#define PIND5 	IO_PORTD_PIND.Bit.B5
#define PIND6 	IO_PORTD_PIND.Bit.B6
#define PIND7 	IO_PORTD_PIND.Bit.B7

#endif
