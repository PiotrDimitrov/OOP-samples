#include <iostream>

namespace incr{
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
            std::cout << "(" << x << "," << y << ")" << std::endl;
        }
        Point& operator ++ (){ //prefix form
            this->x++;
            this->y++;
            return *this;
        }
        Point& operator ++ (int){  //postfix form
            this->x++;
            this->y++;
            return *this;
        }
    };
}


void incrementOvrld() {
    incr::Point p1(3,4);
    p1.print();
    ++p1;
    p1.print();
    p1++;
    p1.print();
}