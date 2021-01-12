#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

typedef struct s_unit
{
    ISpaceMarine *_unit;
    struct s_unit *_next;
} t_unit;

class Squad : public ISquad
{
private:
    int _nb_unit;
    t_unit *_squad;

public:
    Squad();
    ~Squad() {}
    int getCount() const;
    ISpaceMarine *getUnit(int) const = 0;
    int push(ISpaceMarine *) = 0;
};

#endif
