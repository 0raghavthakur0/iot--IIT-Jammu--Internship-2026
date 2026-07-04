# Environmental Monitoring Station

## Components

- Arduino UNO
- DHT11 Sensor
- Red LED
- Green LED
- 220Ω Resistors
- Breadboard
- Jumper Wires

## Connections

DHT11 DATA → Pin 2

Red LED → Pin 8

Green LED → Pin 9

## Library

DHT Sensor Library by Adafruit

Version: 1.4.x

## Output

CSV Format

timestamp,temp_C,temp_F,humidity

## Alert Conditions

Temperature > 35°C

OR

Humidity > 80%

→ Red LED ON

Otherwise

→ Green LED ON
