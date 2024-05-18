#include <iostream>

namespace cnsov{
    class Point {
    private:
        int x;
        int y;
    public:
        Point(){ //first constructor
            x = 0;
            y = 0;
        }
        Point(int valueX, int valueY){  //second constructor
            x = valueX;
            y = valueY;
        }
        Point(bool a, bool b){
            a? (x = 1) : (x = 0);
            b? (y = 1) : (y = 0);
        }
        void setX(int valueX){ x = valueX; }
        void setY(int valueY){ y = valueY; }
        int getX(){ return x; }
        int getY(){ return y; }
    };
}

int constructorOverload() {
    cnsov::Point a; //create object using first constructor
    cnsov::Point b(10, 15); //create object using second constructor
    cnsov::Point c(true, true); //create object using third constructor

    std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
    std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
    std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
}