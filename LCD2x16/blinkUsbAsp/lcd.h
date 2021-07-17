/*
 * lcd.h
 *
 * Created: 7/17/2021 12:28:07 AM
 *  Author: valer
 */ 



#include <avr/io.h>			/* Include AVR std. library file */
#include <util/delay.h>			/* Include Delay header file */

#define LCD_Dir  DDRB			/* Define LCD data port direction */
#define LCD_Port PORTB			/* Define LCD data port */
#define RS PB0				/* Define Register Select pin */
#define EN PB1 				/* Define Enable signal pin */


int main();
void LCD_Clear();
void LCD_String_xy (char row, char pos, char *str);
void LCD_String (const char *str);
void LCD_Init (void);
void LCD_Char( unsigned char data );
void LCD_Command( unsigned char cmnd );