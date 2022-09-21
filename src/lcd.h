#ifndef __LCD_H__
#define __LCD_H__
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display
int counter = 0;
void tampilkan()
{
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("===3B TOE===");
    lcd.setCursor(0, 1);
    lcd.print("antrian:");
}
#endif