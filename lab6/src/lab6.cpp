/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/PCD/Desktop/IOTEngineering/Labs/lab6/src/lab6.ino"
#include "oled-wing-adafruit.h"
void setup();
void loop();
#line 2 "c:/Users/PCD/Desktop/IOTEngineering/Labs/lab6/src/lab6.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
OledWingAdafruit display;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  // sets up the OLED display and sets input as tmp36
  pinMode(A4, INPUT);
  display.display();  // cause the display to be updated
  display.clearDisplay();
  display.setup();
  Serial.begin(9600); 
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // reads the tmp36 in a loop
  display.loop();  // this needs to be called each time loop is run
  uint64_t reading = analogRead(A4);
  double voltage = (reading * 3.3) / 4095.0;
  double temperature = (voltage - 0.5) * 100;
  //print the temperature
  display.clearDisplay();
  display.setTextColor(2);
  display.setTextSize(1);
  display.setCursor(0,0);
  display.print("\nFahrenheit = ");
  display.print((temperature *9/5)+32);
  display.print("\n\nCelsius    = ");
  display.print(temperature);
  display.display();
}