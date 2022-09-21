#include <Arduino.h>
#include <Wire.h>
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#include "LiquidCrystal_I2C.h"
#include "matrix_display.h"

#include "led.h"
#include "tombol.h"
#include "potensio.h"
#include "lcd.h"
#include "speaker.h"
#include <Stepper.h>

#define PIN_EN 44
#define PIN_IN1 45
#define PIN_IN2 46

void setup()
{
    pinMode(PIN_EN, OUTPUT);
    pinMode(PIN_IN1, OUTPUT);
    pinMode(PIN_IN2, OUTPUT);
}
void loop()
{
    int speed = bacaSensor(A0);
    speed = map(speed, 0, 1023, 0, 255);
    digitalWrite(PIN_EN, HIGH);
    // digitalWrite(PIN_IN1, HIGH);
    analogWrite(PIN_IN1, speed);
    digitalWrite(PIN_IN2, LOW);
    delay(2000);

    digitalWrite(PIN_EN, LOW);
    delay(1000);

    digitalWrite(PIN_EN, HIGH);
    digitalWrite(PIN_IN1, LOW);
    // digitalWrite(PIN_IN2, HIGH);
    analogWrite(PIN_IN2, speed);
    delay(2000);
}