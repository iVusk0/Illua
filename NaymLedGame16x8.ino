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
