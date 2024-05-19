#include <iostream>
#include <string>

namespace agdl {
    class Cap {
    private:
        std::string color = "red";
    public:
        std::string getColor() {
            return color;
        }
    };

    class Human {
    public:
        void think() {
            brain.think(); //delegation
        }
        void ShowCap() {  //agregation
            std::cout << "My cap is " << cap.getColor() << std::endl;
        }
    private:
        class Brain { //example of composition
        public:  //class Brain is strictly linked to Human
            void think() {
                std::cout << "I'm Thinking" << std::endl;
            }
        };

        Brain brain;
        Cap cap;
    };
}

void agregDelegat() {
    agdl::Human human;
    human.think();
    human.ShowCap();
}