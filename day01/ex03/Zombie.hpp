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
    Zombie(std::string name, std::string _type);
    Zombie();
    ~Zombie();
    void announce() const;
    void randomChump();
    std::string getName() const;
    std::string getType() const;
    void setName(std::string name);
    void setType(std::string type);
    void setWhere(int where);
};

#endif