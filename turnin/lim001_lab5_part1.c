/*	Author: lim001
 *  Partner(s) Name: Festo Bwogi
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char led = 0x00;
	unsigned char button = 0x00;
    /* Insert your solution below */
    while (1) {
	button = ~PINA & 0x0F;
	if ( (button == 0x01) || (button == 0x02) ) {
		led = 0x20;
	} else if ( (button == 0x03) || (button = 0x04) ) {
		led = 0x30;
	} else if ( (button == 0x05) || (button == 0x06) ) {
		led = 0x38;
	} else if ( (button == 0x07) || (button == 0x08) || (button == 0x09) ) {
		led = 0x3C;
	} else if ( (button == 0x0A) || (button == 0x0B) || (button == 0x0C) ) {
		led = 0x3E;
	} else if ( (button == 0x0D) || (button == 0x0E) || (button == 0x0F) ) {
		led = 0x3F;
	}  else if (button == 0x00) {
		led = 0x00;
	} 	
			
    
	PORTC = led;	
    }
    return 1;
}
