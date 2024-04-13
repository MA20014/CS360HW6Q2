// Car.h

#ifndef CAR_H
#define CAR_H

#include "CarbonFootprint.h"

// Class Car
class Car : public CarbonFootprint {
private:
    double fuelEfficiency;
    double milesDriven;
public:
    Car(double efficiency, double miles);

    double getCarbonFootprint() const override;
};

#endif // CAR_H
