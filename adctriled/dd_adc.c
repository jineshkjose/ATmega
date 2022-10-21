#include"types.h"
#include"hw_adc.h"
#include"dd_adc.h"

u16_t Read_Adc(u8_t input_channel)
{
 
  u8_t adc_high,adc_low;
  u16_t adc_count=0;
  ADC_Select_Input(input_channel);
  ADC_Start();
  ADC_Wait();
  adc_low=ADCL;
  adc_high=ADCH;
  ADC_Clear_Flag();
  adc_count=adc_high;
  adc_count=adc_count<<8;
  adc_count=adc_count|adc_low;
  return(adc_count);
}
void Init_ADC(void)
{

  ADC_Enable();
  ADC_Autotriggerdisable();
  ADC_Disable_Interrupt();
  ADC_Set_Clock(ADC_CLOCK_DIV_BY_128);
  ADC_Set_Vref(ADC_Vref_AVCC);
}

void ADC_Set_Clock(u8_t prescaler)
{
 ADPS=prescaler;
}
void ADC_Set_Vref(u8_t vref)
{

 REFS=vref;

}
void ADC_Select_Input(u8_t input)
{
  
   MUX=input;
}
