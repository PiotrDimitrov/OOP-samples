#include <iostream>

class InterfaceBicycle{
public:
    virtual void pedal() = 0;
    virtual void brake() = 0;
    virtual void wheel() = 0;
};

class SimpleBicycle : public InterfaceBicycle{  //realisation of interface
public:
    void pedal() override {
        std::cout << "Pedals of simple bicycle are rotated\n";
    }
    void brake() override {
        std::cout << "Brake of simple bicycle is pressed\n";
    }
    void wheel() override {
        std::cout << "Wheel of simple bicycle is moved\n";
    }
};

class SportBicycle : public InterfaceBicycle{  //realisation of interface
public:
    void pedal() override {
        std::cout << "Pedals of sport bicycle are pushed\n";
    }
    void brake() override {
        std::cout << "Brake of sport bicycle is pressed\n";
    }
    void wheel() override {
        std::cout << "Wheel of sport bicycle is moved\n";
    }
};

class Human
{
public:
    void RideOn(InterfaceBicycle *bicycle){
        std::cout << "Rotate the pedals\n";
        bicycle->pedal();
        std::cout << "Rotate the wheel\n";
        bicycle->wheel();
        std::cout << "Brake!\n";
        bicycle->brake();
    }
};

void interface() {
    SimpleBicycle bicycle1;
    SportBicycle bicycle2;

    Human woman;
    Human man;

    man.RideOn(&bicycle2);
    woman.RideOn(&bicycle1);
}