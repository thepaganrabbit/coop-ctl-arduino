#include <Probe_DS18B20.h>

#include <OneWire.h> 
#include <DallasTemperature.h>


ProbeDs18b20::ProbeDs18b20(int bus, int probe_num)
{
    this->probe_bus = bus;
    this->probe_number = probe_num;
}

void ProbeDs18b20::intialize_ProbeDs18b20() 
{
    OneWire sens_wire(this->probe_bus);
    this->wire = sens_wire;
    DallasTemperature sensor(&this->wire);
    this->sensor = sensor;
    Serial.println("Initializing Sensor");
    this->sensor.begin();
}

void ProbeDs18b20::request_temperatures()
{
    this->sensor.requestTemperatures();
}

float ProbeDs18b20::request_sensor_data()
{
    return this->sensor.getTempFByIndex(0); 
}

void ProbeDs18b20::print()
{
    this->request_temperatures();
    float curr_f_temp = this->request_sensor_data();
    Serial.print("Sensor #");
    Serial.print(this->probe_number);
    Serial.print("\t");
    Serial.print("-------------------  ");
    Serial.print(curr_f_temp);
    Serial.println("");
    delay(1000);
}