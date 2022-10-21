/*File dfines all the Functions for the External Inerrupts 0,1,2*/
/*The Functions of this file can be used in application program 
 along with the hw_interrupt.h and dd_interrupt.h files*/

/* !Cuation... External Interrupt2 can be used only with two Edges i.e.
falling and rising Edges but the "Set_Ext_Intr_Trigger()" funtion is 
comman for all interrupts Be careful while using the fuction*/

#include"types.h"
#include"hw_ioport.h"
#include"hw_interrupt.h"
#include"dd_interrupt.h"
u8_t int_flag;


void Set_Ext_Intr_Trigger(Int_Num_t num,Int_Trig_t edge)
{
 switch(num)
 {
  case 0:ISC0=edge; 
  break;
  case 1:ISC1=edge;
  break;
  case 2:if(edge==FALL_EDGE)
	           {
			     ISC2=0;			   
			    } 
			   else if(edge==RISE_EDGE)
			    {
			    ISC2=1;
			    }
  break;
 }
 
 }
 
void Config_Ext_INT0(void)
{
 Enable_Interrupts();
 Set_Ext_Intr_Trigger(INT0,ANY_EDGE);
 Enable_INT0();
}


void __vector_1(void)__attribute__((interrupt));
void __vector_1(void)
{
 Disable_INT0();
 int_flag=1;
}

