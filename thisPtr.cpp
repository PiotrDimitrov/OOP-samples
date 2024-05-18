#include <iostream>

namespace ths{
    class Point {
    private:
        int x;
        int y;
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(int valueX, int valueY){  //class constructor
            x = valueX;                //function of constructor is automatically
            y = valueY;                //called when an object is created
        }
        void setX(int x){ this->x = x; }
        void setY(int y){ this->y = y; }
        int getX(){ return x; }
        int getY(){ return y; }
        void Print(){
            std::cout << "(" << this->getX() << "," << this->getY() << ")" << std::endl;
        }
        void Adress(){
            std::cout << "Adress: " << this << std::endl; //this is a pointer to the (self) object
        }
    };
}

void thisPtr() {
    ths::Point p1(4, 10);
    p1.Adress();
    p1.Print();
}