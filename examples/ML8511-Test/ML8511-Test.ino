/***************************************************************************
  sample sketch to test the ML8511 library
  
  Pin A0 --> ML8511 sensor "out"
  Pin A1 --> Arduino 3V3 reference

 ***************************************************************************/


#include <ML8511.h>

// ML8511 library
ML8511 uvSensor;

void setup() {
  Serial.begin(115200);
  Serial.println(F("ML8511 test"));

  Serial.println("--- ML8511 -----------------------------");

  if (!uvSensor.begin()) {
    Serial.println("Could not initialize ML8511 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  Serial.print("\nreadSensor: "); Serial.print( uvSensor.readSensor() );
  uvSensor.debugSensor();
  delay(2000);
}
