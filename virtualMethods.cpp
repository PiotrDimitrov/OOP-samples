#include <iostream>
#include <string>
using namespace std;

#define DEBUG

class Gun{
public:
    virtual void shoot(){ //virtual method
        cout << "BAM\n";
    }
};

class MachineGun : public Gun{
public:
    void shoot() override { //overriding virtual method
        cout << "RATATATA\n";
    }
};

class Bazooka : public Gun{
public:
    void shoot() override { //overriding virtual method
        cout << "BOOM\n";
    }
};

class Marksman{
public:
    void shoot(Gun* gun){  //function overloading
        gun->shoot(); //using polymorphism
    }
};

void virtualMethods() {
    Gun pistol1;
    pistol1.shoot();

    MachineGun pistol2;
    pistol2.shoot();

    Gun gun;

#ifdef DEBUG

    MachineGun machinegun;

    Gun *gunMachinegunPtr = &machinegun;

    gunMachinegunPtr->shoot(); //one method - different realisations

#else

    //Gun gun;

  Gun *gunMachinegunPtr = &gun;

  gunMachinegunPtr->shoot(); ////one method - different realisations


#endif
    cout << "--------------------------------------\n";
    Bazooka bazooka;

    Marksman marksman;
    marksman.shoot(&gun);
    marksman.shoot(&machinegun);
    marksman.shoot(&bazooka);

}