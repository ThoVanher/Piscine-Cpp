#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
    std::string _name;
    std::string _type;
    int _where;

public:
    Zombie();
    Zombie(std::string name, std::string _type);
    ~Zombie();
    void announce() const;
    static Zombie randomChump();
    std::string getName() const;
    std::string getType() const;
    void setWhere(int where);
};

#endif