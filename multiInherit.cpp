#include <iostream>
#include <string>
//#define DEBUG

namespace mltinh{
    class Machine{
    public:
        int model;

#ifdef DEBUG
        Machine(){
    model = 0;
    cout << "Machine Constructor" << endl;
  }
  ~Machine(){
    cout << "Machine Destructor" << endl;
  }
#endif

    };

    class Human{
    public:
        std::string name;

#ifdef DEBUG
        Human(){
   name = " ";
   cout << "Human Constructor" << endl;
 }
~Human(){
  cout << "Human Destructor" << endl;
}
#endif

    };

    class Robot : public Machine, public Human{
    public:
        void Speak(){
            std::cout << "I'm a robot " << this->name << " " << this->model << std::endl;
        }

#ifdef DEBUG
        Robot(){
    cout << "Robot Constructor" << endl;
  }
  ~Robot(){
    cout << "Robot Destructor" << endl;
  }
#endif

    };
}

void multiInherit(){
    mltinh::Robot one;
    one.name = "Robo"; //inheritated from Human
    one.model = 123;  //inheritated from Machine
    one.Speak();     //own method
}