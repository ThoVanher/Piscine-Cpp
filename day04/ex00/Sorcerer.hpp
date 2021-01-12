#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;

public:
    Sorcerer();
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const &srcr);
    Sorcerer &operator=(Sorcerer const &srcr);
    ~Sorcerer();
    void polymorph(Victim const &vc) const;
    std::string getName(void) const;
    std::string getTitle(void) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &srcr);

#endif