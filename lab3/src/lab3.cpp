/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/IOTEngineering/Labs/lab3/src/lab3.ino"


void setup();
void loop();
#line 3 "c:/IOTEngineering/Labs/lab3/src/lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);




const uint16_t red = D5;
const uint16_t green = D6;
const uint16_t blue = D7;

void setup() {
  
 pinMode(red, OUTPUT); 
 pinMode(green, OUTPUT); 
 pinMode(blue, OUTPUT); 
}


void loop() {


 analogWrite(red, 255);
 analogWrite(green, 0);
 analogWrite(blue, 0);
 delay(200);
 analogWrite(red, 0);
 analogWrite(green, 255);
 delay(200);
 analogWrite(green, 0);
 analogWrite(blue, 255);
 delay(200);
 analogWrite(red, 255);
 analogWrite(green, 20);
 analogWrite(blue, 0);
 delay(200);
 analogWrite(green, 150);
 delay(200);
 analogWrite(green, 0);
 analogWrite(blue, 255);
 delay(200);
 analogWrite(red, 0);
 analogWrite(green, 255);
 delay(200);
}