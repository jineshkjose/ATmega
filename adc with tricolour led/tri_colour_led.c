#include "types.h"
#include "hw_ioports.h"
#include "tri_colour_led.h"



void Config_IO(void)
{
	DDRC2=1;//input config
	DDRC3=1;//input config
}

