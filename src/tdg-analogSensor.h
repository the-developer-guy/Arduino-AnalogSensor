#ifndef TDG_ANALOGSENSOR_H
#define TDG_ANALOGSENSOR_H

#include "Arduino.h"

class TDG_AnalogSensor{
    float slope;
    int16_t yIntercept;
    int analogPin;
    float measuredValue;
    String measurementString;
    String unit;
    uint8_t decimalPlaces;
  public:
    void update();
    float getValue();
    String getString();
    TDG_AnalogSensor(int analogPin, float slope, float yIntercept, String unit, uint8_t decimalPlaces = 0);
};

#endif
