/*
 * brightness.h
 *
 * Created: 24.01.2014 22:59:42
 *  Author: snakeye
 */ 
#ifndef BRIGHTNESS_H_
#define BRIGHTNESS_H_

extern uint16_t brightness;

void adc_init();
void measure_brightness_async();

void brightness_tick();

#endif /* BRIGHTNESS_H_ */