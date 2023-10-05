#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
protected:
    int speed, gear;

public:
    Vehicle();
    void accelerate();
    void brake();
    void gearShift(int Gear);
    int getSpeed() const;
};

#endif
