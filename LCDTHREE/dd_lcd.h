#ifndef DD_LCD_H
#define DD_LCD_H

#define NULL             '\0'
#define LCD_COMMAND_DATA PA
#define LCD_RS           PC0
#define LCD_EN           PC2

#define LCD_INIT       0x38
#define LCD_DISPLAY_ON 0x0C
#define LCD_CLEAR      0x01
#define LCD_ROW1       0x80
#define LCD_ROW2       0xC0

void Set_LCD_Command(u16_t lcd_cmd);
void Set_LCD_Data(u16_t lcd_data);
void Init_LCD(void);
void Config_io(void);
void Set_LCD_String(char *str);
void Set_LCD_Num(u16_t num);
void App_Delay(void);
void DELAY(void);


#endif 



