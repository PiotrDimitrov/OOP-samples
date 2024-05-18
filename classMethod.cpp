#include <iostream>

class Human {
public:
    int age;
    std::string name;
    int weight;
    void Print(){  //class method
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Weight: " << weight << std::endl;
    }
};

void classMethod() {
    Human firstHuman;
    firstHuman.age = 20;
    firstHuman.name = "Ivan";
    firstHuman.weight = 70;
    firstHuman.Print();
}