
#include <SPI.h>
#include <DMD2.h>
#include <Arduino.h>
#include <fonts/Arial_Black_16.h>
#include <fonts/RusFont.h>
#include <fonts/dig.h>
#include <fonts/BigRus.h>

SPIDMD dmd(4, 1);
bool error = false;
bool cleared = false;
byte incomingByte = 49;
byte errcounter = 0;
void displayDMDstring(const String &thisWord, int pos_y);
void dstring(String one, String two, int blinker = 5);
void sstring(String one, boolean rus, int blinker = 2);
void fade(boolean inout);
unsigned long prev_req_ms = 0; // время предыдущего запроса

void setup()
{
    Serial.begin(57600);
    dmd.begin();
    incomingByte = 49;
}

void loop()
{
    if (Serial.available() > 0)
    { //если есть доступные данные
        // считываем байт
        byte a;
        a = Serial.read();
        if ((a != 13) and (a != 10))
            incomingByte = a;
        else
            return;
        // отсылаем то, что получили
        Serial.print("I received: ");
        Serial.println(incomingByte);
    }

    switch (incomingByte)
    {
    case 48:
        //        dstring("IZVINITE", "MY UJE ZAKRYTY", 5);
        Serial.println("Zakryto");
        break;
    case 49:
        Serial.println("Otkryto");
        //        sstring("PEMOHT", 0, 3);
        dstring("REMONT", "SMARTFONOV", 5);
        dstring("REMONT", "KOMPW#TEROV", 5);
        dstring("REMONT", "NOUTBUKOV", 5);
        dstring("PRODAJA TELEFONOV", "I AKSESSUAROV", 5);
        dstring("PRODAJA R#KZAKOV", "DL% NOUTBUKOV", 5);
        dstring("B/U NOUTBUKI", "IZ EVROPY", 5);
        dstring("B/U KOMPW#TERY", "IZ EVROPY", 5);
        dstring("B/U MONITORY", "IZ EVROPY", 5);
        dstring("KOLONKI", "I NAUQNIKI", 5);
        dstring("PORTATIVNYE", "RADIOSTANCII", 5);
        //        dstring("USTANOVKA", "VIDEONABL#DENI%", 5);
        dstring("|R KAMERY", "VIDEOREGISTRATORY", 5);
        dstring("POKLE^KA", "ZAqITNYH PLENOK", 5);
        // dstring("PROVERKA", "RABOTY TABLO",5);
        sstring("A P P L E", 0, 5);
        sstring("iPhone X", 0, 5);
        fade(1);
        break;
    case 50:
        //dstring("IZVINITE", "U NAS PEREU_ET", 5);
        //        sstring("PEREU_ET", 1, 5);
        Serial.println("Pereuchet");
        break;
    case 51:
        //        dstring("TEHNI_ESKI^", "PERERYV", 5);
        Serial.println("Tehnicheskij pereryv");
        break;
    default:
        incomingByte = 49;
    }
}

void sstring(String one, boolean rus, int blinker)
{
    if (rus)
    {
        dmd.selectFont(new_Font);
    }
    else
    {
        dmd.selectFont(Arial_Black_16);
    }
    dmd.clearScreen();
    displayDMDstring(one, 1);
    for (int t = 1; t <= blinker; t++)
    {
        for (int i = 250; i >= 0; i--)
        {
            dmd.setBrightness(i);
            delay(1);
        }
        for (int i = 0; i <= 250; i++)
        {
            dmd.setBrightness(i);
            delay(1);
        }
    }
}

void fade(boolean inout)
{
    if (inout)
    {
        for (int i = 250; i >= 0; i--)
        {
            dmd.setBrightness(i);
            delay(3);
        }
    }
    else
    {
        for (int i = 0; i <= 250; i++)
        {
            dmd.setBrightness(i);
            delay(1);
        }
    }
}

void dstring(String one, String two, int blinker)
{
    dmd.selectFont(new_Font1);
    dmd.clearScreen();
    delay(500);
    displayDMDstring(one, 0);
    delay(500);
    displayDMDstring(two, 9);
    for (int i = 0; i <= blinker; i++)
    {
        delay(100);
        dmd.setBrightness(35);
        delay(100);
        dmd.setBrightness(250);
    }
    delay(3000);
    for (int i = 0; i < 16; i++)
    {
        dmd.scrollY(-1);
        delay(10);
    }
}

void displayDMDstring(const String &thisWord, int pos_y)
{
    int Xstart = 64 - (dmd.stringWidth(thisWord) / 2);
    if (0 > Xstart)
        Xstart = 0;
    dmd.drawString(Xstart, pos_y, thisWord);
}
