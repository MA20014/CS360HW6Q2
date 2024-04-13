// Building.cpp

#include "Building.h"

Building::Building(double sqFootage, int numOccupants) : squareFootage(sqFootage), occupants(numOccupants) {}

double Building::getCarbonFootprint() const {
    // Sample calculation for building's carbon footprint
    return squareFootage * 0.5 + occupants * 10;
}
