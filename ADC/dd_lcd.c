#include "types.h"
#include "hw_ioports.h"
#include "dd_lcd.h"

static void LCD_Delay(void)
{
 u16_t lcdcount;
 for(lcdcount=0;lcdcount <500;lcdcount++);
}
void LCD_SET_COMMAND(u8_t ldc_cmd)
{

    LCD_COMMAND_DATA=ldc_cmd;
    LCD_RS=0;
    LCD_EN=0;
    LCD_EN=1;
	LCD_Delay();
	LCD_EN=0;
}
void Set_LCD_Data(u8_t ldc_data)
{

    LCD_COMMAND_DATA=ldc_data;
     LCD_RS=1;
     LCD_EN=0;
     LCD_EN=1;
	 LCD_Delay();
	 LCD_EN=0;
}

void Set_LCD_Num(u16_t num)
	{
	u8_t n1,n2,n3,n4;
	num=num*5;
	n1=num/1000+0x30;
	num=num%1000;

	n2=num/100+0x30;
	num=num%100;

	n3=num/10+0x30;
	n4=num%10+0x30;
	Set_LCD_Data(n1);
	Set_LCD_Data('.');
	
	Set_LCD_Data(n2);
	
	Set_LCD_Data(n3);

    LCD_STRING("Volts");
	
	}

void Config_io(void)
{ 
 
  
 DDRD=0xff;//Enable PORTD pull_ups
 DDRC0=1;//PORTC PIN0 as output
 DDRC2=1;//PORTC PIN2 as output
 

 }


void Init_LCD(void)
{
LCD_SET_COMMAND(LCD_INIT);
LCD_SET_COMMAND(LCD_DISPLAY_ON);
LCD_SET_COMMAND(LCD_CLEAR);
}

void LCD_STRING(u8_t *t)
{
while(*t!='\0')
{
 Set_LCD_Data(*t);
 t++;
 }
}

