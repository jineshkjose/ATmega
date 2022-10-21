#ifndef HW_ADC_H
#define HW_ADC_H


typedef union
{
	struct
	{
		u8_t B0_4:5;
		u8_t B5:1;
		u8_t B6_7:2;
	}Admux;
	
	u8_t Byte;
}Admux_t;


typedef union
{
	 struct
	{
		u8_t B0_2:3;
		u8_t B3:1;
		u8_t B4:1;
		u8_t B5:1;
		u8_t B6:1;
		u8_t B7:1;
	}Adcsra;

	u8_t Byte;
}Adcsra_t;


typedef union
{
	struct
	{
		u8_t Byte;
	}ADH;

}ADCH_t;

typedef union
{
	 struct
	{
		u8_t Byte;
	}ADL;

}ADCL_t;

#define ADMUX_REG (*(volatile Admux_t *)0x27)
#define ADMUX		ADMUX_REG.Byte

#define REFS 		ADMUX_REG.Admux.B6_7
#define ADLAR		ADMUX_REG.Admux.B5
#define MUX		ADMUX_REG.Admux.B0_4

#define ADCSRA_REG (*(volatile Adcsra_t *)0x26)
#define ADCSRA		ADCSRA_REG.Byte

#define ADEN		ADCSRA_REG.Adcsra.B7
#define ADSC		ADCSRA_REG.Adcsra.B6
#define ADATE		ADCSRA_REG.Adcsra.B5
#define ADIE		ADCSRA_REG.Adcsra.B3
#define ADIF		ADCSRA_REG.Adcsra.B4
#define ADPS		ADCSRA_REG.Adcsra.B0_2

#define ADCH_REG (*(volatile ADCH_t *)0x25)
#define ADCH		ADCH_REG.ADH.Byte
	
#define ADCL_REG (*(volatile ADCL_t *)0x24)
#define ADCL		ADCL_REG.ADL.Byte


#endif




