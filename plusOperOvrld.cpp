#include <iostream>

namespace pls{
    class Point{
    private:
        int x;
        int y;
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        void print(){
            std::cout << "(" << x << "," << y << ")" << std::endl;}
        Point operator + (Point p){
            Point p1(this->x + p.x, this->y + p.y);
            return p1;
        }
    };
}

void plusOperOvrld() {
    pls::Point p1(1,3);
    pls::Point p2(2,6);
    pls::Point p3 = p1 + p2;
    p3.print();
}