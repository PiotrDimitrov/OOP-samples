#include <iostream>

namespace frcl{
    class GFG {
    private:
        int private_variable;

    protected:
        int protected_variable;

    public:
        GFG()
        {
            private_variable = 10;
            protected_variable = 99;
        }

        // friend class declaration
        friend class F;
    };
// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
    class F {
    public:
        void display(GFG& t)
        {
            std::cout << "The value of Private Variable = "
                 << t.private_variable << std::endl;
            std::cout << "The value of Protected Variable = "
                 << t.protected_variable;
        }
    };
}

void friendClass()
{
    frcl::GFG g;
    frcl::F fri;
    fri.display(g);
}