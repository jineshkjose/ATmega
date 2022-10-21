#ifndef DD_ADC_H
#define DD_ADC_H

#define ADC_Enable()            ADEN=1
#define ADC_Disable()           ADEN=0

#define ADC_Start()             ADSC=1
#define ADC_Stop()              ADSC=0

#define AD_Autotriggerenabe()    ADATE=1
#define ADC_Autotriggerdisable() ADATE=0

#define ADC_Wait()              while(!ADIF)
#define ADC_Clear_Flag()        ADIF=1
#define ADC_Ready_Flag()        ADIF=0

#define ADC_Enable_Interrupt()   ADIE=1
#define ADC_Disable_Interrupt()  ADIE=0

#define ADC_CLOCK_DIV_BY_2   1
#define ADC_CLOCK_DIV_BY_4   2
#define ADC_CLOCK_DIV_BY_8   3
#define ADC_CLOCK_DIV_BY_16  4
#define ADC_CLOCK_DIV_BY_32  5
#define ADC_CLOCK_DIV_BY_64  6
#define ADC_CLOCK_DIV_BY_128 7

#define ADC_VrefAREF  0
#define ADC_Vref_AVCC  1
#define ADC_Vref_2_56V 3

#define ADC_INPUT0 0
#define ADC_INPUT1 1
#define ADC_INPUT2 2
#define ADC_INPUT3 3
#define ADC_INPUT4 4
#define ADC_INPUT5 5
#define ADC_INPUT6 6
#define ADC_INPUT7 7


u16_t Read_Adc(u8_t);
void Init_ADC(void);
void ADC_Set_Vref(u8_t);
void ADC_Select_Input(u8_t); 
void ADC_Set_Clock(u8_t);
#endif






