// Bicycle.h

#ifndef BICYCLE_H
#define BICYCLE_H

#include "CarbonFootprint.h"

// Class Bicycle
class Bicycle : public CarbonFootprint {
private:
    bool electric;
public:
    Bicycle(bool isElectric);

    double getCarbonFootprint() const override;
};

#endif // BICYCLE_H
