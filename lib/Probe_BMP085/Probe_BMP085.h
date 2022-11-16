#ifndef PROBE_BMP085
#define PROBE_BMP085
#include <Adafruit_BMP085.h>

class Probe_BMP085
{
private:
    Adafruit_BMP085 bmp;

public:
    Probe_BMP085();
    void initialize();
    float read_celsius();
    float read_fahrenheit();
    void print();
};

#endif