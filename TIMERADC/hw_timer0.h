#ifndef HW_TIMER0_H
#define HW_TIMER0_H

typedef enum
{
	NO_CLK=0,
	NO_PRESCALER,
	TIMER0_CLK_DIV_BY_8,
	TIMER0_CLK_DIV_BY_64,
	TIMER0_CLK_DIV_BY_256,
	TIMER0_CLK_DIV_BY_1024,
	EXT_CLK_FALL_EDGE,
	EXT_CLK_RISE_EDGE,
}Timer0_Clk_Select_t;

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
   }bit;
    u8_t byte;
  }Timer0_Control_t;

typedef union
{
  struct
  {
   u8_t byte;
  }TCNT0;
}TCNT0_Control_t;


typedef union
{
  struct
   {
    u8_t byte;
   }OCR0;
}OCR0_Control_t;

#define TCNT0_REG  (*(volatile bit_byte_def_t *)0x52)
#define TCNT0	    TCNT0_REG.byte

#define TCCR0_REG  (*(volatile bit_byte_def_t *)0x53)
#define TCCR0	    TCCR0_REG.byte

#define CS0     TCCR0_REG.bit.B0
#define CS1     TCCR0_REG.bit.B1
#define CS2     TCCR0_REG.bit.B2
#define WGM01    TCCR0_REG.bit.B3
#define COM00    TCCR0_REG.bit.B4
#define COM01    TCCR0_REG.bit.B5
#define WGM00    TCCR0_REG.bit.B6
#define FOC0     TCCR0_REG.bit.B7

#define TIMSK_REG  (*(volatile bit_byte_def_t *)0x59)
#define TIMSK       TIMSK_REG.byte

#define TOIE0     TIMSK_REG.bit.B0
#define OCIE0     TIMSK_REG.bit.B1
#define TOIE1     TIMSK_REG.bit.B2
#define OCIE1B    TIMSK_REG.bit.B3
#define OCIE1A    TIMSK_REG.bit.B4
#define TICIE1    TIMSK_REG.bit.B5
#define TOIE2     TIMSK_REG.bit.B6
#define OCIE2     TIMSK_REG.bit.B7

#define OCR0_REG  (*(volatile bit_byte_def_t *)0x5C)
#define OCR0	   OCR0_REG.byte



#define TIFR_REG  (*(volatile bit_byte_def_t *)0x58)
#define TIFR	   TIFR_REG.byte

#define TOV0        TIFR_REG.bit.B0
#define OCF0        TIFR_REG.bit.B1
#define TOV1        TIFR_REG.bit.B2
#define OCF1B       TIFR_REG.bit.B3
#define OCF1A       TIFR_REG.bit.B4
#define ICF1        TIFR_REG.bit.B5
#define TOV2        TIFR_REG.bit.B6
#define OCF2        TIFR_REG.bit.B7

#endif








































