#include <iostream>
using namespace std;

class Car{
public:
    void Go(){
        cout << "The car is driving." << endl;
    }
};

class Plane{
public:
    void Go(){
        cout << "The plane is flying." << endl;
    }
};

class FlyingCar : public Car, public Plane{
public:
    void Go(){
        Car::Go();
        Plane::Go();
    }
};

void sameInherMethods() {
    FlyingCar flyingCar;
    flyingCar.Go();
    cout << "-------------------------------------------\n";
    flyingCar.Car::Go();
}