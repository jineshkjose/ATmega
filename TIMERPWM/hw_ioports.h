#ifndef HW_IOPORT_H
#define HW_IOPORT_H


#define IO_PORTA (*(volatile bit_byte_def_t *)0x3B)

#define PA   	IO_PORTA.byte
#define PA0 	IO_PORTA.bit.B0
#define PA1		IO_PORTA.bit.B1
#define PA2 	IO_PORTA.bit.B2
#define PA3 	IO_PORTA.bit.B3
#define PA4		IO_PORTA.bit.B4
#define PA5 	IO_PORTA.bit.B5
#define PA6 	IO_PORTA.bit.B6
#define PA7 	IO_PORTA.bit.B7


#define IO_PORTA_DDRA (*(volatile bit_byte_def_t *)0x3A)

#define DDRA   	IO_PORTA_DDRA.byte
#define DDRA0	IO_PORTA_DDRA.bit.B0
#define DDRA1	IO_PORTA_DDRA.bit.B1
#define DDRA2 	IO_PORTA_DDRA.bit.B2
#define DDRA3 	IO_PORTA_DDRA.bit.B3
#define DDRA4	IO_PORTA_DDRA.bit.B4
#define DDRA5 	IO_PORTA_DDRA.bit.B5
#define DDRA6 	IO_PORTA_DDRA.bit.B6
#define DDRA7 	IO_PORTA_DDRA.bit.B7


#define IO_PORTA_PINA (*(volatile bit_byte_def_t *)0x39)

#define PINA 	IO_PORTA_PINA.byte
#define PINA0	IO_PORTA_PINA.bit.B0
#define PINA1	IO_PORTA_PINA.bit.B1
#define PINA2 	IO_PORTA_PINA.bit.B2
#define PINA3 	IO_PORTA_PINA.bit.B3
#define PINA4	IO_PORTA_PINA.bit.B4
#define PINA5 	IO_PORTA_PINA.bit.B5
#define PINA6 	IO_PORTA_PINA.bit.B6
#define PINA7 	IO_PORTA_PINA.bit.B7

#define IO_PORTB (*(volatile bit_byte_def_t *)0x38)

#define PB   	IO_PORTB.byte
#define PB0 	IO_PORTB.bit.B0
#define PB1		IO_PORTB.bit.B1
#define PB2 	IO_PORTB.bit.B2
#define PB3 	IO_PORTB.bit.B3
#define PB4		IO_PORTB.bit.B4
#define PB5 	IO_PORTB.bit.B5
#define PB6 	IO_PORTB.bit.B6
#define PB7 	IO_PORTB.bit.B7

#define IO_PORTB_DDRB (*(volatile bit_byte_def_t *)0x37)

#define DDRB   	IO_PORTB_DDRB.byte
#define DDRB0	IO_PORTB_DDRB.bit.B0
#define DDRB1	IO_PORTB_DDRB.bit.B1
#define DDRB2 	IO_PORTB_DDRB.bit.B2
#define DDRB3 	IO_PORTB_DDRB.bit.B3
#define DDRB4	IO_PORTB_DDRB.bit.B4
#define DDRB5 	IO_PORTB_DDRB.bit.B5
#define DDRB6 	IO_PORTB_DDRB.bit.B6
#define DDRB7 	IO_PORTB_DDRB.bit.B7


#define IO_PORTB_PINB (*(volatile bit_byte_def_t *)0x36)

#define PINB 	IO_PORTB_PINB.byte
#define PINB0	IO_PORTB_PINB.bit.B0
#define PINB1	IO_PORTB_PINB.bit.B1
#define PINB2 	IO_PORTB_PINB.bit.B2
#define PINB3 	IO_PORTB_PINB.bit.B3
#define PINB4	IO_PORTB_PINB.bit.B4
#define PINB5 	IO_PORTB_PINB.bit.B5
#define PINB6 	IO_PORTB_PINB.bit.B6
#define PINB7 	IO_PORTB_PINB.bit.B7


