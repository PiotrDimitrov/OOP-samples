#include <iostream>
#include <string>

namespace frmth{
    class Apple; // Forward declaration

    class Human {
    private:
        std::string name;
    public:
        void takeApple(Apple& a); // Declare the function here, but do not define it
    };

    class Apple {
    private:
        int weight;
        std::string color;

        friend void Human::takeApple(Apple& a);
    };
    void Human::takeApple(Apple& a) { // Define the function here
        std::cout << "Human " << name << " took apple with weight " << a.weight << " and color " << a.color << std::endl;
    }
}

void friendClassMethod() {

}
