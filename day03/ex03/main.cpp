#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    srand(time(NULL));
    std::cout << std::endl
              << "----TESTS D'INSTANCIATION ET DE COPIE----" << std::endl
              << std::endl;
    ClapTrap mom("mom");
    FragTrap Bob("Bob");
    ScavTrap Marley("Marley");
    NinjaTrap Donatello("Donatello");
    NinjaTrap Michelangelo(Donatello);
    Michelangelo.setName("Michelangelo");

    std::cout << std::endl
              << "----TESTS DE LA FONCTION TAKE DAMAGE ET REPAIR----" << std::endl
              << std::endl;
    Donatello.takeDamage(120);
    std::cout << Bob.getHitPoints() << std::endl;
    Donatello.beRepaired(120);
    std::cout << Donatello.getHitPoints() << std::endl;
    Donatello.takeDamage(70);
    std::cout << Donatello.getHitPoints() << std::endl;
    Donatello.beRepaired(25);
    std::cout << Donatello.getHitPoints() << std::endl;
    Donatello.beRepaired(200);
    std::cout << Donatello.getHitPoints() << std::endl;

    std::cout << std::endl
              << "----TESTS DE L'ATTAQUE DES NINJ4-TP----" << std::endl
              << std::endl;
    Donatello.ninjaShoebox(Bob);
    std::cout << std::endl;
    Donatello.ninjaShoebox(Marley);
    std::cout << std::endl;
    Donatello.ninjaShoebox(Michelangelo);
    std::cout << std::endl;
    Donatello.ninjaShoebox(mom);
    std::cout << std::endl;

    std::cout << std::endl
              << "----VERIFICATION DES DESTRUCTIONS----" << std::endl
              << std::endl;
}
