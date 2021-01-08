#include <Arduino.h>

// The higher the number, the slower the timing
int timer = 100;

void setup()
{
  // put your setup code here, to run once:
  // use a for loop to initialize each pin as an output
  for (int thisPin = 5; thisPin < 8; thisPin++)
  {
    pinMode(thisPin, OUTPUT);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
  // loop from the lowest pin to the highest
  for (int thisPin = 5; thisPin < 8; thisPin++)
  {
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }

  // loop from the highest pin to the lowest
  for (int thisPin = 7; thisPin >= 5; thisPin--)
  {
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }
}