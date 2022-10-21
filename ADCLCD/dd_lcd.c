#include "types.h"
#include "hw_ioports.h"
#include "dd_lcd.h"


static void LCD_Delay(void)
{
 u16_t lcd_dly_ctr;
 for(lcd_dly_ctr=0;lcd_dly_ctr <=500;lcd_dly_ctr++);
}
static void Set_LCD_Clock(void)
{

    LCD_EN=0;
    LCD_EN=1;
	LCD_Delay();
	LCD_EN=0;
}

void Set_LCD_Command(u8_t lcd_cmd)
{

  LCD_COMMAND_DATA=lcd_cmd;
  LCD_RS=0;
  Set_LCD_Clock();
 
}

void Set_LCD_Data(u8_t lcd_data)
{

    LCD_COMMAND_DATA=lcd_data;
    LCD_RS=1;
    Set_LCD_Clock();
}

void Init_LCD(void)
{
Set_LCD_Command(LCD_INIT);
Set_LCD_Command(LCD_DISPLAY_ON);
Set_LCD_Command(LCD_CLEAR);
}

void Set_LCD_String(char *str)
{

  while(*str!='\0')
   {
    Set_LCD_Data(*str);
	str++;
   }
}
void Set_LCD_Num(u8_t num)
{

  u8_t d1,d2;
  d1=num/10+0x30;
  d2=num%10+0x30;
  Set_LCD_Data(d1);
  Set_LCD_Data(d2);
}





