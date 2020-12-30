#include "ZombieEvent.hpp"

std::string another_chance(std::string cmd)
{
    while (cmd.compare("y") != 0)
    {
        std::cout << "are you sure ? once again, do you want to kill the zombie [y/n] : ";
        std::cin >> cmd;
        if (cmd.compare("y") == 0)
            break;
    }
    return (cmd);
}

int main()
{
    int end = 0;
    std::string cmd;
    ZombieEvent Zombie_event;
    srand(time(NULL));

    while (end != 1)
    {
        Zombie *bornedZombie;
        Zombie tmp = Zombie::randomChump();
        Zombie_event.setZombieType(tmp.getType());
        bornedZombie = Zombie_event.newZombie(tmp.getName());
        bornedZombie->announce();
        if (bornedZombie->getName().compare("Jason") == 0)
            end++;
        std::cout << "do you want to kill the Zombie ? [y/n] : ";
        std::cin >> cmd;
        if (cmd.compare("y") != 0)
            another_chance(cmd);
        delete bornedZombie;
    }
}