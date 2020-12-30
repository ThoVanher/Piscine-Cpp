#include "Human.hpp"

Human::Human()
{
    return;
}

Human::~Human()
{
}

std::string Human::identify() const
{
    return (this->HumanBrain.identify());
}

Brain &Human::getBrain()
{
    return this->HumanBrain;
}