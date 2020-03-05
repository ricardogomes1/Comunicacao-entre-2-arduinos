#include <Wire.h>
 
bool estado_LED;
 
void setup() {
  Wire.begin();
}
 
void loop() {
  Wire.beginTransmission(0x08); 
  wire.write(estado_LED);            
  Wire.endTransmission();
  
  estado_LED = !estadoLED;   
 
  delay(1000);
}
