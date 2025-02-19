#ifndef ODOMETER_H
#define ODOMETER_H

#include "FuelGauge.h"

class Odometer{
private:
    int mileage;                             // Current mileage of the vehicle
    FuelGauge* fuelGauge;          // Pointer to FuelGauge Class instance
    
public:
    Odometer(FuelGauge* fg);
    /**************************************************************************************************************************
     *  Odometer Function
     * --------------------------------------------------------------------------------------------------------------------------------------------
     *  The purpose of this function is to construct initial values for the Odometer.
     *************************************************************************************************************************/
    
    void incrementMileage();
    /**************************************************************************************************************************
     *  incrementMileage Function
     * --------------------------------------------------------------------------------------------------------------------------------------------
     * The purpose of this function is to increment mileage of the car. When 32 miles have been driven, gas 
     *  will be decremented by 1. Resets Mileage to 0 when it reaches above 999999.
     *************************************************************************************************************************/
    int getMileage();
    /**************************************************************************************************************************
     *  getMileage Function
     * --------------------------------------------------------------------------------------------------------------------------------------------
     *  The purpose of this function is to retrieve the current mileage on the odometer.
     *************************************************************************************************************************/
};

#endif /* ODOMETER_H */

