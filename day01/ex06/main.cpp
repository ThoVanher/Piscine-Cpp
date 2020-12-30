#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}

//Une référence (un alias) doit forcément être initialisé :
//- à sa déclaration dans le cas d'une fonction qelquonqe
//- à sa construction si c'est un attribut membre
//Donc dans le cas de Human B, on ne peut pas store l'arme comme référence puisque le constructeur de HumanB
//ne prend qu'un string type en paramètre, alors que HumanA prend un string type et une arme comme paramètre
//de son constructeur