#include "ZombieHorde.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Enter a number of Zombie you want in the horde as argument" << std::endl;
        return (0);
    }
    int nbZombie = atoi(argv[1]);
    if (nbZombie > 0)
    {
        ZombieHorde horde = ZombieHorde(nbZombie);
        horde.announce();
        std::cout << std::endl
                  << "say goodbye to the Horde" << std::endl
                  << std::endl;
    }
    return 0;
}
