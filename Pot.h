// #include "Arduino.h"

class Pot {
  private:
      int readPin_;
      const static int smoothingFactor_ = 100;
      
  public:
      Pot(int readPin);
      long readValue();
};
