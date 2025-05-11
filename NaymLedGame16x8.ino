//Version 1.00 (2022.04.15)

//This is firmware for NyamLedGame8x16 game console by Nanoslavic
//You need matrix LED display with MAX7219 driver and ATmega328P

//Watch video about this project: https://youtu.be/rcoSd0XPQBI
//See video description for electronic parts details and schematic diagram.
//I am doing other projects on my YouTube channel.

//Some instructions:
//Select board: Arduino Pro Mini
//Select processor: ATmega328P 16MHz 5V
//Connect Arduino board and press Upload button

#include <Arduino.h>
#include <util/delay.h>

#include "ns_game_hw.h"
#include "ns_game_draw.h"
#include "ns_game_pics.h"
#include "ns_game_maze.h"
#include "ns_game_bricks.h"
#include "ns_game_snake.h"
#include "ns_game_drive.h"
#include "ns_game_shooter.h"

void setup()
{
/*	sbi(DDRD,2);
	sbi(PORTD,2);//Led
	delay_ms(500);
	cbi(PORTD,2);//Led
	delay_ms(500);
	sbi(PORTD,2);//Led*/
	
	adc_Init();//ADC is for Random number generator
 	spi_MasterInit();
 	max7219_Init();
	pkeys_Init();
	RNDpADC(10);
}

void loop()
{
	GameMenu();
}