#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>
#include "tombol.h"

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4

#define CLK_PIN 12
#define DATA_PIN 13
#define CS_PIN 11

MD_Parola P = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void konfigurasi_matrix(void)
{
    konfigurasi_tombol();
    P.begin();
}

void tampilkan_lampu_sein(void)
{
    if (TOMBOL1_DITEKAN)
    {
        if (P.displayAnimate())
            P.displayText("==>>", PA_CENTER, 20, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
        P.setZoneEffect(0, true, PA_FLIP_LR);
        P.setZoneEffect(0, true, PA_FLIP_UD);
    }
    if (TOMBOL2_DITEKAN)
    {
        if (P.displayAnimate())
            P.displayText("<<==", PA_CENTER, 20, 0, PA_SCROLL_RIGHT, PA_SCROLL_RIGHT);
        P.setZoneEffect(0, true, PA_FLIP_LR);
        P.setZoneEffect(0, true, PA_FLIP_UD);
    }
    if((!TOMBOL1_DITEKAN) && (!TOMBOL2_DITEKAN)){
        // P.displayReset();
        P.displayClear();
    }
}