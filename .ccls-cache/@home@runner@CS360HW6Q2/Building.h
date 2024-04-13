// Building.h

#ifndef BUILDING_H
#define BUILDING_H

#include "CarbonFootprint.h"

// Class Building
class Building : public CarbonFootprint {
private:
    double squareFootage;
    int occupants;
public:
    Building(double sqFootage, int numOccupants);

    double getCarbonFootprint() const override;
};

#endif // BUILDING_H
