#ifndef DD_LCD_H
#define DD_LCD_H
#define LCD_COMMAND_DATA PD
#define LCD_RS PC0
#define LCD_EN PC2

#define LCD_INIT 0x38
#define LCD_DISPLAY_ON 0x0C
#define LCD_CLEAR 0x01
#define LCD_ROW1 0x80
#define LCD_ROW2 0xC0

void LCD_SET_COMMAND(u8_t);

void Set_LCD_Data(u8_t);
void LCD_STRING(u8_t *t);
void Init_LCD(void);
void Config_io(void);
void Set_LCD_Num(u16_t);
#endif 



