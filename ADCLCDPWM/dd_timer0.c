#include"types.h"
#include"hw_ioports.h"
#include"hw_timer0.h"
#include"dd_timer0.h"

void Config_Timer0(void)
{
 
 WGM00=1;
 WGM01=1; // Enable  fast PWM
 //Timer Clock Set : 256 Divider for 8MHZ
 CS0 = 0;
 CS1 = 0;
 CS2 = 1;
 TCNT0=0;// Initialize Count Register 
 COM00=0;//Fast PWM mode  non_inverting  
 COM01=1;
  
}
 
void Config_IO(void)
{

 PA=0xff;;//PORTA as pull_ups 
 DDRA=0x00;//PORA as input
 DDRB3=1;//PORTB PIN3 as output for OC0
 DDRC=0xff;//PORTD as LCD_command_data
 DDRB0=1;//PORTC PIN0 as output
 DDRB2=1;//PORTC PIN2 as output

}
