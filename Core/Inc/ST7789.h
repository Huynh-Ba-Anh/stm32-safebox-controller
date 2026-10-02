#ifndef __ST7789_H
#define __ST7789_H

#include "main.h"

#define ST7789_WIDTH   240
#define ST7789_HEIGHT  240

#define ST7789_BLACK   0x0000
#define ST7789_WHITE   0xFFFF
#define ST7789_RED     0xF800
#define ST7789_GREEN   0x07E0
#define ST7789_BLUE    0x001F
#define ST7789_YELLOW  0xFFE0

void ST7789_Init(void);
void ST7789_FillScreen(uint16_t color);
void ST7789_DrawChar(int16_t x, int16_t y, char c, uint16_t color, uint16_t bg, uint8_t size);
void ST7789_WriteString(int16_t x, int16_t y, const char *str, uint16_t color, uint16_t bg, uint8_t size);
void ST7789_FillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);

#endif
