/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/PCD/Desktop/IOTEngineering/Labs/Lab12Slave/src/Lab12Slave.ino"
void takeAction(uint8_t state);
void setup();
void loop();
#line 1 "c:/Users/PCD/Desktop/IOTEngineering/Labs/Lab12Slave/src/Lab12Slave.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// transmitting and receiving data
char rx[1];
char tx[1];
bool CS = false;
void takeAction(uint8_t state)
  {
    if (state)
    {
      CS = true; // watch for this variable in loop and set it back to false once you detect it.
      
    }
  }
  
// setup() runs once, when the device is first turned on.
void setup()
{
  pinMode(D7, OUTPUT); // LED
  pinMode(D5, INPUT); // Button
  
  SPI1.setBitOrder(MSBFIRST);
  SPI1.setDataMode(SPI_MODE0);
  SPI1.onSelect(takeAction);

  SPI1.begin(SPI_MODE_SLAVE, D6);

  
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  
  

  if(CS == true){
    CS = false;
    SPI1.transfer(tx, rx, 1, NULL);
    if(rx[0] == '0'){
      digitalWrite(D7,LOW);
    }
    if(rx[0] == '1'){
      digitalWrite(D7,HIGH);
    }
    if(rx[0] == '?'){
      
      tx[0] = digitalRead(D5); 
      SPI1.transfer(tx, rx, 1, NULL);

    }
  }
}