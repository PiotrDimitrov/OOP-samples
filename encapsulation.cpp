#include <iostream>

namespace enc{
    class CoffeeMachine {
    private:
        bool CheckVoltage(){
            return false;
        }
    public:
        void start(){
            if (CheckVoltage()){
                std::cout << "VJUUUUUH\n";
            } else {
                std::cout << "beep beep ERROR\n";
            }
        }
    };
}

void encapsulation(){
    enc::CoffeeMachine java;
    java.start();
}