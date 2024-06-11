#include <iostream>
#include <string>
#include <fstream>

class Point{
public:
    Point(){
        x = y = z = 0;
    }
    Point(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void print(){
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
    friend std::istream& operator >> (std::istream& is, Point& p);
    friend std::ostream& operator << (std::ostream& os, const Point& p);
private:
    int x; int y; int z;
};

std::ostream& operator << (std::ostream& os, const Point& p){
    //first argument - pointer to object like fout or cout
    //second - object of class we want to output (ex: p1 frpm Point class)
    os << "(" << p.x << "," << p.y << "," << p.z << ")";
    return os;
}

std::istream& operator >> (std::istream& is, Point& p){
    is >> p.x >> p.y >> p.z;
    return is;
}

void bitwiseOpOvrld() {
    std::string path = "MyFile.txt";
    Point p1(1, 2, 3);

    std::fstream fs;
    fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);

    if(!fs.is_open()){
        std::cout << "Error" << std::endl;
        return;
    }

    //after << and >> overload we will be able to do this:

    //std::cout << p1;
    fs << p1 << std::endl;

    while(true){
        Point p2;
        fs >> p2;
        if (fs.eof()){break;}
        std::cout << p2 << std::endl;
    }
    
    fs.close();
}



