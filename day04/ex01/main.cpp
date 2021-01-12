#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    std::cout << std::endl
              << "-----TESTS PROVIDED WITH SUBJECT------ " << std::endl
              << std::endl;

    Character *moi = new Character("Thomas");
    std::cout << "--caracter announce before get an arm ---";
    std::cout << *thomas;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    moi->equip(pr);
    std::cout << "--caracter announce after get a PlasmaRifle ---";
    std::cout << *moi;
    std::cout << "--caracter launch a serial of attacks after change his arm with a PowerFist ---";
    std::cout << "---------------------and until enemy's death-----------------------------------" moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    std::cout << std::endl
              << "-----COMPLENTARY TEST------ " << std::endl
              << std::endl;

    Character *bob = new Character();
    Enemy *c = new SuperMutant();
    std::cout << *bob;
    bob->equip(pf);
    std::cout << *bob;
    bob->attack(c);
    std::cout << c->getHP() << std::endl;
    bob->attack(c);
    std::cout << c->getHP() << std::endl;
    bob->attack(c);
    std::cout << c->getHP() << std::endl;
    bob->attack(c);
    std::cout << c->getHP() << std::endl;
    std::cout << *bob;
    Enemy *d = new SuperMutant();
    bob->attack(c);
    bob->attack(c);
    bob->recoverAP();
    bob->recoverAP();
    bob->recoverAP();
    bob->recoverAP();
    bob->recoverAP();
    std::cout << *bob;
    bob->attack(d);
    bob->attack(d);
    bob->attack(d);
    return 0;
}