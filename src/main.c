/* Includes ------------------------------------------------------------------*/
#include "stm32f30x_can.h"
#include "stm32f30x_rcc.h"
#include "stm32f30x_gpio.h"
#include "rov2016_VESC.h"
/* GLOBAL VARIABLES ----------------------------------------------------------*/
#include "def_global_vars.h"

/* Settings ------------------------------------------------------------------*/
#define DEBUG_MODE

/* Funtion Prototypes --------------------------------------------------------*/
void init(void);

/* Funtion Definitions -------------------------------------------------------*/

int main(void){
	/* Initialization *********************************************************/
	init();
	GPIOE->ODR = 0; // Turn off LED's

#ifdef DEBUG_MODE
	printf("Init complete\n");
#endif

	/* Main loop **************************************************************/
	while(1){
		GPIOE->ODR ^= MAIN_LOOP_LED << 8;
	} // end while
} // end main





