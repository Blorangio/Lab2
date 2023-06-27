/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Documents/CTD_2023/Labs/Lab2/src/Lab2.ino"
void setup();
void loop();
#line 1 "/Users/admin/Documents/CTD_2023/Labs/Lab2/src/Lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value = analogRead(A5);
void setup() {
  Serial.begin(9600);
}
void loop() {
  value = analogRead(A5);
  Serial.println(value);
}