#include "Odometer.h"

Odometer::Odometer(FuelGauge* fg)
{
    mileage = 0;
    fuelGauge = fg;
}

void Odometer::incrementMileage()
{
    mileage++;
    
    if (mileage % 32 == 0)
        fuelGauge->decrementGas();
    
    if (mileage > 999999)
        mileage = 0;
}

int Odometer::getMileage()
{
return mileage;
}