#include <iostream>

class A {
private:
    std::string msg;
public:
    A(){
        msg = "Empty";
    }
    A(std::string m){
        msg = m;
    }
    void print(){
        std::cout << msg << std::endl;
    }
};

class B : public A {
private:

public:
    B():A("Still empty"){

    }
};
int inherConstrChoise() {
    B value;
    value.print();
}