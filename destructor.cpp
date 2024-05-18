#include <iostream>

namespace dstr{
    class MyClass {
    public:
        MyClass()
        {
            std::cout << "Constructor MyClass() called" << std::endl;
        }
        ~MyClass(){
            std::cout << "Destructor MyClass() called" << std::endl; //descructor is called when main fuction (or other function) ends
        }
    };

    class Example {
    private:
        int* data; //we cannot use 'delete' as data is private -> memory leak
    public:
        Example(int size) {
            data = new int[size]; //dynamic memory allocation
            //we can avoid memory leak by using deconstructor
            std::cout << "Constructor Example() called" << std::endl;
        }
        ~Example() {
            delete[] data; //delete[] is used to delete an array
            std::cout << "Destructor ~Example() called" << std::endl;
        }
    };

    void testFunc(){
        std::cout << "Function testFunc() called" << std::endl;
        Example a(3);
        std::cout << "Function testFunc() ends" << std::endl;
    }
}

void destructor(){
    std::cout << "Main fuction called\n";
    dstr::MyClass a;
    dstr::testFunc();
    std::cout << "Main fuction ends\n";
}
