#include <Wire.h>
#include <I2Cadio.h>

ADIO adio(42);
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  adio.changeAddr(45);
  delay(100);
  adio.saveAddr();
}

void loop() {
  // put your main code here, to run repeatedly:
}
