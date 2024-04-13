// Bicycle.cpp

#include "Bicycle.h"

Bicycle::Bicycle(bool isElectric) : electric(isElectric) {}

double Bicycle::getCarbonFootprint() const {
    // Sample calculation for bicycle's carbon footprint
    return electric ? 0 : 5;
}
