#include <iostream>

class A {
public:
    A() {
        std::cout << "Constructor A called\n";
    }
    ~A() {
        std::cout << "Destructor A called\n";
    }
};

class B : public A {
public:
    B() {
        std::cout << "Constructor B called\n";
    }
    ~B() {
        std::cout << "Destructor B called\n";
    }
};

class C : public B {
public:
    C() {
        std::cout << "Constructor C called\n";
    }
    ~C() {
        std::cout << "Destructor C called\n";
    }
};

int inherAndConst() {
    //B testB;
    std::cout << "==========================\n";
    C testC;
    std::cout << "==========================\n";
}