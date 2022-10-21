#ifndef	HW_IOPORTS_H
#define	HW_IOPORTS_H

typedef union
{
	struct
	{
		u8_t B0:1;
		u8_t B1:1;
		u8_t B2:1;
		u8_t B3:1;
		u8_t B4:1;
		u8_t B5:1;
		u8_t B6:1;
		u8_t B7:1;
	}Bits;
	u8_t u8;
}Bit_Byte_Def_t;


#define IO_PORTA    (*(volatile Bit_Byte_Def_t *)0x3B)
#define PA		IO_PORTA.u8

#define PA0			IO_PORTA.Bits.B0
#define PA1			IO_PORTA.Bits.B1
#define PA2			IO_PORTA.Bits.B2
#define PA3			IO_PORTA.Bits.B3
#define PA4			IO_PORTA.Bits.B4
#define PA5			IO_PORTA.Bits.B5
#define PA6			IO_PORTA.Bits.B6
#define PA7			IO_PORTA.Bits.B7

#define IO_PORTB    (*(volatile Bit_Byte_Def_t *)0x38)
#define PB		IO_PORTB.u8

#define PB0			IO_PORTB.Bits.B0
#define PB1			IO_PORTB.Bits.B1
#define PB2			IO_PORTB.Bits.B2
#define PB3			IO_PORTB.Bits.B3

#define PB4			IO_PORTB.Bits.B4
#define PB5			IO_PORTB.Bits.B5
#define PB6			IO_PORTB.Bits.B6
#define PB7			IO_PORTB.Bits.B7

#define IO_PORTC    (*(volatile Bit_Byte_Def_t *)0x35)
#define PC		IO_PORTC.u8

#define PC0			IO_PORTC.Bits.B0
#define PC1			IO_PORTC.Bits.B1
#define PC2			IO_PORTC.Bits.B2
#define PC3			IO_PORTC.Bits.B3
#define PC4			IO_PORTC.Bits.B4
#define PC5			IO_PORTC.Bits.B5
#define PC6			IO_PORTC.Bits.B6
#define PC7			IO_PORTC.Bits.B7

#define IO_PORTD    (*(volatile Bit_Byte_Def_t *)0x32)
#define PD		IO_PORTD.u8

#define PD0			IO_PORTD.Bits.B0
#define PD1			IO_PORTD.Bits.B1
#define PD2			IO_PORTD.Bits.B2
#define PD3			IO_PORTD.Bits.B3
#define PD4			IO_PORTD.Bits.B4
#define PD5			IO_PORTD.Bits.B5
#define PD6			IO_PORTD.Bits.B6
#define PD7			IO_PORTD.Bits.B7


#define IO_DDRA    (*(volatile Bit_Byte_Def_t *)0x3A)
#define DDRA		IO_DDRA.u8

#define DDRA0			IO_DDRA.Bits.B0
#define DDRA1			IO_DDRA.Bits.B1
#define DDRA2			IO_DDRA.Bits.B2
#define DDRA3			IO_DDRA.Bits.B3
#define DDRA4			IO_DDRA.Bits.B4
#define DDRA5			IO_DDRA.Bits.B5
#define DDRA6			IO_DDRA.Bits.B6
#define DDRA7			IO_DDRA.Bits.B7

#define IO_DDRB    (*(volatile Bit_Byte_Def_t *)0x37)
#define DDRB		IO_DDRB.u8

#define DDRB0			IO_DDRB.Bits.B0
#define DDRB1			IO_DDRB.Bits.B1
#define DDRB2			IO_DDRB.Bits.B2
#define DDRB3			IO_DDRB.Bits.B3
#define DDRB4			IO_DDRB.Bits.B4
#define DDRB5			IO_DDRB.Bits.B5
#define DDRB6			IO_DDRB.Bits.B6
#define DDRB7			IO_DDRB.Bits.B7


#define IO_DDRC    (*(volatile Bit_Byte_Def_t *)0x34)
#define DDRC		IO_DDRC.u8

#define DDRC0			IO_DDRC.Bits.B0
#define DDRC1			IO_DDRC.Bits.B1
#define DDRC2			IO_DDRC.Bits.B2
#define DDRC3			IO_DDRC.Bits.B3
#define DDRC4			IO_DDRC.Bits.B4
#define DDRC5			IO_DDRC.Bits.B5
#define DDRC6			IO_DDRC.Bits.B6
#define DDRC7			IO_DDRC.Bits.B7

#define IO_DDRD    (*(volatile Bit_Byte_Def_t *)0x31)
#define DDRD		IO_DDRD.u8

#define DDRD0			IO_DDRD.Bits.B0
#define DDRD1			IO_DDRD.Bits.B1
#define DDRD2			IO_DDRD.Bits.B2
#define DDRD3			IO_DDRD.Bits.B3
#define DDRD4			IO_DDRD.Bits.B4
#define DDRD5			IO_DDRD.Bits.B5
#define DDRD6			IO_DDRD.Bits.B6
#define DDRD7			IO_DDRD.Bits.B7

#define IO_PINA    (*(volatile Bit_Byte_Def_t *)0x39)
#define PINA		IO_PINA.u8

#define	PINA0		IO_PINA.Bits.B0
#define	PINA1		IO_PINA.Bits.B1
#define	PINA2		IO_PINA.Bits.B2
#define	PINA3		IO_PINA.Bits.B3
#define	PINA4		IO_PINA.Bits.B4
#define	PINA5		IO_PINA.Bits.B5
#define	PINA6		IO_PINA.Bits.B6
#define	PINA7		IO_PINA.Bits.B7


#define IO_PINB    (*(volatile Bit_Byte_Def_t *)0x36)
#define PINB		IO_PINB.u8

#define	PINB0		IO_PINB.Bits.B0
#define	PINB1		IO_PINB.Bits.B1
#define	PINB2		IO_PINB.Bits.B2
#define	PINB3		IO_PINB.Bits.B3
#define	PINB4		IO_PINB.Bits.B4
#define	PINB5		IO_PINB.Bits.B5
#define	PINB6		IO_PINB.Bits.B6
#define	PINB7		IO_PINB.Bits.B7



#define IO_PINC    (*(volatile Bit_Byte_Def_t *)0x33)
#define PINC		IO_PINC.u8

#define	PINC0		IO_PINC.Bits.B0
#define	PINC1		IO_PINC.Bits.B1
#define	PINC2		IO_PINC.Bits.B2
#define	PINC3		IO_PINC.Bits.B3
#define	PINC4		IO_PINC.Bits.B4
#define	PINC5		IO_PINC.Bits.B5
#define	PINC6		IO_PINC.Bits.B6
#define	PINC7		IO_PINC.Bits.B7



#define IO_PIND    (*(volatile Bit_Byte_Def_t *)0x30)
#define PIND		IO_PIND.u8

#define	PIND0		IO_PIND.Bits.B0
#define	PIND1		IO_PIND.Bits.B1
#define	PIND2		IO_PIND.Bits.B2
#define	PIND3		IO_PIND.Bits.B3
#define	PIND4		IO_PIND.Bits.B4
#define	PIND5		IO_PIND.Bits.B5
#define	PIND6		IO_PIND.Bits.B6
#define	PIND7		IO_PIND.Bits.B7

#endif
