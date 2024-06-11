#include <iostream>
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
    int x; int y; int z;
    void print(){
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

void classWriteIn(Point& point){
    std::ofstream fout;
    fout.open("MyFile.txt", std::ofstream::app);

    if (!fout.is_open()){
        std::cout << "Error opening file" << std::endl;
    } else {

        fout.write((char*)&point, sizeof(Point)); // write to file
        //first parameter is the address of the object in char type
        //second parameter is the size of the object in bytes
        //in the file will be writtem only a set of bytes - its normal!!!

    }
    fout.close();
}

void classOutput(std::string path){
    std::ifstream fin;
    fin.open(path);

    if (!fin.is_open()){
        std::cout << "File not found" << std::endl;
        return;
    }

    Point pnt;
    while (fin.read((char*)&pnt, sizeof(Point))){
        pnt.print();
    }

}

void classObjFile() {
    //Point point(2, 3, 5);
    //classWriteIn(point);
    classOutput("MyFile.txt");

}