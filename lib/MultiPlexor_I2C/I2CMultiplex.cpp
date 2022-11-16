#include <I2CMultiplex.h>

#include <Wire.h>
#include <SPI.h>

void I2CMULTIPLEX::TCA9548A(uint8_t bus)
{
    Wire.beginTransmission(0x70); // TCA9548A address is 0x70
    Wire.write(1 << bus);         // send byte to select bus
    Wire.endTransmission();
    Serial.print(bus);
}