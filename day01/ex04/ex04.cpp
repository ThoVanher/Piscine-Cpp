#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *Ptrstr = &str;
    std::string &Refstr = str;
    std::cout << *Ptrstr << std::endl;
    std::cout << Refstr << std::endl;
}
