#include "FuelGauge.h"

int FuelGauge::getGas()
{
    return gasLevel;
}

void FuelGauge::incrementGas()
{
    if (gasLevel < TANKMAX)
        gasLevel++;
}

void FuelGauge::decrementGas()
{
    if (gasLevel > 0)
        gasLevel--;
}
