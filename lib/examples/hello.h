#ifndef HELLO_H
#define HELLO_H

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "displayDriver.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SSD1306_I2C_ADDRESS 0x3C

void SayHello();

#endif // HELLO_H
