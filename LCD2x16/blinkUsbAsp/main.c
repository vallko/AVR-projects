#ifndef F_CPU
#define F_CPU 8000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "lcd.h"

int main(void)
{
	
	DDRB = 0xFF; //Nakes PORTC as Output
	LCD_Init();
	while(1) //infinite loop
	{
		PORTB = 0b00100000; //Turns ON All LEDs
		_delay_ms(1000); //1 second delay
		PORTB = 0b00000000; //Turns OFF All LEDs
		_delay_ms(1000); //1 second delay
		printf("Qko");
		LCD_Command(0x0C);
		LCD_String("qko");
	}
}