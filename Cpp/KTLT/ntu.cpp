#include <Wire.h>

#include <Adafruit_GFX.h>

#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128

#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {

display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

display.clearDisplay();

}

void loop() {

display.clearDisplay();

display.setTextSize(1);

display.setTextColor(WHITE);

display.setCursor(SCREEN_WIDTH, 0);

display.println("Ð?i h?c Nha Trang (Row 1)");

display.setCursor(SCREEN_WIDTH, 10);

display.println("Tuy?n sinh nãm 2023 (Row 2)");

display.display();

delay(100);

for (int i = SCREEN_WIDTH; i >= -(SCREEN_WIDTH * 2); i--) {

display.clearDisplay();

display.setTextSize(1);

display.setTextColor(WHITE);

display.setCursor(i, 0);

display.println("Ð?i h?c Nha Trang (Row 1)");

display.setCursor(i, 10);

display.println("Tuy?n sinh nãm 2023 (Row 2)");

display.display();

delay(10);

}

}
