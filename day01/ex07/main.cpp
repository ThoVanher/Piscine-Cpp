#include <iostream>
#include <fstream>

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

void proccess_replacement(std::string file, std::string arg1, std::string arg2)
{
    int length = arg1.length();
    std::string str = ft_toupper(file) + ".replace";
    std::ifstream ifs(file);
    std ::string input = "";
    std::size_t found = 0;
    if (ifs.is_open())
    {
        std::ofstream ofs(str);
        while (std::getline(ifs, str))
            input = input + str + '\n';
        while ((found = input.find(arg1)) != std::string::npos)
            input.replace(found, length, arg2);
        ofs << input;
    }
    else
        std::cout << "file doesn't exit" << std::endl;
}

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "program needs 3 arg, first one the file to modify" << std::endl;
        std::cout << "second one the word which should be replaced, third one the word which replace the first one" << std::endl;
        return (1);
    }
    if (argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout << "String argument which should be replaced or string argument wich replace can't be empty";
        return (1);
    }
    else
    {
        std::string file = argv[1];
        std::string arg1 = argv[2];
        std::string arg2 = argv[3];
        proccess_replacement(file, arg1, arg2);
    }
}
