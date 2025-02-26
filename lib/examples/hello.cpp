#include "hello.h"



//To be called on setup
void SayHello() {
    //set up the driver
    Adafruit_SSD1306* display = new Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT);
    DisplayDriver* displayDriver;

    displayDriver = new DisplayDriver(display);
    displayDriver->InitDisplayDriver();
    //display hello after clearing
    display->clearDisplay();
    displayDriver->ShowMessage("Hello world");
}
