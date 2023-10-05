#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class SportsCar : public Vehicle {
public:
    void start();
    void race();
    void stop();
};

class SedanCar : public Vehicle {
public:
    void start();
    void cruise();
    void stop();
};

class SUV : public Vehicle {
public:
    void start();
    void offRoad();
    void stop();
};

class ElectricCar : public Vehicle {
public:
    ElectricCar();
    void start();
    void drive();
    void stop();
};

#endif
