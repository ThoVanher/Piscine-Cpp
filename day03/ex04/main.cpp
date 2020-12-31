#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
    SuperTrap Boss("Boss");
    SuperTrap Twinboss(Boss);
    Twinboss.setName("Twinboss");

    std::cout << std::endl
              << "----TESTS DE LA FONCTION TAKE DAMAGE ET REPAIR----" << std::endl
              << std::endl;
    Boss.takeDamage(120);
    std::cout << Boss.getHitPoints() << std::endl;
    Boss.beRepaired(120);
    std::cout << Boss.getHitPoints() << std::endl;
    Boss.takeDamage(70);
    std::cout << Boss.getHitPoints() << std::endl;
    Boss.beRepaired(25);
    std::cout << Boss.getHitPoints() << std::endl;
    Boss.beRepaired(200);
    std::cout << Boss.getHitPoints() << std::endl;

    std::cout << std::endl
              << "----TESTS DES FONCTIONS RANGED AND MELEE ATTACK----" << std::endl
              << std::endl;
    Bob.rangedAttack("Twinboss");
    Boss.rangedAttack("Twinboss");
    Donatello.meleeAttack("TwinBoss");
    Boss.meleeAttack("Twinboss");

    std::cout << std::endl
              << "----TESTS DE L'ATTAQUE NINJASHOEBOX POUR SUP3R-TP----" << std::endl
              << std::endl;
    Boss.ninjaShoebox(Bob);
    std::cout << std::endl;
    Boss.ninjaShoebox(Marley);
    std::cout << std::endl;
    Boss.ninjaShoebox(Donatello);
    std::cout << std::endl;
    Boss.ninjaShoebox(mom);
    std::cout << std::endl;

    std::cout << std::endl
              << "----TESTS DE L'ATTAQUE VAULTHUNTER_DOT_EXE POUR SUP3R-TP----" << std::endl
              << std::endl;
    Boss.vaulthunter_dot_exe("mom");
    Boss.vaulthunter_dot_exe("mom");
    Boss.vaulthunter_dot_exe("mom");
    Boss.vaulthunter_dot_exe("mom");
    Boss.vaulthunter_dot_exe("mom");

    std::cout << std::endl
              << "----VERIFICATION DES DESTRUCTIONS----" << std::endl
              << std::endl;
}
