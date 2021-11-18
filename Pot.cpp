#include "Arduino.h"
#include "Pot.h"

Pot::Pot(int readPin) : readPin_(readPin) {
  pinMode(readPin_, INPUT);  
}

long Pot::readValue() {
  long total = 0;
  for (int i = 0; i < smoothingFactor_; i++) {
    total = total + analogRead(readPin_);
  }
  return (total / smoothingFactor_);

  // return analogRead(readPin_);
}
