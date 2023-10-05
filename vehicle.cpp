#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : speed(0), gear(1) {}

void Vehicle::accelerate() {
    speed += 20;
    std::cout << "Accelerating Speed: " << speed << " km/h" << std::endl;
}

void Vehicle::brake() {
    if (speed > 0) {
        speed -= 20;
        std::cout << "Braking Speed: " << speed << " km/h" << std::endl;
    } else {
        std::cout << "The speed of the vehicle is zero." << std::endl;
    }
}

void Vehicle::gearShift(int Gear) {
    if (Gear >= 1 && Gear <= 6) {
        gear = Gear;
        std::cout << "Changed gear to " << gear << std::endl;
    } else {
        throw std::invalid_argument("Invalid gear selected");
    }
}

int Vehicle::getSpeed() const {
    return speed;
}
