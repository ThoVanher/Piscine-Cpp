#include "Annuaire.hpp"

int main()
{
    std::string cmd = "";
    Annuaire annuaire;
    std::cout << "add a contact [ADD]; list contact available [SEARCH] ; exit the annuary [EXIT]" << std::endl;
    std::getline(std::cin, cmd);
    while (cmd.compare("EXIT") != 0)
    {
        if (cmd.compare("ADD") == 0)
            annuaire.add_contact();
        else if (cmd.compare("SEARCH") == 0)
        {
            annuaire.search_contact();
            annuaire.choose_contact();
        }
        else if (cmd.compare("EXIT") != 0)
            std::cout << "Commande not valid !" << std::endl;
        std::cout << "add a contact [ADD]; list contact available [SEARCH] ; exit the annuary [EXIT]" << std::endl;
        std::getline(std::cin, cmd);
    }
    return 0;
}