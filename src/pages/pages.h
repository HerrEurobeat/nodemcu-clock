#include <LiquidCrystal_I2C.h>
#include <NTPClient.h>
#include <iostream>

void clockpage(LiquidCrystal_I2C lcd, NTPClient timeClient, String dateformat, String timeformat, int maxcol);