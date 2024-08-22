#include <stdio.h>
#include "lift.h"

Lift_t lift_init(uint8_t maxPassengers, int16_t startFloor)
{
    Lift_t lift = {startFloor, 0, maxPassengers};
    return lift;
}

void lift_onboard(Lift_t* lift, uint8_t peopleOff, uint8_t peopleOn)
{
    lift -> num_passengers = lift -> num_passengers + peopleOn - peopleOff;
}

int16_t lift_goToFloor(Lift_t* lift, int16_t floor)
{
    if ((lift -> num_passengers) > (lift -> passenger_limit)) {
        return (lift -> current_floor);
    } else {
        lift -> current_floor = floor;
        return (lift -> current_floor); 
    }
} 