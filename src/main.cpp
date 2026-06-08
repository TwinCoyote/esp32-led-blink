#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); // Enciende LED
  delay(4000);
  digitalWrite(2, LOW);  // Apaga LED
  delay(4000);
}
