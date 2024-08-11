#include <stdio.h>
#include "temp.h"

static float to_celsius(float temperature, Unit_t unit) 
{
    if (unit == CELSIUS) {
        return temperature;
    } else if (unit == FAHRENHEIT) {
        return (temperature - 32.0) * 5.0 / 9.0;
    } else if (unit == KELVIN) {
        return temperature - 273.15;
    }
    return temperature; 
}

static float from_celsius(float temperature, Unit_t unit) 
{
    if (unit == CELSIUS) {
        return temperature;
    } else if (unit == FAHRENHEIT) {
        return (temperature * 9.0 / 5.0) + 32.0;
    } else if (unit == KELVIN) {
        return temperature + 273.15;
    }
    return temperature; 
}

void temp_set(Temp_t* temp, float value, Unit_t unit)
{
    temp->temperature = value; 
    temp->unit = unit;         
}

void temp_print(const Temp_t* temp, Unit_t unit)
{
    float celsiusValue = to_celsius(temp->temperature, temp->unit); 
    float finalValue = from_celsius(celsiusValue, unit);       
    
    switch (unit) {
        case CELSIUS:
            printf("%.2f deg C\n", finalValue);
            break;
        case FAHRENHEIT:
            printf("%.2f deg F\n", finalValue);
            break;
        case KELVIN:
            printf("%.2f K\n", finalValue);
            break;
    }
}
