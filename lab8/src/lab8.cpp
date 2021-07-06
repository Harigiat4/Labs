/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/PCD/Desktop/IOTEngineering/Labs/lab8/src/lab8.ino"
void setup();
void loop();
#line 1 "c:/Users/PCD/Desktop/IOTEngineering/Labs/lab8/src/lab8.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// #include <Wire.h>
#include "SparkFun_VCNL4040_Arduino_Library.h"
#include "oled-wing-adafruit.h"

OledWingAdafruit display;
VCNL4040 proximitySensor;

void setup()
{

  pinMode(A5, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A1, OUTPUT);
  display.display(); // cause the display to be updated
  display.clearDisplay();
  display.setup();
  Serial.begin(9600);
  Wire.begin();
  proximitySensor.begin();          //Initialize the sensor
  proximitySensor.powerOnAmbient(); //Power up the ambient sensor
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  // The core of your code will likely live here.
  display.loop();
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);

  unsigned int proxValue = proximitySensor.getProximity();
  Serial.println(proxValue);

  //blue
  if (proxValue <= (10))
  {
    digitalWrite(A5, HIGH);
    digitalWrite(A3, LOW);
    digitalWrite(A1, LOW);
  }
  //green
  if (proxValue >= (1000) && proxValue > 5000)
  {

    digitalWrite(A1, HIGH);
    digitalWrite(A3, LOW);
    digitalWrite(A5, LOW);
  }
  //orange
  if (proxValue > (11) && proxValue < 1000)
  {

    digitalWrite(A3, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A5, LOW);
  }

  // pressing a displays proximity value
  if (display.pressedA())
  {
    display.clearDisplay();
    display.print("Proximity Value: ");
    display.print(proxValue);
    Serial.println();
    display.display();
  }

  // pressing b displays you the ambient light level
  if (display.pressedB())
  {
    display.clearDisplay();
    unsigned int ambientValue = proximitySensor.getAmbient();

    display.print("Ambient light level: ");
    display.println(ambientValue);
    display.display();
  }

  // pressing c displays the i2C address
  if (display.pressedC())
  {
    display.clearDisplay();
    unsigned int i2CValue = proximitySensor.getID();

    display.print("I2C Address: ");
    display.println(i2CValue);
    display.display();
  }
}