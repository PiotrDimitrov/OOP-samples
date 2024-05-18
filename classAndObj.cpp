#include <iostream>

namespace clsobj {
    class Human {
    public:
        int age;
        std::string name;
    };
}

void classAndObj() {
    clsobj::Human firstHuman;
    firstHuman.age = 25;
    firstHuman.name = "John";

    clsobj::Human secondHuman;
    secondHuman.age = 30;
    secondHuman.name = "Jane";
}