#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) : _name(name), _color(color), _age(age)
{
}

Pony::~Pony()
{
    std::cout << "Destructor called : oh no " << this->_name << " has just died, snif" << std::endl
              << std::endl;
}

int Pony::getAge() const
{
    return _age;
}

std::string Pony::getColor() const
{
    return _color;
}
