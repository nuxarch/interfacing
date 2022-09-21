#include <Arduino.h>

class Speaker
{
private:
  int pin_speaker;
  int ts;

public:
  Speaker(int _pin_speaker)
  {
    pin_speaker = _pin_speaker;
    pinMode(pin_speaker, OUTPUT);
  };
  ~Speaker(){};
  void Train(int speed)
  {
    // alarm kereta api
    // 1000 Hz selama 1 detik
    for (int i = 0; i <= 1000; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(500 / speed);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(500 / speed);
    }
    // 500 Hz selama 1 detik
    for (int i = 0; i <= 500; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(1000 / speed);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(1000 / speed);
    }
  }
  void Telp()
  {

    // 400Hz selamat 0,5 detik
    for (int i = 0; i <= 200; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(1250);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(1250);
    }
    // diam 0.5s
    digitalWrite(pin_speaker, LOW);
    delay(500);
  }
  void Waiting()
  {
    for (int j = 0; j < 20; j++)
    {

      for (int i = 0; i <= 8; i++)
      {
        digitalWrite(pin_speaker, HIGH);
        delayMicroseconds(1520);
        digitalWrite(pin_speaker, LOW);
        delayMicroseconds(1520);
      }
      for (int i = 0; i <= 12; i++)
      {
        digitalWrite(pin_speaker, HIGH);
        delayMicroseconds(1041);
        digitalWrite(pin_speaker, LOW);
        delayMicroseconds(1041);
      }
    }
    delay(2000);
  }
  // oktaf 1 ==========================
  void Do1(int l)
  {
    ts = 3822;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Re1(int l)
  {
    ts = 3405;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Mi1(int l)
  {
    ts = 3034;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Fa1(int l)
  {
    ts = 2864;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Sol1(int l)
  {
    ts = 2551;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void La1(int l)
  {
    ts = 2273;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Si1(int l)
  {
    ts = 2025;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  // oktaf 2 ==========================
  void Do2(int l)
  {
    ts = 1911;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Re2(int l)
  {
    ts = 1703;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Mi2(int l)
  {
    ts = 1517;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Fa2(int l)
  {
    ts = 1432;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void So2(int l)
  {
    ts = 1276;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void La2(int l)
  {
    ts = 1136;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  void Si2(int l)
  {
    ts = 1012;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }
  // oktaf 3 ==========================
  void Do3(int l)
  {
    ts = 956;
    for (int i = 0; i <= l; i++)
    {
      digitalWrite(pin_speaker, HIGH);
      delayMicroseconds(ts);
      digitalWrite(pin_speaker, LOW);
      delayMicroseconds(ts);
    }
  }

  void PlayPiano(int pause)
  {
    Do2(pause);
    Re2(pause);
    Mi2(pause);
    Fa2(pause);
    So2(pause);
    La2(pause);
    Si2(pause);
    Do3(pause);
  }
  void PlaySorak2()
  {
    // bait 1
    Mi1(50);
    Fa1(40);
    Sol1(90);
    delay(10);
    Sol1(90);
    Do2(130);
    Re2(146);
    Mi2(300);
    Do2(130);
    Si1(60);
    Do2(50);
    Re2(146);
    Fa2(174);
    Mi2(164);
    Re2(141);
    Do2(200);
    delay(50);

    // bait 2
    Mi1(50);
    Fa1(40);
    Sol1(90);
    delay(10);
    Sol1(90);
    Do2(130);
    Re2(146);
    Mi2(300);
    Do2(130);
    Si1(60);
    Do2(50);
    Re2(146);
    Fa2(174);
    Mi2(164);
    Re2(141);
    Do2(150);
    delay(50);
    // bait3
    Mi2(100);
    Fa2(110);
    So2(196);
    delay(10);
    So2(196);
    La2(250);
    delay(50);
    La2(220);
    So2(300);
    delay(50);

    // bait4
    Mi2(100);
    Fa2(110);
    So2(196);
    delay(10);
    So2(196);
    La2(220);
    delay(10);
    La2(220);
    So2(300);
    delay(50);
    // bait 5
    Re2(110);
    Mi2(114);
    Fa2(174);
    delay(30);
    Fa2(174);
    So2(196);
    delay(30);
    So2(196);
    Mi2(200);
    Do2(130);
    Si1(100);
    Do2(100);
    Re2(146);
    Fa2(174);
    Mi2(164);
    Re2(146);
    Do2(130);
    delay(3000);
  }
};
