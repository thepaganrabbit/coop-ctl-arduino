#include <Probe_BMP085.h>
#include <Adafruit_BMP085.h>

Probe_BMP085::Probe_BMP085()
{
    Adafruit_BMP085 bmp;
    this->bmp = bmp;
}

void Probe_BMP085::initialize()
{
    if (!this->bmp.begin())
    {
        Serial.println("Could not find a valid BMP085 sensor, check wiring!");
    }
}

float Probe_BMP085::read_celsius()
{
    return this->bmp.readTemperature();
}

float Probe_BMP085::read_fahrenheit()
{
    float tempC = this->bmp.readTemperature();
    float TempF = 0;
    TempF = (tempC * 1.8) + 32;
    return TempF;
}

void Probe_BMP085::print()
{
    Serial.print("Temperature = ");
    float c = this->read_celsius();
    float f = this->read_fahrenheit();
    Serial.print(c);
    Serial.println(" *C");
    Serial.println();
    Serial.print("Temperature = ");
    Serial.print(f);
    Serial.println(" *F");
    Serial.println();
    Serial.println("-----------");
}