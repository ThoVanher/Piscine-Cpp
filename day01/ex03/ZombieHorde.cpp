#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->_n = N;
    this->_horde = new Zombie[N];
    int i = -1;
    srand(time(NULL));
    while (++i < _n)
    {
        _horde[i].randomChump();
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] _horde;
    std::cout << std::endl
              << "the horde has been destroyed" << std::endl;
}

void ZombieHorde::announce()
{
    int i = -1;
    while (++i < _n)
    {
        _horde[i].announce();
    }
}
