#include <iostream>

class Weapon{ //abstract class
public:
    virtual void shoot() = 0; //pure virtual function
};

class Gun : public Weapon{
public:
    virtual void shoot(){ //virtual method
        std::cout << "BAM\n";
    }
};

class MachineGun : public Gun{
public:
    void shoot() override { //overriding virtual method
        std::cout << "RATATATA\n";
    }
};

class Bazooka : public Weapon{
public:
    void shoot() override { //overriding virtual method
        std::cout << "BOOM\n";
    }
};

class Knife : public Weapon{
public:
    void shoot() override { //overriding virtual method
        std::cout << "SLASH\n";
    }
};

class Marksman{
public:
    void shoot(Weapon* w){  //function overloading
        w->shoot(); //using polymorphism
    }
};

void abstractClass() {
    Gun gun;
    MachineGun machineGun;
    Bazooka bazooka;
    Knife knife;

    Marksman marksman;
    marksman.shoot(&gun);
    marksman.shoot(&machineGun);
    marksman.shoot(&bazooka);
    marksman.shoot(&knife);

}