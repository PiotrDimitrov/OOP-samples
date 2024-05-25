class A{
public:
    A(){

    }
    virtual ~A() = 0; // pure virtual destructor

};
A::~A(){};  //standart destructor, we need it to avoid errors

class B : public A{
public:
    B(){

    }
    ~B() override{

    }
};

void pureVirtDestr() {

}