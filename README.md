# ESP32 Temperature Monitoring System
A beginner-friendly IoT project that uses an ESP32 and a DS18B20 temperature sensor to monitor temperature in real time.

Project Overview

This project reads temperature data from a DS18B20 digital temperature sensor and displays the readings through the Serial Monitor.

The system provides:

Temperature in Celsius (°C)
Temperature in Fahrenheit (°F)
Temperature Status (Cold / Normal / Hot)
System Uptime Monitoring
Sensor Connection Validation

This project was built as part of my journey into Embedded Systems, IoT, and AI-related technologies.

Components Used
Component	Quantity
ESP32 Development Board	1
DS18B20 Temperature Sensor	1
Breadboard	1
Jumper Wires	Several
4.7kΩ Resistor	1
GPIO Configuration
DS18B20 Pin	ESP32 Pin
VCC	3.3V
GND	GND
DATA	GPIO 4

A 4.7kΩ pull-up resistor is connected between DATA and VCC.

Features

Real-time temperature monitoring

Celsius and Fahrenheit conversion

Temperature status classification

Sensor error detection

System uptime tracking

Beginner-friendly implementation

Sample Output
---------------------------------
Temperature (C): 27.75 °C
Temperature (F): 81.95 °F
Status: NORMAL
System Uptime: 15 seconds
---------------------------------
Project Demonstration
Circuit Setup



Video Demonstration


Aqib Azaad
