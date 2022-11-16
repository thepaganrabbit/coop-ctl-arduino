#ifndef I2CMULTIPLEX
#define I2CMULTIPLEX
#include <Wire.h>
#include <SPI.h>
void TCA9548A(uint8_t bus, bool print = false)
{
    Wire.beginTransmission(0x70); // TCA9548A address is 0x70
    Wire.write(1 << bus);         // send byte to select bus
    Wire.endTransmission();
    if (print == true)
    {
        Serial.print(bus);
    }
}

#endif