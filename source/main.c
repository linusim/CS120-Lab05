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

enum states { init, stepInc, stepDec } State;

void step(

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char led = 0x00;
	unsigned char buttonA = 0x00;
	unsigned char buttonB = 0x00;
    /* Insert your solution below */
    while (1) {
	buttonA = ~PINA & 0x01;
	buttonB = ~PINA & 0x02;	
    return 1;
}
