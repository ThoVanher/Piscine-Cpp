#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("SC4V-TP", 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "SC4V-TP default constructor called, " << _name << " ready to challenge you" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "SC4V-TP[" << name << "] ready to challenge you" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP[" << this->getName() << "] quit his job" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ft)
{
    *this = ft;
    std::cout << "ScavTrap [twin " << ft.getName() << "] created" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &sc)
{
    std::cout << "SC4V-TP assignation called" << std::endl;
    ClapTrap::operator=(sc);
    return *this;
}

void ScavTrap::rangedAttack(std::string const &target) const
{
    std::cout << "SC4V-TP[" << this->getName() << "] paralyse " << target << " with ultrasound causing "
              << getRangedAttackDamage() << " points of damages !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const
{
    std::cout << "SC4V-TP[" << this->getName() << "] tackle " << target << " causing "
              << getMeleeAttackDamage() << " points of damages !" << std::endl;
}

void ScavTrap::challengeNewComer(int index)
{
    std::string cmd;
    std::cout << "SC4V-TP[" << this->getName() << "] : Hey new comer, I'll challenge you with one of my 3 entry test, if you fail you'll go back to where you're coming" << std::endl
              << std::endl;
    if (index == 0)
    {
        std::cout << "Math quiz : what is the square root of 381 ? " << std::endl;
        std::cin >> cmd;
        if (cmd.compare("19") == 0)
            std::cout << "SC4V-TP[" << this->getName() << "] : Congrat's, come in" << std::endl;
        else
            std::cout << "SC4V-TP[" << this->getName() << "] : answer was '19', you're an idiot, get back, ciao ! " << std::endl;
    }
    if (index == 1)
    {
        std::cout << "write correctly the word 'aurnitor1ke' in a good french" << std::endl;
        std::cin >> cmd;
        if (cmd.compare("ornithorynque") == 0)
            std::cout << "SC4V-TP[" << this->getName() << "] : Well done !! Come in ! " << std::endl;
        else
            std::cout << "SC4V-TP[" << this->getName() << "] : wrong, return to your mother skirts and learn franch !" << std::endl;
    }
    if (index == 2)
    {
        std::cout << "I don't why but you seem to be a good guy, the easiest test for you" << std::endl;
        std::cout << "what is my name ?" << std::endl;
        std::cin >> cmd;
        if (cmd.compare(this->getName()) == 0)
            std::cout << "SC4V-TP[" << this->getName() << "] : Like i said, easy ! come in ! " << std::endl;
        else
            std::cout << "SC4V-TP[" << this->getName() << "] : I was wrong you're not the guy i thought, go back to read the main" << std::endl;
    }
    std::cout << std::endl;
}