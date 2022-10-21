#include"types.h"
#include"hw_ioports.h"
#include"dd_adc.h"
#include"hw_adc2.h"
#include"dd_lcd.h"

int main(void)

{

Config_io();

Init_ADC();
Init_LCD();

while(1)
{
u16_t count;
LCD_SET_COMMAND(LCD_ROW1);
LCD_STRING("Sasi Voltmeter");
count=Read_Adc(ADC_INPUT2);
LCD_SET_COMMAND(LCD_ROW2);
Set_LCD_Num(count);

}

return 0;
}

