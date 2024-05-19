#include <iostream>

namespace asgn{
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
        MyClass& operator = (const MyClass& other){  //assignement overload
            this->size = other.size;

            if (this->data != nullptr){
                delete[] this->data; // we must delete previous data
            }
            this->data = new int [other.size];
            for (int i = 0; i < other.size; ++i){
                this->data[i] = other.data[i];
            }
            std::cout << "Assignment operator called " << this << std::endl;

            return *this;
        }
    };
}

int assignOperOvrld() {
    asgn::MyClass a(10);
    asgn::MyClass b(5);
    asgn::MyClass c = a; // copy constructor called, is equal to 'MyClass c(a);'
    //a = b; //assignment (before assignment overload)
    //std::cout << "Adresses: " << &(a.data[0]) << " " << &(b.data[0]) << std::endl; //adresses are the same, so destructor will erase the same dynamic memory twice (problem!)
}