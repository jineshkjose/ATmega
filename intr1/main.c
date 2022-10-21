#include"types.h"
#include"hw_ioport.h"
#include"hw_interrupt.h"
#include"dd_interrupt.h"
#define   LED  PB
#define   ON  0x00
#define   OFF 0xFF
u8_t int_flag;
void Config_Io(void);
void config(void)
{
 DDRB=0xFF;
 PD2=1;
}
void delay(void)
{
s16_t d;
for(d=0;d<=30000;d++);
}
int main(void)
{ 
  config();
  Config_Ext_INT0();
  LED=OFF;
  int_flag=0;
  while(1)
  {
  while(!int_flag);
  {
  int_flag=0;
  LED=ON;
  Disable_INT0();
  delay();
  delay();
  Enable_INT0();
  }
  }
  return(0);
  
}


