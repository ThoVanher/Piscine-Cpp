#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Brain
{
private:
    std::stringstream _addr;

public:
    Brain();
    ~Brain();
    std::string identify() const;
};

#endif