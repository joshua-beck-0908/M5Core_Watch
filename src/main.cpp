https://docs.m5stack.com/en/api/core/lcd
#include <Arduino.h>
#include <M5Stack.h>

void setup() {
  M5.begin();
  M5.Lcd.begin();
  M5.Lcd.println("Hello world!");
}

void loop() {
    M5.Power.deepSleep();
}