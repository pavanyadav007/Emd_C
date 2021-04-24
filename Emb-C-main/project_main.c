/**
 * @file project_main.c
 * @author Pavan Yadav A
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */

int main(void)
{

	/* Configure LED Pin */
	DDRB |= (1 << PB1);
	DDRB &= (1 << PD0);
	DDRB &= (1 << PD1);

	while (1)
	{
		if (!(PIND & (1 << PD0)) && !(PIND & (1 << PD1)))
		{
			PORTB |= (1 << PB1);
		}
		else
		{
			PORTB &= ~(1 << PB1);
		}
	}
	return 0;
}