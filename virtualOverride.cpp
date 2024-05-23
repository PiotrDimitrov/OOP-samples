#include <iostream>
using namespace std;

class base {
public:
    virtual void print() { cout << "print base class\n"; } //virtual

    void show() { cout << "show base class\n"; } //non - virtual
};

class derived : public base {
public:
    void print() override { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

void virtualOverride()
{
    base* bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();
    //output: print derived class

    // Non-virtual function, binded at compile time
    bptr->show();
    //output: show base class

}