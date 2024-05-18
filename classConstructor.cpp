#include <iostream>

namespace cnstr{
    class Point {
    private:
        int x;
        int y;
    public:
        Point(int valueX, int valueY){  //class constructor
            x = valueX;                //function of constructor is automatically
            y = valueY;                //called when an object is created
        }
        void setX(int valueX){ x = valueX; }
        void setY(int valueY){ y = valueY; }
        int getX(){ return x; }
        int getY(){ return y; }
    };
}

void classConstructor() {
    cnstr::Point p1(10, 20);  //values by default
    cnstr::Point p2(30, 40);
    std::cout << "p1: " << p1.getX() << ", " << p1.getY() << std::endl;
    std::cout << "p2: " << p2.getX() << ", " << p2.getY() << std::endl;

    std::cout << "----------------------------------------------------\n";
    p1.setX(5);
    p1.setY(6);
    std::cout << "p1: " << p1.getX() << ", " << p1.getY() << std::endl;
    p2.setX(15);
    p2.setY(16);
    std::cout << "p2: " << p2.getX() << ", " << p2.getY() << std::endl;
}