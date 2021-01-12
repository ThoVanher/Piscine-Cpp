#include "Squad.hpp"

Squad::Squad() : _nb_unit(0), _squad(0)
{
}

Squad::Squad(Squad const &sq)
{
    *this = sq;
}

Squad &Squad::operator=(Squad const &sq)
{
    t_unit *tmp1;
    t_unit *tmp2;
    if (this->_squad)
    {
        tmp1 = _squad;
        while (tmp1)
        {
            tmp2 = tmp1;
            tmp1 = tmp1->_next;
            delete (tmp2->_unit);
            delete (tmp2);
        }
        this->_squad = 0;
    }
    if (sq._squad == 0)
        this->_squad = 0;
    else
    {
        tmp1 = sq._squad;
        while (tmp1)
        {
            this->push(tmp1->_unit->clone());
            tmp1 = tmp1->_next;
        }
    }
    this->_nb_unit = sq._nb_unit;
}

Squad::~Squad()
{
    t_unit *tmp1;
    t_unit *tmp2;

    tmp1 = this->_squad;
    while (tmp1)
    {
        tmp2 = tmp1;
        tmp1 = tmp1->_next;
        delete (tmp2->_unit);
        delete (tmp2);
    }
    this->_squad = 0;
}

int Squad::getCount() const
{
    return (this->_nb_unit);
}

ISpaceMarine *Squad::getUnit(int N) const
{
    t_unit *tmp;
    int i = 0;
    if (!this->_squad)
        return (0);
    else
    {
        tmp = this->_squad;
        while (tmp && i < this->_nb_unit)
        {
            if (i == N)
                return (tmp->_unit);
            i++;
            tmp = tmp->_next;
        }
    }
    return (0);
}

int Squad::push(ISpaceMarine *sm)
{

    t_unit *newUnit = new t_unit;
    t_unit *tmp = this->_squad;

    newUnit->_unit = sm;
    newUnit->_next = 0;

    if (this->_squad)
    {

        tmp = this->_squad;
        while (tmp && tmp->_next)
            tmp = tmp->_next;

        tmp->_next = newUnit;
    }
    else
    {
        this->_squad = newUnit;
    }
    this->_nb_unit++;
    return (this->_nb_unit);
}
