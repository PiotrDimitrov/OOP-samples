#include <iostream>

namespace rmbinh {
    class component {
    public:
        component(std::string companyName){
            std::cout << "Component construcor" << std::endl;
            this->companyName = companyName;
        }
        std::string companyName;
    };

    class GPU : public component{
    public:
        GPU(std::string companyName) : component(companyName){
            std::cout << "GPU construcor" << std::endl;
        }
    };

    class memory : public component{
    public:
        memory(std::string companyName) : component(companyName){
            std::cout << "Memory construcor" << std::endl;
        }
    };

    class graphicCard : public GPU, public memory{
    public: //no need to use romboid inheritance
        graphicCard(std::string GPUCompanyName, std::string MemoryCompanyName) : GPU(GPUCompanyName), memory(MemoryCompanyName){
            std::cout << "Graphic Card Constructor" << std::endl;
        }
    };
/////////////////////////////////
    class character{
    public:
        int hp;
        character(){
            std::cout << "character created" << std::endl;
        }
    };

    class warrior: public virtual character{
    public:
        warrior(){
            std::cout << "warrior created" << std::endl;
        }
    };

    class orc : public virtual character{
    public:
        orc(){
            std::cout << "orc created" << std::endl;
        }
    };

    class orcWarrior : public orc, public warrior{
    public: //romboid inheritance is needed
        orcWarrior(){
            std::cout << "orcWarrior created" << std::endl;
        }
    };
}

void romboidInher(){
    rmbinh::orcWarrior ow;
    rmbinh::graphicCard gc("cmp1", "cmp2");
}