#define IO_PORTC (*(volatile bit_byte_def_t *)0x35)

#define PC   	IO_PORTC.byte
#define PC0 	IO_PORTC.bit.B0
#define PC1		IO_PORTC.bit.B1
#define PC2 	IO_PORTC.bit.B2
#define PC3 	IO_PORTC.bit.B3
#define PC4		IO_PORTC.bit.B4
#define PC5 	IO_PORTC.bit.B5
#define PC6 	IO_PORTC.bit.B6
#define PC7 	IO_PORTC.bit.B7

#define IO_PORTC_DDRC (*(volatile bit_byte_def_t *)0x34)

#define DDRC   	IO_PORTC_DDRC.byte
#define DDRC0	IO_PORTC_DDRC.bit.B0
#define DDRC1	IO_PORTC_DDRC.bit.B1
#define DDRC2 	IO_PORTC_DDRC.bit.B2
#define DDRC3 	IO_PORTC_DDRC.bit.B3
#define DDRC4	IO_PORTC_DDRC.bit.B4
#define DDRC5 	IO_PORTC_DDRC.bit.B5
#define DDRC6 	IO_PORTC_DDRC.bit.B6
#define DDRC7 	IO_PORTC_DDRC.bit.B7


#define IO_PORTC_PINC (*(volatile bit_byte_def_t *)0x33)

#define PINC 	IO_PORTC_PINC.byte
#define PINC0	IO_PORTC_PINC.bit.B0
#define PINC1	IO_PORTC_PINC.bit.B1
#define PINC2 	IO_PORTC_PINC.bit.B2
#define PINC3 	IO_PORTC_PINC.bit.B3
#define PINC4	IO_PORTC_PINC.bit.B4
#define PINC5 	IO_PORTC_PINC.bit.B5
#define PINC6 	IO_PORTC_PINC.bit.B6
#define PINC7 	IO_PORTC_PINC.bit.B7


#define IO_PORTD (*(volatile bit_byte_def_t *)0x32)

#define PD   	IO_PORTD.byte
#define PD0 	IO_PORTD.bit.B0
#define PD1		IO_PORTD.bit.B1
#define PD2 	IO_PORTD.bit.B2
#define PD3 	IO_PORTD.bit.B3
#define PD4		IO_PORTD.bit.B4
#define PD5 	IO_PORTD.bit.B5
#define PD6 	IO_PORTD.bit.B6
#define PD7 	IO_PORTD.bit.B7

#define IO_PORTD_DDRD (*(volatile bit_byte_def_t *)0x31)

#define DDRD   	IO_PORTD_DDRD.byte
#define DDRD0	IO_PORTD_DDRD.bit.B0
#define DDRD1	IO_PORTD_DDRD.bit.B1
#define DDRD2 	IO_PORTD_DDRD.bit.B2
#define DDRD3 	IO_PORTD_DDRD.bit.B3
#define DDRD4	IO_PORTD_DDRD.bit.B4
#define DDRD5 	IO_PORTD_DDRD.bit.B5
#define DDRD6 	IO_PORTD_DDRD.bit.B6
#define DDRD7 	IO_PORTD_DDRD.bit.B7


#define IO_PORTD_PIND (*(volatile bit_byte_def_t *)0x30)

#define PIND 	IO_PORTD_PIND.byte
#define PIND0	IO_PORTD_PIND.bit.B0
#define PIND1	IO_PORTD_PIND.bit.B1
#define PIND2 	IO_PORTD_PIND.bit.B2
#define PIND3 	IO_PORTD_PIND.bit.B3
#define PIND4	IO_PORTD_PIND.bit.B4
#define PIND5 	IO_PORTD_PIND.bit.B5
#define PIND6 	IO_PORTD_PIND.bit.B6
#define PIND7 	IO_PORTD_PIND.bit.B7

#endif

