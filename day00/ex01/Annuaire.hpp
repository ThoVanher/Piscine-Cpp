#ifndef ANNUAIRE_H
#define ANNUAIRE_H
#include "Contact.hpp"
class Annuaire
{
public:
    Annuaire(void);
    ~Annuaire(void);
    void add_contact(void);
    void search_contact(void) const;
    void choose_contact(void) const;
    std::string another_chance(std::string cmd) const;
    void show_contact(Contact c) const;

private:
    Contact _list_contact[8];
};
#endif