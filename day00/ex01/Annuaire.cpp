#include "Annuaire.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
Annuaire::Annuaire()
{
}
Annuaire::~Annuaire()
{
}

void Annuaire::add_contact()
{
    static int i = 0;
    if (i <= 7)
    {
        std::string str;
        std::cout << "First name: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setFirstName(str);
        std::cout << "Last name: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setLastName(str);
        std::cout << "Nickname: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setNickname(str);
        std::cout << "Login: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setLogin(str);
        std::cout << "Postal address: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setPostalAddress(str);
        std::cout << "Email address: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setEmailAddress(str);
        std::cout << "Phone number: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setPhoneNumber(str);
        std::cout << "Birthday date: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setBirthdayDate(str);
        std::cout << "Favorite meal: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setFavMeal(str);
        std::cout << "Underwear color: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setUnderwearColor(str);
        std::cout << "Darkest secret: ";
        std::getline(std::cin, str);
        this->_list_contact[i].setDarkestSecret(str);
        i++;
    }
    else
        std::cout << "Annuary is full !! And there's not delete command yet ahahaha" << std::endl;
}

void Annuaire::search_contact(void) const
{
    int i = 0;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while ((_list_contact[i].getFirstName()).compare("") != 0 && i < 8)
    {
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << i << "|";
        ;
        if ((_list_contact[i].getFirstName()).length() >= 10)
        {
            std::cout << std::setw(9);
            std::cout << (_list_contact[i].getFirstName()).substr(0, 9) << ".|";
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << _list_contact[i].getFirstName() << "|";
        }
        if ((_list_contact[i].getLastName()).length() >= 10)
        {
            std::cout << std::setw(9);
            std::cout << (_list_contact[i].getLastName()).substr(0, 9) << ".|";
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << _list_contact[i].getLastName() << "|";
        }
        if ((_list_contact[i].getNickname()).length() >= 10)
        {
            std::cout << std::setw(9);
            std::cout << (_list_contact[i].getNickname()).substr(0, 9) << ".|" << std::endl;
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << _list_contact[i].getNickname() << "|" << std::endl;
        }
        i++;
    }
}

void Annuaire::choose_contact(void) const
{
    std::string cmd;
    int index;
    std::cout << "Enter an index to see more contact's details" << std::endl;
    std::getline(std::cin, cmd);
    index = atoi(cmd.c_str());
    if (cmd.compare("0") == 0 && (this->_list_contact[index].getFirstName()).compare("") != 0)
        show_contact(this->_list_contact[0]);
    else if (index >= 1 && index <= 7 && (this->_list_contact[index].getFirstName()).compare("") != 0)
        show_contact(this->_list_contact[index]);
    else if (index < 1 || index > 7)
        std::cout << "invalid index ! ";
    else if ((this->_list_contact[index].getFirstName()).compare("") == 0)
        std::cout << "Contact's details at this index are empty ! ";
    std::cout << "Do you want to see another contact's details ? [y/n] : ";
    std::getline(std::cin, cmd);
    cmd = another_chance(cmd);
    if (cmd.compare("y") == 0)
        choose_contact();
    return;
}

std::string Annuaire::another_chance(std::string cmd) const
{
    while (cmd.compare("y") != 0 && cmd.compare("n") != 0)
    {
        std::cout << "Do you want to see a contact's detail [y/n] : ";
        std::getline(std::cin, cmd);
        if (cmd.compare("y") == 0 || cmd.compare("n") == 0)
            break;
    }
    return (cmd);
}

void Annuaire::show_contact(Contact c) const
{
    std::cout << "first name:      " << c.getFirstName() << std::endl;
    std::cout << "last name:       " << c.getLastName() << std::endl;
    std::cout << "nickname:        " << c.getNickname() << std::endl;
    std::cout << "Login:           " << c.getLogin() << std::endl;
    std::cout << "Postal address:  " << c.getPostalAddress() << std::endl;
    std::cout << "Email address:   " << c.getEmailAddress() << std::endl;
    std::cout << "Phone number:    " << c.getPhoneNumber() << std::endl;
    std::cout << "Birthday date:   " << c.getBirthdayDate() << std::endl;
    std::cout << "Favorite meal:   " << c.getFavMeal() << std::endl;
    std::cout << "Underwear color: " << c.getUnderwearColor() << std::endl;
    std::cout << "Darkest secret:  " << c.getDarkestSecret() << std::endl;
}
