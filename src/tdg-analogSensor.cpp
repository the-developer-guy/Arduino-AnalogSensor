#include "tdg-analogSensor.h"

TDG_AnalogSensor::TDG_AnalogSensor(int analogPin, float slope, float yIntercept, String unit, uint8_t decimalPlaces)
{
  this->slope = slope;
  this->yIntercept = yIntercept;
  this->analogPin = analogPin;
  this->unit = String(" " + unit);
  this->measuredValue = 0;
  this->measurementString = "";
  this->decimalPlaces = decimalPlaces;
  update();
}

void TDG_AnalogSensor::update()
{
  measuredValue = ((analogRead(analogPin)) - yIntercept) / slope;
}

float TDG_AnalogSensor::getValue()
{
  return measuredValue;
}

String TDG_AnalogSensor::getString()
{
  measurementString = String(String(measuredValue, decimalPlaces) + unit);
  return measurementString;
}
