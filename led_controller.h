#ifndef _LED_CONTROLLER_H_
#define _LED_CONTROLLER_H_

#define LED_PANEL_COUNT         8   //1 pico with 8 port
#define COLOR_CHANNEL           3   //RGB channel
#define PANEL_WIDTH             40
#define PANEL_HEIGHT            30

uint8_t led_rgb_buf[8][COLOR_CHANNEL*PANEL_WIDTH*PANEL_HEIGHT] = {0};
unsigned int data_offset = 0;
uint8_t panel_id = -1;

#endif
