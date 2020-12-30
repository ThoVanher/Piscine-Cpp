#include "FragTrap.hpp"

int main()
{
    std::cout << std::endl
              << "----TESTS D'INSTANCIATION ET DE COPIE----" << std::endl
              << std::endl;
    FragTrap Bob("Bob");
    FragTrap Twin(Bob);
    Twin.setName("Twin Bob");
    srand(time(NULL));
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

    std::cout << std::endl
              << "----VERIFICATION DES DESTRUCTONS----" << std::endl
              << std::endl;
}
