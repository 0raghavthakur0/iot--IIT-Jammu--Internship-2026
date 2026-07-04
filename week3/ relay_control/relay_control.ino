/*
-------------------------------------------------------
Author      : Raghav Thakur
Course      : IIT Jammu Summer School 2026
Module      : Module 3
Question    : Q27
Description : Relay Controlled AC Simulation
-------------------------------------------------------
*/

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

const int relayPin = 8;      // LED used as relay simulation
const int buttonPin = 3;

bool relayState = false;
bool lastButtonState = HIGH;

void setup() {

  Serial.begin(9600);

  dht.begin();

  pinMode(relayPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {

  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("DHT11 Error");
    delay(1000);
    return;
  }

  bool buttonState = digitalRead(buttonPin);

  // Manual Override
  if (lastButtonState == HIGH && buttonState == LOW) {

    relayState = !relayState;

    digitalWrite(relayPin, relayState);

    Serial.print("Manual Override -> Relay ");

    if (relayState)
      Serial.print("ON");
    else
      Serial.print("OFF");

    Serial.print(" | Temp: ");
    Serial.print(temp);
    Serial.println(" C");

    delay(200);

  }

  lastButtonState = buttonState;

  // Automatic Control with Hysteresis

  if (!relayState && temp > 32) {

    relayState = true;

    digitalWrite(relayPin, HIGH);

    Serial.print("Relay ON | Temperature: ");
    Serial.print(temp);
    Serial.println(" C");

  }

  else if (relayState && temp < 28) {

    relayState = false;

    digitalWrite(relayPin, LOW);

    Serial.print("Relay OFF | Temperature: ");
    Serial.print(temp);
    Serial.println(" C");

  }

  delay(1000);

}
