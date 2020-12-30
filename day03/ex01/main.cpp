#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    std::cout << std::endl
              << "----TESTS D'INSTANCIATION ET DE COPIE----" << std::endl
              << std::endl;
    FragTrap Bob("Bob");
    ScavTrap Marley("Marley");
    ScavTrap Twin(Marley);
    Twin.setName("Twin Marley");
    std::cout << std::endl
              << "----TESTS DES ATTAQUES DU FRAGTRAP----" << std::endl
              << std::endl;
    Bob.meleeAttack("ali");
    Bob.rangedAttack("ali");
    Bob.vaulthunter_dot_exe("ali");
    Bob.vaulthunter_dot_exe("baba");
    Bob.vaulthunter_dot_exe("jim");
    Bob.vaulthunter_dot_exe("tom");
    Bob.vaulthunter_dot_exe("bil");

    std::cout << std::endl
              << "----TESTS DES ATTAQUES DU SCAVTRAP----" << std::endl
              << std::endl;
    Marley.meleeAttack("ali");
    Marley.rangedAttack("ali");

    std::cout << std::endl
              << "----TESTS DE LA FONCTION TAKE DAMAGE ET REPAIR----" << std::endl
              << std::endl;
    Bob.takeDamage(120);
    std::cout << Bob.getHitPoints() << std::endl;
    Bob.beRepaired(120);
    std::cout << Bob.getHitPoints() << std::endl;
    Bob.takeDamage(70);
    std::cout << Bob.getHitPoints() << std::endl;
    Bob.beRepaired(25);
    std::cout << Bob.getHitPoints() << std::endl;
    Bob.beRepaired(200);
    std::cout << Bob.getHitPoints() << std::endl;
    Marley.takeDamage(120);
    std::cout << Marley.getHitPoints() << std::endl;
    Marley.beRepaired(120);
    std::cout << Marley.getHitPoints() << std::endl;
    Marley.takeDamage(70);
    std::cout << Marley.getHitPoints() << std::endl;
    Marley.beRepaired(25);
    std::cout << Marley.getHitPoints() << std::endl;
    Marley.beRepaired(200);
    std::cout << Marley.getHitPoints() << std::endl;

    std::cout << std::endl
              << "----TESTS DES CHALLENGES DES SCAVTRAP----" << std::endl
              << std::endl;
    Marley.challengeNewComer(0);
    Marley.challengeNewComer(1);
    Marley.challengeNewComer(2);

    std::cout << std::endl
              << "----VERIFICATION DES DESTRUCTONS----" << std::endl
              << std::endl;
}
