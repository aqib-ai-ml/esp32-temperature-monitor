#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 4

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

unsigned long startTime;

void setup() 
  {Serial.begin(115200);

  Serial.println();
  Serial.println("=================================");
  Serial.println(" ESP32 Temperature Monitoring");
  Serial.println(" DS18B20 Sensor Initializing...");
  Serial.println(" GPIO Pin: 4");
  Serial.println("=================================");

  sensors.begin();

  delay(2000);

  startTime = millis();

  Serial.println("Sensor Ready!");
  Serial.println();
}

void loop() 

  {sensors.requestTemperatures();

  float tempC = sensors.getTempCByIndex(0);

  if (tempC == DEVICE_DISCONNECTED_C) {
    Serial.println("ERROR: Sensor not detected!");
    delay(1000);
    return;}

  float tempF = tempC * 9.0 / 5.0 + 32.0;

  String status;

  if (tempC < 20) {
    status = "COLD";
  }
  else if (tempC < 30) {
    status = "NORMAL";
  }
  else {
    status = "HOT";
  }

  unsigned long uptime = millis() / 1000;

  Serial.println("---------------------------------");
  Serial.print("Temperature (C): ");
  Serial.print(tempC);
  Serial.println(" °C");

  Serial.print("Temperature (F): ");
  Serial.print(tempF);
  Serial.println(" °F");

  Serial.print("Status: ");
  Serial.println(status);

  Serial.print("Sensor GPIO: ");
  Serial.println(ONE_WIRE_BUS);

  Serial.print("System Uptime: ");
  Serial.print(uptime);
  Serial.println(" seconds");

  Serial.println("---------------------------------");
  Serial.println();

  delay(1000);}