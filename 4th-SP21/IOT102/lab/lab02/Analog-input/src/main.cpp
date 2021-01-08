#include <Arduino.h>

int analogPin = A0;
int ledPin = 12;
int analogValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(analogPin);
  digitalWrite(ledPin, HIGH);
  delay(analogValue);
  digitalWrite(ledPin, LOW);
  delay(analogValue);
}