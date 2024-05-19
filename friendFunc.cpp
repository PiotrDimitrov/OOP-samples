#include <iostream>

namespace frfnc{
    class Point{
    private:
        int x, y; //changeX has access to it as friend
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        void print(){
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
        friend void ChangeX(Point& p, int x);  // friend function
    };

    void ChangeX(Point& p, int x){ // friend function
        p.x = x;
    }
}

void friendFunc() {
    frfnc::Point a(5,2);
    a.print();
    frfnc::ChangeX(a, 4);
    a.print();
}