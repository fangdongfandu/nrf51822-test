#ifndef OLED_H__
#define OLED_H__

#define LCD_SCL  10
#define LCD_SDA  14
#define LCD_RST  13
#define LCD_DC   11
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


#endif
