#include <Wire.h>
 
void setup() {
  Wire.begin(0x08);                
  Wire.onReceive(receiveEvent);     
  pinMode(4,OUTPUT);     
}
 
void loop() {
  delay(100);
}
 
 
void receiveEvent(int leitura) {
  
  bool estado = Wire.read();    // receive byte as an integer
 
  if (estado == 1){
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}
