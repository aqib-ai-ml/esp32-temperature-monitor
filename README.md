# ESP32 Temperature Monitoring System

A beginner-friendly IoT project using **ESP32** and **DS18B20 temperature sensor** to monitor real-time temperature with serial output and status classification.

---

## Project Overview

This project reads temperature data from a DS18B20 digital sensor and displays live readings in the Serial Monitor.

It helps demonstrate how embedded systems interact with real-world sensors using GPIO communication.

---

## Features

- Real-time temperature monitoring  
- Celsius & Fahrenheit conversion  
- Temperature status (Cold / Normal / Hot)  
- Sensor error detection  
- System uptime tracking  

---

## Components Used

| Component | Quantity |
|----------|----------|
| ESP32 Development Board | 1 |
| DS18B20 Temperature Sensor | 1 |
| 4.7kΩ Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |

---

## GPIO Configuration

| DS18B20 Pin | ESP32 Pin |
|------------|-----------|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 4 |

A 4.7kΩ pull-up resistor is connected between DATA and VCC.

---

## 📊 Sample Output
