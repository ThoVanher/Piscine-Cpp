#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    std::cout << std::endl
              << "----TESTS D'INSTANCIATION ET DE COPIE----" << std::endl
              << std::endl;
    ClapTrap Mom("Mom");
    FragTrap Bob("Bob");
    ScavTrap Marley("Marley");
    ClapTrap TwinMom(Mom);
    FragTrap Twinfr(Bob);
    ScavTrap TwinSc(Marley);
    Twinfr.setName("Twin Bob");
    TwinSc.setName("Twin Marley");
    TwinMom.setName("twin mom");
    std::cout << std::endl
              << "----TESTS DES ATTAQUES DU CLAPTRAP----" << std::endl
              << std::endl;
    Mom.meleeAttack("ted");
    Mom.rangedAttack("ted");
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
    Mom.takeDamage(120);
    std::cout << Mom.getHitPoints() << std::endl;
    Mom.beRepaired(120);
    std::cout << Mom.getHitPoints() << std::endl;
    Mom.takeDamage(70);
    std::cout << Mom.getHitPoints() << std::endl;
    Mom.beRepaired(25);
    std::cout << Mom.getHitPoints() << std::endl;
    Mom.beRepaired(200);
    std::cout << Mom.getHitPoints() << std::endl;

    std::cout << std::endl
              << "----TESTS DES CHALLENGES DES SCAVTRAP----" << std::endl
              << std::endl;
    Marley.challengeNewComer(0);
    Marley.challengeNewComer(1);
    Marley.challengeNewComer(2);

    std::cout << std::endl
              << "----VERIFICATION DES DESTRUCTIONS----" << std::endl
              << std::endl;
}
