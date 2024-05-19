#include <iostream>
#include <string>

namespace inham{
    class A {
    public:
        void publicMsg(){std::cout << "publicMsg" << std::endl;}
    protected:
        void protectedMsg(){std::cout << "protectedMsg" << std::endl;}
    private:
        void privateMsg(){std::cout << "privateMsg" << std::endl;}
    };

    class publicA : public A{
    public:
        void callPub(){
            std::cout << "call in publicA" << std::endl;
            publicMsg();
            protectedMsg();
            //privateMsg(); //error
        }
    };

    class protectedA : protected A{
    public:
        void callProt(){
            std::cout << "call in publicA" << std::endl;
            publicMsg();
            protectedMsg();
            //privateMsg(); //error
        }
    };

    class privateA : private A{
    public:
        void callPriv(){
            std::cout << "call in publicA" << std::endl;
            publicMsg();
            protectedMsg();
            //privateMsg(); //error
        }
    };
}


void inhAccessMod(){
    inham::publicA publicA;
    inham::protectedA protectedA;
    inham::privateA privateA;

    publicA.publicMsg(); //public -> public
    //publicA.protectedMsg(); //protected -> protected
    //publicA.privateMsg();
    publicA.callPub();

    //protectedA.publicMsg(); //public -> protected
    //protectedA.protectedMsg(); //protected -> protected
    //protectedA.privateMsg();
    protectedA.callProt();

    //privateA.publicMsg(); //public -> private
    //privateA.protectedMsg(); //protected -> private
    //privateA.privateMsg();
    privateA.callPriv();

}