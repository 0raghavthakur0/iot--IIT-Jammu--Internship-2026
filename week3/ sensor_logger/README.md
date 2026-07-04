# Multi-Sensor Data Logger

## Components

- Arduino UNO
- DHT11 Sensor
- LDR
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires

## Connections

DHT11 → Pin 2

LDR → A0

HC-SR04

- Trig → Pin 9
- Echo → Pin 10

## Output

Every 5 seconds:

- Temperature
- Humidity
- Light Percentage
- Light Status
- Distance

Serial Monitor output is also saved as:

week3/data/sensor_log.txt
