#include "TTP229.h"
 
TTP229 ttp229(8,9);
uint8_t TouchPadKeyValue = 0;
 
void setup(){
  Serial.begin(115200);
}
 
void loop(){
  TouchPadKeyValue = ttp229.ReadKey16();
 
  if (TouchPadKeyValue == 1) {
    Serial.println("1");
 
  } else if (TouchPadKeyValue == 2) {
    Serial.println("2");
  } else if (TouchPadKeyValue == 3) {
    Serial.println("3");
  } else if (TouchPadKeyValue == 4) {
    Serial.println("A");
  } else if (TouchPadKeyValue == 5) {
    Serial.println("4");
  } else if (TouchPadKeyValue == 6) {
    Serial.println("5");
  } else if (TouchPadKeyValue == 7) {
    Serial.println("6");
  } else if (TouchPadKeyValue == 8) {
    Serial.println("B");
  } else if (TouchPadKeyValue == 9) {
    Serial.println("7");
  } else if (TouchPadKeyValue == 10) {
    Serial.println("8");
  } else if (TouchPadKeyValue == 11) {
    Serial.println("9");
  } else if (TouchPadKeyValue == 12) {
    Serial.println("C");
  } else if (TouchPadKeyValue == 13) {
    Serial.println("*");
  } else if (TouchPadKeyValue == 14) {
    Serial.println("0");
  } else if (TouchPadKeyValue == 15) {
    Serial.println("#");
  } else if (TouchPadKeyValue == 16) {
    Serial.println("D");
  } else if (false) {
  }
 
}