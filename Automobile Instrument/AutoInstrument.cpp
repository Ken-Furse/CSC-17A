/*****************************************************************************************************************************
 *Auto Instrument
 * ------------------------------------------------------------------------------------------------------------------------------------------------
 * This Program will simulate filling a gas tank (capacity 22Gal) , it will then iterate a loop to increment miles, 
 * and keep track of how many gallons are left in the tank. Each time the while loop is incremented, a current
 * gas and mileage is output.
 ****************************************************************************************************************************/

#include "FuelGauge.h"
#include "Odometer.h"

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    FuelGauge fuelGauge;
    Odometer odometer(&fuelGauge);
   
    //For Loop - Simulate Tank Fill
    for (int i = 0; i < 22; i++)
    {
        fuelGauge.incrementGas();
    }
    
    //While Loop - Simulate driving, output mileage and fuel.
    while (fuelGauge.getGas() > 0)
    {
        odometer.incrementMileage();
        cout << "Current Mileage: " << odometer.getMileage() << " miles" << endl;
        cout << "Current Fuel: " <<fuelGauge.getGas() << " gallons" << endl;
    }

    return 0;
}

