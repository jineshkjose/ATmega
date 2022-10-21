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

//#define Set_LCD_Command 0x0F
void Set_LCD_Command(u8_t lcd_cmd);
void Set_LCD_Data(u8_t lcd_data);
void Init_LCD(void);
void Config_Io(void);
void Set_LCD_String(char *str);
void Set_LCD_Num(u8_t num);
void APP_Delay(void);
void DELAY(void);


#endif 



