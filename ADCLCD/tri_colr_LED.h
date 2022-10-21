#ifndef HW_TRI_COL_LED_H
#define HW_TRI_COL_LED_H

#define LED1        PC1
#define LED2        PC5
#define LED3        PC7

#define ON          0
#define OFF         1
 
#define RED_LED_ON()    LED1=ON;\
						LED2=OFF;\
						LED3=OFF 
#define GREEN_LED_ON()  LED1=OFF;\
						LED2=ON;\
						LED3=OFF
#define ORANGE_LED_ON() LED1=ON;\
						LED2=ON;\
						LED3=OFF

#define RED_LED_FLASH() LED2=OFF;\
                        LED1=~LED1;\
						LED3=OFF;\
                        APP_Delay()


void Config_IO(void);
void APP_Delay(void);


#endif

