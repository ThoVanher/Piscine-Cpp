#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <iostream>
class Contact
{
public:
    Contact(void);
    ~Contact(void);
    std::string getFirstName() const;
    void setFirstName(std::string);
    std::string getLastName() const;
    void setLastName(std::string);
    std::string getNickname() const;
    void setNickname(std::string);
    std::string getLogin() const;
    void setLogin(std::string);
    std::string getPostalAddress() const;
    void setPostalAddress(std::string);
    std::string getEmailAddress() const;
    void setEmailAddress(std::string);
    std::string getPhoneNumber() const;
    void setPhoneNumber(std::string);
    std::string getBirthdayDate() const;
    void setBirthdayDate(std::string);
    std::string getFavMeal() const;
    void setFavMeal(std::string);
    std::string getUnderwearColor() const;
    void setUnderwearColor(std::string);
    std::string getDarkestSecret() const;
    void setDarkestSecret(std::string);

private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthdayDate;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
};
#endif