#include <iostream> //input output standard library
#include <cassert>  // library function for assertion

using namespace std;

class Vehicle
{ // includes member functions: acc,brake, gearShift, getSpeed
protected:
    int speed, gear;

public:
    Vehicle() : speed(0), gear(1) {}

    void accelerate()
    { // increases speed by 20 units everytime a car is accelerated
        speed += 20;
        cout << "Accelerating Speed: " << speed << " km/h" << endl;
    }

    void brake()
    { // checks current speed (>0) if yes, it decreses it by 20 units
        if (speed > 0)
        {
            speed -= 20;
            cout << "Braking Speed: " << speed << " km/h" << endl;
        }
        else
        {
            cout << "The speed of the vehicle is zero." << endl;
        }
    }

    void gearShift(int Gear)
    { // checks if gera is btwn 1-6 if yes, updates it with new gear value (Gear).
        if (Gear >= 1 && Gear <= 6)
        {
            gear = Gear;
            cout << "Changed gear to " << gear << endl;
        }
        else
        {
            throw invalid_argument("Invalid gear selected");
        }
    }

    int getSpeed() const
    { // getter method -> returns the current speed, const- constant
        return speed;
    }
};

class SportsCar : public Vehicle
{ // has member functions - start, race, stop
public:
    void start()
    {
        cout << "Sports Car is starting..." << endl;
    }

    void race()
    {
        accelerate();
        accelerate();
        accelerate();
        brake();
        brake();
        brake();
    }
    void stop()
    {
        cout << "Sports car stops..." << endl;
    }
};

class SedanCar : public Vehicle
{ // has member functions - start, cruise, stop
public:
    void start()
    {
        cout << "Sedan Car is starting..." << endl;
    }

    void cruise()
    {
        accelerate();
        brake();
    }
    void stop()
    {
        cout << "Sedan car stops..." << endl;
    }
};

class SUV : public Vehicle
{ // has member functions - start, offRoad, stop
public:
    void start()
    {
        cout << "SUV is starting..." << endl;
    }

    void offRoad()
    {
        gearShift(4);
        accelerate();
        accelerate();
        accelerate();
        brake();
        brake();
        brake();
    }
    void stop()
    {
        cout << "SUV stops..." << endl;
    }
};

class ElectricCar : public Vehicle
{ // has member functions - start, drive, stop
public:
    ElectricCar() : Vehicle()
    {
        cout << "Electric Car - charging..." << endl;
    }

    void start()
    {
        cout << "Electric Car is starting..." << endl;
    }

    void drive()
    {
        accelerate();
        accelerate();
        accelerate();
        brake();
        brake();
        brake();
    }
    void stop()
    {
        cout << "Electric car stops..." << endl;
    }
};

int main()
{ // car classes are created along with their member function.
    try
    {
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
        // exception handling mechanism, try will be caught and error msg will be displayed
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
