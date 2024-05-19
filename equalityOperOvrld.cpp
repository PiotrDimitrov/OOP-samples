#include <iostream>

namespace eqlt{
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

    class Point {
    private:
        int x;
        int y;
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        Point(){
            x = 0;
            y = 0;
        }
        void setX(int x){ this->x = x; }
        void setY(int y){ this->y = y; }
        int getX(){ return x; }
        int getY(){ return y; }
        bool operator == (const Point other){
            return (this->x == other.x && this->y == other.y);
        }
        bool operator != (const Point other){
            return (this->x != other.x || this->y != other.y);
        }
    };
}

void equalityOperOvrld() {
    eqlt::Point p1(1,2);
    eqlt::Point p2(4,2);
    std::cout << (p1 == p2) << std::endl;
    std::cout << (p1 != p2) << std::endl;
}