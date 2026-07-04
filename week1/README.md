# LED Blink Project

## Project Title

LED Blink using Arduino UNO

---

## Project Objective

The objective of this project is to understand the basic working of Arduino digital output by blinking the built-in LED connected to pin 13.

---

## Hardware Required

- Arduino UNO
- USB Cable
- Computer/Laptop
- Arduino IDE

---

## Circuit Diagram Description

This project uses the built-in LED available on Arduino UNO (Pin 13).

No external components are required.

If an external LED is used:

Digital Pin 13 ----> 220Ω Resistor ----> LED ----> GND

---

## Software Required

- Arduino IDE 2.x
- Arduino USB Driver

---

## How to Upload the Code

1. Connect Arduino UNO to the computer using a USB cable.
2. Open Arduino IDE.
3. Open the file `led_blink.ino`.
4. Select the correct Board (Arduino UNO).
5. Select the correct COM Port.
6. Click the Verify button.
7. Click Upload.
8. Wait until the upload is completed.

---

## Working Principle

The Arduino continuously turns the LED ON for one second and OFF for one second using the `digitalWrite()` and `delay()` functions.

---

## Expected Output

- LED turns ON for 1 second.
- LED turns OFF for 1 second.
- The process repeats continuously.

---

## Folder Structure

```
week1/
└── led_blink/
    ├── led_blink.ino
    └── README.md
```

---

## Troubleshooting Tips

### Problem 1

LED is not blinking.

**Solution:**
Check whether the correct COM Port is selected.

---

### Problem 2

Program is not uploading.

**Solution:**
Verify that Arduino UNO is selected as the board.

---

### Problem 3

Arduino is not detected.

**Solution:**
Reconnect the USB cable and reinstall Arduino drivers if necessary.

---

## Author

Raghav Thakur

IIT Jammu Summer School 2026
