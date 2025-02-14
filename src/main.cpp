#include "main.h"


Adafruit_SSD1306* display = new Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT);
DisplayDriver* displayDriver;

void setup() {
    Serial.begin(9600);
    //set up the driver
    displayDriver = new DisplayDriver(display);
    displayDriver->InitDisplayDriver();
}

void loop() {
    display->fillCircle(16, 32, 16, WHITE);
    display->fillCircle(SCREEN_WIDTH-16, 32, 16, WHITE);

    display->drawChar(SCREEN_WIDTH/2-10, SCREEN_HEIGHT/2, 'U', WHITE, BLACK, 4);
    display->display();
    delay(125);
    display->fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT/2-8, BLACK);
    display->display();
    delay(125);
    display->fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT/2, BLACK);
    display->display();
    delay(125);
    display->fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT/2+8, BLACK);
    display->drawChar(SCREEN_WIDTH/2-10, SCREEN_HEIGHT/2, '-', WHITE, BLACK, 4);
    display->display();
    delay(1000);

    display->clearDisplay();
}