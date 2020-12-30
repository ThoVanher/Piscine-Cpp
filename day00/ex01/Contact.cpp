#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    this->_firstName = "";
    this->_lastName = "";
    this->_nickname = "";
    this->_login = "";
    this->_postalAddress = "";
    this->_emailAddress = "";
    this->_phoneNumber = "";
    this->_birthdayDate = "";
    this->_favoriteMeal = "";
    this->_underwearColor = "";
    this->_darkestSecret = "";
}

Contact::~Contact(void)
{
}

std::string Contact::getFirstName() const
{
    return this->_firstName;
}

void Contact::setFirstName(std::string p1)
{
    this->_firstName = p1;
}

std::string Contact::getLastName() const
{
    return _lastName;
}

void Contact::setLastName(std::string p1)
{
    this->_lastName = p1;
}

std::string Contact::getNickname() const
{
    return _nickname;
}

void Contact::setNickname(std::string p1)
{
    this->_nickname = p1;
}

std::string Contact::getLogin() const
{
    return _login;
}

void Contact::setLogin(std::string p1)
{
    this->_login = p1;
}

std::string Contact::getPostalAddress() const
{
    return _postalAddress;
}

void Contact::setPostalAddress(std::string p1)
{
    this->_postalAddress = p1;
}

std::string Contact::getEmailAddress() const
{
    return _emailAddress;
}

void Contact::setEmailAddress(std::string p1)
{
    this->_emailAddress = p1;
}

std::string Contact::getPhoneNumber() const
{
    return _phoneNumber;
}

void Contact::setPhoneNumber(std::string p1)
{
    this->_phoneNumber = p1;
}

std::string Contact::getBirthdayDate() const
{
    return _birthdayDate;
}

void Contact::setBirthdayDate(std::string p1)
{
    this->_birthdayDate = p1;
}

std::string Contact::getFavMeal() const
{
    return _favoriteMeal;
}

void Contact::setFavMeal(std::string p1)
{
    this->_favoriteMeal = p1;
}

std::string Contact::getUnderwearColor() const
{
    return _underwearColor;
}

void Contact::setUnderwearColor(std::string p1)
{
    this->_underwearColor = p1;
}

std::string Contact::getDarkestSecret() const
{
    return _darkestSecret;
}

void Contact::setDarkestSecret(std::string p1)
{
    this->_darkestSecret = p1;
}
