#include <iostream>
#include <stdexcept>
#include "Car.h"

int main() {
    try {
        SportsCar sportsCar;
        sportsCar.start();
        sportsCar.race();
        sportsCar.stop();

        SedanCar sedanCar;
        sedanCar.start();
        sedanCar.cruise();
        sedanCar.stop();

        SUV suv;
        suv.start();
        suv.offRoad();
        suv.stop();

        ElectricCar electricCar;
        electricCar.start();
        electricCar.drive();
        electricCar.stop();
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
