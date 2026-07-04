/*
-------------------------------------------------------
Author      : Raghav Thakur
Course      : IIT Jammu Summer School 2026
Module      : Module 2
Question    : Q15
Description : Digital Piano using Buzzer
-------------------------------------------------------
*/

const int buzzer = 8;

const int key1 = 2;
const int key2 = 3;
const int key3 = 4;
const int key4 = 5;
const int modeButton = 6;

bool majorMode = true;
bool lastModeState = HIGH;

void setup() {
  pinMode(key1, INPUT_PULLUP);
  pinMode(key2, INPUT_PULLUP);
  pinMode(key3, INPUT_PULLUP);
  pinMode(key4, INPUT_PULLUP);
  pinMode(modeButton, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {

  bool currentModeState = digitalRead(modeButton);

  if (lastModeState == HIGH && currentModeState == LOW) {
    majorMode = !majorMode;
    Serial.print("Mode: ");
    Serial.println(majorMode ? "Major" : "Minor");
    delay(200);
  }

  lastModeState = currentModeState;

  bool b1 = digitalRead(key1) == LOW;
  bool b2 = digitalRead(key2) == LOW;
  bool b3 = digitalRead(key3) == LOW;
  bool b4 = digitalRead(key4) == LOW;

  int pressed = b1 + b2 + b3 + b4;

  if (pressed >= 2) {
    tone(buzzer, 392);      // Sol
  }
  else if (b1) {
    tone(buzzer, majorMode ? 262 : 247);
  }
  else if (b2) {
    tone(buzzer, majorMode ? 294 : 277);
  }
  else if (b3) {
    tone(buzzer, majorMode ? 330 : 311);
  }
  else if (b4) {
    tone(buzzer, majorMode ? 349 : 330);
  }
  else {
    noTone(buzzer);
  }
}
