#ifndef __POTENSIO_H__
#define __POTENSIO_H__

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
int bacaSensor(uint8_t no_sensor){
  // konversi data sinyal analog ke digital, simpan pada variabel
  uint16_t nilai_sensor = analogRead(no_sensor);
  // tampilkan nilai sensor 
  Serial.println("Sensor anda [digital raw] pada pin "+String(no_sensor)+":"+String(nilai_sensor));
  return nilai_sensor;
}
void bacaSensor(){
  for (int i = 54; i <= 61; i++)
  {
    uint16_t tmp = analogRead(i);
    Serial.println("Value "+String(i)+" :["+tmp+"], Voltage:["+String(mapFloat(tmp,0,1023,0,5))+" volt]");
  }
}


#endif