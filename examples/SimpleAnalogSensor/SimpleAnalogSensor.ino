#include <tdg-analogSensor.h>

TDG_AnalogSensor sensor = TDG_AnalogSensor(A0, -0.55, 1023, "lux");
// Use TDG_AnalogSensor(A0, -0.55, 255, "lux", 2) to specify 2 decimal places, default is 0

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor.update();
  Serial.println(sensor.getValue());
  Serial.println(sensor.getString());
  delay(1000);
}
