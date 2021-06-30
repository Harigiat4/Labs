/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/IOTEngineering/Labs/Lab1/lab__1/src/lab__1.ino"


void setup();
void loop();
#line 3 "c:/IOTEngineering/Labs/Lab1/lab__1/src/lab__1.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);


void setup() {
  

 pinMode(D7, OUTPUT);


}


void loop() {
 digitalWrite(D7, LOW);
 delay(1000);
 digitalWrite(D7, HIGH);
 delay(1000);

}