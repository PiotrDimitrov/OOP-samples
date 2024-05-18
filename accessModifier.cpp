#include <iostream>

namespace acsmdf{
    class Point {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void Print(){ //inside function can access private and protected
            std::cout << x << " " << y << " " << z << std::endl;
        }
    };
}


void accessModifier() {
    acsmdf::Point a;
    //a.x = 1; //cannot access private
    //cout << a.x;
    //a.y = 2; //cannot access protected
    //cout << a.y;
    a.z = 1;
    std::cout << a.z;
    a.Print(); //function can be called
}