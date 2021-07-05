#include "oled-wing-adafruit.h"

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

OledWingAdafruit display;
// setup() runs once, when the device is first turned on.
void setup()
{
  // Put initialization like pinMode and begin functions here.
  // sets up OLED display, sets tmp36 as input
  pinMode(A4, INPUT);
  display.display();
  display.clearDisplay();
  display.setup();
  Serial.begin(9600);
}

void loop()
{
  // reads the tmp36 in a loop
  display.loop();
  uint64_t reading = analogRead(A4);
  double voltage = (reading * 3.3) / 4095.0;
  double temperature = (voltage - 0.5) * 100;
  //print the temperature
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("\nFahrenheit = ");
  display.print((temperature * 9 / 5) + 32);
  display.print("\n\nCelsius    = ");
  display.print(temperature);
  display.display();
}