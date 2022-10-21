/*File dfines all the Macros and function prototype for the External Inerrupts 0,1,2*/
/*For Interrupt Trigger select Spetial data types are defined*/
/*The Macros of this file can be used in application program along with the hw_interrupt.h file*/
/*The File is Created By "Ravi.K.L" on 29th Aug*/

#ifndef DD_INTERRUPT_H
#define DD_INTERRUPT_H

#define  Enable_Interrupts()  __asm__ __volatile__("sei"::)  
#define Disable_Interrupts()  __asm__ __volatile__("cli"::) 

#define Enable_INT0()     INT0=1
#define Enable_INT1()     INT1=1
#define Enable_INT2()     INT2=1
#define Disable_INT0()    INT0=0
#define Disable_INT1()    INT1=0
#define Disable_INT2()    INT2=0
#define INTR0_Clear_Flag()  INTF0=1
#define INTR1_Clear_Flag()  INTF1=1
#define INTR2_Clear_Flag()  INTF2=1
void Config_Ext_INT0(void);
void Set_Ext_Intr_Trigger(Int_Num_t,Int_Trig_t);//To select different interrupt edges. !comman for all interrupts. 
//void INT2_Select_Edge(u8_t);
#endif

