#ifndef DD_KEYPAD_H
#define DD_KEYPAD_H
#define ACTIVATE_ROW0()    PA0=0;\
                  PA1=1;\
                  PA2=1;\
                  PA3=1

#define ACTIVATE_ROW1()    PA0=1;\
                  PA1=0;\
                  PA2=1;\
                  PA3=1

#define ACTIVATE_ROW2()    PA0=1;\
                  PA1=1;\
                  PA2=0;\
                  PA3=1

#define ACTIVATE_ROW3()    PA0=1;\
                  PA1=1;\
                  PA2=1;\
                  PA3=0

void Delay(void);
u8_t Read_Key(void);
void Config_IO(void);
#endif
