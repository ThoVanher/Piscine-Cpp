#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
class Pony
{
private:
    std::string _name;
    std::string _color;
    int _age;

public:
    Pony(std::string name, std::string color, int age);
    ~Pony();
    int getAge() const;
    std::string getColor() const;
};

#endif