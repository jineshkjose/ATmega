#ifndef TRI_COLOUR_LED_H
#define TRI_COLOUR_LED_H

#define LED_1 PC4
#define LED_2 PC5
#define LED_3 PC6

#define ON  1
#define OFF 0

#define RED_LED_ON()    LED_1=1;\
                        LED_2=0

#define	GREEN_LED_ON()  LED_1=0;\
                        LED_2=1

#define	ORANGE_LED_ON() LED_1=1;\
                        LED_2=1


void LED_Flash_Delay(void);
void Exec_LED_Flash(void);

#endif
