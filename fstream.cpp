#include <iostream>
#include <string>
#include <fstream>


int main() {
    std::fstream fs;
    fs.open("MyFile.txt", std::fstream::in | std::fstream::out | std::fstream::app); // open file in read/write/append mode
    // | - is the bitwise OR operator

    if (!fs.is_open()){
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    std::cout << "1) Type 1 to write to file " << std::endl;
    std::cout << "2) Type 2 to read from file " << std::endl;
    int choise;
    std::cin >> choise;
    if (choise == 1){

        std::string msg;
        std::cin >> msg;
        fs << msg << std::endl;

    } else if (choise == 2) {

        std::string msg;
        while(!fs.eof()){
            fs >> msg;
            std::cout << msg << std::endl;
            msg = "";
        }

    }
    fs.close();
    return 0;
}