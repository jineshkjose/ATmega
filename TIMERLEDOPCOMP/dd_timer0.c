#include"types.h"
#include"hw_ioports.h"
#include"hw_timer0.h"
#include"dd_timer0.h"

u8_t ctr_25msec=0;

void  __vector_19(void) __attribute__((interrupt));
void  __vector_19(void)
{
  ctr_25msec++;
}  

void Config_25msec_Timer(void)
{
 WGM01=1; // Enable CTC
 // Timer Clock Set : 1024 Divider for 8MHZ
 CS0 = 1;
 CS1 = 0;
 CS2 = 1;
 OCR0= 195; // Count for 25ms
 TCNT0=0;   // Initialize Count Register
 OCIE0=1; // Enable Compare Match Interrupt
 
}
 
void Config_IO(void)
{

 DDRC4=1;//PORTC PIN4 as output
 DDRC5=1;//PORTC PIN5 as output
}
