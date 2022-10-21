#include"hw_ioports.h"
#include"types.h"

#define LED0        PA0
#define LED1        PA1
#define LED2        PA2
#define LED3        PA3

#define KEYPAD_PRESSED PIND

#define ON       0x00
#define OFF      0xff

void Delay(void)
{
   u16_t dly_ctr;
   for(dly_ctr=0; dly_ctr<=60000; dly_ctr++);
}

void Config_IO(void)
{
	PD     = 1;

	DDRA0  = 1;
	DDRA1  = 1;
	DDRA2  = 1;
	DDRA3  = 1;

	DDRD   = 0;
}
int main(void)
{

  Config_IO();
  Delay();
  while(1)
    {
	 
  
