#include "Pot.h"

Pot pot1 = Pot(14);
const float convertionFactor = 0.09775171065;

void setup() {
  Serial.begin(115200);

  delay(300);
  Serial.println("Starting");

}

void loop() { 
  Serial.println(convertToVolume(pot1.readValue()));
}

int convertToVolume(int potValue) {
  return ((potValue * convertionFactor) + 0.5f);
}

