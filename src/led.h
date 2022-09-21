#ifndef __LED_H__
#define __LED_H__

#define PIN_LED1 22
#define PIN_LED2 23
#define PIN_LED3 24
#define PIN_LED4 25
#define PIN_LED5 26
#define PIN_LED6 27
#define PIN_LED7 28
#define PIN_LED8 29

#define LED1_ON digitalWrite(PIN_LED1, HIGH)
#define LED2_ON digitalWrite(PIN_LED2, HIGH)
#define LED3_ON digitalWrite(PIN_LED3, HIGH)
#define LED4_ON digitalWrite(PIN_LED4, HIGH)
#define LED5_ON digitalWrite(PIN_LED5, HIGH)
#define LED6_ON digitalWrite(PIN_LED6, HIGH)
#define LED7_ON digitalWrite(PIN_LED7, HIGH)
#define LED8_ON digitalWrite(PIN_LED8, HIGH)

#define LED1_OFF digitalWrite(PIN_LED1, LOW)
#define LED2_OFF digitalWrite(PIN_LED2, LOW)
#define LED3_OFF digitalWrite(PIN_LED3, LOW)
#define LED4_OFF digitalWrite(PIN_LED4, LOW)
#define LED5_OFF digitalWrite(PIN_LED5, LOW)
#define LED6_OFF digitalWrite(PIN_LED6, LOW)
#define LED7_OFF digitalWrite(PIN_LED7, LOW)
#define LED8_OFF digitalWrite(PIN_LED8, LOW)

void konfigurasi_led()
{
    // atur PORTA 0->7 sbgai output
    DDRA = 0b11111111;
    // Led_ON_All();
}

void Led_ON_All()
{
    LED1_ON;
    LED2_ON;
    LED3_ON;
    LED4_ON;
    LED5_ON;
    LED6_ON;
    LED7_ON;
    LED8_ON;
}
void Led_OFF_All()
{
    LED1_OFF;
    LED2_OFF;
    LED3_OFF;
    LED4_OFF;
    LED5_OFF;
    LED6_OFF;
    LED7_OFF;
    LED8_OFF;
}



#endif