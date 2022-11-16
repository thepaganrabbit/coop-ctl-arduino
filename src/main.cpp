#include <Arduino.h>
#include <Probe_DS18B20.h>
#include <I2CMultiplex.h>
#include <Probe_BMP085.h>

#define probe_bus 2

ProbeDs18b20 probe_1(probe_bus, 1);
Probe_BMP085 probe_2;

void setup()
{
  Serial.begin(9600);
  probe_1.intialize_ProbeDs18b20();
   Serial.println("Enter AT Commands");
  TCA9548A(0);
  probe_2.initialize();
}

void loop()
{
  TCA9548A(0);
  probe_1.print();
  delay(1000);
  probe_2.print();
  delay(500);
}