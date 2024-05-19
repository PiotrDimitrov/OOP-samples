#include <iostream>

namespace cpyctr{
    class MyClass{
    private:
        int size;
    public:
        int* data;
        MyClass(int size){
            this->size = size;
            this->data = new int[size];
            for(int i = 0; i < size; i++){
                this->data[i] = i;
            }
            std::cout << "Constructor called " << this << std::endl;
        }
        ~MyClass(){
            delete[] this->data;
            std::cout << "Destructor called " << this << std::endl;
        }

        MyClass (const MyClass& other){  // copy constructor
            this->size = other.size;
            this->data = new int [other.size];
            for (int i = 0; i < other.size; ++i){
                this->data[i] = other.data[i];
            }
            std::cout << "Copy constructor called " << this  << std::endl;
        }
    };
}


void copyConstr() {
    cpyctr::MyClass a(10);
    cpyctr::MyClass b(a);
}