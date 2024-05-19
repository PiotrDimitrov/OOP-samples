#include <iostream>
#include <string>

namespace inhc{
    class Human {
    public:
        std::string name;
    };

    class Student : public Human {
    public:
        std::string group;
        void Learn(bool x = 1){
            std::cout << "I'm learning";
            if (x) {std::cout << std::endl;}
        }
    };

    class ExtramuralStudent : public Student {
    public:
        void Learn(bool x = 1){
            std::cout << "I'm learning at home!";
            if (x) {std::cout << std::endl;}
        }
    };

    class Professor : public Human {
    public:
        std::string subject;
    };
}

void inheritance() {
    inhc::Student st;
    st.name = "Jora";
    st.group = "FSW - 265";
    st.Learn();

    inhc::ExtramuralStudent st1;
    st1.name = "Iura";
    st1.group = "FSW - 234";
    st1.Learn();

    inhc::Professor pr;
    pr.name = "Ivan";
    pr.subject = "Programming";
}