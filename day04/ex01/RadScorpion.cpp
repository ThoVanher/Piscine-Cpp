#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &spm)
{
    std::cout << "RadScorpion copy called" << std::endl;
    *this = spm;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &spm)
{
    Enemy::operator=(spm);
    std::cout << "RadScorpion Assignation called" << std::endl;
    return *this;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
