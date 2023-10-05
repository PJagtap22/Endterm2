#include "Car.h"
#include <iostream>

void SportsCar::start() {
    std::cout << "Sports Car is starting..." << std::endl;
}

void SportsCar::race() {
    accelerate();
    accelerate();
    accelerate();
    brake();
    brake();
    brake();
}

void SportsCar::stop() {
    std::cout << "Sports car stops..." << std::endl;
}

void SedanCar::start() {
    std::cout << "Sedan Car is starting..." << std::endl;
}

void SedanCar::cruise() {
    accelerate();
    brake();
}

void SedanCar::stop() {
    std::cout << "Sedan car stops..." << std::endl;
}

void SUV::start() {
    std::cout << "SUV is starting..." << std::endl;
}

void SUV::offRoad() {
    gearShift(4);
    accelerate();
    accelerate();
    accelerate();
    brake();
    brake();
    brake();
}

void SUV::stop() {
    std::cout << "SUV stops..." << std::endl;
}

ElectricCar::ElectricCar() : Vehicle() {
    std::cout << "Electric Car - charging..." << std::endl;
}

void ElectricCar::start() {
    std::cout << "Electric Car is starting..." << std::endl;
}

void ElectricCar::drive() {
    accelerate();
    accelerate();
    accelerate();
    brake();
    brake();
    brake();
}

void ElectricCar::stop() {
    std::cout << "Electric car stops..." << std::endl;
}
