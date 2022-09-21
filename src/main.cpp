
#include <Arduino.h>
#include "led.h"
#include "tombol.h"

#define PIN_A_SENSOR1 A0
#define PIN_A_SENSOR2 A1
#define PIN_A_SENSOR3 A2
#define PIN_A_SENSOR4 A3
#define PIN_A_SENSOR5 A4
#define PIN_A_SENSOR6 A5
#define PIN_A_SENSOR7 A6
#define PIN_A_SENSOR8 A7

/// map one numerical span to another with floating point values
double mapFloat (double x, double in_min, double in_max, double out_min, double out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
uint16_t bacaSensor(uint8_t no_sensor){
  // konversi data sinyal analog ke digital, simpan pada variabel
  uint16_t nilai_sensor = analogRead(no_sensor);
  // tampilkan nilai sensor 
  Serial.println("Sensor anda [digital raw] pada pin "+String(no_sensor)+":"+String(nilai_sensor));
}
void bacaSensor(){
  for (int i = 54; i <= 61; i++)
  {
    uint16_t tmp = analogRead(i);
    Serial.println("Value "+String(i)+" :["+tmp+"], Voltage:["+String(mapFloat(tmp,0,1023,0,5))+" volt]");
  }
}

void setup() {
  Serial.begin(115200);
  Serial.println("aplikasi dimulai");

}
void loop() {
 
  Serial.println("===============================================");
  bacaSensor();
  // bacaSensor(A0);
  // bacaSensor(A1);
  // bacaSensor(A2);
  // bacaSensor(A3);
  // bacaSensor(A4);
  // bacaSensor(A5);
  // bacaSensor(A6);
  // bacaSensor(A7);
  Serial.println("===============================================");
  delay(500);
}