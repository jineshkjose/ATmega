#include"hw_ioports.h"
#include"types.h"
#include"hw_keypad.h"
#include"dd_keypad.h"

void Delay(void)
{
 
  u16_t dly_ctr;
  for(dly_ctr=0;dly_ctr<=6000;dly_ctr++);
}



u8_t Read_Key(void)
  {	   
	 ACTIVATE_ROW0();
	  if(COL1==0)
		{
		  Delay();
		  if(COL1==0)
             { 
			   return '1';
			  
              }
          }
       else if(COL2==0)
		  {
			Delay();
			if(COL2==0)
             { 
			  return '2';
			   
              }
           }
    else if(COL3==0)
		  {
			Delay();
			if(COL3==0)
             { 
			  return '3';
			 
              }
           }
     ACTIVATE_ROW1();
	 if(COL1==0)
	  {
		Delay();
		if(COL1==0)
         { 
		   return '4';
		    
          }
       }
    else if(COL2==0)
	  {
	    Delay();
	    if(COL2==0)
         { 
		  return '5';
		   
         }
        }
     else if(COL3==0)
	   {
		 Delay();
		 if(COL3==0)
          {  
			return '6';
			  
           }
         }
    ACTIVATE_ROW2();
	if(COL1==0)
	 {
	   Delay();
	   if(COL1==0)
        { 
		  return '7';
		    
       }
	  }
     else if(COL2==0)
		{
		  Delay();
		if(COL2==0)
           { 
			 return '8';
			   
            }
          }
        else if(COL3==0)
		  {
		    Delay();
		    if(COL3==0)
             { 
			   return '9';
			     
              }
           }
    ACTIVATE_ROW3();
	if(COL1==0)
	 {
	   Delay();
	   if(COL1==0)
        { 
		   return '*';
				     
                  }
                 }
        else if(COL2==0)
		     {
			   Delay();
			   if(COL2==0)
                 { 
				   return '0';
				     
                  }
                 }
      else if(COL3==0)
		     {
			   Delay();
			   if(COL3==0)
                 { 
				   return '#';
				     
                 }
   }
 

    return '\0';
	
      }                           
 
	    
