/*File dfines all the hardware definitions  for the External Inerrupts 0,1,2*/
/*For Interrupt Trigger select Spetial data types are defined*/
/*The File includes Hardware definitions for operating mode slect bits of the MCU*/
/*INTERRUPT VECTOR SHIFT BIT IS ALSO DEFINED*/
/*The File is Created By "Ravi.K.L" on 29th Aug*/

#ifndef HW_INTERRUPT_H
#define HW_INTERRUPT_H


typedef enum
{
INT0,
INT1,
INT2
}Int_Num_t;


typedef enum
{
 LEVEL_TRIG,
 ANY_EDGE,
 FALL_EDGE,
 RISE_EDGE
}
Int_Trig_t;


typedef union
{
struct
{
u8_t B0_1:2;
u8_t B2_3:2;
u8_t B4:1;
u8_t B5:1;
u8_t B6:1;
u8_t B7:1;
}
bit;
u8_t byte;
}Intr_Control_t;

/*MCU Control Register for Interrupts and MCU Mode Select*/
#define MCUCR_REG (*(volatile Intr_Control_t *)0x55)
#define MCUCR  MCUCR_REG.byte
#define ISC0   MCUCR_REG.bit.B0_1
#define ISC1   MCUCR_REG.bit.B2_3
#define SM0    MCUCR_REG.bit.B4
#define SM1	   MCUCR_REG.bit.B5	
#define SE	   MCUCR_REG.bit.B6	
#define SM2    MCUCR_REG.bit.B7

/*MCU Control and Status Register for Interrupts and MCU Status*/
#define  MCUCSR_REG (*(volatile Register_t *)0x54)
#define  MCUCSR  MCUCSR_REG.Byte
#define  JTD     MCUCSR_REG.Bit.B7
#define  ISC2    MCUCSR_REG.Bit.B6
#define  JTRF    MCUCSR_REG.Bit.B4
#define  WDRF    MCUCSR_REG.Bit.B3
#define  BORF    MCUCSR_REG.Bit.B2
#define  EXTRF   MCUCSR_REG.Bit.B1
#define  PORF    MCUCSR_REG.Bit.B0

/*Global Interrupt Control Register to Enable/Disable the Interrupts*/
#define  GICR_REG  (*(volatile Register_t *)0x5B)
#define  GICR  GICR_REG.Byte
#define  INT1  GICR_REG.Bit.B7
#define  INT0  GICR_REG.Bit.B6
#define  INT2  GICR_REG.Bit.B5
#define  IVSEL GICR_REG.Bit.B1
#define  IVCE  GICR_REG.Bit.B0 
 
/*Global Interrupt Flag Register to chek the status of the Interrupts*/
#define  GIFR_REG  (*(volatile Register_t *)0x5A)
#define  GIFR   GIFR_REG.Byte
#define  INTF1  GIFR_REG.Bit.B7
#define  INTF0  GIFR_REG.Bit.B6
#define  INTF2  GIFR_REG.Bit.B5
extern u8_t int_flag;
#endif


