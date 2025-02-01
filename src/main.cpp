#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SSD1306_I2C_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
    if (!display.begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS)) { // Address 0x3C for 128x64
        Serial.println(F("SSD1306 allocation failed"));
    }

    display.clearDisplay();

    //render text
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(2, 2);
    display.println("Hello, World!");

    //render shapes for testing
    display.drawRect(0, 0, SCREEN_WIDTH, 16, WHITE);
    display.drawCircle(16, 32, 16, WHITE);
    display.drawTriangle(32, 16, 32, 32, 48, 32, WHITE);

    //display
    display.display();

    delay(2000);
}

void loop() {
  
}