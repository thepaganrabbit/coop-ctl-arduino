#include <Arduino.h>
#include <Adafruit_BMP085.h>
#include <Wire.h>
#include <SPI.h>
#include <Probe_DS18B20.h>
#include <SoftwareSerial.h>


#define probe_bus 2
#define potentiometer A0


ProbeDs18b20 probe_1(probe_bus, 1);

int temp_setting = 0;

void TCA9548A(uint8_t bus){
  Wire.beginTransmission(0x70);  // TCA9548A address is 0x70
  Wire.write(1 << bus);          // send byte to select bus
  Wire.endTransmission();
  // Serial.print(bus);
}

void setup()
{
  Serial.begin(9600);
  probe_1.intialize_ProbeDs18b20();
   Serial.println("Enter AT Commands");
  // TCA9548A(0);
  // if (!bmp.begin())
  // {
  //   Serial.println("Could not find a valid BMP085 sensor, check wiring!");
  // }

}

void loop()
{

  // temp_setting = analogRead(potentiometer);
  // TCA9548A(0);
  // Serial.print("Temperature = ");
  // float tempC = bmp.readTemperature();
  // float TempF = 0;
  // TempF = (tempC*1.8)+32;
  // Serial.print(bmp.readTemperature());
  // Serial.println(" *C");
  // Serial.println();
  // Serial.print("Temperature = ");
  // Serial.print(TempF);
  // Serial.println(" *F");
  // Serial.println();
  // probe_1.print();
  // Serial.println("-----------");
  // Serial.println(temp_setting);
  // delay(500);
}