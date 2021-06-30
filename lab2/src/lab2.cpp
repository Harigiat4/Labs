/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/IOTEngineering/Labs/lab2/src/lab2.ino"


void setup();
void loop();
#line 3 "c:/IOTEngineering/Labs/lab2/src/lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);


void setup() {
  
 Serial.begin(9600);
 pinMode(D7, OUTPUT);



}


void loop() {
 uint16_t value;
 value = analogRead(A5);
 Serial.println(value);
 digitalWrite(D7, LOW);
 delay(1000);
 digitalWrite(D7, HIGH);
 delay(1000);

}