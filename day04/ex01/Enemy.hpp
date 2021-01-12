#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
private:
    int _HP;
    std::string _type;

public:
    Enemy();
    Enemy(int hp, std::string const &type);
    Enemy(Enemy const &en);
    Enemy &operator=(Enemy const &en);
    virtual ~Enemy();

    std::string const getType() const;
    int getHP() const;
    void setHP(int hp);
    virtual void takeDamage(int);
};

#endif