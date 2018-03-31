#ifndef OLED_H__
#define OLED_H__

#include "nrf_gpio.h"

#define LCD_SCL  6
#define LCD_SDA  14
#define LCD_RST  13
#define LCD_DC   7
#define LCD_CS   15
#define LCD_POWER_EN   12
#define XLevelL		0x00
#define XLevelH		0x10
#define XLevel	    ((XLevelH&0x0F)*16+XLevelL)
#define Max_Column	128
#define Max_Row		  64
#define	Brightness	0xCF 
#define X_WIDTH 128
#define Y_WIDTH 64
#define Max_Column	128
#define SIZE 16
extern unsigned char  F16x16[];
extern unsigned char  BMP[];
extern const unsigned char  F6x8[][6];
extern const unsigned char  F8X16[];

void LCD_WrDat(unsigned char dat);
void LCD_WrCmd(unsigned char cmd);
void LCD_Set_Pos(unsigned char x, unsigned char y);
void LCD_Fill(unsigned char bmp_dat);
void LCD_CLS(void);
void LCD_GPIO_cfg(void);
void LCD_Init(void);
void LCD_P6x8Str(unsigned char x, unsigned char y,unsigned char ch[]);
void LCD_P8x16Str(unsigned char x, unsigned y,unsigned char ch[]);
void LCD_P16x16Ch(unsigned char x, unsigned char y,unsigned char  N);
void Draw_BMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);

void oled_clear(void);
void oled_drawpoint(uint8_t x,uint8_t y,uint8_t t);
void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr);
uint32_t oled_pow(uint8_t m,uint8_t n);
void oled_shownum(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size);
void oled_showstring(uint8_t x,uint8_t y,const uint8_t *chr);


#endif
