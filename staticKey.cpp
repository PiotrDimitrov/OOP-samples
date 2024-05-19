#include <iostream>

namespace sttc{
    class TestClass{
    public:
        int x;
        static int y;
        static int getY(){
            return y;
        }
        void print(){
            std::cout <<"x = "<< x << ", y = " << y << std::endl;
        }
    };
    int TestClass::y = 0;
    class User{
    public:
        std::string name;
        int age;
        User(){
            count++;
            id = count;
            std::cout << "Enter your name: "; std::cin >> name;
            std::cout << "Enter your age: "; std::cin >> age;
        }
        void printID(){
            std::cout << this->name << " ID is: " << this->id << std::endl;
        }
        static int GetCount(){
            return count;
        }
    private:
        static int count;
        int id;
    };
    int User::count = 0;
}

void staticKey() {
    sttc::TestClass one;
    one.x = 3;
    one.y = 4;
    one.print();

    sttc::TestClass two;
    two.x = 5;
    two.y = 6;
    two.print();

    one.print(); //static variable is single for EVERY object of TestClass

    sttc::User u1;
    std::cout << sttc::User::GetCount();
}