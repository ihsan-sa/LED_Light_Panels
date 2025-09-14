/*
 * mode.c
 *
 *  Created on: Sep 5, 2025
 *      Author: ihsan
 */


#include "mode.h"
#include <stdint.h>

/* PV */

uint8_t _mode = 0;
uint32_t _last_press = 0;


void set_mode(uint8_t mode, uint32_t time){
	if(time - _last_press > 400){
		_mode = mode;
		_last_press = time;
	}
}
uint8_t get_mode(){
	return _mode;
}
