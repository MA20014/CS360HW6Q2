// main.cpp

#include <iostream>
#include <vector>
#include "CarbonFootprint.h"
#include "Building.h"
#include "Car.h"
#include "Bicycle.h"

int main() {
    std::vector<CarbonFootprint*> objects;

    // Creating objects
    Building building(1000, 10);
    Car car(30, 1000);
    Bicycle bicycle(true);

    // Adding pointers to objects in the vector
    objects.push_back(&building);
    objects.push_back(&car);
    objects.push_back(&bicycle);

    // Iterating through the vector, polymorphically invoking each object's getCarbonFootprint method
    for (const auto& obj : objects) {
        // Printing identifying information and the object's carbon footprint with appropriate units
        if (dynamic_cast<Building*>(obj)) {
            std::cout << "Building's carbon footprint: " << obj->getCarbonFootprint() << " kgCO2/year" << std::endl;
        } else if (dynamic_cast<Car*>(obj)) {
            std::cout << "Car's carbon footprint: " << obj->getCarbonFootprint() << " kgCO2/year" << std::endl;
        } else if (dynamic_cast<Bicycle*>(obj)) {
            std::cout << "Bicycle's carbon footprint: " << obj->getCarbonFootprint() << " kgCO2/year" << std::endl;
        }
    }

    return 0;
}
