#ifndef __TOMBOL_H__
#define __TOMBOL_H__

#define PIN_TOMBOL1     50
#define PIN_TOMBOL2     51
#define PIN_TOMBOL3     52
#define PIN_TOMBOL4     53

#define TOMBOL1_DITEKAN     digitalRead(PIN_TOMBOL1) == LOW
#define TOMBOL2_DITEKAN     digitalRead(PIN_TOMBOL2) == LOW
#define TOMBOL3_DITEKAN     digitalRead(PIN_TOMBOL3) == LOW
#define TOMBOL4_DITEKAN     digitalRead(PIN_TOMBOL4) == LOW

void konfigurasi_tombol(){
    // atur PORTB 0->7 sbgai input
    DDRB = 0b00000000;
    // aktifkan Rinternal pullup pada pin PB0 -> PB7
    PORTB = 0b11111111;
}

void baca_tombol(void){
    // jika tombol 1 ditekan
    if (TOMBOL1_DITEKAN){/* maka lakukan tampilkan pesan*/Serial.println("tombol 1 ditekan");}
    if (TOMBOL2_DITEKAN){/* maka lakukan tampilkan pesan*/Serial.println("tombol 2 ditekan");}
    if (TOMBOL3_DITEKAN){/* maka lakukan tampilkan pesan*/Serial.println("tombol 3 ditekan");}
    if (TOMBOL4_DITEKAN){/* maka lakukan tampilkan pesan*/Serial.println("tombol 4 ditekan");}
    // return 1;
}

uint8_t bacaTombol(void){
    // jika tombol 1 ditekan
    uint8_t data_tombol = 0;
    if (TOMBOL1_DITEKAN){/* maka lakukan tampilkan pesan*/data_tombol = 1;}
    if (TOMBOL2_DITEKAN){/* maka lakukan tampilkan pesan*/data_tombol = 2;}
    if (TOMBOL3_DITEKAN){/* maka lakukan tampilkan pesan*/data_tombol = 3;}
    if (TOMBOL4_DITEKAN){/* maka lakukan tampilkan pesan*/data_tombol = 4;}
    return data_tombol;
}

#endif