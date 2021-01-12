#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
class Victim
{
protected:
    std::string _name;

public:
    Victim();
    Victim(std::string name);
    Victim(Victim const &vct);
    Victim &operator=(Victim const &vct);
    virtual ~Victim();
    virtual void getPolymorphed() const;
    std::string getName() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &vct);

#endif