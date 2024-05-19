#include <iostream>
#include <string>

namespace fcmth{
    class Human;
    class Apple;// Forward declaration

    class Human {
    private:
        std::string name;
    public:
        void takeApple(Apple& a) {
            //std::cout << "Human " << name << " took apple with weight " << a.weight << " and color " << a.color << std::endl;
        }
    };

    class Apple {
    private:
        int weight;
        std::string color;
        //friend void Human::takeApple(Apple a);
    };
}

void friendClassMethod() {
    std::cout << "Hello World!\n";
}
