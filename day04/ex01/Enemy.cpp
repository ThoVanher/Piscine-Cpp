#include "Enemy.hpp"

Enemy::Enemy()
{
    //std::cout << "Enemy default constructor called" << std::endl;
}

Enemy::Enemy(int hp, std::string const &type) : _HP(hp), _type(type)
{
    // std::cout << "Enemy parameter constructor called" << std::endl;
}

Enemy::Enemy(Enemy const &en)
{
    //std::cout << " Enemy copy constructor called" << std::endl;
    *this = en;
}

Enemy &Enemy::operator=(Enemy const &en)
{
    this->_HP = en.getHP();
    this->_type = en.getType();
    return *this;
}

Enemy::~Enemy()
{
    //std::cout << "Enemy killed ! " << std::endl;
}

std::string const Enemy::getType() const
{
    return this->_type;
}

int Enemy::getHP() const
{
    return this->_HP;
}

void Enemy::setHP(int hp)
{
    this->_HP = hp;
}

void Enemy::takeDamage(int amount)
{
    if (this->_HP > 0 && this->_HP < amount)
        this->_HP = 0;
    if (this->_HP > 0 && this->_HP >= amount)
        this->_HP -= amount;
}