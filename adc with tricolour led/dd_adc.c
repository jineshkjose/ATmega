#include "types.h"
#include "hw_adc.h"
#include "dd_adc.h"

u16_t P1,P2,P3;

void Set_ADC_Clock(adc_clock_select_t adc_clock)
{
	ADPS=adc_clock;
}

void Set_ADC_Reference(adc_ref_select_t ref_volts)
{
	REFS=ref_volts;
}

void Set_ADC_Input(adc_channel_select_t adc_input)
{
	MUX=adc_input;
}

u16_t Read_ADC(void)
{
	u16_t adc_counts=0;
	u8_t adc_low,adc_high;

	adc_low=ADC_L;
	adc_high=ADC_H;
	adc_counts=adc_high;
	adc_counts=adc_counts<<8;
	adc_counts=adc_counts|adc_low;
	return (adc_counts);
}


