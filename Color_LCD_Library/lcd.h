/*
	by Andrew Bischoff
*/

#include <Energia.h>

#ifndef lcd_h
#define lcd_h

#define DisplayCol  220;
#define DisplaySeg  176;


#define RST 6
#define CS1 5
#define RS 2  //
#define WR 3
#define RD 4  //








void LCD_WriteString(String s, int x, int y, int col);
void LCD_WriteString(String s, int x, int y);
void LCD_WriteChar(char c, int x, int y, int col);
void LCD_WriteChar(char c, int x, int y);
void LCD_DrawBox(int x, int y, int w, int h, int col);

void LCD_SetPixel(int x, int y, int col);


void LCD_ClearScreen();
void LCD_SetPort(int data);
void LCD_SetIndex(unsigned char index);
void LCD_DataWrite(unsigned int set_db);
void LCD_SetRegister(unsigned char index,unsigned int set_db);
void LCD_Init();




#endif
