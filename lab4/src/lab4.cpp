/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/IOTEngineering/Labs/lab4/src/lab4.ino"
void setup();
void loop();
#line 1 "c:/IOTEngineering/Labs/lab4/src/lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);


bool value;

void setup() {

  pinMode(D6, OUTPUT);  
  pinMode(D7, INPUT);  
}



void loop() {
  
  value = digitalRead(D7); 
  if (value == true) { //if button is pressed
    digitalWrite(D6, HIGH); //turn light on


  } else { //if button isn't pressed
    digitalWrite(D6, LOW); //turn light off
  }

}