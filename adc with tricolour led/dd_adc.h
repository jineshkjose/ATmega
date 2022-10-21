#ifndef DD_ADC_H
#define DD_ADC_H


#define Enable_ADC() 	ADEN=1
#define Disable_ADC() 	ADEN=0

#define Start_ADC() 	ADSC=1

#define Enable_ADC_Interrupt() ADIE=1
#define Disable_ADC_Interrupt() ADIE=0

#define ADC_Wait() while(!ADIF)  
#define Clear_ADC_Flag() ADIF=1


typedef enum
{
	ADC_CLOCK_DIV_BY_2=1,
	ADC_CLOCK_DIV_BY_4,
	ADC_CLOCK_DIV_BY_8,
	ADC_CLOCK_DIV_BY_16,
	ADC_CLOCK_DIV_BY_32,
	ADC_CLOCK_DIV_BY_64,
	ADC_CLOCK_DIV_BY_128
}adc_clock_select_t;



typedef enum
{
	ANALOG_CHANNEL0,
	ANALOG_CHANNEL1,
	ANALOG_CHANNEL2,
	ANALOG_CHANNEL3,
	ANALOG_CHANNEL4,
	ANALOG_CHANNEL5,
	ANALOG_CHANNEL6,
	ANALOG_CHANNEL7
}adc_channel_select_t;



typedef enum
{
	VREF_EXTERNAL,
	VREF_AVCC,
	VREF_RESERVED,
	VREF_INTERNAL_2_56V
}adc_ref_select_t;



void Set_ADC_Clock(adc_clock_select_t adc_clock);
void Set_ADC_Reference(adc_ref_select_t ref_volts);
void Set_ADC_Input(adc_channel_select_t adc_input);
u16_t Read_ADC(void);
extern u16_t P1,P2,P3;
#endif




