#pragma once
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLED_ADDR 0x3c
#define DEFAULT_FONT_SIZE 1

class DisplayDriver
{
private:
    Adafruit_SSD1306* display;
public:
    DisplayDriver(Adafruit_SSD1306* afDisplay);
    void InitDisplayDriver();
    void ShowMessageMS(String msg, int ms, int fontSize = DEFAULT_FONT_SIZE, int x = 0, int y = 16);
    void ShowMessage(String msg, int fontSize = DEFAULT_FONT_SIZE, int x = 0, int y = 16);
};