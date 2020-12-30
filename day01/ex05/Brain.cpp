#include "Brain.hpp"

Brain::Brain()
{
    this->_addr << this;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
    return (this->_addr.str());
}