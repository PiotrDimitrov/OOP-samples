#include <iostream>

namespace gtst{
    class Point {
    private:
        int x;
        int y;
    public:
        int getX() { return x; }
        int getY() { return y; }
        void setX(int valueX) { x = valueX; }
        void setY(int valueY) { y = valueY; }
    };
}

void getterSetter() {
    gtst::Point a;
    a.setX(8); a.setY(10);
    std::cout << a.getX() << " " << a.getY() << std::endl;
    std::cout << &a;
}