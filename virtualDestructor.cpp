#include <iostream>

class A{
public:
    A(){
        std::cout << "A: Dynamic memory allocated\n";
    }
    virtual ~A(){
        std::cout << "A: Dynamic memory deallocated\n";
    }
};

class B : public A{
public:
    B(){
        std::cout << "B: Dynamic memory allocated\n";
    }
    ~B() override {
        std::cout << "B: Dynamic memory deallocated\n";
    }
};

void virtualDestructor() {
    A *bptr = new B;
    delete bptr; //without virtual destructor, B memory will not be deallocated
}
//OUTPUT:
//
//A: Dynamic memory allocated
//B: Dynamic memory allocated
//B: Dynamic memory deallocated
//A: Dynamic memory deallocated

