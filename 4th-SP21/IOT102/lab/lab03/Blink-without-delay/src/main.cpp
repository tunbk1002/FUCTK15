#include <Arduino.h>

// constants won't change. Used here to set a pin number
// the number of the LED pin
const int ledPin = LED_BUILTIN;

// ledState used to set the LED
int ledState = LOW;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
// below will store last time LED was updated
unsigned long previousMillis = 0;

// constants won't change
// interval at which to blink
const long interval = 1000;

void setup()
{
  // put your setup code here, to run once:
  // set the digital pin as output
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  // here is where you'd put code that needs to be running all the time.
  // check to see if it's time to blink the LED; that is, if the difference between the current time and last time you blinked the LED is bigger than the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
    if (ledState == LOW)
    {
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}