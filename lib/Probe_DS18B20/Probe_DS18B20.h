#ifndef PROBE_DS18B20
#define Probe_DS18B20

#include <OneWire.h> 
#include <DallasTemperature.h>

class ProbeDs18b20 {
    private:
        int probe_bus = 0;
        int probe_number = 0;
        OneWire wire;
        DallasTemperature sensor;
    public:
        ProbeDs18b20(int bus, int probe_num);
        void intialize_ProbeDs18b20();
        void request_temperatures();
        float request_sensor_data();
        void print();
};

#endif