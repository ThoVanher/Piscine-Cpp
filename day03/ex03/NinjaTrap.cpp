#include "NinjaTrap.hpp"
NinjaTrap::NinjaTrap() : ClapTrap("NINJ4-TP", 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "Default constructor called, " << _name << " ready to play you a trick";
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "NINJ4[" << name << "] ready to play you a trick" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJ4[" << this->getName() << "] won't eat pizza anymore" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ft)
{
    *this = ft;
    std::cout << "NINJ4-TP[Twin " << ft.getName() << "] created" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &nnj)
{
    std::cout << "NINJ4-TP assignation called" << std::endl;
    ClapTrap::operator=(nnj);
    return *this;
}

void NinjaTrap::rangedAttack(std::string const &target) const
{
    std::cout << "FR4G-TP " << this->getName() << " attack " << target << " with Aya Nakamura's sound causing "
              << getRangedAttackDamage() << " points of damages !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target) const
{
    std::cout << "FR4G-TP " << this->getName() << " attack " << target << " whith a mawashi geri kick causing "
              << getMeleeAttackDamage() << " points of damages !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clp) const
{
    std::string cmd;
    std::string daughters[3] = {"FR4G-TP", "SC4V-TP", "NINJ4-TP"};
    std::cout << "CL4P-TP " << this->getName() << " : " << clp.getName() << " tell me what'is your favorite daughter" << std::endl
              << " FR4G-TP : [1], SC4V-TP : [2], NINJ4-TP :[3]" << std::endl;
    std::cin >> cmd;
    if (cmd.compare("3") == 0)
        std::cout << "Love you too " << clp.getName() << " !!" << std::endl;
    else if (cmd.compare("2") == 0 || cmd.compare("1") == 0)
        std::cout << "pfff .. They are idiot daughters !" << std::endl;
    else
        std::cout << "you disappoint me, i thought you would be able to admit your preference" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frg) const
{
    std::cout << "NINJ4-TP " << this->getName() << " : Hey FR4G-TP " << frg.getName() << std::endl
              << "FR4G-TP " << frg.getName() << " : what do you want? " << std::endl
              << "NINJ4-TP " << this->getName() << " : Beeeuuuh " << std::endl;
    while (frg.getHitPoints() != 0)
    {
        frg.meleeAttack(frg.getName());
        frg.takeDamage(frg.getMeleeAttackDamage());
    }
    std::cout << "NINJ4-TP " << this->getName() << " : I always know that FR4G-TP were idiots, could they really be my sisters ?!?" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scv) const
{
    int bugtime = 0;
    int repeat = 0;
    std::cout << "NINJ4-TP " << this->getName() << " : Hey SC4V-TP " << scv.getName() << std::endl
              << "SCAV-TP " << scv.getName() << " : what ? " << std::endl
              << "NINJ4-TP " << this->getName() << " : Beeeuuuh " << std::endl;
    while (bugtime != 10)
    {
        std::cout << "SC4V-TP " << scv.getName() << " : I'm an idiot" << std::endl;
        bugtime = rand() % 11;
        repeat++;
    }
    std::cout << "NINJ4-TP " << this->getName() << " : Yes you are, you just confirm it " << repeat << " times" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &nnj) const
{
    std::cout << "NINJ4-TP " << this->getName() << " : hey " << nnj.getName() << " a true sister :), a smart one !"
              << std::endl
              << "NINJ4-TP " << this->getName() << " : I'll quadruple your rangedAttackDamage" << std::endl
              << "NINJ4-TP " << this->getName() << " : Abracadabra " << std::endl;
    nnj.setRangedAttackDamage(15);
    std::cout << "CONGRATULATIONS !! rangedAttackDamage upgrade to " << nnj.getMeleeAttackDamage() << " for NINJ4-TP " << nnj.getName() << std::endl;
    std::cout << "NINJ4-TP " << nnj.getName() << " : Thank you so much sista, i'll give you back one day" << std::endl;
}

void NinjaTrap::setRangedAttackDamage(int newDamage)
{
    this->_rangedAttackDamage = newDamage;
}