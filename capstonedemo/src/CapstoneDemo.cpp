/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/PCD/Desktop/IOTEngineering/Labs/CapstoneDemo/src/CapstoneDemo.ino"
#include <blynk.h>

void setup();
void loop();
#line 3 "c:/Users/PCD/Desktop/IOTEngineering/Labs/CapstoneDemo/src/CapstoneDemo.ino"
const uint16_t red = D6;
const uint16_t green = D7;
const uint16_t blue = A1;

SYSTEM_THREAD(ENABLED);

BLYNK_WRITE(V1)
{
  int xx = param[0].asInt();
  int yy = param[1].asInt();

  Serial.print("X = ");
  Serial.print(xx);
  Serial.print("; Y = ");
  Serial.println(yy);
  // int pinValue = param.asInt();
  // Serial.print("V1 Slider value is: ");
  // Serial.println(pinValue);
  if (chooseJolystick)
  {
    movingY = yy;
    movingX = xx;
  }
}

void setup()
{

  Serial.begin(9600);

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  display.setup();
  display.clearDisplay();
  display.display();

  Blynk.begin("oEf7le9AtDvz3yyUQ4j8me1yE01oF87O", IPAddress(167, 172, 234, 162), 9090);

  os_thread_create(&thread1, "anyName", OS_THREAD_PRIORITY_DEFAULT, myThread1, NULL, 1024);
  delay(5000);
}
void loop()
{

  analogWrite(red, 255); //red
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(700);
  analogWrite(red, 0); //green
  analogWrite(green, 255);
  delay(700);
  analogWrite(green, 0);
  analogWrite(blue, 255); //blue
  delay(700);
  analogWrite(red, 255);
  analogWrite(green, 20);
  analogWrite(blue, 0); //yellow
  delay(700);
  analogWrite(green, 150); //orange
  delay(700);
  analogWrite(green, 0);
  analogWrite(blue, 255); //purple
  delay(700);
  analogWrite(red, 0);
  analogWrite(green, 255); //cyan
  delay(700);
  analogWrite(red, 0); //red
  analogWrite(green, 0);
  analogWrite(blue, 0);
  x = 10;
  y = 10;
  movingX = 0;
  movingY = 0;
}
}