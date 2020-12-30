#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony bob = Pony("bob", "brown", 12);
    std::cout << "hi, I'm bob and I am " << bob.getAge() << " years old, so i'm really born" << std::endl;
    std::cout << std::endl
              << "Bob : please do something,function is ending, I'm gonna die" << std::endl
              << std::endl;
}

void ponyOnTheHeap()
{
    Pony *charly = new Pony("charly", "jaune", 107);
    std::cout << "Hey ! Je suis charly, tu veux savoir le plus étonnant ? ma couleur : " << charly->getColor() << std::endl
              << "sans te parler de mon age : " << charly->getAge() << " ans" << std::endl
              << "je suis donc né il y a bien longtemps, bien avant mon ami bob" << std::endl
              << std::endl
              << "Charly : noonn ne faites pas ça !! je peux vivre encore 100 ans!! " << std::endl
              << std::endl;
    delete charly;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return 0;
}