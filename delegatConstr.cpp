#include <string>

class Human{
public:
/*
//normal constructors
Human(string n){
  this->name = n;
  this->age = 0;
  this->weight = 0;
}

Human(string n, int a){
  this->name = n;
  this->age = a;
  this->weight = 0;
}

Human(string n, int a, int w){
  this->name = n;
  this->age = a;
  this->weight = w;
}*/

//Delegating constructors

    Human(std::string n){
        this->name = n;
        this->age = 0;
        this->weight = 0;
    }

    Human(std::string n, int a) : Human(n){
        this->age = a;
    }

    Human(std::string n, int a, int w) : Human(n, a){
        this->weight = w;
    }

    std::string name;
    int age;
    int weight;
};

void delegatConstr() {
    Human h1("Ivan");
    Human h2("Vasya", 35);
    Human h3("Kolea", 44, 80);
}