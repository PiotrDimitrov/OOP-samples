#include <iostream>
#include <string>
using namespace std;

class Msg{
public:
    Msg(string m){
        this->msg = m;
    }
    virtual string getMsg(){
        return this->msg;
    }
private:
    string msg;
};

class BraketMsg : public Msg{
public:
    BraketMsg(string m) : Msg(m){
        //this->getMsg() = "[" + this->getMsg() + "]";
    }
    string getMsg() override {
        return "[" + Msg::getMsg() + "]"; //call base class method
    }                                   //avoid infinite recursion
};

class Printer{
public:
    void print(Msg* msg){
        cout << msg->getMsg() << endl;
    }
};

void baseVirtMethod(){
    BraketMsg m("Hello");

    Printer p;
    p.print(&m);

}