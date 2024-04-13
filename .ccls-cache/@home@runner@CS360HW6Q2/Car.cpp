// Car.cpp

#include "Car.h"

Car::Car(double efficiency, double miles) : fuelEfficiency(efficiency), milesDriven(miles) {}

double Car::getCarbonFootprint() const {
    // Sample calculation for car's carbon footprint
    return milesDriven * (1 / fuelEfficiency) * 20;
}
