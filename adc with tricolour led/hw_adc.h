#ifndef HW_ADC_H
#define HW_ADC_H


typedef union
{
	struct 
	{
		u8_t B2_0:3;
		u8_t B3  :1;
		u8_t B4  :1;
		u8_t B5  :1;
		u8_t B6  :1;
		u8_t B7  :1;
	}Bits;
	u8_t Byte;
}ADCSRA_Reg_t;

typedef union
{
	struct 
	{
		u8_t B4_0:5;
		u8_t B5  :1;
		u8_t B7_6:2;
	}Bits;
	u8_t Byte;
}ADMUX_Reg_t;


#define ADMUX_Reg  (*(volatile ADMUX_Reg_t*)(0x27))
#define ADCSRA_Reg (*(volatile ADCSRA_Reg_t*)(0x26))
#define ADC_H 	   (*(volatile u8_t *)(0x25))
#define ADC_L 	   (*(volatile u8_t *)(0x24))


#define ADMUX ADMUX_Reg.Byte
#define REFS  ADMUX_Reg.Bits.B7_6
#define ADLAR ADMUX_Reg.Bits.B5
#define MUX   ADMUX_Reg.Bits.B4_0


#define ADCSRA ADCSRA_Reg.Byte
#define ADEN   ADCSRA_Reg.Bits.B7
#define ADSC   ADCSRA_Reg.Bits.B6
#define ADATE  ADCSRA_Reg.Bits.B5
#define ADIF   ADCSRA_Reg.Bits.B4
#define ADIE   ADCSRA_Reg.Bits.B3
#define ADPS   ADCSRA_Reg.Bits.B2_0



#endif

