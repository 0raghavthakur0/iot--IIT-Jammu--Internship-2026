/*
-------------------------------------------------------
Author      : Raghav Thakur
Course      : IIT Jammu Summer School 2026
Module      : Module 2
Question    : Q18
Description : Vending Machine State Machine

State Diagram

IDLE
 |
 | Insert Coin
 v
COIN_INSERTED
 |
 | Select Item
 v
ITEM_SELECTED
 |
 | Dispense
 v
DISPENSING
 |
 v
IDLE

Cancel Button returns to IDLE from any state.
-------------------------------------------------------
*/

const int coinBtn = 2;
const int selectBtn = 3;
const int cancelBtn = 4;

const int redLED = 8;
const int yellowLED = 9;
const int greenLED = 10;

enum State {
  IDLE,
  COIN_INSERTED,
  ITEM_SELECTED,
  DISPENSING
};

State currentState = IDLE;

void setup() {

  pinMode(coinBtn, INPUT_PULLUP);
  pinMode(selectBtn, INPUT_PULLUP);
  pinMode(cancelBtn, INPUT_PULLUP);

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);

  updateLED();
}

void loop() {

  if (digitalRead(cancelBtn) == LOW) {
    currentState = IDLE;
    Serial.println("Transition -> IDLE");
    updateLED();
    delay(300);
  }

  switch (currentState) {

    case IDLE:

      if (digitalRead(coinBtn) == LOW) {
        currentState = COIN_INSERTED;
        Serial.println("Transition -> COIN_INSERTED");
        updateLED();
        delay(300);
      }

      break;

    case COIN_INSERTED:

      if (digitalRead(selectBtn) == LOW) {
        currentState = ITEM_SELECTED;
        Serial.println("Transition -> ITEM_SELECTED");
        updateLED();
        delay(300);
      }

      break;

    case ITEM_SELECTED:

      currentState = DISPENSING;
      Serial.println("Transition -> DISPENSING");
      updateLED();

      delay(2000);

      currentState = IDLE;
      Serial.println("Transition -> IDLE");
      updateLED();

      break;

    case DISPENSING:

      break;

  }

}

void updateLED() {

  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);

  switch(currentState){

    case IDLE:
      digitalWrite(redLED, HIGH);
      break;

    case COIN_INSERTED:
      digitalWrite(yellowLED, HIGH);
      break;

    case ITEM_SELECTED:
      digitalWrite(greenLED, HIGH);
      break;

    case DISPENSING:
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
      break;

  }

}
