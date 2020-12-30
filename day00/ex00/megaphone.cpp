#include <iostream>

std::string ft_toupper(std::string str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return (str);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[++i])
        std::cout << ft_toupper(argv[i]);
    std::cout << std::endl;
}